{*******************************************************}
{                                                       }
{                       EhLib v1.53                     }
{                TPrintDBGridEh component               }
{                                                       }
{   Copyright (c) 1998, 2000 by Dmitry V. Bolshakov     }
{                                                       }
{*******************************************************}

unit PrnDbgeh;

interface

{$I EhLib.Inc}

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, DBGridEh, PrntsEh
{$IFDEF EH_LIB_4} ,ImgList{$ENDIF}
  ,PrViewEh,Forms,DB, Grids, StdCtrls, ComCtrls;

type
  TMeasureUnits = (MM,Inches);
  TPrintDBGridEhOption = (pghFitGridToPageWidth, pghColored, pghRowAutoStretch,
                          pghFitingByColWidths, pghOptimalColWidths);
  TPrintDBGridEhOptions = set of TPrintDBGridEhOption;


  TPageParams = class(TPersistent)
  private
//    FColumns: Integer;
//    FColumnSpace: Currency;
    FBottomMargin: Currency;
    FRightMargin: Currency;
    FLeftMargin: Currency;
    FTopMargin: Currency;
    procedure SetBottomMargin(const Value: Currency);
//    procedure SetColumns(const Value: Integer);
//    procedure SetColumnSpace(const Value: Currency);
    procedure SetLeftMargin(const Value: Currency);
    procedure SetRightMargin(const Value: Currency);
    procedure SetTopMargin(const Value: Currency);
  public
    constructor Create;
    procedure Assign(Source: TPersistent); override;
  published
    property BottomMargin:Currency read FBottomMargin write SetBottomMargin;
    property LeftMargin:Currency read FLeftMargin write SetLeftMargin;
    property RightMargin:Currency read FRightMargin write SetRightMargin;
    property TopMargin:Currency read FTopMargin write SetTopMargin;
//    property Columns:Integer read FColumns write SetColumns;
//    property ColumnSpace:Currency read FColumnSpace write SetColumnSpace;
  end;

  TPageColontitleLineType = (pcltNon,pcltSingleLine,pcltDoubleLine);

  TPageColontitle = class(TPersistent)
  private
    FCenterText: TStrings;
    FLeftText: TStrings;
    FRightText: TStrings;
    FFont: TFont;
    FLineType: TPageColontitleLineType;
    procedure SetCenterText(const Value: TStrings);
    procedure SetFont(const Value: TFont);
    procedure SetLeftText(const Value: TStrings);
    procedure SetRightText(const Value: TStrings);
    procedure SetLineType(const Value: TPageColontitleLineType);
  public
    procedure Assign(Source: TPersistent); override;
    constructor Create;
    destructor Destroy; override;
  published
    property LeftText:TStrings read FLeftText write SetLeftText;
    property CenterText:TStrings read FCenterText write SetCenterText;
    property RightText:TStrings read FRightText write SetRightText;
    property Font:TFont read FFont write SetFont;
    property LineType: TPageColontitleLineType read FLineType write SetLineType default pcltNon;
  end;

  TPrintDBGridEh = class(TComponent)
  private
    FDBGridEh: TDBGridEh;
    FUnits: TMeasureUnits;
    FTitle: TStrings;
    FPrintFontName: String;
    FOptions: TPrintDBGridEhOptions;
    FPage: TPageParams;
    FPageFooter: TPageColontitle;
    FPagEheader: TPageColontitle;
    FOnPrinterSetupDialog: TNotifyEvent;
    FBeforeGridText: TStrings;
    FAfterGridText: TStrings;
    FSubstitutesNames: TStrings;
    FSubstitutesValues: TStrings;
    procedure ReadBeforeGridText(Stream: TStream);
    procedure ReadAfterGridText(Stream: TStream);
    procedure SetDBGridEh(const Value: TDBGridEh);
    procedure SetUnits(const Value: TMeasureUnits);
    procedure SetTitle(const Value: TStrings);
    procedure SetPrintFontName(const Value: String);
    procedure SetOptions(const Value: TPrintDBGridEhOptions);
    procedure SetPage(const Value: TPageParams);
    procedure SetPageFooter(const Value: TPageColontitle);
    procedure SetPagEheader(const Value: TPageColontitle);
    procedure SetBeforeGridText(const Value: TStrings);
    procedure WriteBeforeGridText(Stream: TStream);
    procedure WriteAfterGridText(Stream: TStream);
    procedure SetAfterGridText(const Value: TStrings);
    function  GetAfterGridText: TStrings;
    function  GetBeforeGridText: TStrings;
    function  GridTextReplace(RichStrings:TStrings; const SearchStr, ReplaceStr: string;
      StartPos, Length: Integer; Options: TSearchTypes; ReplaceAll: Boolean): Integer;
  protected
    procedure DefineProperties(Filer: TFiler); override;
    procedure Notification(AComponent: TComponent; Operation: TOperation); override;
    procedure PrinterSetupDialogPreview(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure Preview;
    procedure Print;
    function  PrinterSetupDialog:Boolean;
    procedure PrintTo(VPrinter:TVirtualPrinter);
    procedure SetSubstitutes(ASubstitutes:array of const);
  published
    property DBGridEh:TDBGridEh read FDBGridEh write SetDBGridEh;
    property Options:TPrintDBGridEhOptions read FOptions write SetOptions;
    property Page:TPageParams read FPage write SetPage;
    property PageFooter:TPageColontitle read FPageFooter write SetPageFooter;
    property PageHeader:TPageColontitle read FPageHeader write SetPageHeader;
    property PrintFontName:String read FPrintFontName write SetPrintFontName;
    property Title:TStrings read FTitle write SetTitle;
    property BeforeGridText:TStrings read GetBeforeGridText write SetBeforeGridText stored False;
    property AfterGridText:TStrings read GetAfterGridText write SetAfterGridText stored False;
    property Units:TMeasureUnits read FUnits write SetUnits;
    property OnPrinterSetupDialog: TNotifyEvent read FOnPrinterSetupDialog write FOnPrinterSetupDialog;
  end;


implementation

uses PrnDGDlg, RichEdit, ComStrs;

var
  FCheckBoxWidth, FCheckBoxHeight: Integer;

procedure GetCheckSize;
begin
  with TBitmap.Create do
    try
      Handle := LoadBitmap(0, PChar(32759));
      FCheckBoxWidth := Width div 4;
      FCheckBoxHeight := Height div 3;
    finally
      Free;
    end;
end;

function iif(Condition:Boolean;V1,V2:Integer):Integer;
begin
  if (Condition) then Result := V1 else Result := V2;
end;

function GetTextWidth(Canvas:TCanvas; Text:String):Integer;
var ARect:TRect;
    uFormat:Integer;
begin
  uFormat := DT_CALCRECT or DT_LEFT or DT_NOPREFIX;
  ARect := Rect(0,0,1,0);
  DrawText(Canvas.Handle, PChar(Text), Length(Text), ARect, uFormat);
  Result := ARect.Right - ARect.Left;
end;

{new WriteTextEh}{}
function WriteTextEh(ACanvas: TCanvas; ARect: TRect; FillRect:Boolean; DX, DY: Integer;
  const Text: string; Alignment: TAlignment; Layout: TTextLayout; MultyL:Boolean;
  EndEllipsis:Boolean; LeftMarg,RightMarg:Integer; CalcRect:Boolean):Integer;
const
  AlignFlags : array [TAlignment] of Integer =
    ( DT_LEFT or DT_EXPANDTABS or DT_NOPREFIX,
      DT_RIGHT or DT_EXPANDTABS or DT_NOPREFIX,
      DT_CENTER or DT_EXPANDTABS or DT_NOPREFIX );
var opt:Integer;
   tm: TTEXTMETRIC;
   rect1: TRect;
   txth, DrawFlag: Integer;
   lpDTP :  TDrawTextParams;
begin
 Result := 0;
 if CalcRect = False then begin
   if (FillRect = True) then ACanvas.FillRect(ARect);

   DrawFlag := 0;
   if (MultyL = True) then DrawFlag := DrawFlag or DT_WORDBREAK;
   if (EndEllipsis = True) then DrawFlag := DrawFlag or DT_END_ELLIPSIS;
   DrawFlag := DrawFlag or AlignFlags[Alignment];

    {}
   rect1.Left := 0; rect1.Top := 0; rect1.Right := 0; rect1.Bottom := 0;
   rect1 := ARect;  {}

   lpDTP.cbSize := SizeOf(lpDTP);
   lpDTP.uiLengthDrawn := Length(Text);
   lpDTP.iLeftMargin := LeftMarg;
   lpDTP.iRightMargin := RightMarg;

   InflateRect(rect1, -DX, -DY);

   if (Layout <> tlTop) {and (MultyL = True)} then
     txth := DrawTextEx(ACanvas.Handle,PChar(Text), Length(Text),    {}
        rect1, DrawFlag or DT_CALCRECT,@lpDTP) // �������� �������.
   else txth := 0;
   rect1 := ARect;  {}
   InflateRect(rect1, -DX, -DY);

   case Layout of
    tlTop: ;
    tlBottom: rect1.top := rect1.Bottom - txth;
    tlCenter: rect1.top := rect1.top + ((rect1.Bottom-rect1.top) div 2) - (txth div 2);
   end;

   if DX > 0 then rect1.Bottom := rect1.Bottom + 1;
   DrawTextEx(ACanvas.Handle,PChar(Text), Length(Text), rect1, DrawFlag,@lpDTP); {}
 end else begin
    GetTextMetrics(ACanvas.Handle, tm);
    Inc(ARect.Left,DX);  Inc(ARect.Top,DY);
    Dec(ARect.Right,DX);  Dec(ARect.Bottom,DY);
    opt := DT_LEFT or DT_EXPANDTABS or DT_NOPREFIX or DT_CALCRECT;
    if MultyL then opt := opt or DT_WORDBREAK;
    Result := DrawTextEx(ACanvas.Handle, PChar(Text), Length(Text), ARect, opt, nil);
    Inc(Result,tm.tmExternalLeading);
    Inc(Result,DY*2);
 end;
end;

{$IFNDEF VER120} {Borland Delphi 3.0 }
type TReplaceFlags = set of (rfReplaceAll, rfIgnoreCase);
{$ENDIF}

function StringReplaceMacros(const S, OldPattern, NewPattern: string;
  Flags: TReplaceFlags; MacroChar: Char): string;
var
  SearchStr, Patt, NewStr: string;
  Offset: Integer;
begin
  if rfIgnoreCase in Flags then
  begin
    SearchStr := AnsiUpperCase(S);
    Patt := AnsiUpperCase(OldPattern);
  end else
  begin
    SearchStr := S;
    Patt := OldPattern;
  end;
  NewStr := S;
  Result := '';
  while SearchStr <> '' do
  begin
    Offset := AnsiPos(Patt, SearchStr);
    if Offset = 0 then
    begin
      Result := Result + NewStr;
      Break;
    end;
    if (Offset = 1) or (SearchStr[Offset-1] <> MacroChar) then
      Result := Result + Copy(NewStr, 1, Offset - 1) + NewPattern
    else
      Result := Result + Copy(NewStr, 1, Offset - 1) + OldPattern;
    NewStr := Copy(NewStr, Offset + Length(OldPattern), MaxInt);
    if not (rfReplaceAll in Flags) then
    begin
      Result := Result + NewStr;
      Break;
    end;
    SearchStr := Copy(SearchStr, Offset + Length(Patt), MaxInt);
  end;
end;

function GetStingListText(sl:TStrings):String;
begin
  Result := Copy(sl.Text,1,Length(sl.Text)-2);
end;

{ TRichEditStrings, from VCL ComCtrls.pas }

const
  ReadError = $0001;
  WriteError = $0002;
  NoError = $0000;

type
  TSelection = record
    StartPos, EndPos: Integer;
  end;

  TRichEditStrings = class(TStrings)
  private
    RichEdit: TRichEdit;
    FPlainText: Boolean;
    FConverter: TConversion;
    procedure EnableChange(const Value: Boolean);
  protected
    function Get(Index: Integer): string; override;
    function GetCount: Integer; override;
    procedure Put(Index: Integer; const S: string); override;
    procedure SetUpdateState(Updating: Boolean); override;
    procedure SetTextStr(const Value: string); override;
  public
    constructor Create;
    destructor Destroy; override;
    procedure Clear; override;
    procedure AddStrings(Strings: TStrings); override;
    procedure Delete(Index: Integer); override;
    procedure Insert(Index: Integer; const S: string); override;
    procedure LoadFromFile(const FileName: string); override;
    procedure LoadFromStream(Stream: TStream); override;
    procedure SaveToFile(const FileName: string); override;
    procedure SaveToStream(Stream: TStream); override;
    property PlainText: Boolean read FPlainText write FPlainText;
  end;

constructor TRichEditStrings.Create;
begin
  inherited Create;
  RichEdit := TRichEdit.Create(nil);
  RichEdit.Visible := False;
  RichEdit.ParentWindow := Application.Handle;
end;

destructor TRichEditStrings.Destroy;
begin
  FConverter.Free;
  RichEdit.Free;
  inherited Destroy;
end;

procedure TRichEditStrings.AddStrings(Strings: TStrings);
var
  SelChange: TNotifyEvent;
begin
  SelChange := RichEdit.OnSelectionChange;
  RichEdit.OnSelectionChange := nil;
  try
    inherited AddStrings(Strings);
  finally
    RichEdit.OnSelectionChange := SelChange;
  end;
end;

function TRichEditStrings.GetCount: Integer;
begin
  Result := SendMessage(RichEdit.Handle, EM_GETLINECOUNT, 0, 0);
  if SendMessage(RichEdit.Handle, EM_LINELENGTH, SendMessage(RichEdit.Handle,
    EM_LINEINDEX, Result - 1, 0), 0) = 0 then Dec(Result);
end;

function TRichEditStrings.Get(Index: Integer): string;
var
  Text: array[0..4095] of Char;
  L: Integer;
begin
  Word((@Text)^) := SizeOf(Text);
  L := SendMessage(RichEdit.Handle, EM_GETLINE, Index, Longint(@Text));
  if (Text[L - 2] = #13) and (Text[L - 1] = #10) then Dec(L, 2);
  SetString(Result, Text, L);
end;

procedure TRichEditStrings.Put(Index: Integer; const S: string);
var
  Selection: TCharRange;
begin
  if Index >= 0 then
  begin
    Selection.cpMin := SendMessage(RichEdit.Handle, EM_LINEINDEX, Index, 0);
    if Selection.cpMin <> -1 then
    begin
      Selection.cpMax := Selection.cpMin +
        SendMessage(RichEdit.Handle, EM_LINELENGTH, Selection.cpMin, 0);
      SendMessage(RichEdit.Handle, EM_EXSETSEL, 0, Longint(@Selection));
      SendMessage(RichEdit.Handle, EM_REPLACESEL, 0, Longint(PChar(S)));
    end;
  end;
end;

procedure TRichEditStrings.Insert(Index: Integer; const S: string);
var
  L: Integer;
  Selection: TCharRange;
  Fmt: PChar;
  Str: string;
begin
  if Index >= 0 then
  begin
    Selection.cpMin := SendMessage(RichEdit.Handle, EM_LINEINDEX, Index, 0);
    if Selection.cpMin >= 0 then Fmt := '%s'#13#10
    else begin
      Selection.cpMin :=
        SendMessage(RichEdit.Handle, EM_LINEINDEX, Index - 1, 0);
      if Selection.cpMin < 0 then Exit;
      L := SendMessage(RichEdit.Handle, EM_LINELENGTH, Selection.cpMin, 0);
      if L = 0 then Exit;
      Inc(Selection.cpMin, L);
      Fmt := #13#10'%s';
    end;
    Selection.cpMax := Selection.cpMin;
    SendMessage(RichEdit.Handle, EM_EXSETSEL, 0, Longint(@Selection));
    Str := Format(Fmt, [S]);
    SendMessage(RichEdit.Handle, EM_REPLACESEL, 0, LongInt(PChar(Str)));
    if RichEdit.SelStart <> (Selection.cpMax + Length(Str)) then
      raise EOutOfResources.Create(sRichEditInsertError);
  end;
end;

procedure TRichEditStrings.Delete(Index: Integer);
const
  Empty: PChar = '';
var
  Selection: TCharRange;
begin
  if Index < 0 then Exit;
  Selection.cpMin := SendMessage(RichEdit.Handle, EM_LINEINDEX, Index, 0);
  if Selection.cpMin <> -1 then
  begin
    Selection.cpMax := SendMessage(RichEdit.Handle, EM_LINEINDEX, Index + 1, 0);
    if Selection.cpMax = -1 then
      Selection.cpMax := Selection.cpMin +
        SendMessage(RichEdit.Handle, EM_LINELENGTH, Selection.cpMin, 0);
    SendMessage(RichEdit.Handle, EM_EXSETSEL, 0, Longint(@Selection));
    SendMessage(RichEdit.Handle, EM_REPLACESEL, 0, Longint(Empty));
  end;
end;

procedure TRichEditStrings.Clear;
begin
  RichEdit.Clear;
end;

procedure TRichEditStrings.SetUpdateState(Updating: Boolean);
begin
  if RichEdit.Showing then
    SendMessage(RichEdit.Handle, WM_SETREDRAW, Ord(not Updating), 0);
  if not Updating then begin
    RichEdit.Refresh;
    RichEdit.Perform(CM_TEXTCHANGED, 0, 0);
  end;
end;

procedure TRichEditStrings.EnableChange(const Value: Boolean);
var
  EventMask: Longint;
begin
  with RichEdit do
  begin
    if Value then
      EventMask := SendMessage(Handle, EM_GETEVENTMASK, 0, 0) or ENM_CHANGE
    else
      EventMask := SendMessage(Handle, EM_GETEVENTMASK, 0, 0) and not ENM_CHANGE;
    SendMessage(Handle, EM_SETEVENTMASK, 0, EventMask);
  end;
end;

procedure TRichEditStrings.SetTextStr(const Value: string);
begin
  EnableChange(False);
  try
    inherited SetTextStr(Value);
  finally
    EnableChange(True);
  end;
end;

function AdjustLineBreaks(Dest, Source: PChar): Integer; assembler;
asm
        PUSH    ESI
        PUSH    EDI
        MOV     EDI,EAX
        MOV     ESI,EDX
        MOV     EDX,EAX
        CLD
@@1:    LODSB
@@2:    OR      AL,AL
        JE      @@4
        CMP     AL,0AH
        JE      @@3
        STOSB
        CMP     AL,0DH
        JNE     @@1
        MOV     AL,0AH
        STOSB
        LODSB
        CMP     AL,0AH
        JE      @@1
        JMP     @@2
@@3:    MOV     EAX,0A0DH
        STOSW
        JMP     @@1
@@4:    STOSB
        LEA     EAX,[EDI-1]
        SUB     EAX,EDX
        POP     EDI
        POP     ESI
end;

function StreamSave(dwCookie: Longint; pbBuff: PByte;
  cb: Longint; var pcb: Longint): Longint; stdcall;
var
  StreamInfo: PRichEditStreamInfo;
begin
  Result := NoError;
  StreamInfo := PRichEditStreamInfo(Pointer(dwCookie));
  try
    pcb := 0;
    if StreamInfo^.Converter <> nil then
      pcb := StreamInfo^.Converter.ConvertWriteStream(StreamInfo^.Stream, PChar(pbBuff), cb);
  except
    Result := WriteError;
  end;
end;

function StreamLoad(dwCookie: Longint; pbBuff: PByte;
  cb: Longint; var pcb: Longint): Longint; stdcall;
var
  Buffer, pBuff: PChar;
  StreamInfo: PRichEditStreamInfo;
begin
  Result := NoError;
  StreamInfo := PRichEditStreamInfo(Pointer(dwCookie));
  Buffer := StrAlloc(cb + 1);
  try
    cb := cb div 2;
    pcb := 0;
    pBuff := Buffer + cb;
    try
      if StreamInfo^.Converter <> nil then
        pcb := StreamInfo^.Converter.ConvertReadStream(StreamInfo^.Stream, pBuff, cb);
      if pcb > 0 then
      begin
        pBuff[pcb] := #0;
        if pBuff[pcb - 1] = #13 then pBuff[pcb - 1] := #0;
        pcb := AdjustLineBreaks(Buffer, pBuff);
        Move(Buffer^, pbBuff^, pcb);
      end;
    except
      Result := ReadError;
    end;
  finally
    StrDispose(Buffer);
  end;
end;

procedure TRichEditStrings.LoadFromStream(Stream: TStream);
var
  EditStream: TEditStream;
  Position: Longint;
  TextType: Longint;
  StreamInfo: TRichEditStreamInfo;
  Converter: TConversion;
begin
  StreamInfo.Stream := Stream;
  if FConverter <> nil then Converter := FConverter
  else Converter := RichEdit.DefaultConverter.Create;
  StreamInfo.Converter := Converter;
  try
    with EditStream do
    begin
      dwCookie := LongInt(Pointer(@StreamInfo));
      pfnCallBack := @StreamLoad;
      dwError := 0;
    end;
    Position := Stream.Position;
    if PlainText then TextType := SF_TEXT
    else TextType := SF_RTF;
    SendMessage(RichEdit.Handle, EM_STREAMIN, TextType, Longint(@EditStream));
    if (TextType = SF_RTF) and (EditStream.dwError <> 0) then
    begin
      Stream.Position := Position;
      if PlainText then TextType := SF_RTF
      else TextType := SF_TEXT;
      SendMessage(RichEdit.Handle, EM_STREAMIN, TextType, Longint(@EditStream));
      if EditStream.dwError <> 0 then
        raise EOutOfResources.Create(sRichEditLoadFail);
    end;
  finally
    if FConverter = nil then Converter.Free;
  end;
end;

procedure TRichEditStrings.SaveToStream(Stream: TStream);
var
  EditStream: TEditStream;
  TextType: Longint;
  StreamInfo: TRichEditStreamInfo;
  Converter: TConversion;
begin
  if FConverter <> nil then Converter := FConverter
  else Converter := RichEdit.DefaultConverter.Create;
  StreamInfo.Stream := Stream;
  StreamInfo.Converter := Converter;
  try
    with EditStream do
    begin
      dwCookie := LongInt(Pointer(@StreamInfo));
      pfnCallBack := @StreamSave;
      dwError := 0;
    end;
    if PlainText then TextType := SF_TEXT
    else TextType := SF_RTF;
    SendMessage(RichEdit.Handle, EM_STREAMOUT, TextType, Longint(@EditStream));
    if EditStream.dwError <> 0 then
      raise EOutOfResources.Create(sRichEditSaveFail);
  finally
    if FConverter = nil then Converter.Free;
  end;
end;

procedure TRichEditStrings.LoadFromFile(const FileName: string);
{var
  Ext: string;
  Convert: PConversionFormat;}
begin
{  Ext := AnsiLowerCaseFileName(ExtractFileExt(Filename));
  System.Delete(Ext, 1, 1);
  Convert := ConversionFormatList;
  while Convert <> nil do
    with Convert^ do
      if Extension <> Ext then Convert := Next
      else Break;
  if Convert = nil then
    Convert := @TextConversionFormat;
  if FConverter = nil then FConverter := Convert^.ConversionClass.Create;
  try}
    inherited LoadFromFile(FileName);
{  except
    FConverter.Free;
    FConverter := nil;
    raise;
  end;
  RichEdit.DoSetMaxLength($7FFFFFF0);}
end;

procedure TRichEditStrings.SaveToFile(const FileName: string);
{var
  Ext: string;
  Convert: PConversionFormat;}
begin
{  Ext := AnsiLowerCaseFileName(ExtractFileExt(Filename));
  System.Delete(Ext, 1, 1);
  Convert := ConversionFormatList;
  while Convert <> nil do
    with Convert^ do
      if Extension <> Ext then Convert := Next
      else Break;
  if Convert = nil then
    Convert := @TextConversionFormat;
  if FConverter = nil then FConverter := Convert^.ConversionClass.Create;
  try}
    inherited SaveToFile(FileName);
{  except
    FConverter.Free;
    FConverter := nil;
    raise;
  end;}
end;


{ TPrintDBGridEh }

constructor TPrintDBGridEh.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  FPage := TPageParams.Create;
  FPageFooter := TPageColontitle.Create;
  FPagEheader := TPageColontitle.Create;
  FTitle := TStringList.Create;
end;

destructor TPrintDBGridEh.Destroy;
begin
  Page.Free;
  PageFooter.Free;
  PagEheader.Free;
  FTitle.Free;
  FBeforeGridText.Free;
  FAfterGridText.Free;
  if FSubstitutesNames <> nil then FSubstitutesNames.Free;
  if FSubstitutesValues <> nil then FSubstitutesValues.Free;
  inherited Destroy;
end;

{procedure TPrintDBGridEh.Print;
var ARepGrid:TReportGrid;
begin
    ARepGrid := TReportGrid.Create(Application);
  try
    ARepGrid.Visible := False;
    ARepGrid.Parent := Application.MainForm;

    ARepGrid.DefaultDrawing := False;
    ARepGrid.Align := alClient;
    if (PrintFontName <> '') then
      ARepGrid.Font.Name := PrintFontName;
    ARepGrid.AutoStretch := AutoStretch;
    ARepGrid.UseMultiTitle := DBGridEh.UseMultiTitle;
    ARepGrid.Title := Title;
    ARepGrid.CreateColumnsFromDBGridEh(DBGridEh);
    ARepGrid.Groups[0].AutoStretch := AutoStretch;
    ARepGrid.TopLeftPrintText := LeftTopText;
    ARepGrid.TopRightPrintText := RightTopText;
    ARepGrid.FillData;
    ARepGrid.FitWidthToPage :=  FitGridToPageWidth in Options;
    ARepGrid.Print;
  finally
    ARepGrid.Free;
  end;
end;}

procedure TPrintDBGridEh.Preview;
begin
  if Assigned(OnPrinterSetupDialog) then
    PrinterPreview.OnPrinterSetupDialog := OnPrinterSetupDialog
  else
    PrinterPreview.OnPrinterSetupDialog := PrinterSetupDialogPreview;
  PrinterPreview.PrinterSetupOwner := Self;
  PrintTo(PrinterPreview);
end;

procedure TPrintDBGridEh.PrintTo(VPrinter:TVirtualPrinter);
type
 TPolyBookmark = record
   bm:TBookmarkStr;
   InDS:Boolean;
   EOF:Boolean;
 end;
 TFooterValues = array[0..MaxListSize - 1] of Currency;
 PFooterValues = ^TFooterValues;

var
  ColsToPages, PrnRowHeights, PrnColWIdths: TList;
  GridWidth, RealRight,  RealLeft, MinRowHeight: Integer;
  {fPrnPhysWidth,fPrnPhysHeight,} fPrnPhysOffSetX, fPrnPhysOffSetY : Integer;
  fPrnHorsRes, fPrnVertRes, PrnTitlEh, PenW, PrnTitleTextH: Integer;
  DataPrintRec,PrintRec: TRect;
  PrintOffset:Integer;
  fLogPelsX1, fLogPelsY1, fLogPelsX2, fLogPelsY2, fScaleX, fScaleY: Double;
  //TopFooterPos, TopHeaderPos:Integer;
  //FromRow, ToRow, NodeLevel, PageNo, GridRowCount: Integer;
  SavedBookMark:TBookmarkStr;
  PBm1,PBm2:TPolyBookmark;
  PSX1,PSY1,PSX2,PSY2:Integer;
  FirstPage,AWordWrap:Boolean;
  PolyPolyPoints, PolyLengths:TList;
  TitleRect,FooterRect: TRect;
  PrnColumns:TColumnsEhList;
  PrnColumnWidths:TList;
  FooterValues: PFooterValues;
  FSubstituted:Boolean;
  BeforeGridTextStream,AfterGridTextStream: TStream;

const Macros : array [0..4] of String = ( '&[Page]', '&[ShortDate]', '&[Date]', '&[LongDate]', '&[Time]');
      MacroValues : array [0..4] of String = ('','','','','');

  procedure InitMacroValues;
  begin
    MacroValues[1] := DateToStr(Now);
    MacroValues[2] := DateToStr(Now);
    MacroValues[3] := FormatDateTime(LongDateFormat,Now);
    MacroValues[4] := TimeToStr(Now);
  end;

  procedure InitPolyBookmark(var APBm:TPolyBookmark);
  var idx:Integer;
  begin
   if DBGridEh.DataSource.DataSet.Eof then begin
     APBm.InDS := False;
     APBm.bm := '';//nil;
     if (DBGridEh.FooterRowCount = 0) then APBm.EOF := True
     else begin
       APBm.bm := '0';//Pointer(0);
       APBm.EOF := False;
     end;
   end else begin
     if DBGridEh.Selection.SelectionType = gstRecordBookmarks then begin
       if DBGridEh.SelectedRows.Find(DBGridEh.DataSource.DataSet.Bookmark,idx) then
         APBm.bm := DBGridEh.DataSource.DataSet.Bookmark
       else begin
         APBm.bm := DBGridEh.SelectedRows[0];
         DBGridEh.DataSource.DataSet.Bookmark := DBGridEh.SelectedRows[0];
       end
     end else if DBGridEh.Selection.SelectionType = gstRectangle then begin
       APBm.bm := DBGridEh.Selection.Rect.TopRow;
       DBGridEh.DataSource.DataSet.Bookmark := DBGridEh.Selection.Rect.TopRow;
     end else begin
       APBm.bm := DBGridEh.DataSource.DataSet.Bookmark;
     end;
     APBm.InDS := True;
     APBm.EOF := False;
   end;
  end;

  procedure GotoPolyBookmark(var APBm:TPolyBookmark);
  begin
    if (APBm.InDS = True) then DBGridEh.DataSource.DataSet.GotoBookmark(TBookmark(APBm.bm));
  end;

  procedure SetNextPolyBookmark(var APBm:TPolyBookmark);
  var idx:Integer;
  begin
    if APBm.EOF then Exit;

    if (APBm.InDS = True) then begin
      if DBGridEh.Selection.SelectionType = gstRecordBookmarks then begin
        if DBGridEh.SelectedRows.Find(DBGridEh.DataSource.DataSet.Bookmark,idx) then
          if idx = DBGridEh.SelectedRows.Count-1 then begin
            APBm.InDS := False;
            APBm.bm := '';//nil;
            if (DBGridEh.FooterRowCount = 0) then APBm.EOF := True
            else begin
              APBm.bm := '0';//Pointer(0);
              APBm.EOF := False;
            end;
          end
          else begin
            DBGridEh.DataSource.DataSet.Bookmark := DBGridEh.SelectedRows[idx+1];
            APBm.bm := DBGridEh.DataSource.DataSet.Bookmark;
            APBm.EOF := False;
          end
        else begin
          DBGridEh.DataSource.DataSet.Bookmark := DBGridEh.SelectedRows[0];
          APBm.bm := DBGridEh.DataSource.DataSet.Bookmark;
          APBm.EOF := False;
        end;
      end else if DBGridEh.Selection.SelectionType = gstRectangle then begin
        DBGridEh.DataSource.DataSet.Next;
        if (DBGridEh.DataSource.DataSet.CompareBookmarks(Pointer(DBGridEh.Selection.Rect.BottomRow),
                          Pointer(DBGridEh.DataSource.DataSet.Bookmark)) < 0) or
           DBGridEh.DataSource.DataSet.Eof then begin
            APBm.InDS := False;
            APBm.bm := '';//nil;
            if (DBGridEh.FooterRowCount = 0) then APBm.EOF := True
            else begin
              APBm.bm := '0';//Pointer(0);
              APBm.EOF := False;
            end
        end else begin
          APBm.bm := DBGridEh.DataSource.DataSet.Bookmark;
          APBm.EOF := False;
        end;
      end else begin
        DBGridEh.DataSource.DataSet.Next;
        if DBGridEh.DataSource.DataSet.Eof then begin
          APBm.InDS := False;
          APBm.bm := '';//nil;
          if (DBGridEh.FooterRowCount = 0) then APBm.EOF := True
          else begin
            APBm.bm := '0';//Pointer(0);
            APBm.EOF := False;
          end;
        end else begin
          APBm.bm := DBGridEh.DataSource.DataSet.Bookmark;
          APBm.EOF := False;
        end
      end
    end
    else begin
      if (DBGridEh.FooterRowCount-1 <= StrToInt(APBm.bm)) then begin
        APBm.EOF := True;
        APBm.bm := '0';//Pointer(0);
        APBm.InDS := False;
      end
      else begin
        APBm.bm := IntToStr(StrToInt(APBm.bm) + 1);
      end;
    end;
  end;

{  function ComparePolyBookmark(var APBm1,APBm2:TPolyBookmark):Boolean;
  begin
    if (APBm1.bm = APBm2.bm) and (APBm1.InDS = APBm2.InDS) then
      Result := True
    else Result := False;
  end;}

  // Add Polyline
  procedure AddPolyline(const Args: array of const);
  var i: Integer;
  begin
    for i := 0 to High(Args) do
      PolyPolyPoints.Add(Pointer(Args[i].VInteger));
    PolyLengths.Add(Pointer((High(Args)+1) div 2));
  end;

  // Calculate Column Widths
  procedure CalcColumnWidths;
  var i,w,w1,tw:Integer;
      PM:TPolyBookmark;
      NewBackgrnd:TColor;
      Text:String;
      AAlignment:TAlignment;
      ACursor:TCursor;
    function GetTitleText(Column:TColumnEh):String;
    var i:Integer;
    begin
      if DBGridEh.UseMultiTitle then
        for i := Length(Column.Title.Caption) downto 1 do
          if (Column.Title.Caption[i] = '|') and (ByteType(Column.Title.Caption,i) = mbSingleByte) then
          begin
            Result := Copy(Column.Title.Caption,i,Length(Column.Title.Caption));
            Exit;
          end;
      Result := Column.Title.Caption;
    end;
  begin
    w := 0;
    for i := 0 to PrnColumns.Count - 1 do
    begin
      PrnColumnWidths.Add(Pointer(Round((PrnColumns[i].Width + 1) * fScaleX)));
      Inc(w,Integer(PrnColumnWidths[i]));
    end;

    if (pghOptimalColWidths in Options) then
    begin
      for i := 0 to PrnColumns.Count - 1 do
      begin
        PrnColumnWidths[i] := Pointer(10);
        if (DBGridEh.TitleImages <> nil) and (PrnColumns[i].Title.ImageIndex <> -1) then
          tw := Trunc(DBGridEh.TitleImages.Width * fScaleX) + PSY2*2
        else
        begin
          VPrinter.Canvas.Font := PrnColumns[i].Title.Font;
          if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
          tw := GetTextWidth(VPrinter.Canvas,GetTitleText(PrnColumns[i])) + PSY2*2;
        end;
        if tw > Integer(PrnColumnWidths[i]) then
          PrnColumnWidths[i] := Pointer(tw);
      end;
      DBGridEh.DataSource.DataSet.First;
      InitPolyBookmark(PM);
      ACursor := Screen.Cursor;
      Screen.Cursor := crHourGlass;
      try
        while not PM.Eof do
        begin
          for i := 0 to PrnColumns.Count - 1 do
          begin
            if PM.InDS then //Data
            begin
              case PrnColumns[i].GetColumnType of
                ctCheckboxes: tw := Trunc(FCheckBoxWidth * fScaleX) + PSY2*2;
                ctKeyImageList: tw := Trunc(PrnColumns[i].ImageList.Width * fScaleX) + PSY2*2;
              else
                VPrinter.Canvas.Font := PrnColumns[i].Font;
                if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
                NewBackgrnd := clWhite;
                if Assigned(DBGridEh.OnGetCellParams)then
                  DBGridEh.OnGetCellParams(DBGridEh,PrnColumns[i],VPrinter.Canvas.Font,NewBackgrnd,[]);
                tw := GetTextWidth(VPrinter.Canvas,PrnColumns[i].DisplayText) + PSY2*2;
              end;
            end else
            begin          //Footer
              VPrinter.Canvas.Font := PrnColumns[i].UsedFooter(StrToInt(PM.bm)).Font;
              if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
              Text := DBGridEh.GetFooterValue(StrToInt(PM.bm),PrnColumns[i]);
              AAlignment := PrnColumns[i].UsedFooter(StrToInt(PM.bm)).Alignment;
              if Assigned(DBGridEh.OnGetFooterParams)then
                DBGridEh.OnGetFooterParams(DBGridEh, 1, StrToInt(PM.bm), PrnColumns[i],
                  VPrinter.Canvas.Font, NewBackgrnd, AAlignment, [],Text);
              tw := GetTextWidth(VPrinter.Canvas,Text) + PSY2*2;
            end;
            if tw > Integer(PrnColumnWidths[i]) then
              PrnColumnWidths[i] := Pointer(tw);
          end;
          SetNextPolyBookmark(PM);
        end;
      finally
        Screen.Cursor := ACursor;
      end;
      DBGridEh.DataSource.DataSet.First;
      w := 0;
      for i := 0 to PrnColumns.Count - 1 do
        Inc(w,Integer(PrnColumnWidths[i]));
    end;

    if ([pghFitingByColWidths,pghFitGridToPageWidth] * Options = [pghFitingByColWidths,pghFitGridToPageWidth]) and
        (w > DataPrintRec.Right - DataPrintRec.Left - PenW) then
    begin
      w1 := 0;
      for i := 0 to PrnColumns.Count - 1 do
      begin
        PrnColumnWidths[i] := Pointer(MulDiv(Integer(PrnColumnWidths[i]),DataPrintRec.Right - DataPrintRec.Left - PenW,w));
        Inc(w1,Integer(PrnColumnWidths[i]));
      end;
      if w1 > DataPrintRec.Right - DataPrintRec.Left - PenW then
        PrnColumnWidths[PrnColumns.Count - 1] :=
          Pointer(Integer(PrnColumnWidths[PrnColumns.Count - 1]) -
            w1 + (DataPrintRec.Right - DataPrintRec.Left - PenW));
    end;
  end;

  // -------CalcColsToPages
  procedure CalcColsToPages;
  var curX,w: Integer;
      i:Integer;
  begin
   curX := DataPrintRec.Left + PenW;
   PrnColWIdths.Clear;
   for i := 0 to PrnColumns.Count - 1 do begin
     w := Integer(PrnColumnWidths[i]);
     if ( w > DataPrintRec.Right - DataPrintRec.Left) then w := DataPrintRec.Right - DataPrintRec.Left;
     PrnColWidths.Add(Pointer(w));
     curX := curX + w;
     if (curX > DataPrintRec.Right) and (i > 0) then begin
       ColsToPages.Add(Pointer(i-1));
       curX := DataPrintRec.Left + w + PenW;
     end;
   end;
   ColsToPages.Add(Pointer(PrnColumns.Count - 1));
  end;

  //------------------------
  function GetScaledRealGridWidth:Integer;
  var i: Integer;
  begin
   Result := PenW;
   for i := 0 to PrnColumns.Count - 1 do begin
     Result := Result + Integer(PrnColumnWidths[i]);
   end;
  end;

  //------------------------
  function GetPrintGridWidth:Integer;
  var i: Integer;
  begin
   Result := 0;
   for i := 0 to PrnColWidths.Count - 1 do begin
     Result := Result + Integer(PrnColWidths[i]);
   end;
  end;

  //------------------------
  procedure DrawClipped(imList:{$IFDEF EH_LIB_4}TCustomImageList{$ELSE}TImageList{$ENDIF};
                        ACanvas:TCanvas; ARect: TRect; Index: Integer; Align:TAlignment);
  var CheckedRect,AUnionRect:TRect;
      OldRectRgn,RectRgn:HRGN;
      r,x,y:Integer;
      ImHeight,ImWidth:Integer;
      bm:TBitmap;
      Info: PBitmapInfo;
      InfoSize: DWORD;
      Image: Pointer;
      ImageSize: DWORD;
      Bits: HBITMAP;
      DIBWidth, DIBHeight: Longint;
      PrintWidth, PrintHeight: Longint;
      RealRect:TRect;
  begin
    ImHeight := Trunc(imList.Height * fScaleY);
    ImWidth := Trunc(imList.Width * fScaleX);
    case Align of
      taLeftJustify: x := ARect.Left;
      taRightJustify: x := ARect.Right - ImWidth;
    else
      x := (ARect.Right + ARect.Left - ImWidth) div 2;
    end;
    y := (ARect.Bottom + ARect.Top - ImHeight) div 2;
    CheckedRect := Rect(X,Y,X+ImWidth,Y+ImHeight);
    UnionRect(AUnionRect,CheckedRect,ARect);
    bm := TBitmap.Create;
    r := 0;
    OldRectRgn := 0;
    try
      imList.BkColor := VPrinter.Canvas.Brush.Color;
      imList.GetBitmap(Index,bm);
      if EqualRect(AUnionRect,ARect) then // ARect containt image
//        VPrinter.Canvas.StretchDraw(CheckedRect,bm)
      else begin                          // Need clip
        OldRectRgn := CreateRectRgn(0,0,VPrinter.PageWidth,VPrinter.PageHeight);
        r := GetClipRgn(ACanvas.Handle, OldRectRgn);
        RealRect := ARect;
        if (pghFitGridToPageWidth in Options) and (GridWidth > (RealRight - RealLeft)) then
        begin
         // CreateRectRgn don't support viewport
         RealRect.Right := MulDiv(RealRect.Right,RealRight - RealLeft,GridWidth);
         RealRect.Left := MulDiv(RealRect.Left,RealRight - RealLeft,GridWidth);
         RealRect.Top := MulDiv(RealRect.Top,RealRight - RealLeft,GridWidth);
         RealRect.Bottom := MulDiv(RealRect.Bottom,RealRight - RealLeft,GridWidth);
        end;
        RectRgn := CreateRectRgn(RealRect.Left,RealRect.Top,RealRect.Right,RealRect.Bottom);
        SelectClipRgn(ACanvas.Handle, RectRgn);
        DeleteObject(RectRgn);
//        VPrinter.Canvas.StretchDraw(CheckedRect,bm);
//        I have problem with StretchDraw when metafile is based on Printer.Handle
//        I will use StretchDIBits
      end;

      ACanvas.Lock;
      try
        { Paint bitmap to the printer }
        with VPrinter, ACanvas do
        begin
          Bits := bm.Handle;
          GetDIBSizes(Bits, InfoSize, ImageSize);
          Info := AllocMem(InfoSize);
          try
            Image := AllocMem(ImageSize);
            try
              GetDIB(Bits, 0, Info^, Image^);
              with Info^.bmiHeader do
              begin
                DIBWidth := biWidth;
                DIBHeight := biHeight;
              end;
              PrintWidth := CheckedRect.Right - CheckedRect.Left;
              PrintHeight := CheckedRect.Bottom - CheckedRect.Top;
              StretchDIBits(Canvas.Handle, CheckedRect.Left, CheckedRect.Top, PrintWidth, PrintHeight, 0, 0,
                DIBWidth, DIBHeight, Image, Info^, DIB_RGB_COLORS, SRCCOPY);
            finally
              FreeMem(Image, ImageSize);
            end;
          finally
            FreeMem(Info, InfoSize);
          end;
        end;
      finally
        ACanvas.Unlock;
      end;

      if not EqualRect(AUnionRect,ARect) then // ARect containt image
      begin
        if r = 0 then
          SelectClipRgn(ACanvas.Handle, 0)
        else
          SelectClipRgn(ACanvas.Handle, OldRectRgn);
        DeleteObject(OldRectRgn);
      end;
    finally
     bm.Free;
    end;
  end;

  //--------------------------
  procedure SetIfNeedFitWidthMapMode;
  var dc :Integer;
  begin
     if GridWidth > (RealRight - RealLeft) then begin
       dc := SetMapMode(VPrinter.Canvas.Handle, MM_ISOTROPIC);
       if (dc = 0) then Raise Exception.Create(' function SetMapMode(Handle, MM_ISOTROPIC) has returned 0 ');
       SetWindowOrgEx(VPrinter.Canvas.Handle,0,0,nil);
       SetWindowExtEx(VPrinter.Canvas.Handle, GridWidth, GridWidth, nil);
       SetViewportExtEx(VPrinter.Canvas.Handle, RealRight - RealLeft, RealRight - RealLeft, nil);
     end;
  end;

  //--------------------------
  procedure CalcFitedDataRect;
  begin
    if (pghFitGridToPageWidth in Options) then
    begin // On width of page
      GridWidth := GetScaledRealGridWidth;
      RealRight := DataPrintRec.Right; RealLeft := DataPrintRec.Left;
      SetIfNeedFitWidthMapMode;

      if GridWidth > (RealRight - RealLeft) then
      begin
        DataPrintRec.Right := MulDiv(DataPrintRec.Right,GridWidth,RealRight - RealLeft); // �������� ���� ������� �������
        DataPrintRec.Left := MulDiv(DataPrintRec.Left,GridWidth,RealRight - RealLeft);
        DataPrintRec.Top := MulDiv(DataPrintRec.Top,GridWidth,RealRight - RealLeft);
        DataPrintRec.Bottom := MulDiv(DataPrintRec.Bottom,GridWidth,RealRight - RealLeft);
      end;
    end;
  end;

  //---------------------------
  function PrintPageColontitle(ARect:TRect; IsHeader,CalcHeight:Boolean):Integer;
  var pc:TPageColontitle;
      h,lm:Integer;
      Lay:TTextLayout;

      function ExtractMacro(s:STring):String;
      var i:Integer;
      begin
        Result := s;
        MacroValues[0] := IntToStr(VPrinter.PageNumber);
        for i := 0 to High(Macros) do
          Result := StringReplaceMacros(Result,Macros[i],MacroValues[i],[rfReplaceAll, rfIgnoreCase],'&');
      end;
  begin
    Result := 0; h := 0;
    //if not CalcHeight then VPrinter.Canvas.Rectangle(ARect.Left,ARect.Top,ARect.Right,ARect.Bottom);
    if IsHeader then begin pc := PagEheader; Lay := tlTop;
    end else begin pc := PageFooter; Lay := tlBottom; end;

    VPrinter.Canvas.Font := pc.Font;
    if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
    if (pc.LeftText.Text <> '') then
      Result := WriteTextEh(VPrinter.Canvas,ARect,False,0,0,ExtractMacro(GetStingListText(pc.LeftText)),
          taLeftJustify,Lay,False,False,0,0,CalcHeight);
    if (pc.CenterText.Text <> '') then
      h := WriteTextEh(VPrinter.Canvas,ARect,False,0,0,ExtractMacro(GetStingListText(pc.CenterText)),
          taCenter,Lay,False,False,0,0,CalcHeight);
    if (Result < h) then Result := h;
    if (pc.RightText.Text <> '') then
      h := WriteTextEh(VPrinter.Canvas,ARect,False,0,0,ExtractMacro(GetStingListText(pc.RightText)),
          taRightJustify,Lay,False,False,0,0,CalcHeight);
    if (Result < h) then Result := h;

    if Result <> 0 then Inc(Result,Trunc(fLogPelsY2/20));

    if (pc.LineType <> pcltNon) then lm := Trunc(fLogPelsY2/20) else lm := 0;
    if (pc.LineType = pcltDoubleLine) then begin
      if not CalcHeight then
       if IsHeader then begin
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Bottom - Trunc(fLogPelsY2/20));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Bottom - Trunc(fLogPelsY2/20));
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Bottom - Trunc(fLogPelsY2/20) - Trunc(fLogPelsY2/30));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Bottom - Trunc(fLogPelsY2/20) - Trunc(fLogPelsY2/30));
       end else begin
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Top + Trunc(fLogPelsY2/20));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Top + Trunc(fLogPelsY2/20));
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Top + Trunc(fLogPelsY2/20) + Trunc(fLogPelsY2/30));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Top + Trunc(fLogPelsY2/20) + Trunc(fLogPelsY2/30));
       end;
      Inc(lm,Trunc(fLogPelsY2/30));
    end else if (pc.LineType = pcltSingleLine) then
      if not CalcHeight then
       if IsHeader then begin
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Bottom - Trunc(fLogPelsY2/20));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Bottom - Trunc(fLogPelsY2/20));
       end else begin
         VPrinter.Canvas.MoveTo(ARect.Left, ARect.Top + Trunc(fLogPelsY2/20));
         VPrinter.Canvas.LineTo(ARect.Right, ARect.Top + Trunc(fLogPelsY2/20));
       end;
    Inc(Result,lm);
  end;

  //------------------------
  procedure ResetPrinterCanvas;
  begin
    VPrinter.Canvas.Pen.Width := PenW;     
    VPrinter.Canvas.BRUSH.Style := bsClear;
    VPrinter.Canvas.Brush.Color := clWhite;
    VPrinter.Canvas.Font := DBGridEh.Font;
    if (pghFitGridToPageWidth in Options) then SetIfNeedFitWidthMapMode;
  end;

  procedure VPrinter_NewPage;
  begin
    VPrinter.NewPage;
    ResetPrinterCanvas;
    PrintPageColontitle(TitleRect,True,False);
    PrintPageColontitle(FooterRect,False,False);
  end;

  //--------------------------
  procedure CalcDeviceCaps;
  var Diver:Double;
  begin
(*     fPrnPhysWidth :=  GetDeviceCaps(VPrinter.Canvas.Handle,PHYSICALWIDTH);
     fPrnPhysHeight :=  GetDeviceCaps(VPrinter.Canvas.Handle,PHYSICALHEIGHT);
*)
//     fPrnPhysOffSetX := GetDeviceCaps(VPrinter.Canvas.Handle,PHYSICALOFFSETX);
     fPrnPhysOffSetX := (VPrinter.FullPageWidth - VPrinter.PageWidth) div 2;
//     fPrnPhysOffSetY := GetDeviceCaps(VPrinter.Canvas.Handle,PHYSICALOFFSETY);
     fPrnPhysOffSetY := (VPrinter.FullPagEheight - VPrinter.PagEheight) div 2;

     //fPrnHorsRes :=  GetDeviceCaps(VPrinter.Canvas.Handle,HORZRES);
     fPrnHorsRes := VPrinter.PageWidth;
     //fPrnVertRes :=  GetDeviceCaps(VPrinter.Canvas.Handle,VERTRES);
     fPrnVertRes := VPrinter.PagEheight;

     fLogPelsX1 := GetDeviceCaps(DBGridEh.Canvas.Handle, LOGPIXELSX);
     fLogPelsY1 := GetDeviceCaps(DBGridEh.Canvas.Handle, LOGPIXELSY);

     if VPrinter.Printers.Count > 0 then
     begin
       fLogPelsX2 :=  GetDeviceCaps(VPrinter.Handle, LOGPIXELSX);
       fLogPelsY2 :=  GetDeviceCaps(VPrinter.Handle, LOGPIXELSY);
     end else begin
       fLogPelsX2 :=  DefaultPrinterPixelsPerInchX;
       fLogPelsY2 :=  DefaultPrinterPixelsPerInchY;
     end;


     if (fLogPelsX1 > fLogPelsX2) then
         fScaleX := (fLogPelsX1 / fLogPelsX2)
     else
         fScaleX := (fLogPelsX2 / fLogPelsX1);

     if (fLogPelsY1 > fLogPelsY2) then
         fScaleY := (fLogPelsY1 / fLogPelsY2)
     else
         fScaleY := (fLogPelsY2 / fLogPelsY1);

     if Units = MM then Diver := 2.54 else Diver := 1;
     DataPrintRec.Left :=  Round(fLogPelsX2 * Page.LeftMargin / Diver ) - fPrnPhysOffSetX;
     DataPrintRec.Top :=  Round(fLogPelsY2 * Page.TopMargin / Diver ) - fPrnPhysOffSetY;
     DataPrintRec.Right :=  fPrnHorsRes - Round(fLogPelsX2 * Page.RightMargin / Diver ) + fPrnPhysOffSetX;
     DataPrintRec.Bottom := fPrnVertRes - Round(fLogPelsY2 * Page.BottomMargin / Diver ) + fPrnPhysOffSetY;

     PSX1 := Round(fScaleX); PSX2 := Round(fScaleX*2);
     PSY1 := Round(fScaleY); PSY2 := Round(fScaleY*2);
     PenW := Trunc((fLogPelsX2 + fLogPelsY2)/200); // PenWidth = 0.01 Inche
     //if (PenW mod 2 = 0) then Inc(PenW);           // Must be uneven

     {TopFooterPos := DataPrintRec.Bottom - Round(fLogPelsX2 / 4);  // 1/4 �����
     DataPrintRec.Bottom := TopFooterPos - 1;

     TopHeaderPos := DataPrintRec.Top;
     DataPrintRec.Top := DataPrintRec.Top + Round(fLogPelsX2 / 4) + 1; //  Header (TopHeaderPos, DataPrintRec.Top - 1)
     }
  end;

  function GetFooterValue(Row, Col: Integer): String;
  var
    FmtStr: string;
    Format: TFloatFormat;
    Digits: Integer;
    v:Variant;
    Field:TField;
  begin
    Result := '';
    //\\\
    case PrnColumns[Col].UsedFooter(Row).ValueType of
      fvtSum:
      begin
        if PrnColumns[Col].UsedFooter(Row).FieldName <> '' then
          Field := DBGridEh.DataSource.DataSet.FindField(PrnColumns[Col].UsedFooter(Row).FieldName)
        else
          Field := DBGridEh.DataSource.DataSet.FindField(PrnColumns[Col].FieldName);
        if Field = nil then Exit;
        with Field do begin
          v := FooterValues[Row*PrnColumns.Count+Col];
          case DataType of
            ftSmallint, ftInteger, ftAutoInc, ftWord :
               with Field as TIntegerField do
               begin
                 FmtStr := DisplayFormat;
                 if FmtStr = '' then Str(Integer(v), Result) else Result := FormatFloat(FmtStr, v);
               end;
            ftBCD:
              with Field as TBCDField do begin
                if EditFormat = '' then FmtStr := DisplayFormat else FmtStr := EditFormat;
                if FmtStr = '' then begin
                  if Currency then begin
                    Format := ffCurrency;
                    Digits := CurrencyDecimals;
                  end
                  else begin
                    Format := ffGeneral;
                    Digits := 0;
                  end;
                  Result := CurrToStrF(v, Format, Digits);
                end else
                  Result := FormatCurr(FmtStr, v);
              end;
            ftFloat,ftCurrency:
              with Field as TFloatField do
              begin
               if EditFormat = '' then FmtStr := DisplayFormat else FmtStr := EditFormat;
               if FmtStr = '' then
               begin
                  if Currency then
                  begin
                    Format := ffCurrency;
                    Digits := CurrencyDecimals;
                  end
                  else begin
                    Format := ffGeneral;
                   Digits := 0;
                  end;
                   Result := FloatToStrF(v, Format, Precision, Digits);
                end else
                  Result := FormatFloat(FmtStr, v);
              end;
            end;
          end;
      end;
      fvtCount: Result := FloatToStr(FooterValues[Row*PrnColumns.Count+Col]);
    end;
  end;

  // -------CalcPrnRowH
  function DrawCell(ACol:Integer; ARect:TRect; var APBmFrom:TPolyBookmark; CalcRect:Boolean):Integer;
  const
    CheckBoxFlags: array [TCheckBoxState] of Integer =
      ( DFCS_BUTTONCHECK,  DFCS_BUTTONCHECK or DFCS_CHECKED,  DFCS_BUTTON3STATE or DFCS_CHECKED );
  var CurColumn:TColumnEh;
      KeyIndex:Integer;
      NewBackgrnd:TColor;
      AState: TGridDrawState;
      AAlignment:TAlignment;
      Value:String;
      bm:TBitmap;
      dr,ARect1:TRect;
      oldColor:TColor;
      Stretch:Boolean;
      Footer:TColumnFooterEh;
//      tm: TTEXTMETRIC;
  begin
    Result := 0;
    CurColumn := PrnColumns[ACol];
    AState := [];
    NewBackgrnd := clWhite;
    ARect1 := ARect;
    Inc(ARect.Left,PSX2);  Inc(ARect.Top,PSY2);
    Dec(ARect.Right,PSX2);  Dec(ARect.Bottom,PSY2);
    if CalcRect then Stretch := pghRowAutoStretch in Options else Stretch := AWordWrap;

    if APBmFrom.InDS then begin // data cell
      if pghColored in Options then NewBackgrnd := CurColumn.Color;

      VPrinter.Canvas.Font := CurColumn.Font;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;

      if Assigned(DBGridEh.OnGetCellParams) then
          DBGridEh.OnGetCellParams(DBGridEh, CurColumn, VPrinter.Canvas.Font, NewBackgrnd, AState);
      VPrinter.Canvas.Brush.Color := NewBackgrnd;

      if not CalcRect and (VPrinter.Canvas.Brush.Color <> clWhite) then
      begin
        oldColor := VPrinter.Canvas.Pen.Color;
        VPrinter.Canvas.Pen.Color := VPrinter.Canvas.Brush.Color;
        VPrinter.Canvas.Rectangle(ARect1.Left,ARect1.Top,ARect1.Right,ARect1.Bottom);
        VPrinter.Canvas.Pen.Color := oldColor;
      end;

      if (CurColumn.GetColumnType = ctCheckboxes) and not CalcRect then begin
        dr.Left := ARect.Left + iif(ARect.Right - ARect.Left < Trunc(FCheckBoxWidth * fScaleX),0,
              (ARect.Right - ARect.Left) shr 1 - Trunc(FCheckBoxWidth * fScaleX) shr 1);
        dr.Right :=  iif(ARect.Right - ARect.Left < Trunc(FCheckBoxWidth * fScaleX),ARect.Right,
               dr.Left + Trunc(FCheckBoxWidth * fScaleX));
        dr.Top := ARect.Top + iif(ARect.Bottom - ARect.Top < Trunc(FCheckBoxHeight * fScaleY),0,
              (ARect.Bottom - ARect.Top) shr 1 - Trunc(FCheckBoxHeight * fScaleY) shr 1);
        dr.Bottom := iif(ARect.Bottom - ARect.Top < Trunc(FCheckBoxHeight * fScaleY),ARect.Bottom,
              dr.Top + Trunc(FCheckBoxHeight * fScaleY));
        DrawFrameControl(VPrinter.Canvas.Handle,dr,DFC_BUTTON,CheckBoxFlags[CurColumn.CheckboxState]);
      end else
      if (CurColumn.GetColumnType = ctKeyImageList) and not CalcRect then begin
        KeyIndex := CurColumn.KeyList.IndexOf(CurColumn.Field.Text);
        if KeyIndex = -1 then KeyIndex := CurColumn.NotInKeyListIndex;
        bm := TBitmap.Create;
        oldColor := CurColumn.ImageList.BkColor;
        CurColumn.ImageList.BkColor := VPrinter.Canvas.Brush.Color;
        try
          CurColumn.ImageList.GetBitmap(KeyIndex,bm);
        finally
          CurColumn.ImageList.BkColor := oldColor;
        end;
        dr := Rect(0,0,Trunc(CurColumn.ImageList.Height * fScaleY),Trunc(CurColumn.ImageList.Width * fScaleX));
        dr.Left := ARect.Left + (ARect.Right - ARect.Left) div 2 - dr.Right div 2;
        dr.Right := dr.Right + dr.Left;
        dr.Top := ARect.Top + (ARect.Bottom - ARect.Top) div 2 - dr.Bottom div 2;
        dr.Bottom := dr.Bottom + dr.Top;
        //VPrinter.Canvas.StretchDraw(dr,bm);
        DrawClipped(CurColumn.ImageList,VPrinter.Canvas,ARect1,KeyIndex,taCenter);
        bm.Free;
      end else begin
          Result := WriteTextEh(VPrinter.Canvas, ARect, False, 0, 0,  CurColumn.DisplayText,
             CurColumn.Alignment, tlTop, Stretch, CurColumn.EndEllipsis, 0, 0,CalcRect) + PSY2*2;
      end;
    end else begin // footer cell
      if APBmFrom.bm = '' then Exit;
      Footer := CurColumn.UsedFooter(StrToInt(APBmFrom.bm));
      AAlignment := Footer.Alignment;
      if Footer.ValueType in [fvtSum,fvtCount] then
        Value := GetFooterValue(StrToInt(APBmFrom.bm),ACol)
      else
        Value := DBGridEh.GetFooterValue(StrToInt(APBmFrom.bm),CurColumn);

      if pghColored in Options then NewBackgrnd := Footer.Color;
      VPrinter.Canvas.Font := Footer.Font;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;

      if Assigned(DBGridEh.OnGetFooterParams) then
        DBGridEh.OnGetFooterParams(DBGridEh, 1, StrToInt(APBmFrom.bm), CurColumn, VPrinter.Canvas.Font,
             NewBackgrnd, AAlignment, AState,Value);
      VPrinter.Canvas.Brush.Color := NewBackgrnd;

      if not CalcRect and (VPrinter.Canvas.Brush.Color <> clWhite) then
      begin
        oldColor := VPrinter.Canvas.Pen.Color;
        VPrinter.Canvas.Pen.Color := VPrinter.Canvas.Brush.Color;
        VPrinter.Canvas.Rectangle(ARect1.Left,ARect1.Top,ARect1.Right,ARect1.Bottom);
        VPrinter.Canvas.Pen.Color := oldColor;
      end;

      Result := WriteTextEh(VPrinter.Canvas, ARect, False, 0, 0,  Value,
          AAlignment, tlTop, Stretch, Footer.EndEllipsis, 0, 0,CalcRect) + PSY2*2;
    end;
  end;

  procedure CalcFooterValues;
  var i,j:Integer;
      Field:TField;
      Footer:TColumnFooterEh;
  begin
    for i := 0 to DBGridEh.FooterRowCount - 1 do
      for j := 0 to PrnColumns.Count - 1 do begin
        Footer := PrnColumns[j].UsedFooter(i);
        if Footer.FieldName <> '' then
          Field := DBGridEh.DataSource.DataSet.FindField(Footer.FieldName)
        else
          Field := DBGridEh.DataSource.DataSet.FindField(PrnColumns[j].FieldName);
        if Field = nil then Exit;
        case Footer.ValueType of
          fvtSum:
            if (Field.IsNull = False) then
              FooterValues[i*PrnColumns.Count+j] := FooterValues[i*PrnColumns.Count+j] + Field.AsFloat;
          fvtCount:
            FooterValues[i*PrnColumns.Count+j] := FooterValues[i*PrnColumns.Count+j] + 1;
        end;
      end;
  end;

  //--------------------------
  function CalcPrintRows(APBmFrom:TPolyBookmark; PrnTop, PrnBottom:Integer):TPolyBookmark;
  var i,rh,ch,cPos,hLimit:Integer;
      r:TRect;
  begin
    PrnRowHeights.Clear;
    GotoPolyBookmark(APBmFrom);
    Result := APBmFrom;
    cPos := PrnTop;
    hLimit := PrnBottom;
    while True do begin
      ch := 0;
      for i := 0 to PrnColumns.Count - 1 do begin
        SetRect(r,0,0,0,0);
        r.Right := Integer(PrnColWIdths[i]);
        rh := DrawCell(i,r,APBmFrom,True);
        if ch < rh then ch := rh;
      end;

      if ch < MinRowHeight then ch := MinRowHeight;
      Inc(cPos,ch);
      if (cPos > hLimit) or APBmFrom.EOF then begin
        Result := APBmFrom;
        Exit;
      end;
      if APBmFrom.InDS then CalcFooterValues;
      Result := APBmFrom;
      SetNextPolyBookmark(APBmFrom);
      PrnRowHeights.Add(Pointer(ch));
    end;
  end;

  //---------------------------
  procedure PrintGridTitleTextHeight(FromCol,ToCol:Integer);
  var r:TRect;
      i,lm,rm,tm:Integer;
  begin
    r := Rect(DataPrintRec.Left,DataPrintRec.Top-PrnTitlEh-PrnTitleTextH+PrintOffset,DataPrintRec.Left,DataPrintRec.Top-PrnTitlEh+PrintOffset);
    for i := FromCol to ToCol do Inc(r.Right,Integer(PrnColWidths[i]));

    if (Title.Text <> '') then begin
      VPrinter.Canvas.Font := DBGridEh.TitleFont;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
      r := Rect(DataPrintRec.Left,DataPrintRec.Top-PrnTitlEh-PrnTitleTextH+PrintOffset,r.Right,DataPrintRec.Top-PrnTitlEh+PrintOffset);
      lm := PSX2; // if FromCol = 0 then lm := PSX2 else lm := 0;
      rm := PSX2; //if ToCol = DBGridEh.VisibleColumns.Count-1 then rm := PSX2 else  rm := 0;
      for i := 0 to FromCol-1 do Dec(lm,Integer(PrnColWidths[i]));
      for i := ToCol+1 to PrnColumns.Count-1 do Dec(rm,Integer(PrnColWidths[i]));
      if DBGridEh.UseMultiTitle then tm := Round(DBGridEh.VTitleMargin*fScaleY/2) else tm := PSY2;
      if pghColored in Options then VPrinter.Canvas.Brush.Color := DBGridEh.FixedColor;
      WriteTextEh(VPrinter.Canvas, r, pghColored in Options, 0, tm,  GetStingListText(Title),
          taCenter, tlTop, True, False, lm, rm,False);
      AddPolyline([r.Left,r.Bottom, r.Left,r.Top, r.Right,r.Top, r.Right,r.Bottom]);
    end;
  end;

  // -------PrintSimpleTitle
  procedure PrintSimpleTitle(FromCol,ToCol:Integer);
  var r:TRect;
      i:Integer;
      s:String;
  begin
    r := Rect(DataPrintRec.Left,DataPrintRec.Top-PrnTitlEh+PrintOffset,DataPrintRec.Left,DataPrintRec.Top+PrintOffset);

    for i := FromCol to ToCol do begin
      Inc(r.Right,Integer(PrnColWidths[i]));
      VPrinter.Canvas.Font := PrnColumns[i].Title.Font;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
      if pghColored in Options then VPrinter.Canvas.Brush.Color := DBGridEh.FixedColor;
      if (DBGridEh.TitleImages <> nil) and
         (PrnColumns[i].Title.ImageIndex <> -1) then s := ''
      else
        s := PrnColumns[i].Title.Caption;
      WriteTextEh(VPrinter.Canvas, r, pghColored in Options, PSX2, PSY2, s,
          PrnColumns[i].Title.Alignment, tlTop, False,
          PrnColumns[i].Title.EndEllipsis, 0, 0,False);
      if (DBGridEh.TitleImages <> nil) and
          (PrnColumns[i].Title.ImageIndex <> -1) then
        with PrnColumns[i].Title do
          DrawClipped(DBGridEh.TitleImages,VPrinter.Canvas,r,ImageIndex,Alignment);

      AddPolyline([r.Left,r.Bottom, r.Right,r.Bottom, r.Right,r.Top]);
      r.Left := r.Right;
    end;
    r.Left := DataPrintRec.Left;
    AddPolyline([r.Left,r.Bottom, r.Left,r.Top, r.Right,r.Top]);
    PrintGridTitleTextHeight(FromCol,ToCol);
  end;

  // -------PrintTitle ������ ���������
  procedure PrintMultyTitle(FromCol,ToCol:Integer);
  var  i, RightSide:Integer;
       r,r1:TRect;
       lpDTP :  TDrawTextParams;
       s:String;
       //PTNode,NextNode,ToColNode:THeadTreeNode;
       PLeftTop,PRightTop,PRightLow:TPoint;

    function GetColNumByVisColNum(AVisColNum:Integer):Integer;
    //var i:Integer;
    begin
      //Result := -1; i := 0;
      Result := PrnColumns[AVisColNum].Index;
      {while not DBGridEh.Columns[i].Visible do
        Inc(i);
      for i := i to DBGridEh.Columns.Count-1 do
      begin
        if DBGridEh.Columns[i].Visible then
          Inc(Result);
        if Result = AVisColNum then
        begin
          Result := i;
          Break;
        end;
      end;}
    end;

    procedure PrintTitleRecurs(ANode:THeadTreeNode; ARect:TRect);
    var r,r1:TRect;
        s:String;
        lx, rx, xx:Integer;
        an,nn:THeadTreeNode;
        lpDTP :  TDrawTextParams;
    begin
        if (ANode.Host.Host = nil) then Exit;
        s := ANode.Host.Text;
        lx := -(ARect.Left - DataPrintRec.Left );
        r.Bottom := ARect.Top;
        r.Top := r.Bottom - ANode.Host.HeightPrn;
        an := ANode; nn := ANode.Host.Child;
        while an <> nn do begin // ��������� ������ �� Child
          Inc(lx,nn.WidthPrn);
          nn := nn.Next;
        end;
        if (lx > 0) then begin
          r.Left := DataPrintRec.Left;
          xx := ANode.Host.WidthPrn - lx + DataPrintRec.Left;
        end else begin
          r.Left := ARect.Left;
          xx := ANode.Host.WidthPrn + ARect.Left;
          lx := 0;
        end;

        if (xx > RightSide) then  begin
          rx := xx - RightSide;
          xx := RightSide;
        end else begin
          rx := 0;
        end;
        r.Right := xx;


        AddPolyline([r.Left,r.Top, r.Left,r.Bottom, r.Right,r.Bottom]);

        if PRightTop.y > r.Top then begin
          PRightTop.y := r.Top;
          PLeftTop.y := PRightTop.y;
        end;
        r1 := r;
        r1.Top := r1.Top;

        lpDTP.cbSize := SizeOf(lpDTP);
        lpDTP.uiLengthDrawn := Length(s);
        lpDTP.iLeftMargin := 0;//lx;
        lpDTP.iRightMargin := 0;//rx;

        Dec(r.Left,lx); Inc(r.Right,rx);

        VPrinter.Canvas.Font := DBGridEh.TitleFont;
        if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
        if pghColored in Options then VPrinter.Canvas.Brush.Color := DBGridEh.FixedColor;
        WriteTextEh( VPrinter.Canvas,r1,pghColored in Options,0,Round(fScaleY),s,
        taCenter,tlCenter,true,False,-lx+Round(fScaleX*2),-rx+Round(fScaleX*2),False);


        if (i = GetColNumByVisColNum(FromCol)) or (ANode.Host.Host.Child = ANode.Host) then
          PrintTitleRecurs(ANode.Host,r);
    end;

  begin
    PRightTop.y := DataPrintRec.Top + PrintOffset;

    RightSide := DataPrintRec.Left;
    for i := GetColNumByVisColNum(FromCol) to GetColNumByVisColNum(ToCol) do begin
      Inc(RightSide,DBGridEh.LeafFieldArr[i].FLeaf.WidthPrn);
    end;

    r.Left := DataPrintRec.Left;
    for i := GetColNumByVisColNum(FromCol) to GetColNumByVisColNum(ToCol) do begin
      r.Bottom := DataPrintRec.Top + PrintOffset;
      r.Top := r.Bottom - DBGridEh.LeafFieldArr[i].FLeaf.HeightPrn;
      r.Left := r.Left;
      r.Right := r.Left + DBGridEh.LeafFieldArr[i].FLeaf.WidthPrn; // Round(FLeafFieldArr[i].FLeaf.Width * fScaleX);
      s := DBGridEh.LeafFieldArr[i].FLeaf.Text;
      if (DBGridEh.TitleImages <> nil) and
          (DBGridEh.Columns[i].Title.ImageIndex <> -1) then s := '';

      AddPolyline([r.Left,r.Top, r.Left,r.Bottom, r.Right,r.Bottom]);

      if i = GetColNumByVisColNum(ToCol) then begin
        PRightTop.x := r.Right;
        PRightLow.x := PRightTop.x;
      end;
      if PRightTop.y > r.Top then begin
        PRightTop.y := r.Top;
        PLeftTop.y := PRightTop.y;
      end;

      r1 := r;

      lpDTP.cbSize := SizeOf(lpDTP);
      lpDTP.uiLengthDrawn := Length(s);
      lpDTP.iLeftMargin := 0;//lx;
      lpDTP.iRightMargin := 0;//rx;

       VPrinter.Canvas.Font := DBGridEh.Columns[i].Title.Font;
       if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;

      if pghColored in Options then
        VPrinter.Canvas.Brush.Color := DBGridEh.FixedColor
      else
        VPrinter.Canvas.Brush.Color := clWhite;

      WriteTextEh(VPrinter.Canvas,r1,pghColored in Options,0,Round(fScaleY),s,
       taCenter,tlCenter,true,False,Round(fScaleX*2),Round(fScaleX*2),False);

      if (DBGridEh.TitleImages <> nil) and (DBGridEh.Columns[i].Title.ImageIndex <> -1) then
       DrawClipped(DBGridEh.TitleImages,VPrinter.Canvas,r1,
                     DBGridEh.Columns[i].Title.ImageIndex,taCenter);

      if (i = GetColNumByVisColNum(FromCol)) or (DBGridEh.LeafFieldArr[i].FLeaf.Host.Child = DBGridEh.LeafFieldArr[i].FLeaf) then
         PrintTitleRecurs(DBGridEh.LeafFieldArr[i].FLeaf,r);

      r.Left := r.Right;
    end;

    // ������ ����� ����� ��������� � ����� ������.
     PLeftTop.x := DataPrintRec.Left;
     PRightLow.y := DataPrintRec.Top + PrintOffset;

     AddPolyline([PLeftTop.x,PLeftTop.y, PRightTop.x,PRightTop.y, PRightLow.x,PRightLow.y]);

     PrintGridTitleTextHeight(FromCol,ToCol);

    //\\
  end;

  //--------------------------
  function DrawRowsRange(var APBmFrom, APBMTo:TPolyBookmark):Integer;
  var pgs, FromCol, ToCol, i, j: Integer;
      ARect:TRect;
      CurPBm:TPolyBookmark;
  begin
    FromCol := 0;
    Result := 0;
    for pgs := 0 to ColsToPages.Count - 1 do
    begin
      if VPrinter.Aborted then Abort;
      if FirstPage then
        FirstPage := False
      else
         VPrinter_NewPage;
//        VPrinter.NewPage;
      PolyPolyPoints.Clear; PolyLengths.Clear;
//      ResetPrinterCanvas;
      ToCol := Integer(ColsToPages[pgs]);
      GotoPolyBookmark(APBmFrom);
      CurPBm := APBmFrom;
      ARect.Top := DataPrintRec.Top + PrintOffset;
      ARect.Bottom := ARect.Top;
      j := 0;
//      PrintPageColontitle(TitleRect,True,False);
//      PrintPageColontitle(FooterRect,False,False);
      if DBGridEh.UseMultiTitle then
        PrintMultyTitle(FromCol,ToCol)
      else
        PrintSimpleTitle(FromCol,ToCol);
      while True do begin
        ARect.Left := DataPrintRec.Left; ARect.Right := ARect.Left;
        if PrnRowHeights.Count = 0 then Break;
        Inc(ARect.Bottom,Integer(PrnRowHeights[j]));
        for i := FromCol to ToCol do begin
         Inc(ARect.Right,Integer(PrnColWIdths[i]));
         DrawCell(i,ARect,CurPBm,False);
         if i = FromCol then
           AddPolyline([ARect.Left,ARect.Top, ARect.Left,ARect.Bottom, ARect.Right,ARect.Bottom, ARect.Right,ARect.Top])
         else
           AddPolyline([ARect.Left,ARect.Bottom, ARect.Right,ARect.Bottom, ARect.Right,ARect.Top]);
         ARect.Left := ARect.Right;
         Application.ProcessMessages;
        end;
        //if ComparePolyBookMark(CurPBm,APBMTo) then Break;
        Result := ARect.Bottom - PrintRec.Top;
        if PrnRowHeights.Count - 1 = j then Break;

        SetNextPolyBookmark(CurPBm);
        Inc(j);
        ARect.Top := ARect.Bottom;
      end;
      PolyPolyline(VPrinter.Canvas.Handle,PolyPolyPoints.List^,PolyLengths.List^,PolyLengths.Count);
      FromCol := ToCol+1;
    end;
  end;

  //---------------------------
  function GetGridTitleTextHeight: Integer;
  var r:Trect;
      tm:Integer;
  begin
    if (Title.Text <> '') then begin
      VPrinter.Canvas.Font := DBGridEh.TitleFont;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
      r := Rect(0,0,GetPrintGridWidth,0);
      if DBGridEh.UseMultiTitle then tm := Round(DBGridEh.VTitleMargin*fScaleY/2) else tm := PSY2;
      Result := WriteTextEh(VPrinter.Canvas,r,False,PSX2,tm,
        GetStingListText(Title),taCenter,tlCenter,True,False,0,0,True);
    end else
      Result := 0;
  end;

  // ----------------------------
  function SetPrnChildTreeHeight(ANode:THeadTreeNode):Integer;
  var htLast:THeadTreeNode;
      newh,maxh,th :Integer;
      rec:TRect;
      DefaultRowHeight : Integer;
      s:String;
  begin
    DefaultRowHeight := 0;
    Result := 0;

    if(ANode.Child  = nil) then Exit;
    htLast := ANode.Child;
    if htLast.Column <> nil then
      VPrinter.Canvas.Font := htLast.Column.Title.Font
    else
      VPrinter.Canvas.Font := DBGridEh.TitleFont;
    if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
    maxh := 0;
    if(htLast.Child <> nil) then
     maxh := SetPrnChildTreEheight(htLast);

    rec := Rect(0,0,Round(htLast.WidthPrn) - Round(fScaleX*4),DefaultRowHeight);
    s := htLast.Text;
    if s = '' then s := ' ';
    th := DrawText(VPrinter.Canvas.Handle,PChar(s),
           Length(s), rec, DT_WORDBREAK or DT_CALCRECT or DT_EXPANDTABS or DT_NOPREFIX);
    if (th > DefaultRowHeight) then maxh := maxh + th + Round(DBGridEh.VTitleMargin*fScaleX)
       else maxh := maxh + DefaultRowHeight;

    while  True  do begin
       if(ANode.Child = htLast.Next) then begin break; end;
       htLast := htLast.Next;
       newh := 0;
       if(htLast.Child <> nil) then
         newh := SetPrnChildTreEheight(htLast);
       rec := Rect(0,0,Round(htLast.WidthPrn) - Round(fScaleX*4),DefaultRowHeight);
       s := htLast.Text;
       if s = '' then s := ' ';
       th := DrawText(VPrinter.Canvas.Handle,PChar(s),
           Length(s), rec, DT_WORDBREAK or DT_CALCRECT or DT_EXPANDTABS or DT_NOPREFIX);
       if (th > DefaultRowHeight) then newh := newh + th  + Round(DBGridEh.VTitleMargin*fScaleY)
          else newh := newh + DefaultRowHeight;

       if(maxh < newh) then maxh := newh;
    end;

    htLast := ANode.Child;
    while ANode.Child <> htLast.Next do begin
      if(htLast.Child = nil) then htLast.HeightPrn := maxh
        else htLast.HeightPrn := maxh - htLast.HeightPrn;
      htLast := htLast.Next;
    end;
    if(htLast.Child = nil) then htLast.HeightPrn := maxh
        else htLast.HeightPrn := maxh - htLast.HeightPrn;

    ANode.HeightPrn := maxh; //��������� ������ ChildTree � �����
    Result := maxh;
  end;

  // -------SetPrnTreeWidth ������ ��������� ��� ��������
  procedure SetPrnTreeWidth;
  var //an,nn:THeadTreeNode;
      i,j:Integer;

    function SetPrnTreeWidthRecurs(AHost:THeadTreeNode):Integer;
    var an,nn:THeadTreeNode;
         w:Integer;
    begin
      w := 0;
      Result := AHost.WidthPrn;
      if (AHost.Child = nil) then Exit;
      an := AHost.Child;
      nn := an;
      while True do begin
        Inc(w,SetPrnTreeWidthRecurs(nn));
        nn := nn.Next;
        if (nn = an) then Break;
      end;
      AHost.WidthPrn := w;
      Result := w;
    end;

  begin
    j := 0;
    for i := 0 to DBGridEh.Columns.Count - 1 do begin
      if PrnColumns.IndexOf(DBGridEh.Columns[i]) <> -1 then
      begin
        DBGridEh.LeafFieldArr[i].FLeaf.WidthPrn := Integer(PrnColWidths[j]);
        Inc(j);
      end
      else
        DBGridEh.LeafFieldArr[i].FLeaf.WidthPrn := 0;
    end;
    SetPrnTreeWidthRecurs(DBGridEh.HeadTree);
  end;

  //---------------------------
  function GetSimpleTitlEheight: Integer;
  var i,H:Integer;
  begin
    Result := 0;
    for i := 0 to PrnColumns.Count - 1 do begin
      VPrinter.Canvas.Font := PrnColumns[i].Title.Font;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
      H := VPrinter.Canvas.TextHeight('Wg') + Round(4*fScaleY);
      if H > Result then Result := H;
    end;
    if Result = 0 then
    begin
      VPrinter.Canvas.Font := DBGridEh.TitleFont;
      if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
      Result := VPrinter.Canvas.TextHeight('Wg') + Round(4*fScaleY);
    end;
  end;

  //---------------------------
  function CalcMinRowHeight: Integer;
  var tm: TTEXTMETRIC;
  begin
    VPrinter.Canvas.Font := DBGridEh.Font;
    if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;
    GetTextMetrics(VPrinter.Canvas.Handle, tm);
    if (DBGridEh.RowHeight = 0) and (DBGridEh.RowLines = 0) then
      Result := VPrinter.Canvas.TextHeight('Wg') + Round(4*fScaleY)
    else
      Result := (tm.tmExternalLeading + tm.tmHeight)*DBGridEh.RowLines + Round(DBGridEh.RowHeight*fScaleY);
    AWordWrap := (Result > tm.tmExternalLeading + tm.tmHeight + Round(4*fScaleY)) or (pghRowAutoStretch in Options);
  end;

  procedure CreatePrnColumnsList;
  var i:Integer;
  begin
    PrnColumns := TColumnsEhList.Create;
    with DBGridEh do
      case Selection.SelectionType of
        gstNon,gstAll,gstRecordBookmarks:
          for i := 0 to VisibleColumns.Count-1 do
            PrnColumns.Add(VisibleColumns[i]);
        gstColumns:
          for i := 0 to Selection.Columns.Count-1 do
            PrnColumns.Add(Selection.Columns[i]);
        gstRectangle:
          for i := Selection.Rect.LeftCol to Selection.Rect.RightCol do
            if Columns[i].Visible then
              PrnColumns.Add(Columns[i]);
      end;
  end;

  procedure PrintRichText(Strings:TRichEditStrings);
  var
    Range: TFormatRange;
    LastChar, MaxLen, LogX, LogY{, OldMap}: Integer;
    SaveRect: TRect;
    function ScaleRect(ARect:TRect;XMul,YMul,XDiv,YDiv:Integer):TRect;
    begin
      Result.Left := ARect.Left * XMul div XDiv;
      Result.Right := ARect.Right * XMul div XDiv;
      Result.Top := ARect.Top * YMul div YDiv;
      Result.Bottom := ARect.Bottom * YMul div YDiv;
    end;
  begin
    FillChar(Range, SizeOf(TFormatRange), 0);
    with VPrinter, Range do
    begin
      hdc := Canvas.Handle;// Canvas.Handle;
      hdcTarget := 0; //hdc;
      LogX := GetDeviceCaps(Handle, LOGPIXELSX);
      LogY := GetDeviceCaps(Handle, LOGPIXELSY);
      if IsRectEmpty(Strings.RichEdit.PageRect) then
      begin
//        rc.right := PageWidth * 1440 div LogX;
//        rc.bottom := PagEheight * 1440 div LogY;
        SaveRect := ScaleRect(PrintRec,1440,1440,LogX,LogY);
      end
      else begin
        rc.left := Strings.RichEdit.PageRect.Left * 1440 div LogX;
        rc.top := Strings.RichEdit.PageRect.Top * 1440 div LogY;
        rc.right := Strings.RichEdit.PageRect.Right * 1440 div LogX;
        rc.bottom := Strings.RichEdit.PageRect.Bottom * 1440 div LogY;
      end;
      LastChar := 0;
      MaxLen := Strings.RichEdit.GetTextLen;
      chrg.cpMax := -1;
      // ensure printer DC is in text map mode
      //OldMap := SetMapMode(hdc, MM_TEXT);
      SendMessage(Strings.RichEdit.Handle, EM_FORMATRANGE, 0, 0);    // flush buffer
      try
        repeat
          rc := SaveRect;
          Inc(rc.Top,PrintOffset * 1440 div LogX);
          rcPage := rc;
          chrg.cpMin := LastChar;
          hdc := Canvas.Handle; // Canvas.Handle;
          hdcTarget := Handle;  //hdc;
          LastChar := SendMessage(Strings.RichEdit.Handle, EM_FORMATRANGE, 1, Longint(@Range));
          if LastChar = 0 then Break;
          rc := ScaleRect(rc,LogX,LogY,1440,1440);
          PrintOffset := rc.Bottom - rc.Top;
          if (LastChar < MaxLen) and (LastChar <> -1) then
          begin
//            PrintPageColontitle(TitleRect,True,False);
//            PrintPageColontitle(FooterRect,False,False);
//            NewPage;
            VPrinter_NewPage;
            PrintOffset := 0;
//            ResetPrinterCanvas;
          end;
        until (LastChar >= MaxLen) or (LastChar = -1);
//        EndDoc;
      finally
        SendMessage(Strings.RichEdit.Handle, EM_FORMATRANGE, 0, 0);  // flush buffer
       // SetMapMode(hdc, OldMap);       // restore previous map mode
      end;
    end;
  end;

  procedure SetSubstituting;
  var i:Integer;
  begin
    for i := 0 to FSubstitutesNames.Count-1 do
    begin
      GridTextReplace(BeforeGridText,FSubstitutesNames[i],FSubstitutesValues[i],0,-1,[],True);
      GridTextReplace(AfterGridText,FSubstitutesNames[i],FSubstitutesValues[i],0,-1,[],True);
    end;
   end;
begin
  FSubstituted := False;
  FooterValues := nil;
  PrnColumns := nil;
  PrnColumnWidths := nil;
  BeforeGridTextStream := nil;
  AfterGridTextStream := nil;
  PrintOffset := 0;
  if not Assigned(DBGridEh) or
     not Assigned(DBGridEh.DataSource) or
     not Assigned(DBGridEh.DataSource.DataSet) or
     not DBGridEh.DataSource.DataSet.Active then  Exit;

  InitMacroValues;
  ColsToPages := nil; PrnRowHeights := nil; PrnColWIdths := nil;
  PolyPolyPoints := nil; PolyLengths := nil;

  CreatePrnColumnsList;
  PrnColumnWidths := TList.Create;
  FooterValues := AllocMem(SizeOf(Currency)*PrnColumns.Count*DBGridEh.FooterRowCount);
  VPrinter.BeginDoc;
  FirstPage := True;
  SavedBookMark := DBGridEh.DataSource.DataSet.Bookmark;
  try

   if FSubstitutesNames <> nil then //Substituting
   begin
     if BeforeGridText.Count > 0 then
     begin
       BeforeGridTextStream := TMemoryStream.Create;
       BeforeGridText.SaveToStream(BeforeGridTextStream);
     end;
     if AfterGridText.Count > 0 then
     begin
       AfterGridTextStream := TMemoryStream.Create;
       AfterGridText.SaveToStream(AfterGridTextStream);
     end;
     SetSubstituting; 
     FSubstituted := True;
   end;

   DBGridEh.DataSource.DataSet.DisableControls;
   DBGridEh.DataSource.DataSet.First;

   ColsToPages := TList.Create;
   PrnRowHeights := TList.Create;
   PrnColWIdths := TList.Create;
   PolyPolyPoints := TList.Create;
   PolyLengths := TList.Create;

   VPrinter.Title := 'Tabular information';
   VPrinter.Canvas.Brush.Style := bsClear;
   VPrinter.Canvas.Brush.Color := clWhite;
   VPrinter.Canvas.Font := DBGridEh.Font;
   if (PrintFontName <> '') then VPrinter.Canvas.Font.Name := PrintFontName;

   CalcDeviceCaps;
   CalcColumnWidths;
   CalcFitedDataRect;
   CalcColsToPages;
   ResetPrinterCanvas;

   TitleRect := Rect(DataPrintRec.Left, DataPrintRec.Top, DataPrintRec.Right, DataPrintRec.Top);
   Inc(TitleRect.Bottom,PrintPageColontitle(TitleRect,True,True));
   Inc(DataPrintRec.Top,TitleRect.Bottom - DataPrintRec.Top);

   FooterRect := Rect(DataPrintRec.Left, DataPrintRec.Bottom, DataPrintRec.Right, DataPrintRec.Bottom);
   Dec(FooterRect.Top,PrintPageColontitle(FooterRect,False,True));
   Dec(DataPrintRec.Bottom,FooterRect.Bottom - FooterRect.Top);

   PrintPageColontitle(TitleRect,True,False);
   PrintPageColontitle(FooterRect,False,False);

   PrintRec := DataPrintRec;
   MinRowHeight := CalcMinRowHeight;
   //FromRow := 0; PageNo := 1;
   PrintRichText(TRichEditStrings(BeforeGridText));
   if DBGridEh.UseMultiTitle then begin
     SetPrnTreeWidth;
     PrnTitlEh := SetPrnChildTreeHeight(DBGridEh.HeadTree);
   end else
     PrnTitlEh := GetSimpleTitlEheight;
   PrnTitleTextH := GetGridTitleTextHeight;
   Inc(DataPrintRec.Top,PrnTitlEh + PrnTitleTextH);

   if PrintOffset >= DataPrintRec.Bottom - DataPrintRec.Top then
   begin
//     PrintPageColontitle(TitleRect,True,False);
//     PrintPageColontitle(FooterRect,False,False);
//     VPrinter.NewPage;
     VPrinter_NewPage;
     PrintOffset := 0;
//     ResetPrinterCanvas;
   end;

   InitPolyBookmark(PBm1);
   while True do begin
     PBm2 := CalcPrintRows(PBm1, DataPrintRec.Top + PrintOffset, DataPrintRec.Bottom);
     PrintOffset := DrawRowsRange(PBm1,PBm2) + PenW;
     if (PBm2.EOF = True)
     then Break
     else PrintOffset := 0;
     PBm1 := PBm2;
   end;

   VPrinter.Canvas.BRUSH.Style := bsClear;
   VPrinter.Canvas.Brush.Color := clWhite;

   PrintRichText(TRichEditStrings(AfterGridText));

  finally
   if FSubstituted then
   begin
     if BeforeGridTextStream <> nil then
     begin
       BeforeGridTextStream.Position := 0;
       BeforeGridText.LoadFromStream(BeforeGridTextStream);
       BeforeGridTextStream.Free;
     end;
     if AfterGridTextStream <> nil then
     begin
       AfterGridTextStream.Position := 0;
       AfterGridText.LoadFromStream(AfterGridTextStream);
       AfterGridTextStream.Free;
     end;
   end;
   DBGridEh.DataSource.DataSet.GotoBookmark(TBookmark(SavedBookMark));
   DBGridEh.DataSource.DataSet.EnableControls;
   VPrinter.EndDoc;
   ColsToPages.Free;
   PrnRowHeights.Free;
   PrnColWIdths.Free;
   PolyPolyPoints.Free;
   PolyLengths.Free;
   PrnColumnWidths.Free;
   if FooterValues <> nil then FreeMem(FooterValues);
   PrnColumns.Free;
  end;
end;


procedure TPrintDBGridEh.Print;
begin
  PrintTo(VirtualPrinter);
end;

procedure TPrintDBGridEh.SetDBGridEh(const Value: TDBGridEh);
begin
  if Value <> FDBGridEh then
  begin
    FDBGridEh := Value;
    if Value <> nil then Value.FreeNotification(Self);
  end;
end;

procedure TPrintDBGridEh.SetOptions(const Value: TPrintDBGridEhOptions);
begin
  FOptions := Value;
end;

procedure TPrintDBGridEh.SetPage(const Value: TPageParams);
begin
  FPage := Value;
end;

procedure TPrintDBGridEh.SetPageFooter(const Value: TPageColontitle);
begin
  FPageFooter := Value;
end;

procedure TPrintDBGridEh.SetPagEheader(const Value: TPageColontitle);
begin
  FPagEheader := Value;
end;

procedure TPrintDBGridEh.SetPrintFontName(const Value: String);
begin
  FPrintFontName := Value;
end;

procedure TPrintDBGridEh.SetTitle(const Value: TStrings);
begin
  FTitle.Assign(Value);
end;

procedure TPrintDBGridEh.SetUnits(const Value: TMeasureUnits);
var AMul:Currency;
begin
  if Value <> FUnits then
  begin
    FUnits := Value;
    if csLoading in ComponentState then Exit;
    if Value = Inches then AMul := 1/2.54 else AMul := 2.54;
    with Page do begin
{      BottomMargin := Round(BottomMargin * AMul * 100) / 100;
      TopMargin := Round(TopMargin * AMul * 100) / 100;
      LeftMargin := Round(LeftMargin * AMul * 100) / 100;
      RightMargin := Round(RightMargin * AMul * 100) / 100;}
      BottomMargin := BottomMargin * AMul;
      TopMargin := TopMargin * AMul;
      LeftMargin := LeftMargin * AMul;
      RightMargin := RightMargin * AMul;
    end;
  end;
end;

function TPrintDBGridEh.PrinterSetupDialog:Boolean;
begin
  Result := False;
  if not Assigned(fPrnDBGridEhSetupDialog) then
    fPrnDBGridEhSetupDialog := TfPrnDBGridEhSetupDialog.Create(Application.MainForm);

  with fPrnDBGridEhSetupDialog do begin
    seUpMargin.Text := FloatToStr(Page.TopMargin);
    seLowMargin.Text := FloatToStr(Page.BottomMargin);
    seLeftMargin.Text := FloatToStr(Page.LeftMargin);
    seRightMargin.Text := FloatToStr(Page.RightMargin);
    cbFitWidthToPage.Checked := pghFitGridToPageWidth in Options;
    ePrintFont.Text := PrintFontName;
    cbAutoStretch.Checked := pghRowAutoStretch in Options;
    cbColored.Checked := pghColored in Options;
    if pghFitingByColWidths in Options then
      rgFitingType.ItemIndex := 1
    else
      rgFitingType.ItemIndex := 0;
    cbOptimalColWidths.Checked := pghOptimalColWidths in Options;

    if ShowModal = mrOk then begin
      Page.TopMargin := StrToFloat(seUpMargin.Text);
      Page.BottomMargin := StrToFloat(seLowMargin.Text);
      Page.LeftMargin := StrToFloat(seLeftMargin.Text);
      Page.RightMargin := StrToFloat(seRightMargin.Text);
      if cbFitWidthToPage.Checked then
        Options := Options + [pghFitGridToPageWidth]
      else
        Options := Options - [pghFitGridToPageWidth];
      PrintFontName := ePrintFont.Text;
      if cbAutoStretch.Checked then
        Options := Options + [pghRowAutoStretch]
      else
        Options := Options - [pghRowAutoStretch];
      if cbColored.Checked then
        Options := Options + [pghColored]
      else
        Options := Options - [pghColored];
      if rgFitingType.ItemIndex = 1 then
        Options := Options + [pghFitingByColWidths]
      else
        Options := Options - [pghFitingByColWidths];
      if cbOptimalColWidths.Checked then
        Options := Options + [pghOptimalColWidths]
      else
        Options := Options - [pghOptimalColWidths];
      Result := True;
//      Preview;
    end;
  end;
end;

procedure TPrintDBGridEh.Notification(AComponent: TComponent; Operation: TOperation);
begin
  inherited Notification(AComponent, Operation);
  if (Operation = opRemove) and (AComponent = DBGridEh) then DBGridEh := nil;
end;

procedure TPrintDBGridEh.PrinterSetupDialogPreview(Sender: TObject);
begin
  if PrinterSetupDialog then
    Preview;
end;

procedure TPrintDBGridEh.SetBeforeGridText(const Value: TStrings);
var
  Stream: TStringStream;
begin
  Stream := TStringStream.Create('');
  try
    Value.SaveToStream(Stream);
    Stream.Position := 0;
    BeforeGridText.LoadFromStream(Stream);
  finally
    Stream.Free;
  end;
end;

procedure TPrintDBGridEh.DefineProperties(Filer: TFiler);
begin
  inherited DefineProperties(Filer);
  Filer.DefineBinaryProperty('BeforeGridText_Data', ReadBeforeGridText, WriteBeforeGridText,
    BeforeGridText.Count > 0);
  Filer.DefineBinaryProperty('AfterGridText_Data', ReadAfterGridText, WriteAfterGridText,
    AfterGridText.Count > 0);
end;

procedure TPrintDBGridEh.ReadBeforeGridText(Stream: TStream);
begin
  BeforeGridText.LoadFromStream(Stream);
end;

procedure TPrintDBGridEh.WriteBeforeGridText(Stream: TStream);
begin
  BeforeGridText.SaveToStream(Stream);
end;

procedure TPrintDBGridEh.SetAfterGridText(const Value: TStrings);
var
  Stream: TStringStream;
begin
  Stream := TStringStream.Create('');
  try
    Value.SaveToStream(Stream);
    Stream.Position := 0;
    AfterGridText.LoadFromStream(Stream);
  finally
    Stream.Free;
  end;
end;

procedure TPrintDBGridEh.ReadAfterGridText(Stream: TStream);
begin
  AfterGridText.LoadFromStream(Stream);
end;

procedure TPrintDBGridEh.WriteAfterGridText(Stream: TStream);
begin
  AfterGridText.SaveToStream(Stream);
end;

function TPrintDBGridEh.GetAfterGridText: TStrings;
begin
  if FAfterGridText = nil then
    FAfterGridText := TRichEditStrings.Create;
  Result := FAfterGridText;
end;

function TPrintDBGridEh.GetBeforeGridText: TStrings;
begin
  if FBeforeGridText = nil then
    FBeforeGridText := TRichEditStrings.Create;
  Result := FBeforeGridText;
end;

function TPrintDBGridEh.GridTextReplace(RichStrings: TStrings;
  const SearchStr, ReplaceStr: string; StartPos, Length: Integer;
  Options: TSearchTypes; ReplaceAll: Boolean): Integer;
begin
  Result := -1;
  with TRichEditStrings(RichStrings) do
  begin
    while True do
    begin
      Result := RichEdit.FindText(SearchStr,StartPos,Length,Options);
      if Result <> -1 then
      begin
        RichEdit.SelStart := Result;
        RichEdit.SelLength := System.Length(SearchStr);
        RichEdit.SelText := ReplaceStr;
      end;
      if not ReplaceAll or (Result = -1) then Break;
    end;
  end;
end;

procedure TPrintDBGridEh.SetSubstitutes(ASubstitutes: array of const);
var i:Integer;
begin
  if FSubstitutesNames = nil then
  begin
    FSubstitutesNames := TStringList.Create;
    FSubstitutesValues := TStringList.Create;
  end;
  FSubstitutesNames.Clear;
  FSubstitutesValues.Clear;
  for i := 0 to High(ASubstitutes) div 2 do
  begin
    FSubstitutesNames.Add(String(ASubstitutes[i*2].VAnsiString));
    FSubstitutesValues.Add(String(ASubstitutes[i*2+1].VAnsiString));
  end;
end;

{ TPageParams }

procedure TPageParams.Assign(Source: TPersistent);
begin
  if Source is TPageParams then begin
    BottomMargin := TPageParams(Source).BottomMargin;
    LeftMargin := TPageParams(Source).LeftMargin;
    RightMargin := TPageParams(Source).RightMargin;
    TopMargin := TPageParams(Source).TopMargin;
//    Columns := TPageParams(Source).Columns;
//    ColumnSpace := TPageParams(Source).ColumnSpace;
  end
  else inherited Assign(Source);
end;

constructor TPageParams.Create;
begin
  inherited Create;
  BottomMargin := 2;
  LeftMargin := 2;
  RightMargin := 2;
  TopMargin := 2;
end;

procedure TPageParams.SetBottomMargin(const Value: Currency);
begin
  FBottomMargin := Value;
end;

(*procedure TPageParams.SetColumns(const Value: Integer);
begin
  FColumns := Value;
end;

procedure TPageParams.SetColumnSpace(const Value: Currency);
begin
  FColumnSpace := Value;
end;*)

procedure TPageParams.SetLeftMargin(const Value: Currency);
begin
  FLeftMargin := Value;
end;

procedure TPageParams.SetRightMargin(const Value: Currency);
begin
  FRightMargin := Value;
end;

procedure TPageParams.SetTopMargin(const Value: Currency);
begin
  FTopMargin := Value;
end;

{ TPageColontitle }

procedure TPageColontitle.Assign(Source: TPersistent);
begin
  if Source is TPageColontitle then begin
    LeftText := TPageColontitle(Source).LeftText;
    CenterText := TPageColontitle(Source).CenterText;
    RightText := TPageColontitle(Source).RightText;
    Font := TPageColontitle(Source).Font;
  end
  else inherited Assign(Source);
end;

constructor TPageColontitle.Create;
begin
  inherited Create;
  FFont := TFont.Create;
  FCenterText := TStringList.Create;
  FLeftText := TStringList.Create;
  FRightText := TStringList.Create;
end;

destructor TPageColontitle.Destroy;
begin
  Font.Free;
  FCenterText.Free;
  FLeftText.Free;
  FRightText.Free;
  inherited Destroy;
end;

procedure TPageColontitle.SetCenterText(const Value: TStrings);
begin
  FCenterText.Assign(Value);
end;

procedure TPageColontitle.SetFont(const Value: TFont);
begin
  FFont.Assign(Value);
end;

procedure TPageColontitle.SetLeftText(const Value: TStrings);
begin
  FLeftText.Assign(Value);
end;

procedure TPageColontitle.SetLineType(const Value: TPageColontitleLineType);
begin
  FLineType := Value;
end;

procedure TPageColontitle.SetRightText(const Value: TStrings);
begin
  FRightText.Assign(Value);
end;

initialization
 GetCheckSize;
end.
