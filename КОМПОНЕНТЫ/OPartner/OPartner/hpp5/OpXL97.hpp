// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpXL97.pas' rev: 5.00

#ifndef OpXL97HPP
#define OpXL97HPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <OpVBId97.hpp>	// Pascal unit
#include <OpOfc97.hpp>	// Pascal unit
#include <StdVCL.hpp>	// Pascal unit
#include <OleCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Opxl97
{
//-- type declarations -------------------------------------------------------
typedef Activex::TOleEnum Constants;

typedef Activex::TOleEnum XlCreator;

typedef Activex::TOleEnum XlChartGallery;

typedef Activex::TOleEnum XlColorIndex;

typedef Activex::TOleEnum XlEndStyleCap;

typedef Activex::TOleEnum XlRowCol;

typedef Activex::TOleEnum XlScaleType;

typedef Activex::TOleEnum XlDataSeriesType;

typedef Activex::TOleEnum XlAxisCrosses;

typedef Activex::TOleEnum XlAxisGroup;

typedef Activex::TOleEnum XlBackground;

typedef Activex::TOleEnum XlWindowState;

typedef Activex::TOleEnum XlAxisType;

typedef Activex::TOleEnum XlArrowHeadLength;

typedef Activex::TOleEnum XlVAlign;

typedef Activex::TOleEnum XlTickMark;

typedef Activex::TOleEnum XlErrorBarDirection;

typedef Activex::TOleEnum XlErrorBarInclude;

typedef Activex::TOleEnum XlDisplayBlanksAs;

typedef Activex::TOleEnum XlArrowHeadStyle;

typedef Activex::TOleEnum XlArrowHeadWidth;

typedef Activex::TOleEnum XlHAlign;

typedef Activex::TOleEnum XlTickLabelPosition;

typedef Activex::TOleEnum XlLegendPosition;

typedef Activex::TOleEnum XlChartPictureType;

typedef Activex::TOleEnum XlChartPicturePlacement;

typedef Activex::TOleEnum XlOrientation;

typedef Activex::TOleEnum XlTickLabelOrientation;

typedef Activex::TOleEnum XlBorderWeight;

typedef Activex::TOleEnum XlDataSeriesDate;

typedef Activex::TOleEnum XlUnderlineStyle;

typedef Activex::TOleEnum XlErrorBarType;

typedef Activex::TOleEnum XlTrendlineType;

typedef Activex::TOleEnum XlLineStyle;

typedef Activex::TOleEnum XlDataLabelsType;

typedef Activex::TOleEnum XlMarkerStyle;

typedef Activex::TOleEnum XlPictureConvertorType;

typedef Activex::TOleEnum XlPattern;

typedef Activex::TOleEnum XlChartSplitType;

typedef Activex::TOleEnum XlDataLabelPosition;

typedef Activex::TOleEnum XlTimeUnit;

typedef Activex::TOleEnum XlCategoryType;

typedef Activex::TOleEnum XlBarShape;

typedef Activex::TOleEnum XlChartType;

typedef Activex::TOleEnum XlChartItem;

typedef Activex::TOleEnum XlSizeRepresents;

typedef Activex::TOleEnum XlInsertShiftDirection;

typedef Activex::TOleEnum XlDeleteShiftDirection;

typedef Activex::TOleEnum XlDirection;

typedef Activex::TOleEnum XlConsolidationFunction;

typedef Activex::TOleEnum XlSheetType;

typedef Activex::TOleEnum XlLocationInTable;

typedef Activex::TOleEnum XlFindLookIn;

typedef Activex::TOleEnum XlWindowType;

typedef Activex::TOleEnum XlPivotFieldDataType;

typedef Activex::TOleEnum XlCopyPictureFormat;

typedef Activex::TOleEnum XlPivotTableSourceType;

typedef Activex::TOleEnum XlReferenceStyle;

typedef Activex::TOleEnum XlMSApplication;

typedef Activex::TOleEnum XlMouseButton;

typedef Activex::TOleEnum XlCutCopyMode;

typedef Activex::TOleEnum XlFillWith;

typedef Activex::TOleEnum XlFilterAction;

typedef Activex::TOleEnum XlOrder;

typedef Activex::TOleEnum XlLinkType;

typedef Activex::TOleEnum XlApplyNamesOrder;

typedef Activex::TOleEnum XlEnableCancelKey;

typedef Activex::TOleEnum XlPageBreak;

typedef Activex::TOleEnum XlOLEType;

typedef Activex::TOleEnum XlPageOrientation;

typedef Activex::TOleEnum XlLinkInfo;

typedef Activex::TOleEnum XlCommandUnderlines;

typedef Activex::TOleEnum XlOLEVerb;

typedef Activex::TOleEnum XlCalculation;

typedef Activex::TOleEnum XlFileAccess;

typedef Activex::TOleEnum XlEditionType;

typedef Activex::TOleEnum XlObjectSize;

typedef Activex::TOleEnum XlLookAt;

typedef Activex::TOleEnum XlMailSystem;

typedef Activex::TOleEnum XlLinkInfoType;

typedef Activex::TOleEnum XlCVError;

typedef Activex::TOleEnum XlEditionFormat;

typedef Activex::TOleEnum XlLink;

typedef Activex::TOleEnum XlCellType;

typedef Activex::TOleEnum XlArrangeStyle;

typedef Activex::TOleEnum XlMousePointer;

typedef Activex::TOleEnum XlEditionOptionsOption;

typedef Activex::TOleEnum XlAutoFillType;

typedef Activex::TOleEnum XlAutoFilterOperator;

typedef Activex::TOleEnum XlClipboardFormat;

typedef Activex::TOleEnum XlFileFormat;

typedef Activex::TOleEnum XlApplicationInternational;

typedef Activex::TOleEnum XlPageBreakExtent;

typedef Activex::TOleEnum XlCellInsertionMode;

typedef Activex::TOleEnum XlFormulaLabel;

typedef Activex::TOleEnum XlHighlightChangesTime;

typedef Activex::TOleEnum XlCommentDisplayMode;

typedef Activex::TOleEnum XlFormatConditionType;

typedef Activex::TOleEnum XlFormatConditionOperator;

typedef Activex::TOleEnum XlEnableSelection;

typedef Activex::TOleEnum XlDVType;

typedef Activex::TOleEnum XlIMEMode;

typedef Activex::TOleEnum XlDVAlertStyle;

typedef Activex::TOleEnum XlChartLocation;

typedef Activex::TOleEnum XlPaperSize;

typedef Activex::TOleEnum XlPasteSpecialOperation;

typedef Activex::TOleEnum XlPasteType;

typedef Activex::TOleEnum XlPhoneticCharacterType;

typedef Activex::TOleEnum XlPhoneticAlignment;

typedef Activex::TOleEnum XlPictureAppearance;

typedef Activex::TOleEnum XlPivotFieldOrientation;

typedef Activex::TOleEnum XlPivotFieldCalculation;

typedef Activex::TOleEnum XlPlacement;

typedef Activex::TOleEnum XlPlatform;

typedef Activex::TOleEnum XlPrintLocation;

typedef Activex::TOleEnum XlPriority;

typedef Activex::TOleEnum XlPTSelectionMode;

typedef Activex::TOleEnum XlRangeAutoFormat;

typedef Activex::TOleEnum XlReferenceType;

typedef Activex::TOleEnum XlRoutingSlipDelivery;

typedef Activex::TOleEnum XlRoutingSlipStatus;

typedef Activex::TOleEnum XlRunAutoMacro;

typedef Activex::TOleEnum XlSaveAction;

typedef Activex::TOleEnum XlSaveAsAccessMode;

typedef Activex::TOleEnum XlSaveConflictResolution;

typedef Activex::TOleEnum XlSearchDirection;

typedef Activex::TOleEnum XlSearchOrder;

typedef Activex::TOleEnum XlSheetVisibility;

typedef Activex::TOleEnum XlSortMethod;

typedef Activex::TOleEnum XlSortMethodOld;

typedef Activex::TOleEnum XlSortOrder;

typedef Activex::TOleEnum XlSortOrientation;

typedef Activex::TOleEnum XlSortType;

typedef Activex::TOleEnum XlSpecialCellsValue;

typedef Activex::TOleEnum XlSubscribeToFormat;

typedef Activex::TOleEnum XlSummaryRow;

typedef Activex::TOleEnum XlSummaryColumn;

typedef Activex::TOleEnum XlSummaryReportType;

typedef Activex::TOleEnum XlTabPosition;

typedef Activex::TOleEnum XlTextParsingType;

typedef Activex::TOleEnum XlTextQualifier;

typedef Activex::TOleEnum XlWBATemplate;

typedef Activex::TOleEnum XlWindowView;

typedef Activex::TOleEnum XlXLMMacroType;

typedef Activex::TOleEnum XlYesNoGuess;

typedef Activex::TOleEnum XlDisplayShapes;

typedef Activex::TOleEnum XlBordersIndex;

typedef Activex::TOleEnum XlToolbarProtection;

typedef Activex::TOleEnum XlBuiltInDialog;

typedef Activex::TOleEnum XlParameterType;

typedef Activex::TOleEnum XlParameterDataType;

typedef Activex::TOleEnum XlFormControl;

__dispinterface _QueryTable;
typedef System::DelphiInterface<_QueryTable> _di__QueryTable;
__interface _Application;
typedef System::DelphiInterface<_Application> _di__Application;
__dispinterface Range;
typedef System::DelphiInterface<Range> _di_Range;
__interface _Chart;
typedef System::DelphiInterface<_Chart> _di__Chart;
__dispinterface DialogSheet;
typedef System::DelphiInterface<DialogSheet> _di_DialogSheet;
__dispinterface MenuBar;
typedef System::DelphiInterface<MenuBar> _di_MenuBar;
__dispinterface Window_;
typedef System::DelphiInterface<Window_> _di_Window_;
__interface _Workbook;
typedef System::DelphiInterface<_Workbook> _di__Workbook;
__dispinterface AddIns;
typedef System::DelphiInterface<AddIns> _di_AddIns;
__interface Sheets;
typedef System::DelphiInterface<Sheets> _di_Sheets;
__dispinterface MenuBars;
typedef System::DelphiInterface<MenuBars> _di_MenuBars;
__dispinterface Modules;
typedef System::DelphiInterface<Modules> _di_Modules;
__dispinterface Names;
typedef System::DelphiInterface<Names> _di_Names;
__dispinterface Menu;
typedef System::DelphiInterface<Menu> _di_Menu;
__dispinterface Toolbars;
typedef System::DelphiInterface<Toolbars> _di_Toolbars;
__dispinterface Windows;
typedef System::DelphiInterface<Windows> _di_Windows;
__interface Workbooks;
typedef System::DelphiInterface<Workbooks> _di_Workbooks;
__dispinterface WorksheetFunction;
typedef System::DelphiInterface<WorksheetFunction> _di_WorksheetFunction;
__dispinterface AutoCorrect;
typedef System::DelphiInterface<AutoCorrect> _di_AutoCorrect;
__dispinterface Dialogs;
typedef System::DelphiInterface<Dialogs> _di_Dialogs;
__dispinterface RecentFiles;
typedef System::DelphiInterface<RecentFiles> _di_RecentFiles;
__dispinterface ODBCErrors;
typedef System::DelphiInterface<ODBCErrors> _di_ODBCErrors;
__interface INTERFACE_UUID("{000208D5-0000-0000-C000-000000000046}") _Application  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(Activex::TOleEnum &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di__Application &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveCell(_di_Range &Get_ActiveCell_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveChart(_di__Chart &Get_ActiveChart_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveDialog(_di_DialogSheet &Get_ActiveDialog_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveMenuBar(_di_MenuBar &Get_ActiveMenuBar_result) = 0 ;
	virtual HRESULT __safecall Get_ActivePrinter(int lcid, WideString &Get_ActivePrinter_result) = 0 ;
	virtual HRESULT __safecall Set_ActivePrinter(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_ActiveSheet(_di_IDispatch &Get_ActiveSheet_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveWindow(_di_Window_ &Get_ActiveWindow_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveWorkbook(_di__Workbook &Get_ActiveWorkbook_result) = 0 ;
	virtual HRESULT __safecall Get_AddIns(_di_AddIns &Get_AddIns_result) = 0 ;
	virtual HRESULT __safecall Get_Assistant(Opofc97::_di_Assistant &Get_Assistant_result) = 0 ;
	virtual HRESULT __safecall Calculate(int lcid) = 0 ;
	virtual HRESULT __safecall Get_Cells(_di_Range &Get_Cells_result) = 0 ;
	virtual HRESULT __safecall Get_Charts(_di_Sheets &Get_Charts_result) = 0 ;
	virtual HRESULT __safecall Get_Columns(_di_Range &Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Get_CommandBars(Opofc97::_di_CommandBars &Get_CommandBars_result) = 0 ;
	virtual HRESULT __safecall Get_DDEAppReturnCode(int lcid, int &Get_DDEAppReturnCode_result) = 0 ;
	virtual HRESULT __safecall DDEExecute(int Channel, const WideString String_, int lcid) = 0 ;
	virtual HRESULT __safecall DDEInitiate(const WideString App, const WideString Topic, int lcid, int &DDEInitiate_result
		) = 0 ;
	virtual HRESULT __safecall DDEPoke(int Channel, const OleVariant Item, const OleVariant Data, int lcid
		) = 0 ;
	virtual HRESULT __safecall DDERequest(int Channel, const WideString Item, int lcid, OleVariant &DDERequest_result
		) = 0 ;
	virtual HRESULT __safecall DDETerminate(int Channel, int lcid) = 0 ;
	virtual HRESULT __safecall Get_DialogSheets(_di_Sheets &Get_DialogSheets_result) = 0 ;
	virtual HRESULT __safecall Evaluate(const OleVariant Name, int lcid, OleVariant &Evaluate_result) = 0 
		;
	virtual HRESULT __safecall _Evaluate(const OleVariant Name, int lcid, OleVariant &_Evaluate_result)
		 = 0 ;
	virtual HRESULT __safecall ExecuteExcel4Macro(const WideString String_, int lcid, OleVariant &ExecuteExcel4Macro_result
		) = 0 ;
	virtual HRESULT __safecall Intersect(const _di_Range Arg1, const _di_Range Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, int lcid, _di_Range &Intersect_result) = 0 ;
	virtual HRESULT __safecall Get_MenuBars(_di_MenuBars &Get_MenuBars_result) = 0 ;
	virtual HRESULT __safecall Get_Modules(_di_Modules &Get_Modules_result) = 0 ;
	virtual HRESULT __safecall Get_Names(_di_Names &Get_Names_result) = 0 ;
	virtual HRESULT __safecall Get_Range(const OleVariant Cell1, const OleVariant Cell2, _di_Range &Get_Range_result
		) = 0 ;
	virtual HRESULT __safecall Get_Rows(_di_Range &Get_Rows_result) = 0 ;
	virtual HRESULT __safecall Run(const OleVariant Macro, const OleVariant Arg1, const OleVariant Arg2
		, const OleVariant Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const 
		OleVariant Arg7, const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant 
		Arg11, const OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15
		, const OleVariant Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, 
		const OleVariant Arg20, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const 
		OleVariant Arg24, const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant 
		Arg28, const OleVariant Arg29, const OleVariant Arg30, OleVariant &Run_result) = 0 ;
	virtual HRESULT __safecall _Run2(const OleVariant Macro, const OleVariant Arg1, const OleVariant Arg2
		, const OleVariant Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const 
		OleVariant Arg7, const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant 
		Arg11, const OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15
		, const OleVariant Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, 
		const OleVariant Arg20, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const 
		OleVariant Arg24, const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant 
		Arg28, const OleVariant Arg29, const OleVariant Arg30, int lcid, OleVariant &_Run2_result) = 0 ;
	virtual HRESULT __safecall Get_Selection(int lcid, _di_IDispatch &Get_Selection_result) = 0 ;
	virtual HRESULT __safecall SendKeys(const OleVariant Keys, const OleVariant Wait, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Sheets(_di_Sheets &Get_Sheets_result) = 0 ;
	virtual HRESULT __safecall Get_ShortcutMenus(int Index, _di_Menu &Get_ShortcutMenus_result) = 0 ;
	virtual HRESULT __safecall Get_ThisWorkbook(int lcid, _di__Workbook &Get_ThisWorkbook_result) = 0 ;
		
	virtual HRESULT __safecall Get_Toolbars(_di_Toolbars &Get_Toolbars_result) = 0 ;
	virtual HRESULT __safecall Union(const _di_Range Arg1, const _di_Range Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, int lcid, _di_Range &Union_result) = 0 ;
	virtual HRESULT __safecall Get_Windows(_di_Windows &Get_Windows_result) = 0 ;
	virtual HRESULT __safecall Get_Workbooks(_di_Workbooks &Get_Workbooks_result) = 0 ;
	virtual HRESULT __safecall Get_WorksheetFunction(_di_WorksheetFunction &Get_WorksheetFunction_result
		) = 0 ;
	virtual HRESULT __safecall Get_Worksheets(_di_Sheets &Get_Worksheets_result) = 0 ;
	virtual HRESULT __safecall Get_Excel4IntlMacroSheets(_di_Sheets &Get_Excel4IntlMacroSheets_result) = 0 
		;
	virtual HRESULT __safecall Get_Excel4MacroSheets(_di_Sheets &Get_Excel4MacroSheets_result) = 0 ;
	virtual HRESULT __safecall ActivateMicrosoftApp(Activex::TOleEnum Index, int lcid) = 0 ;
	virtual HRESULT __safecall AddChartAutoFormat(const OleVariant Chart, const WideString Name, const 
		OleVariant Description, int lcid) = 0 ;
	virtual HRESULT __safecall AddCustomList(const OleVariant ListArray, const OleVariant ByRow, int lcid
		) = 0 ;
	virtual HRESULT __safecall Get_AlertBeforeOverwriting(int lcid, Word &Get_AlertBeforeOverwriting_result
		) = 0 ;
	virtual HRESULT __safecall Set_AlertBeforeOverwriting(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_AltStartupPath(int lcid, WideString &Get_AltStartupPath_result) = 0 
		;
	virtual HRESULT __safecall Set_AltStartupPath(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_AskToUpdateLinks(int lcid, Word &Get_AskToUpdateLinks_result) = 0 ;
	virtual HRESULT __safecall Set_AskToUpdateLinks(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableAnimations(int lcid, Word &Get_EnableAnimations_result) = 0 ;
	virtual HRESULT __safecall Set_EnableAnimations(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_AutoCorrect(_di_AutoCorrect &Get_AutoCorrect_result) = 0 ;
	virtual HRESULT __safecall Get_Build(int lcid, int &Get_Build_result) = 0 ;
	virtual HRESULT __safecall Get_CalculateBeforeSave(int lcid, Word &Get_CalculateBeforeSave_result) = 0 
		;
	virtual HRESULT __safecall Set_CalculateBeforeSave(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Calculation(int lcid, Activex::TOleEnum &Get_Calculation_result) = 0 
		;
	virtual HRESULT __safecall Set_Calculation(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_Caller(const OleVariant Index, int lcid, OleVariant &Get_Caller_result
		) = 0 ;
	virtual HRESULT __safecall Get_CanPlaySounds(int lcid, Word &Get_CanPlaySounds_result) = 0 ;
	virtual HRESULT __safecall Get_CanRecordSounds(int lcid, Word &Get_CanRecordSounds_result) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_CellDragAndDrop(int lcid, Word &Get_CellDragAndDrop_result) = 0 ;
	virtual HRESULT __safecall Set_CellDragAndDrop(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall CentimetersToPoints(double Centimeters, int lcid, double &CentimetersToPoints_result
		) = 0 ;
	virtual HRESULT __safecall CheckSpelling(const WideString Word, const OleVariant CustomDictionary, 
		const OleVariant IgnoreUppercase, int lcid, Word &CheckSpelling_result) = 0 ;
	virtual HRESULT __safecall Get_ClipboardFormats(const OleVariant Index, int lcid, OleVariant &Get_ClipboardFormats_result
		) = 0 ;
	virtual HRESULT __safecall Get_DisplayClipboardWindow(int lcid, Word &Get_DisplayClipboardWindow_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayClipboardWindow(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_ColorButtons(Word &Get_ColorButtons_result) = 0 ;
	virtual HRESULT __safecall Set_ColorButtons(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_CommandUnderlines(int lcid, Activex::TOleEnum &Get_CommandUnderlines_result
		) = 0 ;
	virtual HRESULT __safecall Set_CommandUnderlines(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_ConstrainNumeric(int lcid, Word &Get_ConstrainNumeric_result) = 0 ;
	virtual HRESULT __safecall Set_ConstrainNumeric(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall ConvertFormula(const OleVariant Formula, Activex::TOleEnum FromReferenceStyle
		, const OleVariant ToReferenceStyle, const OleVariant ToAbsolute, const OleVariant RelativeTo, int 
		lcid, OleVariant &ConvertFormula_result) = 0 ;
	virtual HRESULT __safecall Get_CopyObjectsWithCells(int lcid, Word &Get_CopyObjectsWithCells_result
		) = 0 ;
	virtual HRESULT __safecall Set_CopyObjectsWithCells(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Cursor(int lcid, Activex::TOleEnum &Get_Cursor_result) = 0 ;
	virtual HRESULT __safecall Set_Cursor(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_CustomListCount(int lcid, int &Get_CustomListCount_result) = 0 ;
	virtual HRESULT __safecall Get_CutCopyMode(int lcid, Activex::TOleEnum &Get_CutCopyMode_result) = 0 
		;
	virtual HRESULT __safecall Set_CutCopyMode(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_DataEntryMode(int lcid, int &Get_DataEntryMode_result) = 0 ;
	virtual HRESULT __safecall Set_DataEntryMode(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Dummy1(void) = 0 ;
	virtual HRESULT __safecall Dummy2(void) = 0 ;
	virtual HRESULT __safecall Dummy3(void) = 0 ;
	virtual HRESULT __safecall Dummy4(void) = 0 ;
	virtual HRESULT __safecall Dummy5(void) = 0 ;
	virtual HRESULT __safecall Dummy6(void) = 0 ;
	virtual HRESULT __safecall Dummy7(void) = 0 ;
	virtual HRESULT __safecall Dummy8(void) = 0 ;
	virtual HRESULT __safecall Dummy9(void) = 0 ;
	virtual HRESULT __safecall Dummy10(void) = 0 ;
	virtual HRESULT __safecall Dummy11(void) = 0 ;
	virtual HRESULT __safecall Get__Default(WideString &Get__Default_result) = 0 ;
	virtual HRESULT __safecall Get_DefaultFilePath(int lcid, WideString &Get_DefaultFilePath_result) = 0 
		;
	virtual HRESULT __safecall Set_DefaultFilePath(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall DeleteChartAutoFormat(const WideString Name, int lcid) = 0 ;
	virtual HRESULT __safecall DeleteCustomList(int ListNum, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Dialogs(_di_Dialogs &Get_Dialogs_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayAlerts(int lcid, Word &Get_DisplayAlerts_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayAlerts(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayFormulaBar(int lcid, Word &Get_DisplayFormulaBar_result) = 0 
		;
	virtual HRESULT __safecall Set_DisplayFormulaBar(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayFullScreen(int lcid, Word &Get_DisplayFullScreen_result) = 0 
		;
	virtual HRESULT __safecall Set_DisplayFullScreen(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayNoteIndicator(Word &Get_DisplayNoteIndicator_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayNoteIndicator(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayCommentIndicator(Activex::TOleEnum &Get_DisplayCommentIndicator_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayCommentIndicator(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayExcel4Menus(int lcid, Word &Get_DisplayExcel4Menus_result) = 0 
		;
	virtual HRESULT __safecall Set_DisplayExcel4Menus(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayRecentFiles(Word &Get_DisplayRecentFiles_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayRecentFiles(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayScrollBars(int lcid, Word &Get_DisplayScrollBars_result) = 0 
		;
	virtual HRESULT __safecall Set_DisplayScrollBars(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayStatusBar(int lcid, Word &Get_DisplayStatusBar_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayStatusBar(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall DoubleClick(int lcid) = 0 ;
	virtual HRESULT __safecall Get_EditDirectlyInCell(int lcid, Word &Get_EditDirectlyInCell_result) = 0 
		;
	virtual HRESULT __safecall Set_EditDirectlyInCell(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableAutoComplete(Word &Get_EnableAutoComplete_result) = 0 ;
	virtual HRESULT __safecall Set_EnableAutoComplete(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableCancelKey(int lcid, Activex::TOleEnum &Get_EnableCancelKey_result
		) = 0 ;
	virtual HRESULT __safecall Set_EnableCancelKey(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableSound(Word &Get_EnableSound_result) = 0 ;
	virtual HRESULT __safecall Set_EnableSound(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableTipWizard(int lcid, Word &Get_EnableTipWizard_result) = 0 ;
	virtual HRESULT __safecall Set_EnableTipWizard(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_FileConverters(const OleVariant Index1, const OleVariant Index2, int 
		lcid, OleVariant &Get_FileConverters_result) = 0 ;
	virtual HRESULT __safecall Get_FileSearch(Opofc97::_di_FileSearch &Get_FileSearch_result) = 0 ;
	virtual HRESULT __safecall Get_FileFind(Opofc97::_di_IFind &Get_FileFind_result) = 0 ;
	virtual HRESULT __safecall FindFile(int lcid) = 0 ;
	virtual HRESULT __safecall Get_FixedDecimal(int lcid, Word &Get_FixedDecimal_result) = 0 ;
	virtual HRESULT __safecall Set_FixedDecimal(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_FixedDecimalPlaces(int lcid, int &Get_FixedDecimalPlaces_result) = 0 
		;
	virtual HRESULT __safecall Set_FixedDecimalPlaces(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall GetCustomListContents(int ListNum, int lcid, OleVariant &GetCustomListContents_result
		) = 0 ;
	virtual HRESULT __safecall GetCustomListNum(const OleVariant ListArray, int lcid, int &GetCustomListNum_result
		) = 0 ;
	virtual HRESULT __safecall GetOpenFilename(const OleVariant FileFilter, const OleVariant FilterIndex
		, const OleVariant Title, const OleVariant ButtonText, const OleVariant MultiSelect, int lcid, OleVariant &GetOpenFilename_result
		) = 0 ;
	virtual HRESULT __safecall GetSaveAsFilename(const OleVariant InitialFilename, const OleVariant FileFilter
		, const OleVariant FilterIndex, const OleVariant Title, const OleVariant ButtonText, int lcid, OleVariant &GetSaveAsFilename_result
		) = 0 ;
	virtual HRESULT __safecall Goto_(const OleVariant Reference, const OleVariant Scroll, int lcid) = 0 
		;
	virtual HRESULT __safecall Get_Height(int lcid, double &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Help(const OleVariant HelpFile, const OleVariant HelpContextID, int lcid
		) = 0 ;
	virtual HRESULT __safecall Get_IgnoreRemoteRequests(int lcid, Word &Get_IgnoreRemoteRequests_result
		) = 0 ;
	virtual HRESULT __safecall Set_IgnoreRemoteRequests(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall InchesToPoints(double Inches, int lcid, double &InchesToPoints_result) = 0 
		;
	virtual HRESULT __safecall InputBox(const WideString Prompt, const OleVariant Title, const OleVariant 
		Default, const OleVariant Left, const OleVariant Top, const OleVariant HelpFile, const OleVariant 
		HelpContextID, const OleVariant Type_, int lcid, OleVariant &InputBox_result) = 0 ;
	virtual HRESULT __safecall Get_Interactive(int lcid, Word &Get_Interactive_result) = 0 ;
	virtual HRESULT __safecall Set_Interactive(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_International(const OleVariant Index, int lcid, OleVariant &Get_International_result
		) = 0 ;
	virtual HRESULT __safecall Get_Iteration(int lcid, Word &Get_Iteration_result) = 0 ;
	virtual HRESULT __safecall Set_Iteration(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_LargeButtons(Word &Get_LargeButtons_result) = 0 ;
	virtual HRESULT __safecall Set_LargeButtons(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Left(int lcid, double &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Get_LibraryPath(int lcid, WideString &Get_LibraryPath_result) = 0 ;
	virtual HRESULT __safecall MacroOptions(const OleVariant Macro, const OleVariant Description, const 
		OleVariant HasMenu, const OleVariant MenuText, const OleVariant HasShortcutKey, const OleVariant ShortcutKey
		, const OleVariant Category, const OleVariant StatusBar, const OleVariant HelpContextID, const OleVariant 
		HelpFile, int lcid) = 0 ;
	virtual HRESULT __safecall MailLogoff(int lcid) = 0 ;
	virtual HRESULT __safecall MailLogon(const OleVariant Name, const OleVariant Password, const OleVariant 
		DownloadNewMail, int lcid) = 0 ;
	virtual HRESULT __safecall Get_MailSession(int lcid, OleVariant &Get_MailSession_result) = 0 ;
	virtual HRESULT __safecall Get_MailSystem(int lcid, Activex::TOleEnum &Get_MailSystem_result) = 0 ;
		
	virtual HRESULT __safecall Get_MathCoprocessorAvailable(int lcid, Word &Get_MathCoprocessorAvailable_result
		) = 0 ;
	virtual HRESULT __safecall Get_MaxChange(int lcid, double &Get_MaxChange_result) = 0 ;
	virtual HRESULT __safecall Set_MaxChange(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Get_MaxIterations(int lcid, int &Get_MaxIterations_result) = 0 ;
	virtual HRESULT __safecall Set_MaxIterations(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_MemoryFree(int lcid, int &Get_MemoryFree_result) = 0 ;
	virtual HRESULT __safecall Get_MemoryTotal(int lcid, int &Get_MemoryTotal_result) = 0 ;
	virtual HRESULT __safecall Get_MemoryUsed(int lcid, int &Get_MemoryUsed_result) = 0 ;
	virtual HRESULT __safecall Get_MouseAvailable(int lcid, Word &Get_MouseAvailable_result) = 0 ;
	virtual HRESULT __safecall Get_MoveAfterReturn(int lcid, Word &Get_MoveAfterReturn_result) = 0 ;
	virtual HRESULT __safecall Set_MoveAfterReturn(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_MoveAfterReturnDirection(int lcid, Activex::TOleEnum &Get_MoveAfterReturnDirection_result
		) = 0 ;
	virtual HRESULT __safecall Set_MoveAfterReturnDirection(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_RecentFiles(_di_RecentFiles &Get_RecentFiles_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall NextLetter(int lcid, _di__Workbook &NextLetter_result) = 0 ;
	virtual HRESULT __safecall Get_NetworkTemplatesPath(int lcid, WideString &Get_NetworkTemplatesPath_result
		) = 0 ;
	virtual HRESULT __safecall Get_ODBCErrors(_di_ODBCErrors &Get_ODBCErrors_result) = 0 ;
	virtual HRESULT __safecall Get_ODBCTimeout(int &Get_ODBCTimeout_result) = 0 ;
	virtual HRESULT __safecall Set_ODBCTimeout(int RHS) = 0 ;
	virtual HRESULT __safecall Get_OnCalculate(int lcid, WideString &Get_OnCalculate_result) = 0 ;
	virtual HRESULT __safecall Set_OnCalculate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnData(int lcid, WideString &Get_OnData_result) = 0 ;
	virtual HRESULT __safecall Set_OnData(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnDoubleClick(int lcid, WideString &Get_OnDoubleClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnDoubleClick(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnEntry(int lcid, WideString &Get_OnEntry_result) = 0 ;
	virtual HRESULT __safecall Set_OnEntry(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall OnKey(const WideString Key, const OleVariant Procedure_, int lcid) = 0 ;
		
	virtual HRESULT __safecall OnRepeat(const WideString Text, const WideString Procedure_, int lcid) = 0 
		;
	virtual HRESULT __safecall Get_OnSheetActivate(int lcid, WideString &Get_OnSheetActivate_result) = 0 
		;
	virtual HRESULT __safecall Set_OnSheetActivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnSheetDeactivate(int lcid, WideString &Get_OnSheetDeactivate_result
		) = 0 ;
	virtual HRESULT __safecall Set_OnSheetDeactivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall OnTime(const OleVariant EarliestTime, const WideString Procedure_, const 
		OleVariant LatestTime, const OleVariant Schedule, int lcid) = 0 ;
	virtual HRESULT __safecall OnUndo(const WideString Text, const WideString Procedure_, int lcid) = 0 
		;
	virtual HRESULT __safecall Get_OnWindow(int lcid, WideString &Get_OnWindow_result) = 0 ;
	virtual HRESULT __safecall Set_OnWindow(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OperatingSystem(int lcid, WideString &Get_OperatingSystem_result) = 0 
		;
	virtual HRESULT __safecall Get_OrganizationName(int lcid, WideString &Get_OrganizationName_result) = 0 
		;
	virtual HRESULT __safecall Get_Path(int lcid, WideString &Get_Path_result) = 0 ;
	virtual HRESULT __safecall Get_PathSeparator(int lcid, WideString &Get_PathSeparator_result) = 0 ;
	virtual HRESULT __safecall Get_PreviousSelections(const OleVariant Index, int lcid, OleVariant &Get_PreviousSelections_result
		) = 0 ;
	virtual HRESULT __safecall Get_PivotTableSelection(Word &Get_PivotTableSelection_result) = 0 ;
	virtual HRESULT __safecall Set_PivotTableSelection(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_PromptForSummaryInfo(int lcid, Word &Get_PromptForSummaryInfo_result
		) = 0 ;
	virtual HRESULT __safecall Set_PromptForSummaryInfo(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Quit(void) = 0 ;
	virtual HRESULT __safecall RecordMacro(const OleVariant BasicCode, const OleVariant XlmCode, int lcid
		) = 0 ;
	virtual HRESULT __safecall Get_RecordRelative(int lcid, Word &Get_RecordRelative_result) = 0 ;
	virtual HRESULT __safecall Get_ReferenceStyle(int lcid, Activex::TOleEnum &Get_ReferenceStyle_result
		) = 0 ;
	virtual HRESULT __safecall Set_ReferenceStyle(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_RegisteredFunctions(const OleVariant Index1, const OleVariant Index2
		, int lcid, OleVariant &Get_RegisteredFunctions_result) = 0 ;
	virtual HRESULT __safecall RegisterXLL(const WideString Filename, int lcid, Word &RegisterXLL_result
		) = 0 ;
	virtual HRESULT __safecall Repeat_(int lcid) = 0 ;
	virtual HRESULT __safecall ResetTipWizard(int lcid) = 0 ;
	virtual HRESULT __safecall Get_RollZoom(Word &Get_RollZoom_result) = 0 ;
	virtual HRESULT __safecall Set_RollZoom(Word RHS) = 0 ;
	virtual HRESULT __safecall Save(const OleVariant Filename, int lcid) = 0 ;
	virtual HRESULT __safecall SaveWorkspace(const OleVariant Filename, int lcid) = 0 ;
	virtual HRESULT __safecall Get_ScreenUpdating(int lcid, Word &Get_ScreenUpdating_result) = 0 ;
	virtual HRESULT __safecall Set_ScreenUpdating(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall SetDefaultChart(const OleVariant FormatName, const OleVariant Gallery) = 0 
		;
	virtual HRESULT __safecall Get_SheetsInNewWorkbook(int lcid, int &Get_SheetsInNewWorkbook_result) = 0 
		;
	virtual HRESULT __safecall Set_SheetsInNewWorkbook(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_ShowChartTipNames(Word &Get_ShowChartTipNames_result) = 0 ;
	virtual HRESULT __safecall Set_ShowChartTipNames(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_ShowChartTipValues(Word &Get_ShowChartTipValues_result) = 0 ;
	virtual HRESULT __safecall Set_ShowChartTipValues(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_StandardFont(int lcid, WideString &Get_StandardFont_result) = 0 ;
	virtual HRESULT __safecall Set_StandardFont(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_StandardFontSize(int lcid, double &Get_StandardFontSize_result) = 0 
		;
	virtual HRESULT __safecall Set_StandardFontSize(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Get_StartupPath(int lcid, WideString &Get_StartupPath_result) = 0 ;
	virtual HRESULT __safecall Get_StatusBar(int lcid, OleVariant &Get_StatusBar_result) = 0 ;
	virtual HRESULT __safecall Set_StatusBar(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __safecall Get_TemplatesPath(int lcid, WideString &Get_TemplatesPath_result) = 0 ;
	virtual HRESULT __safecall Get_ShowToolTips(Word &Get_ShowToolTips_result) = 0 ;
	virtual HRESULT __safecall Set_ShowToolTips(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Top(int lcid, double &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Get_DefaultSaveFormat(Activex::TOleEnum &Get_DefaultSaveFormat_result) = 0 
		;
	virtual HRESULT __safecall Set_DefaultSaveFormat(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_TransitionMenuKey(int lcid, WideString &Get_TransitionMenuKey_result
		) = 0 ;
	virtual HRESULT __safecall Set_TransitionMenuKey(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_TransitionMenuKeyAction(int lcid, int &Get_TransitionMenuKeyAction_result
		) = 0 ;
	virtual HRESULT __safecall Set_TransitionMenuKeyAction(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_TransitionNavigKeys(int lcid, Word &Get_TransitionNavigKeys_result) = 0 
		;
	virtual HRESULT __safecall Set_TransitionNavigKeys(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Undo(int lcid) = 0 ;
	virtual HRESULT __safecall Get_UsableHeight(int lcid, double &Get_UsableHeight_result) = 0 ;
	virtual HRESULT __safecall Get_UsableWidth(int lcid, double &Get_UsableWidth_result) = 0 ;
	virtual HRESULT __safecall Get_UserControl(Word &Get_UserControl_result) = 0 ;
	virtual HRESULT __safecall Set_UserControl(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_UserName(int lcid, WideString &Get_UserName_result) = 0 ;
	virtual HRESULT __safecall Set_UserName(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Get_VBE(Opvbid97::_di_VBE &Get_VBE_result) = 0 ;
	virtual HRESULT __safecall Get_Version(int lcid, WideString &Get_Version_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(int lcid, Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Volatile(const OleVariant Volatile, int lcid) = 0 ;
	virtual HRESULT __safecall Wait(const OleVariant Time, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Width(int lcid, double &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall Get_WindowsForPens(int lcid, Word &Get_WindowsForPens_result) = 0 ;
	virtual HRESULT __safecall Get_WindowState(int lcid, Activex::TOleEnum &Get_WindowState_result) = 0 
		;
	virtual HRESULT __safecall Set_WindowState(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_UILanguage(int lcid, int &Get_UILanguage_result) = 0 ;
	virtual HRESULT __safecall Set_UILanguage(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_DefaultSheetDirection(int lcid, int &Get_DefaultSheetDirection_result
		) = 0 ;
	virtual HRESULT __safecall Set_DefaultSheetDirection(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_CursorMovement(int lcid, int &Get_CursorMovement_result) = 0 ;
	virtual HRESULT __safecall Set_CursorMovement(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_ControlCharacters(int lcid, int &Get_ControlCharacters_result) = 0 ;
		
	virtual HRESULT __safecall Set_ControlCharacters(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall _WSFunction(const OleVariant Arg1, const OleVariant Arg2, const OleVariant 
		Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, 
		const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const 
		OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant 
		Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20
		, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, 
		const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const 
		OleVariant Arg29, const OleVariant Arg30, int lcid, OleVariant &_WSFunction_result) = 0 ;
	virtual HRESULT __safecall Get_EnableEvents(Word &Get_EnableEvents_result) = 0 ;
	virtual HRESULT __safecall Set_EnableEvents(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_DisplayInfoWindow(Word &Get_DisplayInfoWindow_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayInfoWindow(Word RHS) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Creator() { Activex::TOleEnum r; HRESULT hr = Get_Creator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Parent() { _di__Application r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_ActiveCell() { _di_Range r; HRESULT hr = Get_ActiveCell(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range ActiveCell = {read=_scw_Get_ActiveCell};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Chart _scw_Get_ActiveChart() { _di__Chart r; HRESULT hr = Get_ActiveChart(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Chart ActiveChart = {read=_scw_Get_ActiveChart};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_DialogSheet _scw_Get_ActiveDialog() { _di_DialogSheet r; HRESULT hr = Get_ActiveDialog(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_DialogSheet ActiveDialog = {read=_scw_Get_ActiveDialog};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_MenuBar _scw_Get_ActiveMenuBar() { _di_MenuBar r; HRESULT hr = Get_ActiveMenuBar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_MenuBar ActiveMenuBar = {read=_scw_Get_ActiveMenuBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActivePrinter(int lcid) { WideString r; HRESULT hr = Get_ActivePrinter(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActivePrinter[int lcid] = {read=_scw_Get_ActivePrinter, write=Set_ActivePrinter
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_ActiveSheet() { _di_IDispatch r; HRESULT hr = Get_ActiveSheet(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch ActiveSheet = {read=_scw_Get_ActiveSheet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Window_ _scw_Get_ActiveWindow() { _di_Window_ r; HRESULT hr = Get_ActiveWindow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Window_ ActiveWindow = {read=_scw_Get_ActiveWindow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get_ActiveWorkbook() { _di__Workbook r; HRESULT hr = Get_ActiveWorkbook(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook ActiveWorkbook = {read=_scw_Get_ActiveWorkbook};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AddIns _scw_Get_AddIns() { _di_AddIns r; HRESULT hr = Get_AddIns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AddIns AddIns = {read=_scw_Get_AddIns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_Assistant _scw_Get_Assistant() { Opofc97::_di_Assistant r; HRESULT hr = Get_Assistant(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_Assistant Assistant = {read=_scw_Get_Assistant};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Cells() { _di_Range r; HRESULT hr = Get_Cells(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Cells = {read=_scw_Get_Cells};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Charts() { _di_Sheets r; HRESULT hr = Get_Charts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Charts = {read=_scw_Get_Charts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Columns() { _di_Range r; HRESULT hr = Get_Columns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range Columns = {read=_scw_Get_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_CommandBars _scw_Get_CommandBars() { Opofc97::_di_CommandBars r; HRESULT hr = Get_CommandBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_CommandBars CommandBars = {read=_scw_Get_CommandBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DDEAppReturnCode(int lcid) { int r; HRESULT hr = Get_DDEAppReturnCode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DDEAppReturnCode[int lcid] = {read=_scw_Get_DDEAppReturnCode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_DialogSheets() { _di_Sheets r; HRESULT hr = Get_DialogSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets DialogSheets = {read=_scw_Get_DialogSheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_MenuBars _scw_Get_MenuBars() { _di_MenuBars r; HRESULT hr = Get_MenuBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_MenuBars MenuBars = {read=_scw_Get_MenuBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Modules _scw_Get_Modules() { _di_Modules r; HRESULT hr = Get_Modules(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Modules Modules = {read=_scw_Get_Modules};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Names _scw_Get_Names() { _di_Names r; HRESULT hr = Get_Names(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Names Names = {read=_scw_Get_Names};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Range(const OleVariant Cell1, const OleVariant Cell2
		) { _di_Range r; HRESULT hr = Get_Range(Cell1, Cell2, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Range[OleVariant Cell1][OleVariant Cell2] = {read=_scw_Get_Range};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Rows() { _di_Range r; HRESULT hr = Get_Rows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Rows = {read=_scw_Get_Rows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Selection(int lcid) { _di_IDispatch r; HRESULT hr = Get_Selection(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Selection[int lcid] = {read=_scw_Get_Selection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Sheets() { _di_Sheets r; HRESULT hr = Get_Sheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Sheets = {read=_scw_Get_Sheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Menu _scw_Get_ShortcutMenus(int Index) { _di_Menu r; HRESULT hr = Get_ShortcutMenus(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Menu ShortcutMenus[int Index] = {read=_scw_Get_ShortcutMenus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get_ThisWorkbook(int lcid) { _di__Workbook r; HRESULT hr = Get_ThisWorkbook(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook ThisWorkbook[int lcid] = {read=_scw_Get_ThisWorkbook};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Toolbars _scw_Get_Toolbars() { _di_Toolbars r; HRESULT hr = Get_Toolbars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Toolbars Toolbars = {read=_scw_Get_Toolbars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Windows _scw_Get_Windows() { _di_Windows r; HRESULT hr = Get_Windows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Windows Windows = {read=_scw_Get_Windows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Workbooks _scw_Get_Workbooks() { _di_Workbooks r; HRESULT hr = Get_Workbooks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Workbooks Workbooks = {read=_scw_Get_Workbooks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_WorksheetFunction _scw_Get_WorksheetFunction() { _di_WorksheetFunction r; HRESULT hr = Get_WorksheetFunction(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_WorksheetFunction WorksheetFunction = {read=_scw_Get_WorksheetFunction};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Worksheets() { _di_Sheets r; HRESULT hr = Get_Worksheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Worksheets = {read=_scw_Get_Worksheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Excel4IntlMacroSheets() { _di_Sheets r; HRESULT hr = Get_Excel4IntlMacroSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Excel4IntlMacroSheets = {read=_scw_Get_Excel4IntlMacroSheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Excel4MacroSheets() { _di_Sheets r; HRESULT hr = Get_Excel4MacroSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Excel4MacroSheets = {read=_scw_Get_Excel4MacroSheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AlertBeforeOverwriting(int lcid) { Word r; HRESULT hr = Get_AlertBeforeOverwriting(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AlertBeforeOverwriting[int lcid] = {read=_scw_Get_AlertBeforeOverwriting, write=Set_AlertBeforeOverwriting
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AltStartupPath(int lcid) { WideString r; HRESULT hr = Get_AltStartupPath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AltStartupPath[int lcid] = {read=_scw_Get_AltStartupPath, write=Set_AltStartupPath
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AskToUpdateLinks(int lcid) { Word r; HRESULT hr = Get_AskToUpdateLinks(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AskToUpdateLinks[int lcid] = {read=_scw_Get_AskToUpdateLinks, write=Set_AskToUpdateLinks
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableAnimations(int lcid) { Word r; HRESULT hr = Get_EnableAnimations(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableAnimations[int lcid] = {read=_scw_Get_EnableAnimations, write=Set_EnableAnimations
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AutoCorrect _scw_Get_AutoCorrect() { _di_AutoCorrect r; HRESULT hr = Get_AutoCorrect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AutoCorrect AutoCorrect = {read=_scw_Get_AutoCorrect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Build(int lcid) { int r; HRESULT hr = Get_Build(lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Build[int lcid] = {read=_scw_Get_Build};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CalculateBeforeSave(int lcid) { Word r; HRESULT hr = Get_CalculateBeforeSave(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word CalculateBeforeSave[int lcid] = {read=_scw_Get_CalculateBeforeSave, write=Set_CalculateBeforeSave
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Calculation(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_Calculation(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Calculation[int lcid] = {read=_scw_Get_Calculation, write=Set_Calculation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Caller(const OleVariant Index, int lcid) { OleVariant r; HRESULT hr = Get_Caller(
		Index, lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Caller[OleVariant Index][int lcid] = {read=_scw_Get_Caller};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanPlaySounds(int lcid) { Word r; HRESULT hr = Get_CanPlaySounds(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word CanPlaySounds[int lcid] = {read=_scw_Get_CanPlaySounds};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanRecordSounds(int lcid) { Word r; HRESULT hr = Get_CanRecordSounds(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word CanRecordSounds[int lcid] = {read=_scw_Get_CanRecordSounds};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CellDragAndDrop(int lcid) { Word r; HRESULT hr = Get_CellDragAndDrop(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word CellDragAndDrop[int lcid] = {read=_scw_Get_CellDragAndDrop, write=Set_CellDragAndDrop
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_ClipboardFormats(const OleVariant Index, int lcid
		) { OleVariant r; HRESULT hr = Get_ClipboardFormats(Index, lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property OleVariant ClipboardFormats[OleVariant Index][int lcid] = {read=_scw_Get_ClipboardFormats
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayClipboardWindow(int lcid) { Word r; HRESULT hr = Get_DisplayClipboardWindow(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayClipboardWindow[int lcid] = {read=_scw_Get_DisplayClipboardWindow, write=Set_DisplayClipboardWindow
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ColorButtons() { Word r; HRESULT hr = Get_ColorButtons(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ColorButtons = {read=_scw_Get_ColorButtons, write=Set_ColorButtons};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_CommandUnderlines(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_CommandUnderlines(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum CommandUnderlines[int lcid] = {read=_scw_Get_CommandUnderlines, write=
		Set_CommandUnderlines};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ConstrainNumeric(int lcid) { Word r; HRESULT hr = Get_ConstrainNumeric(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ConstrainNumeric[int lcid] = {read=_scw_Get_ConstrainNumeric, write=Set_ConstrainNumeric
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CopyObjectsWithCells(int lcid) { Word r; HRESULT hr = Get_CopyObjectsWithCells(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word CopyObjectsWithCells[int lcid] = {read=_scw_Get_CopyObjectsWithCells, write=Set_CopyObjectsWithCells
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Cursor(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_Cursor(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Cursor[int lcid] = {read=_scw_Get_Cursor, write=Set_Cursor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CustomListCount(int lcid) { int r; HRESULT hr = Get_CustomListCount(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int CustomListCount[int lcid] = {read=_scw_Get_CustomListCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_CutCopyMode(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_CutCopyMode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum CutCopyMode[int lcid] = {read=_scw_Get_CutCopyMode, write=Set_CutCopyMode
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DataEntryMode(int lcid) { int r; HRESULT hr = Get_DataEntryMode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DataEntryMode[int lcid] = {read=_scw_Get_DataEntryMode, write=Set_DataEntryMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get__Default() { WideString r; HRESULT hr = Get__Default(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString _Default = {read=_scw_Get__Default};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_DefaultFilePath(int lcid) { WideString r; HRESULT hr = Get_DefaultFilePath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString DefaultFilePath[int lcid] = {read=_scw_Get_DefaultFilePath, write=Set_DefaultFilePath
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Dialogs _scw_Get_Dialogs() { _di_Dialogs r; HRESULT hr = Get_Dialogs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Dialogs Dialogs = {read=_scw_Get_Dialogs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayAlerts(int lcid) { Word r; HRESULT hr = Get_DisplayAlerts(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayAlerts[int lcid] = {read=_scw_Get_DisplayAlerts, write=Set_DisplayAlerts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayFormulaBar(int lcid) { Word r; HRESULT hr = Get_DisplayFormulaBar(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayFormulaBar[int lcid] = {read=_scw_Get_DisplayFormulaBar, write=Set_DisplayFormulaBar
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayFullScreen(int lcid) { Word r; HRESULT hr = Get_DisplayFullScreen(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayFullScreen[int lcid] = {read=_scw_Get_DisplayFullScreen, write=Set_DisplayFullScreen
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayNoteIndicator() { Word r; HRESULT hr = Get_DisplayNoteIndicator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayNoteIndicator = {read=_scw_Get_DisplayNoteIndicator, write=Set_DisplayNoteIndicator
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayCommentIndicator() { Activex::TOleEnum r; HRESULT hr = Get_DisplayCommentIndicator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayCommentIndicator = {read=_scw_Get_DisplayCommentIndicator, write=
		Set_DisplayCommentIndicator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayExcel4Menus(int lcid) { Word r; HRESULT hr = Get_DisplayExcel4Menus(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayExcel4Menus[int lcid] = {read=_scw_Get_DisplayExcel4Menus, write=Set_DisplayExcel4Menus
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayRecentFiles() { Word r; HRESULT hr = Get_DisplayRecentFiles(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayRecentFiles = {read=_scw_Get_DisplayRecentFiles, write=Set_DisplayRecentFiles
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayScrollBars(int lcid) { Word r; HRESULT hr = Get_DisplayScrollBars(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayScrollBars[int lcid] = {read=_scw_Get_DisplayScrollBars, write=Set_DisplayScrollBars
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayStatusBar(int lcid) { Word r; HRESULT hr = Get_DisplayStatusBar(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayStatusBar[int lcid] = {read=_scw_Get_DisplayStatusBar, write=Set_DisplayStatusBar
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EditDirectlyInCell(int lcid) { Word r; HRESULT hr = Get_EditDirectlyInCell(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EditDirectlyInCell[int lcid] = {read=_scw_Get_EditDirectlyInCell, write=Set_EditDirectlyInCell
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableAutoComplete() { Word r; HRESULT hr = Get_EnableAutoComplete(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableAutoComplete = {read=_scw_Get_EnableAutoComplete, write=Set_EnableAutoComplete
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EnableCancelKey(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_EnableCancelKey(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EnableCancelKey[int lcid] = {read=_scw_Get_EnableCancelKey, write=Set_EnableCancelKey
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableSound() { Word r; HRESULT hr = Get_EnableSound(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word EnableSound = {read=_scw_Get_EnableSound, write=Set_EnableSound};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableTipWizard(int lcid) { Word r; HRESULT hr = Get_EnableTipWizard(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableTipWizard[int lcid] = {read=_scw_Get_EnableTipWizard, write=Set_EnableTipWizard
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_FileConverters(const OleVariant Index1, const OleVariant 
		Index2, int lcid) { OleVariant r; HRESULT hr = Get_FileConverters(Index1, Index2, lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property OleVariant FileConverters[OleVariant Index1][OleVariant Index2][int lcid] = {read=_scw_Get_FileConverters
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_FileSearch _scw_Get_FileSearch() { Opofc97::_di_FileSearch r; HRESULT hr = Get_FileSearch(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_FileSearch FileSearch = {read=_scw_Get_FileSearch};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_IFind _scw_Get_FileFind() { Opofc97::_di_IFind r; HRESULT hr = Get_FileFind(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_IFind FileFind = {read=_scw_Get_FileFind};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FixedDecimal(int lcid) { Word r; HRESULT hr = Get_FixedDecimal(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FixedDecimal[int lcid] = {read=_scw_Get_FixedDecimal, write=Set_FixedDecimal};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FixedDecimalPlaces(int lcid) { int r; HRESULT hr = Get_FixedDecimalPlaces(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int FixedDecimalPlaces[int lcid] = {read=_scw_Get_FixedDecimalPlaces, write=Set_FixedDecimalPlaces
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_Height(int lcid) { double r; HRESULT hr = Get_Height(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double Height[int lcid] = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_IgnoreRemoteRequests(int lcid) { Word r; HRESULT hr = Get_IgnoreRemoteRequests(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word IgnoreRemoteRequests[int lcid] = {read=_scw_Get_IgnoreRemoteRequests, write=Set_IgnoreRemoteRequests
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Interactive(int lcid) { Word r; HRESULT hr = Get_Interactive(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Interactive[int lcid] = {read=_scw_Get_Interactive, write=Set_Interactive};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_International(const OleVariant Index, int lcid) { OleVariant r; HRESULT hr = Get_International(
		Index, lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant International[OleVariant Index][int lcid] = {read=_scw_Get_International};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Iteration(int lcid) { Word r; HRESULT hr = Get_Iteration(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Iteration[int lcid] = {read=_scw_Get_Iteration, write=Set_Iteration};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_LargeButtons() { Word r; HRESULT hr = Get_LargeButtons(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word LargeButtons = {read=_scw_Get_LargeButtons, write=Set_LargeButtons};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_Left(int lcid) { double r; HRESULT hr = Get_Left(lcid
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double Left[int lcid] = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_LibraryPath(int lcid) { WideString r; HRESULT hr = Get_LibraryPath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString LibraryPath[int lcid] = {read=_scw_Get_LibraryPath};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_MailSession(int lcid) { OleVariant r; HRESULT hr = Get_MailSession(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant MailSession[int lcid] = {read=_scw_Get_MailSession};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MailSystem(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_MailSystem(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MailSystem[int lcid] = {read=_scw_Get_MailSystem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MathCoprocessorAvailable(int lcid) { Word r; HRESULT hr = Get_MathCoprocessorAvailable(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MathCoprocessorAvailable[int lcid] = {read=_scw_Get_MathCoprocessorAvailable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_MaxChange(int lcid) { double r; HRESULT hr = Get_MaxChange(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double MaxChange[int lcid] = {read=_scw_Get_MaxChange, write=Set_MaxChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxIterations(int lcid) { int r; HRESULT hr = Get_MaxIterations(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int MaxIterations[int lcid] = {read=_scw_Get_MaxIterations, write=Set_MaxIterations};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MemoryFree(int lcid) { int r; HRESULT hr = Get_MemoryFree(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int MemoryFree[int lcid] = {read=_scw_Get_MemoryFree};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MemoryTotal(int lcid) { int r; HRESULT hr = Get_MemoryTotal(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int MemoryTotal[int lcid] = {read=_scw_Get_MemoryTotal};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MemoryUsed(int lcid) { int r; HRESULT hr = Get_MemoryUsed(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int MemoryUsed[int lcid] = {read=_scw_Get_MemoryUsed};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MouseAvailable(int lcid) { Word r; HRESULT hr = Get_MouseAvailable(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MouseAvailable[int lcid] = {read=_scw_Get_MouseAvailable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MoveAfterReturn(int lcid) { Word r; HRESULT hr = Get_MoveAfterReturn(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MoveAfterReturn[int lcid] = {read=_scw_Get_MoveAfterReturn, write=Set_MoveAfterReturn
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MoveAfterReturnDirection(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_MoveAfterReturnDirection(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MoveAfterReturnDirection[int lcid] = {read=_scw_Get_MoveAfterReturnDirection
		, write=Set_MoveAfterReturnDirection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_RecentFiles _scw_Get_RecentFiles() { _di_RecentFiles r; HRESULT hr = Get_RecentFiles(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_RecentFiles RecentFiles = {read=_scw_Get_RecentFiles};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NetworkTemplatesPath(int lcid) { WideString r; HRESULT hr = Get_NetworkTemplatesPath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NetworkTemplatesPath[int lcid] = {read=_scw_Get_NetworkTemplatesPath};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ODBCErrors _scw_Get_ODBCErrors() { _di_ODBCErrors r; HRESULT hr = Get_ODBCErrors(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ODBCErrors ODBCErrors = {read=_scw_Get_ODBCErrors};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ODBCTimeout() { int r; HRESULT hr = Get_ODBCTimeout(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ODBCTimeout = {read=_scw_Get_ODBCTimeout, write=Set_ODBCTimeout};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnCalculate(int lcid) { WideString r; HRESULT hr = Get_OnCalculate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnCalculate[int lcid] = {read=_scw_Get_OnCalculate, write=Set_OnCalculate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnData(int lcid) { WideString r; HRESULT hr = Get_OnData(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnData[int lcid] = {read=_scw_Get_OnData, write=Set_OnData};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnDoubleClick(int lcid) { WideString r; HRESULT hr = Get_OnDoubleClick(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnDoubleClick[int lcid] = {read=_scw_Get_OnDoubleClick, write=Set_OnDoubleClick
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnEntry(int lcid) { WideString r; HRESULT hr = Get_OnEntry(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnEntry[int lcid] = {read=_scw_Get_OnEntry, write=Set_OnEntry};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSheetActivate(int lcid) { WideString r; HRESULT hr = Get_OnSheetActivate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSheetActivate[int lcid] = {read=_scw_Get_OnSheetActivate, write=Set_OnSheetActivate
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSheetDeactivate(int lcid) { WideString r; HRESULT hr = Get_OnSheetDeactivate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSheetDeactivate[int lcid] = {read=_scw_Get_OnSheetDeactivate, write=Set_OnSheetDeactivate
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnWindow(int lcid) { WideString r; HRESULT hr = Get_OnWindow(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnWindow[int lcid] = {read=_scw_Get_OnWindow, write=Set_OnWindow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OperatingSystem(int lcid) { WideString r; HRESULT hr = Get_OperatingSystem(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OperatingSystem[int lcid] = {read=_scw_Get_OperatingSystem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OrganizationName(int lcid) { WideString r; HRESULT hr = Get_OrganizationName(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OrganizationName[int lcid] = {read=_scw_Get_OrganizationName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Path(int lcid) { WideString r; HRESULT hr = Get_Path(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Path[int lcid] = {read=_scw_Get_Path};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_PathSeparator(int lcid) { WideString r; HRESULT hr = Get_PathSeparator(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString PathSeparator[int lcid] = {read=_scw_Get_PathSeparator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_PreviousSelections(const OleVariant Index, int lcid
		) { OleVariant r; HRESULT hr = Get_PreviousSelections(Index, lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property OleVariant PreviousSelections[OleVariant Index][int lcid] = {read=_scw_Get_PreviousSelections
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_PivotTableSelection() { Word r; HRESULT hr = Get_PivotTableSelection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word PivotTableSelection = {read=_scw_Get_PivotTableSelection, write=Set_PivotTableSelection
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_PromptForSummaryInfo(int lcid) { Word r; HRESULT hr = Get_PromptForSummaryInfo(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word PromptForSummaryInfo[int lcid] = {read=_scw_Get_PromptForSummaryInfo, write=Set_PromptForSummaryInfo
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_RecordRelative(int lcid) { Word r; HRESULT hr = Get_RecordRelative(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word RecordRelative[int lcid] = {read=_scw_Get_RecordRelative};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ReferenceStyle(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_ReferenceStyle(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ReferenceStyle[int lcid] = {read=_scw_Get_ReferenceStyle, write=Set_ReferenceStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_RegisteredFunctions(const OleVariant Index1, const 
		OleVariant Index2, int lcid) { OleVariant r; HRESULT hr = Get_RegisteredFunctions(Index1, Index2, 
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant RegisteredFunctions[OleVariant Index1][OleVariant Index2][int lcid] = {read=_scw_Get_RegisteredFunctions
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_RollZoom() { Word r; HRESULT hr = Get_RollZoom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word RollZoom = {read=_scw_Get_RollZoom, write=Set_RollZoom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ScreenUpdating(int lcid) { Word r; HRESULT hr = Get_ScreenUpdating(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ScreenUpdating[int lcid] = {read=_scw_Get_ScreenUpdating, write=Set_ScreenUpdating}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SheetsInNewWorkbook(int lcid) { int r; HRESULT hr = Get_SheetsInNewWorkbook(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int SheetsInNewWorkbook[int lcid] = {read=_scw_Get_SheetsInNewWorkbook, write=Set_SheetsInNewWorkbook
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ShowChartTipNames() { Word r; HRESULT hr = Get_ShowChartTipNames(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ShowChartTipNames = {read=_scw_Get_ShowChartTipNames, write=Set_ShowChartTipNames};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ShowChartTipValues() { Word r; HRESULT hr = Get_ShowChartTipValues(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ShowChartTipValues = {read=_scw_Get_ShowChartTipValues, write=Set_ShowChartTipValues
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_StandardFont(int lcid) { WideString r; HRESULT hr = Get_StandardFont(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString StandardFont[int lcid] = {read=_scw_Get_StandardFont, write=Set_StandardFont}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_StandardFontSize(int lcid) { double r; HRESULT hr = Get_StandardFontSize(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double StandardFontSize[int lcid] = {read=_scw_Get_StandardFontSize, write=Set_StandardFontSize
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_StartupPath(int lcid) { WideString r; HRESULT hr = Get_StartupPath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString StartupPath[int lcid] = {read=_scw_Get_StartupPath};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_StatusBar(int lcid) { OleVariant r; HRESULT hr = Get_StatusBar(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant StatusBar[int lcid] = {read=_scw_Get_StatusBar, write=Set_StatusBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TemplatesPath(int lcid) { WideString r; HRESULT hr = Get_TemplatesPath(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TemplatesPath[int lcid] = {read=_scw_Get_TemplatesPath};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ShowToolTips() { Word r; HRESULT hr = Get_ShowToolTips(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ShowToolTips = {read=_scw_Get_ShowToolTips, write=Set_ShowToolTips};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_Top(int lcid) { double r; HRESULT hr = Get_Top(lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property double Top[int lcid] = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DefaultSaveFormat() { Activex::TOleEnum r; HRESULT hr = Get_DefaultSaveFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DefaultSaveFormat = {read=_scw_Get_DefaultSaveFormat, write=Set_DefaultSaveFormat
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TransitionMenuKey(int lcid) { WideString r; HRESULT hr = Get_TransitionMenuKey(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TransitionMenuKey[int lcid] = {read=_scw_Get_TransitionMenuKey, write=Set_TransitionMenuKey
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TransitionMenuKeyAction(int lcid) { int r; HRESULT hr = Get_TransitionMenuKeyAction(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int TransitionMenuKeyAction[int lcid] = {read=_scw_Get_TransitionMenuKeyAction, write=Set_TransitionMenuKeyAction
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TransitionNavigKeys(int lcid) { Word r; HRESULT hr = Get_TransitionNavigKeys(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word TransitionNavigKeys[int lcid] = {read=_scw_Get_TransitionNavigKeys, write=Set_TransitionNavigKeys
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_UsableHeight(int lcid) { double r; HRESULT hr = Get_UsableHeight(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double UsableHeight[int lcid] = {read=_scw_Get_UsableHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_UsableWidth(int lcid) { double r; HRESULT hr = Get_UsableWidth(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double UsableWidth[int lcid] = {read=_scw_Get_UsableWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_UserControl() { Word r; HRESULT hr = Get_UserControl(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word UserControl = {read=_scw_Get_UserControl, write=Set_UserControl};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_UserName(int lcid) { WideString r; HRESULT hr = Get_UserName(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString UserName[int lcid] = {read=_scw_Get_UserName, write=Set_UserName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opvbid97::_di_VBE _scw_Get_VBE() { Opvbid97::_di_VBE r; HRESULT hr = Get_VBE(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opvbid97::_di_VBE VBE = {read=_scw_Get_VBE};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Version(int lcid) { WideString r; HRESULT hr = Get_Version(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Version[int lcid] = {read=_scw_Get_Version};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible(int lcid) { Word r; HRESULT hr = Get_Visible(lcid
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Visible[int lcid] = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_Width(int lcid) { double r; HRESULT hr = Get_Width(lcid
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double Width[int lcid] = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_WindowsForPens(int lcid) { Word r; HRESULT hr = Get_WindowsForPens(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word WindowsForPens[int lcid] = {read=_scw_Get_WindowsForPens};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_WindowState(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_WindowState(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum WindowState[int lcid] = {read=_scw_Get_WindowState, write=Set_WindowState
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_UILanguage(int lcid) { int r; HRESULT hr = Get_UILanguage(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int UILanguage[int lcid] = {read=_scw_Get_UILanguage, write=Set_UILanguage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DefaultSheetDirection(int lcid) { int r; HRESULT hr = Get_DefaultSheetDirection(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DefaultSheetDirection[int lcid] = {read=_scw_Get_DefaultSheetDirection, write=Set_DefaultSheetDirection
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CursorMovement(int lcid) { int r; HRESULT hr = Get_CursorMovement(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int CursorMovement[int lcid] = {read=_scw_Get_CursorMovement, write=Set_CursorMovement};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ControlCharacters(int lcid) { int r; HRESULT hr = Get_ControlCharacters(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ControlCharacters[int lcid] = {read=_scw_Get_ControlCharacters, write=Set_ControlCharacters
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableEvents() { Word r; HRESULT hr = Get_EnableEvents(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableEvents = {read=_scw_Get_EnableEvents, write=Set_EnableEvents};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayInfoWindow() { Word r; HRESULT hr = Get_DisplayInfoWindow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayInfoWindow = {read=_scw_Get_DisplayInfoWindow, write=Set_DisplayInfoWindow};
		
};

__dispinterface Parameters;
typedef System::DelphiInterface<Parameters> _di_Parameters;
__dispinterface Parameter;
typedef System::DelphiInterface<Parameter> _di_Parameter;
__dispinterface INTERFACE_UUID("{0002442B-0000-0000-C000-000000000046}") Parameters  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024428-0000-0000-C000-000000000046}") _QueryTable  : public IDispatch 
	
{
	
};
typedef _QueryTable QueryTable;

typedef _Application Application_;
;

typedef _Chart Chart;
;

__interface _Worksheet;
typedef System::DelphiInterface<_Worksheet> _di__Worksheet;
__dispinterface PageSetup;
typedef System::DelphiInterface<PageSetup> _di_PageSetup;
__dispinterface Shapes;
typedef System::DelphiInterface<Shapes> _di_Shapes;
__dispinterface Outline;
typedef System::DelphiInterface<Outline> _di_Outline;
__dispinterface PivotTable;
typedef System::DelphiInterface<PivotTable> _di_PivotTable;
__dispinterface HPageBreaks;
typedef System::DelphiInterface<HPageBreaks> _di_HPageBreaks;
__dispinterface VPageBreaks;
typedef System::DelphiInterface<VPageBreaks> _di_VPageBreaks;
__dispinterface QueryTables;
typedef System::DelphiInterface<QueryTables> _di_QueryTables;
__dispinterface Comments;
typedef System::DelphiInterface<Comments> _di_Comments;
__dispinterface Hyperlinks;
typedef System::DelphiInterface<Hyperlinks> _di_Hyperlinks;
__dispinterface AutoFilter;
typedef System::DelphiInterface<AutoFilter> _di_AutoFilter;
__interface INTERFACE_UUID("{000208D8-0000-0000-C000-000000000046}") _Worksheet  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(Activex::TOleEnum &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Activate(int lcid) = 0 ;
	virtual HRESULT __safecall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __safecall Delete(int lcid) = 0 ;
	virtual HRESULT __safecall Get_CodeName(WideString &Get_CodeName_result) = 0 ;
	virtual HRESULT __safecall Get__CodeName(WideString &Get__CodeName_result) = 0 ;
	virtual HRESULT __safecall Set__CodeName(const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_Index(int lcid, int &Get_Index_result) = 0 ;
	virtual HRESULT __safecall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_Next(_di_IDispatch &Get_Next_result) = 0 ;
	virtual HRESULT __safecall Get_OnDoubleClick(int lcid, WideString &Get_OnDoubleClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnDoubleClick(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnSheetActivate(int lcid, WideString &Get_OnSheetActivate_result) = 0 
		;
	virtual HRESULT __safecall Set_OnSheetActivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnSheetDeactivate(int lcid, WideString &Get_OnSheetDeactivate_result
		) = 0 ;
	virtual HRESULT __safecall Set_OnSheetDeactivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_PageSetup(_di_PageSetup &Get_PageSetup_result) = 0 ;
	virtual HRESULT __safecall Get_Previous(_di_IDispatch &Get_Previous_result) = 0 ;
	virtual HRESULT __safecall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __safecall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __safecall Protect(const OleVariant Password, const OleVariant DrawingObjects, const 
		OleVariant Contents, const OleVariant Scenarios, const OleVariant UserInterfaceOnly, int lcid) = 0 
		;
	virtual HRESULT __safecall Get_ProtectContents(int lcid, Word &Get_ProtectContents_result) = 0 ;
	virtual HRESULT __safecall Get_ProtectDrawingObjects(int lcid, Word &Get_ProtectDrawingObjects_result
		) = 0 ;
	virtual HRESULT __safecall Get_ProtectionMode(int lcid, Word &Get_ProtectionMode_result) = 0 ;
	virtual HRESULT __safecall Get_ProtectScenarios(int lcid, Word &Get_ProtectScenarios_result) = 0 ;
	virtual HRESULT __safecall SaveAs(const WideString Filename, const OleVariant FileFormat, const OleVariant 
		Password, const OleVariant WriteResPassword, const OleVariant ReadOnlyRecommended, const OleVariant 
		CreateBackup, const OleVariant AddToMru, const OleVariant TextCodepage, const OleVariant TextVisualLayout
		, int lcid) = 0 ;
	virtual HRESULT __safecall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __safecall Unprotect(const OleVariant Password, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Visible(int lcid, Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_Shapes(_di_Shapes &Get_Shapes_result) = 0 ;
	virtual HRESULT __safecall Get_TransitionExpEval(int lcid, Word &Get_TransitionExpEval_result) = 0 
		;
	virtual HRESULT __safecall Set_TransitionExpEval(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Arcs(const OleVariant Index, int lcid, _di_IDispatch &Arcs_result) = 0 ;
		
	virtual HRESULT __safecall Get_AutoFilterMode(int lcid, Word &Get_AutoFilterMode_result) = 0 ;
	virtual HRESULT __safecall Set_AutoFilterMode(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall SetBackgroundPicture(const WideString Filename) = 0 ;
	virtual HRESULT __safecall Buttons(const OleVariant Index, int lcid, _di_IDispatch &Buttons_result)
		 = 0 ;
	virtual HRESULT __safecall Calculate(int lcid) = 0 ;
	virtual HRESULT __safecall Get_EnableCalculation(Word &Get_EnableCalculation_result) = 0 ;
	virtual HRESULT __safecall Set_EnableCalculation(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Cells(_di_Range &Get_Cells_result) = 0 ;
	virtual HRESULT __safecall ChartObjects(const OleVariant Index, int lcid, _di_IDispatch &ChartObjects_result
		) = 0 ;
	virtual HRESULT __safecall CheckBoxes(const OleVariant Index, int lcid, _di_IDispatch &CheckBoxes_result
		) = 0 ;
	virtual HRESULT __safecall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript, int lcid) = 0 ;
	virtual HRESULT __safecall Get_CircularReference(int lcid, _di_Range &Get_CircularReference_result)
		 = 0 ;
	virtual HRESULT __safecall ClearArrows(int lcid) = 0 ;
	virtual HRESULT __safecall Get_Columns(_di_Range &Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Get_ConsolidationFunction(int lcid, Activex::TOleEnum &Get_ConsolidationFunction_result
		) = 0 ;
	virtual HRESULT __safecall Get_ConsolidationOptions(int lcid, OleVariant &Get_ConsolidationOptions_result
		) = 0 ;
	virtual HRESULT __safecall Get_ConsolidationSources(int lcid, OleVariant &Get_ConsolidationSources_result
		) = 0 ;
	virtual HRESULT __safecall Get_DisplayAutomaticPageBreaks(int lcid, Word &Get_DisplayAutomaticPageBreaks_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayAutomaticPageBreaks(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Drawings(const OleVariant Index, int lcid, _di_IDispatch &Drawings_result
		) = 0 ;
	virtual HRESULT __safecall DrawingObjects(const OleVariant Index, int lcid, _di_IDispatch &DrawingObjects_result
		) = 0 ;
	virtual HRESULT __safecall DropDowns(const OleVariant Index, int lcid, _di_IDispatch &DropDowns_result
		) = 0 ;
	virtual HRESULT __safecall Get_EnableAutoFilter(int lcid, Word &Get_EnableAutoFilter_result) = 0 ;
	virtual HRESULT __safecall Set_EnableAutoFilter(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableSelection(Activex::TOleEnum &Get_EnableSelection_result) = 0 ;
		
	virtual HRESULT __safecall Set_EnableSelection(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __safecall Get_EnableOutlining(int lcid, Word &Get_EnableOutlining_result) = 0 ;
	virtual HRESULT __safecall Set_EnableOutlining(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_EnablePivotTable(int lcid, Word &Get_EnablePivotTable_result) = 0 ;
	virtual HRESULT __safecall Set_EnablePivotTable(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Evaluate(const OleVariant Name, int lcid, OleVariant &Evaluate_result) = 0 
		;
	virtual HRESULT __safecall _Evaluate(const OleVariant Name, int lcid, OleVariant &_Evaluate_result)
		 = 0 ;
	virtual HRESULT __safecall Get_FilterMode(int lcid, Word &Get_FilterMode_result) = 0 ;
	virtual HRESULT __safecall ResetAllPageBreaks(void) = 0 ;
	virtual HRESULT __safecall GroupBoxes(const OleVariant Index, int lcid, _di_IDispatch &GroupBoxes_result
		) = 0 ;
	virtual HRESULT __safecall GroupObjects(const OleVariant Index, int lcid, _di_IDispatch &GroupObjects_result
		) = 0 ;
	virtual HRESULT __safecall Labels(const OleVariant Index, int lcid, _di_IDispatch &Labels_result) = 0 
		;
	virtual HRESULT __safecall Lines(const OleVariant Index, int lcid, _di_IDispatch &Lines_result) = 0 
		;
	virtual HRESULT __safecall ListBoxes(const OleVariant Index, int lcid, _di_IDispatch &ListBoxes_result
		) = 0 ;
	virtual HRESULT __safecall Get_Names(_di_Names &Get_Names_result) = 0 ;
	virtual HRESULT __safecall OLEObjects(const OleVariant Index, int lcid, _di_IDispatch &OLEObjects_result
		) = 0 ;
	virtual HRESULT __safecall Get_OnCalculate(int lcid, WideString &Get_OnCalculate_result) = 0 ;
	virtual HRESULT __safecall Set_OnCalculate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnData(int lcid, WideString &Get_OnData_result) = 0 ;
	virtual HRESULT __safecall Set_OnData(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_OnEntry(int lcid, WideString &Get_OnEntry_result) = 0 ;
	virtual HRESULT __safecall Set_OnEntry(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall OptionButtons(const OleVariant Index, int lcid, _di_IDispatch &OptionButtons_result
		) = 0 ;
	virtual HRESULT __safecall Get_Outline(_di_Outline &Get_Outline_result) = 0 ;
	virtual HRESULT __safecall Ovals(const OleVariant Index, int lcid, _di_IDispatch &Ovals_result) = 0 
		;
	virtual HRESULT __safecall Paste(const OleVariant Destination, const OleVariant Link, int lcid) = 0 
		;
	virtual HRESULT __safecall PasteSpecial(const OleVariant Format, const OleVariant Link, const OleVariant 
		DisplayAsIcon, const OleVariant IconFileName, const OleVariant IconIndex, const OleVariant IconLabel
		, int lcid) = 0 ;
	virtual HRESULT __safecall Pictures(const OleVariant Index, int lcid, _di_IDispatch &Pictures_result
		) = 0 ;
	virtual HRESULT __safecall PivotTables(const OleVariant Index, int lcid, _di_IDispatch &PivotTables_result
		) = 0 ;
	virtual HRESULT __safecall PivotTableWizard(const OleVariant SourceType, const OleVariant SourceData
		, const OleVariant TableDestination, const OleVariant TableName, const OleVariant RowGrand, const 
		OleVariant ColumnGrand, const OleVariant SaveData, const OleVariant HasAutoFormat, const OleVariant 
		AutoPage, const OleVariant Reserved, const OleVariant BackgroundQuery, const OleVariant OptimizeCache
		, const OleVariant PageFieldOrder, const OleVariant PageFieldWrapCount, const OleVariant ReadData, 
		const OleVariant Connection, int lcid, _di_PivotTable &PivotTableWizard_result) = 0 ;
	virtual HRESULT __safecall Get_Range(const OleVariant Cell1, const OleVariant Cell2, _di_Range &Get_Range_result
		) = 0 ;
	virtual HRESULT __safecall Rectangles(const OleVariant Index, int lcid, _di_IDispatch &Rectangles_result
		) = 0 ;
	virtual HRESULT __safecall Get_Rows(_di_Range &Get_Rows_result) = 0 ;
	virtual HRESULT __safecall Scenarios(const OleVariant Index, int lcid, _di_IDispatch &Scenarios_result
		) = 0 ;
	virtual HRESULT __safecall Get_ScrollArea(WideString &Get_ScrollArea_result) = 0 ;
	virtual HRESULT __safecall Set_ScrollArea(const WideString RHS) = 0 ;
	virtual HRESULT __safecall ScrollBars(const OleVariant Index, int lcid, _di_IDispatch &ScrollBars_result
		) = 0 ;
	virtual HRESULT __safecall ShowAllData(int lcid) = 0 ;
	virtual HRESULT __safecall ShowDataForm(int lcid) = 0 ;
	virtual HRESULT __safecall Spinners(const OleVariant Index, int lcid, _di_IDispatch &Spinners_result
		) = 0 ;
	virtual HRESULT __safecall Get_StandardHeight(int lcid, double &Get_StandardHeight_result) = 0 ;
	virtual HRESULT __safecall Get_StandardWidth(int lcid, double &Get_StandardWidth_result) = 0 ;
	virtual HRESULT __safecall Set_StandardWidth(int lcid, double RHS) = 0 ;
	virtual HRESULT __safecall TextBoxes(const OleVariant Index, int lcid, _di_IDispatch &TextBoxes_result
		) = 0 ;
	virtual HRESULT __safecall Get_TransitionFormEntry(int lcid, Word &Get_TransitionFormEntry_result) = 0 
		;
	virtual HRESULT __safecall Set_TransitionFormEntry(int lcid, Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Type_(int lcid, Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_UsedRange(int lcid, _di_Range &Get_UsedRange_result) = 0 ;
	virtual HRESULT __safecall Get_HPageBreaks(_di_HPageBreaks &Get_HPageBreaks_result) = 0 ;
	virtual HRESULT __safecall Get_VPageBreaks(_di_VPageBreaks &Get_VPageBreaks_result) = 0 ;
	virtual HRESULT __safecall Get_QueryTables(_di_QueryTables &Get_QueryTables_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayPageBreaks(Word &Get_DisplayPageBreaks_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayPageBreaks(Word RHS) = 0 ;
	virtual HRESULT __safecall Get_Comments(_di_Comments &Get_Comments_result) = 0 ;
	virtual HRESULT __safecall Get_Hyperlinks(_di_Hyperlinks &Get_Hyperlinks_result) = 0 ;
	virtual HRESULT __safecall ClearCircles(void) = 0 ;
	virtual HRESULT __safecall CircleInvalid(void) = 0 ;
	virtual HRESULT __safecall Get_DisplayRightToLeft(int lcid, int &Get_DisplayRightToLeft_result) = 0 
		;
	virtual HRESULT __safecall Set_DisplayRightToLeft(int lcid, int RHS) = 0 ;
	virtual HRESULT __safecall Get_AutoFilter(_di_AutoFilter &Get_AutoFilter_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Creator() { Activex::TOleEnum r; HRESULT hr = Get_Creator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_CodeName() { WideString r; HRESULT hr = Get_CodeName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString CodeName = {read=_scw_Get_CodeName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get__CodeName() { WideString r; HRESULT hr = Get__CodeName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString _CodeName = {read=_scw_Get__CodeName, write=Set__CodeName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Index(int lcid) { int r; HRESULT hr = Get_Index(lcid, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Index[int lcid] = {read=_scw_Get_Index};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Next() { _di_IDispatch r; HRESULT hr = Get_Next(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Next = {read=_scw_Get_Next};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnDoubleClick(int lcid) { WideString r; HRESULT hr = Get_OnDoubleClick(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnDoubleClick[int lcid] = {read=_scw_Get_OnDoubleClick, write=Set_OnDoubleClick
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSheetActivate(int lcid) { WideString r; HRESULT hr = Get_OnSheetActivate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSheetActivate[int lcid] = {read=_scw_Get_OnSheetActivate, write=Set_OnSheetActivate
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSheetDeactivate(int lcid) { WideString r; HRESULT hr = Get_OnSheetDeactivate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSheetDeactivate[int lcid] = {read=_scw_Get_OnSheetDeactivate, write=Set_OnSheetDeactivate
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PageSetup _scw_Get_PageSetup() { _di_PageSetup r; HRESULT hr = Get_PageSetup(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PageSetup PageSetup = {read=_scw_Get_PageSetup};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Previous() { _di_IDispatch r; HRESULT hr = Get_Previous(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Previous = {read=_scw_Get_Previous};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ProtectContents(int lcid) { Word r; HRESULT hr = Get_ProtectContents(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ProtectContents[int lcid] = {read=_scw_Get_ProtectContents};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ProtectDrawingObjects(int lcid) { Word r; HRESULT hr = Get_ProtectDrawingObjects(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ProtectDrawingObjects[int lcid] = {read=_scw_Get_ProtectDrawingObjects};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ProtectionMode(int lcid) { Word r; HRESULT hr = Get_ProtectionMode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ProtectionMode[int lcid] = {read=_scw_Get_ProtectionMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ProtectScenarios(int lcid) { Word r; HRESULT hr = Get_ProtectScenarios(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ProtectScenarios[int lcid] = {read=_scw_Get_ProtectScenarios};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible[int lcid] = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shapes _scw_Get_Shapes() { _di_Shapes r; HRESULT hr = Get_Shapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shapes Shapes = {read=_scw_Get_Shapes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TransitionExpEval(int lcid) { Word r; HRESULT hr = Get_TransitionExpEval(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word TransitionExpEval[int lcid] = {read=_scw_Get_TransitionExpEval, write=Set_TransitionExpEval
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoFilterMode(int lcid) { Word r; HRESULT hr = Get_AutoFilterMode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AutoFilterMode[int lcid] = {read=_scw_Get_AutoFilterMode, write=Set_AutoFilterMode}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableCalculation() { Word r; HRESULT hr = Get_EnableCalculation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableCalculation = {read=_scw_Get_EnableCalculation, write=Set_EnableCalculation};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Cells() { _di_Range r; HRESULT hr = Get_Cells(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Cells = {read=_scw_Get_Cells};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_CircularReference(int lcid) { _di_Range r; HRESULT hr = Get_CircularReference(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range CircularReference[int lcid] = {read=_scw_Get_CircularReference};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Columns() { _di_Range r; HRESULT hr = Get_Columns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range Columns = {read=_scw_Get_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ConsolidationFunction(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_ConsolidationFunction(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ConsolidationFunction[int lcid] = {read=_scw_Get_ConsolidationFunction
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_ConsolidationOptions(int lcid) { OleVariant r; HRESULT hr = Get_ConsolidationOptions(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant ConsolidationOptions[int lcid] = {read=_scw_Get_ConsolidationOptions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_ConsolidationSources(int lcid) { OleVariant r; HRESULT hr = Get_ConsolidationSources(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant ConsolidationSources[int lcid] = {read=_scw_Get_ConsolidationSources};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayAutomaticPageBreaks(int lcid) { Word r; HRESULT hr = Get_DisplayAutomaticPageBreaks(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayAutomaticPageBreaks[int lcid] = {read=_scw_Get_DisplayAutomaticPageBreaks, write=
		Set_DisplayAutomaticPageBreaks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableAutoFilter(int lcid) { Word r; HRESULT hr = Get_EnableAutoFilter(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableAutoFilter[int lcid] = {read=_scw_Get_EnableAutoFilter, write=Set_EnableAutoFilter
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EnableSelection() { Activex::TOleEnum r; HRESULT hr = Get_EnableSelection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EnableSelection = {read=_scw_Get_EnableSelection, write=Set_EnableSelection
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnableOutlining(int lcid) { Word r; HRESULT hr = Get_EnableOutlining(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnableOutlining[int lcid] = {read=_scw_Get_EnableOutlining, write=Set_EnableOutlining
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnablePivotTable(int lcid) { Word r; HRESULT hr = Get_EnablePivotTable(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnablePivotTable[int lcid] = {read=_scw_Get_EnablePivotTable, write=Set_EnablePivotTable
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FilterMode(int lcid) { Word r; HRESULT hr = Get_FilterMode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FilterMode[int lcid] = {read=_scw_Get_FilterMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Names _scw_Get_Names() { _di_Names r; HRESULT hr = Get_Names(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Names Names = {read=_scw_Get_Names};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnCalculate(int lcid) { WideString r; HRESULT hr = Get_OnCalculate(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnCalculate[int lcid] = {read=_scw_Get_OnCalculate, write=Set_OnCalculate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnData(int lcid) { WideString r; HRESULT hr = Get_OnData(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnData[int lcid] = {read=_scw_Get_OnData, write=Set_OnData};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnEntry(int lcid) { WideString r; HRESULT hr = Get_OnEntry(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnEntry[int lcid] = {read=_scw_Get_OnEntry, write=Set_OnEntry};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Outline _scw_Get_Outline() { _di_Outline r; HRESULT hr = Get_Outline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Outline Outline = {read=_scw_Get_Outline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Range(const OleVariant Cell1, const OleVariant Cell2
		) { _di_Range r; HRESULT hr = Get_Range(Cell1, Cell2, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Range[OleVariant Cell1][OleVariant Cell2] = {read=_scw_Get_Range};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Rows() { _di_Range r; HRESULT hr = Get_Rows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Rows = {read=_scw_Get_Rows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ScrollArea() { WideString r; HRESULT hr = Get_ScrollArea(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ScrollArea = {read=_scw_Get_ScrollArea, write=Set_ScrollArea};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_StandardHeight(int lcid) { double r; HRESULT hr = Get_StandardHeight(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double StandardHeight[int lcid] = {read=_scw_Get_StandardHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline double _scw_Get_StandardWidth(int lcid) { double r; HRESULT hr = Get_StandardWidth(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property double StandardWidth[int lcid] = {read=_scw_Get_StandardWidth, write=Set_StandardWidth};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TransitionFormEntry(int lcid) { Word r; HRESULT hr = Get_TransitionFormEntry(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word TransitionFormEntry[int lcid] = {read=_scw_Get_TransitionFormEntry, write=Set_TransitionFormEntry
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_(int lcid) { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_[int lcid] = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_UsedRange(int lcid) { _di_Range r; HRESULT hr = Get_UsedRange(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range UsedRange[int lcid] = {read=_scw_Get_UsedRange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HPageBreaks _scw_Get_HPageBreaks() { _di_HPageBreaks r; HRESULT hr = Get_HPageBreaks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HPageBreaks HPageBreaks = {read=_scw_Get_HPageBreaks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_VPageBreaks _scw_Get_VPageBreaks() { _di_VPageBreaks r; HRESULT hr = Get_VPageBreaks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_VPageBreaks VPageBreaks = {read=_scw_Get_VPageBreaks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_QueryTables _scw_Get_QueryTables() { _di_QueryTables r; HRESULT hr = Get_QueryTables(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_QueryTables QueryTables = {read=_scw_Get_QueryTables};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayPageBreaks() { Word r; HRESULT hr = Get_DisplayPageBreaks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayPageBreaks = {read=_scw_Get_DisplayPageBreaks, write=Set_DisplayPageBreaks};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Comments _scw_Get_Comments() { _di_Comments r; HRESULT hr = Get_Comments(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Comments Comments = {read=_scw_Get_Comments};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Hyperlinks _scw_Get_Hyperlinks() { _di_Hyperlinks r; HRESULT hr = Get_Hyperlinks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Hyperlinks Hyperlinks = {read=_scw_Get_Hyperlinks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DisplayRightToLeft(int lcid) { int r; HRESULT hr = Get_DisplayRightToLeft(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DisplayRightToLeft[int lcid] = {read=_scw_Get_DisplayRightToLeft, write=Set_DisplayRightToLeft
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AutoFilter _scw_Get_AutoFilter() { _di_AutoFilter r; HRESULT hr = Get_AutoFilter(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AutoFilter AutoFilter = {read=_scw_Get_AutoFilter};
};
typedef _Worksheet Worksheet;

__interface _Global;
typedef System::DelphiInterface<_Global> _di__Global;
__interface INTERFACE_UUID("{000208D9-0000-0000-C000-000000000046}") _Global  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(Activex::TOleEnum &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di__Application &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveCell(_di_Range &Get_ActiveCell_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveChart(_di__Chart &Get_ActiveChart_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveDialog(_di_DialogSheet &Get_ActiveDialog_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveMenuBar(_di_MenuBar &Get_ActiveMenuBar_result) = 0 ;
	virtual HRESULT __safecall Get_ActivePrinter(int lcid, WideString &Get_ActivePrinter_result) = 0 ;
	virtual HRESULT __safecall Set_ActivePrinter(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __safecall Get_ActiveSheet(_di_IDispatch &Get_ActiveSheet_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveWindow(_di_Window_ &Get_ActiveWindow_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveWorkbook(_di__Workbook &Get_ActiveWorkbook_result) = 0 ;
	virtual HRESULT __safecall Get_AddIns(_di_AddIns &Get_AddIns_result) = 0 ;
	virtual HRESULT __safecall Get_Assistant(Opofc97::_di_Assistant &Get_Assistant_result) = 0 ;
	virtual HRESULT __safecall Calculate(int lcid) = 0 ;
	virtual HRESULT __safecall Get_Cells(_di_Range &Get_Cells_result) = 0 ;
	virtual HRESULT __safecall Get_Charts(_di_Sheets &Get_Charts_result) = 0 ;
	virtual HRESULT __safecall Get_Columns(_di_Range &Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Get_CommandBars(Opofc97::_di_CommandBars &Get_CommandBars_result) = 0 ;
	virtual HRESULT __safecall Get_DDEAppReturnCode(int lcid, int &Get_DDEAppReturnCode_result) = 0 ;
	virtual HRESULT __safecall DDEExecute(int Channel, const WideString String_, int lcid) = 0 ;
	virtual HRESULT __safecall DDEInitiate(const WideString App, const WideString Topic, int lcid, int &DDEInitiate_result
		) = 0 ;
	virtual HRESULT __safecall DDEPoke(int Channel, const OleVariant Item, const OleVariant Data, int lcid
		) = 0 ;
	virtual HRESULT __safecall DDERequest(int Channel, const WideString Item, int lcid, OleVariant &DDERequest_result
		) = 0 ;
	virtual HRESULT __safecall DDETerminate(int Channel, int lcid) = 0 ;
	virtual HRESULT __safecall Get_DialogSheets(_di_Sheets &Get_DialogSheets_result) = 0 ;
	virtual HRESULT __safecall Evaluate(const OleVariant Name, int lcid, OleVariant &Evaluate_result) = 0 
		;
	virtual HRESULT __safecall _Evaluate(const OleVariant Name, int lcid, OleVariant &_Evaluate_result)
		 = 0 ;
	virtual HRESULT __safecall ExecuteExcel4Macro(const WideString String_, int lcid, OleVariant &ExecuteExcel4Macro_result
		) = 0 ;
	virtual HRESULT __safecall Intersect(const _di_Range Arg1, const _di_Range Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, int lcid, _di_Range &Intersect_result) = 0 ;
	virtual HRESULT __safecall Get_MenuBars(_di_MenuBars &Get_MenuBars_result) = 0 ;
	virtual HRESULT __safecall Get_Modules(_di_Modules &Get_Modules_result) = 0 ;
	virtual HRESULT __safecall Get_Names(_di_Names &Get_Names_result) = 0 ;
	virtual HRESULT __safecall Get_Range(const OleVariant Cell1, const OleVariant Cell2, _di_Range &Get_Range_result
		) = 0 ;
	virtual HRESULT __safecall Get_Rows(_di_Range &Get_Rows_result) = 0 ;
	virtual HRESULT __safecall Run(const OleVariant Macro, const OleVariant Arg1, const OleVariant Arg2
		, const OleVariant Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const 
		OleVariant Arg7, const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant 
		Arg11, const OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15
		, const OleVariant Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, 
		const OleVariant Arg20, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const 
		OleVariant Arg24, const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant 
		Arg28, const OleVariant Arg29, const OleVariant Arg30, OleVariant &Run_result) = 0 ;
	virtual HRESULT __safecall _Run2(const OleVariant Macro, const OleVariant Arg1, const OleVariant Arg2
		, const OleVariant Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const 
		OleVariant Arg7, const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant 
		Arg11, const OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15
		, const OleVariant Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, 
		const OleVariant Arg20, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const 
		OleVariant Arg24, const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant 
		Arg28, const OleVariant Arg29, const OleVariant Arg30, int lcid, OleVariant &_Run2_result) = 0 ;
	virtual HRESULT __safecall Get_Selection(int lcid, _di_IDispatch &Get_Selection_result) = 0 ;
	virtual HRESULT __safecall SendKeys(const OleVariant Keys, const OleVariant Wait, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Sheets(_di_Sheets &Get_Sheets_result) = 0 ;
	virtual HRESULT __safecall Get_ShortcutMenus(int Index, _di_Menu &Get_ShortcutMenus_result) = 0 ;
	virtual HRESULT __safecall Get_ThisWorkbook(int lcid, _di__Workbook &Get_ThisWorkbook_result) = 0 ;
		
	virtual HRESULT __safecall Get_Toolbars(_di_Toolbars &Get_Toolbars_result) = 0 ;
	virtual HRESULT __safecall Union(const _di_Range Arg1, const _di_Range Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, int lcid, _di_Range &Union_result) = 0 ;
	virtual HRESULT __safecall Get_Windows(_di_Windows &Get_Windows_result) = 0 ;
	virtual HRESULT __safecall Get_Workbooks(_di_Workbooks &Get_Workbooks_result) = 0 ;
	virtual HRESULT __safecall Get_WorksheetFunction(_di_WorksheetFunction &Get_WorksheetFunction_result
		) = 0 ;
	virtual HRESULT __safecall Get_Worksheets(_di_Sheets &Get_Worksheets_result) = 0 ;
	virtual HRESULT __safecall Get_Excel4IntlMacroSheets(_di_Sheets &Get_Excel4IntlMacroSheets_result) = 0 
		;
	virtual HRESULT __safecall Get_Excel4MacroSheets(_di_Sheets &Get_Excel4MacroSheets_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Creator() { Activex::TOleEnum r; HRESULT hr = Get_Creator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Parent() { _di__Application r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_ActiveCell() { _di_Range r; HRESULT hr = Get_ActiveCell(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range ActiveCell = {read=_scw_Get_ActiveCell};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Chart _scw_Get_ActiveChart() { _di__Chart r; HRESULT hr = Get_ActiveChart(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Chart ActiveChart = {read=_scw_Get_ActiveChart};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_DialogSheet _scw_Get_ActiveDialog() { _di_DialogSheet r; HRESULT hr = Get_ActiveDialog(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_DialogSheet ActiveDialog = {read=_scw_Get_ActiveDialog};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_MenuBar _scw_Get_ActiveMenuBar() { _di_MenuBar r; HRESULT hr = Get_ActiveMenuBar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_MenuBar ActiveMenuBar = {read=_scw_Get_ActiveMenuBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActivePrinter(int lcid) { WideString r; HRESULT hr = Get_ActivePrinter(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActivePrinter[int lcid] = {read=_scw_Get_ActivePrinter, write=Set_ActivePrinter
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_ActiveSheet() { _di_IDispatch r; HRESULT hr = Get_ActiveSheet(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch ActiveSheet = {read=_scw_Get_ActiveSheet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Window_ _scw_Get_ActiveWindow() { _di_Window_ r; HRESULT hr = Get_ActiveWindow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Window_ ActiveWindow = {read=_scw_Get_ActiveWindow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get_ActiveWorkbook() { _di__Workbook r; HRESULT hr = Get_ActiveWorkbook(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook ActiveWorkbook = {read=_scw_Get_ActiveWorkbook};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AddIns _scw_Get_AddIns() { _di_AddIns r; HRESULT hr = Get_AddIns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AddIns AddIns = {read=_scw_Get_AddIns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_Assistant _scw_Get_Assistant() { Opofc97::_di_Assistant r; HRESULT hr = Get_Assistant(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_Assistant Assistant = {read=_scw_Get_Assistant};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Cells() { _di_Range r; HRESULT hr = Get_Cells(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Cells = {read=_scw_Get_Cells};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Charts() { _di_Sheets r; HRESULT hr = Get_Charts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Charts = {read=_scw_Get_Charts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Columns() { _di_Range r; HRESULT hr = Get_Columns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Range Columns = {read=_scw_Get_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc97::_di_CommandBars _scw_Get_CommandBars() { Opofc97::_di_CommandBars r; HRESULT hr = Get_CommandBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc97::_di_CommandBars CommandBars = {read=_scw_Get_CommandBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DDEAppReturnCode(int lcid) { int r; HRESULT hr = Get_DDEAppReturnCode(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DDEAppReturnCode[int lcid] = {read=_scw_Get_DDEAppReturnCode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_DialogSheets() { _di_Sheets r; HRESULT hr = Get_DialogSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets DialogSheets = {read=_scw_Get_DialogSheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_MenuBars _scw_Get_MenuBars() { _di_MenuBars r; HRESULT hr = Get_MenuBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_MenuBars MenuBars = {read=_scw_Get_MenuBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Modules _scw_Get_Modules() { _di_Modules r; HRESULT hr = Get_Modules(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Modules Modules = {read=_scw_Get_Modules};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Names _scw_Get_Names() { _di_Names r; HRESULT hr = Get_Names(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Names Names = {read=_scw_Get_Names};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Range(const OleVariant Cell1, const OleVariant Cell2
		) { _di_Range r; HRESULT hr = Get_Range(Cell1, Cell2, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Range[OleVariant Cell1][OleVariant Cell2] = {read=_scw_Get_Range};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Range _scw_Get_Rows() { _di_Range r; HRESULT hr = Get_Rows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Range Rows = {read=_scw_Get_Rows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Selection(int lcid) { _di_IDispatch r; HRESULT hr = Get_Selection(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Selection[int lcid] = {read=_scw_Get_Selection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Sheets() { _di_Sheets r; HRESULT hr = Get_Sheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Sheets = {read=_scw_Get_Sheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Menu _scw_Get_ShortcutMenus(int Index) { _di_Menu r; HRESULT hr = Get_ShortcutMenus(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Menu ShortcutMenus[int Index] = {read=_scw_Get_ShortcutMenus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get_ThisWorkbook(int lcid) { _di__Workbook r; HRESULT hr = Get_ThisWorkbook(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook ThisWorkbook[int lcid] = {read=_scw_Get_ThisWorkbook};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Toolbars _scw_Get_Toolbars() { _di_Toolbars r; HRESULT hr = Get_Toolbars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Toolbars Toolbars = {read=_scw_Get_Toolbars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Windows _scw_Get_Windows() { _di_Windows r; HRESULT hr = Get_Windows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Windows Windows = {read=_scw_Get_Windows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Workbooks _scw_Get_Workbooks() { _di_Workbooks r; HRESULT hr = Get_Workbooks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Workbooks Workbooks = {read=_scw_Get_Workbooks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_WorksheetFunction _scw_Get_WorksheetFunction() { _di_WorksheetFunction r; HRESULT hr = Get_WorksheetFunction(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_WorksheetFunction WorksheetFunction = {read=_scw_Get_WorksheetFunction};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Worksheets() { _di_Sheets r; HRESULT hr = Get_Worksheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Worksheets = {read=_scw_Get_Worksheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Excel4IntlMacroSheets() { _di_Sheets r; HRESULT hr = Get_Excel4IntlMacroSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Excel4IntlMacroSheets = {read=_scw_Get_Excel4IntlMacroSheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Sheets _scw_Get_Excel4MacroSheets() { _di_Sheets r; HRESULT hr = Get_Excel4MacroSheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Sheets Excel4MacroSheets = {read=_scw_Get_Excel4MacroSheets};
};
typedef _Global Global;

typedef _Workbook Workbook;
;

__dispinterface _OLEObject;
typedef System::DelphiInterface<_OLEObject> _di__OLEObject;
__dispinterface ShapeRange;
typedef System::DelphiInterface<ShapeRange> _di_ShapeRange;
__dispinterface Shape;
typedef System::DelphiInterface<Shape> _di_Shape;
__interface Adjustments;
typedef System::DelphiInterface<Adjustments> _di_Adjustments;
__interface INTERFACE_UUID("{000C0310-0000-0000-C000-000000000046}") Adjustments  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, float &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Set_Item(int Index, float Val) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Item(int Index) { float r; HRESULT hr = Get_Item(Index
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Item[int Index] = {read=_scw_Get_Item, write=Set_Item/*, default*/};
};

__dispinterface TextFrame;
typedef System::DelphiInterface<TextFrame> _di_TextFrame;
__dispinterface Characters;
typedef System::DelphiInterface<Characters> _di_Characters;
__dispinterface INTERFACE_UUID("{0002443D-0000-0000-C000-000000000046}") TextFrame  : public IDispatch 
	
{
	
};

__interface CalloutFormat;
typedef System::DelphiInterface<CalloutFormat> _di_CalloutFormat;
__interface INTERFACE_UUID("{000C0311-0000-0000-C000-000000000046}") CalloutFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall AutomaticLength(void) = 0 ;
	virtual HRESULT __safecall CustomDrop(float Drop) = 0 ;
	virtual HRESULT __safecall CustomLength(float Length) = 0 ;
	virtual HRESULT __safecall PresetDrop(Activex::TOleEnum DropType) = 0 ;
	virtual HRESULT __safecall Get_Accent(Activex::TOleEnum &Get_Accent_result) = 0 ;
	virtual HRESULT __safecall Set_Accent(Activex::TOleEnum Accent) = 0 ;
	virtual HRESULT __safecall Get_Angle(Activex::TOleEnum &Get_Angle_result) = 0 ;
	virtual HRESULT __safecall Set_Angle(Activex::TOleEnum Angle) = 0 ;
	virtual HRESULT __safecall Get_AutoAttach(Activex::TOleEnum &Get_AutoAttach_result) = 0 ;
	virtual HRESULT __safecall Set_AutoAttach(Activex::TOleEnum AutoAttach) = 0 ;
	virtual HRESULT __safecall Get_AutoLength(Activex::TOleEnum &Get_AutoLength_result) = 0 ;
	virtual HRESULT __safecall Get_Border(Activex::TOleEnum &Get_Border_result) = 0 ;
	virtual HRESULT __safecall Set_Border(Activex::TOleEnum Border) = 0 ;
	virtual HRESULT __safecall Get_Drop(float &Get_Drop_result) = 0 ;
	virtual HRESULT __safecall Get_DropType(Activex::TOleEnum &Get_DropType_result) = 0 ;
	virtual HRESULT __safecall Get_Gap(float &Get_Gap_result) = 0 ;
	virtual HRESULT __safecall Set_Gap(float Gap) = 0 ;
	virtual HRESULT __safecall Get_Length(float &Get_Length_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Accent() { Activex::TOleEnum r; HRESULT hr = Get_Accent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Accent = {read=_scw_Get_Accent, write=Set_Accent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Angle() { Activex::TOleEnum r; HRESULT hr = Get_Angle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Angle = {read=_scw_Get_Angle, write=Set_Angle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoAttach() { Activex::TOleEnum r; HRESULT hr = Get_AutoAttach(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoAttach = {read=_scw_Get_AutoAttach, write=Set_AutoAttach};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoLength() { Activex::TOleEnum r; HRESULT hr = Get_AutoLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoLength = {read=_scw_Get_AutoLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Border() { Activex::TOleEnum r; HRESULT hr = Get_Border(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Border = {read=_scw_Get_Border, write=Set_Border};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Drop() { float r; HRESULT hr = Get_Drop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Drop = {read=_scw_Get_Drop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DropType() { Activex::TOleEnum r; HRESULT hr = Get_DropType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DropType = {read=_scw_Get_DropType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Gap() { float r; HRESULT hr = Get_Gap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Gap = {read=_scw_Get_Gap, write=Set_Gap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Length() { float r; HRESULT hr = Get_Length(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Length = {read=_scw_Get_Length};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
};

__dispinterface ConnectorFormat;
typedef System::DelphiInterface<ConnectorFormat> _di_ConnectorFormat;
__dispinterface INTERFACE_UUID("{0002443E-0000-0000-C000-000000000046}") ConnectorFormat  : public IDispatch 
	
{
	
};

__interface FillFormat;
typedef System::DelphiInterface<FillFormat> _di_FillFormat;
__interface ColorFormat;
typedef System::DelphiInterface<ColorFormat> _di_ColorFormat;
__interface INTERFACE_UUID("{000C0314-0000-0000-C000-000000000046}") FillFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Background(void) = 0 ;
	virtual HRESULT __safecall OneColorGradient(Activex::TOleEnum Style, int Variant, float Degree) = 0 
		;
	virtual HRESULT __safecall Patterned(Activex::TOleEnum Pattern) = 0 ;
	virtual HRESULT __safecall PresetGradient(Activex::TOleEnum Style, int Variant, Activex::TOleEnum PresetGradientType
		) = 0 ;
	virtual HRESULT __safecall PresetTextured(Activex::TOleEnum PresetTexture) = 0 ;
	virtual HRESULT __safecall Solid(void) = 0 ;
	virtual HRESULT __safecall TwoColorGradient(Activex::TOleEnum Style, int Variant) = 0 ;
	virtual HRESULT __safecall UserPicture(const WideString PictureFile) = 0 ;
	virtual HRESULT __safecall UserTextured(const WideString TextureFile) = 0 ;
	virtual HRESULT __safecall Get_BackColor(_di_ColorFormat &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(const _di_ColorFormat BackColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_GradientColorType(Activex::TOleEnum &Get_GradientColorType_result) = 0 
		;
	virtual HRESULT __safecall Get_GradientDegree(float &Get_GradientDegree_result) = 0 ;
	virtual HRESULT __safecall Get_GradientStyle(Activex::TOleEnum &Get_GradientStyle_result) = 0 ;
	virtual HRESULT __safecall Get_GradientVariant(int &Get_GradientVariant_result) = 0 ;
	virtual HRESULT __safecall Get_Pattern(Activex::TOleEnum &Get_Pattern_result) = 0 ;
	virtual HRESULT __safecall Get_PresetGradientType(Activex::TOleEnum &Get_PresetGradientType_result)
		 = 0 ;
	virtual HRESULT __safecall Get_PresetTexture(Activex::TOleEnum &Get_PresetTexture_result) = 0 ;
	virtual HRESULT __safecall Get_TextureName(WideString &Get_TextureName_result) = 0 ;
	virtual HRESULT __safecall Get_TextureType(Activex::TOleEnum &Get_TextureType_result) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_BackColor() { _di_ColorFormat r; HRESULT hr = Get_BackColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_GradientColorType() { Activex::TOleEnum r; HRESULT hr = Get_GradientColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum GradientColorType = {read=_scw_Get_GradientColorType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_GradientDegree() { float r; HRESULT hr = Get_GradientDegree(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float GradientDegree = {read=_scw_Get_GradientDegree};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_GradientStyle() { Activex::TOleEnum r; HRESULT hr = Get_GradientStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum GradientStyle = {read=_scw_Get_GradientStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_GradientVariant() { int r; HRESULT hr = Get_GradientVariant(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int GradientVariant = {read=_scw_Get_GradientVariant};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Pattern() { Activex::TOleEnum r; HRESULT hr = Get_Pattern(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Pattern = {read=_scw_Get_Pattern};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetGradientType() { Activex::TOleEnum r; HRESULT hr = Get_PresetGradientType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetGradientType = {read=_scw_Get_PresetGradientType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetTexture() { Activex::TOleEnum r; HRESULT hr = Get_PresetTexture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetTexture = {read=_scw_Get_PresetTexture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TextureName() { WideString r; HRESULT hr = Get_TextureName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TextureName = {read=_scw_Get_TextureName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextureType() { Activex::TOleEnum r; HRESULT hr = Get_TextureType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextureType = {read=_scw_Get_TextureType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface GroupShapes;
typedef System::DelphiInterface<GroupShapes> _di_GroupShapes;
__dispinterface INTERFACE_UUID("{0002443C-0000-0000-C000-000000000046}") GroupShapes  : public IDispatch 
	
{
	
};

__interface LineFormat;
typedef System::DelphiInterface<LineFormat> _di_LineFormat;
__interface INTERFACE_UUID("{000C0317-0000-0000-C000-000000000046}") LineFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_BackColor(_di_ColorFormat &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(const _di_ColorFormat BackColor) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadLength(Activex::TOleEnum &Get_BeginArrowheadLength_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadLength(Activex::TOleEnum BeginArrowheadLength) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadStyle(Activex::TOleEnum &Get_BeginArrowheadStyle_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadStyle(Activex::TOleEnum BeginArrowheadStyle) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadWidth(Activex::TOleEnum &Get_BeginArrowheadWidth_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadWidth(Activex::TOleEnum BeginArrowheadWidth) = 0 ;
	virtual HRESULT __safecall Get_DashStyle(Activex::TOleEnum &Get_DashStyle_result) = 0 ;
	virtual HRESULT __safecall Set_DashStyle(Activex::TOleEnum DashStyle) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadLength(Activex::TOleEnum &Get_EndArrowheadLength_result)
		 = 0 ;
	virtual HRESULT __safecall Set_EndArrowheadLength(Activex::TOleEnum EndArrowheadLength) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadStyle(Activex::TOleEnum &Get_EndArrowheadStyle_result) = 0 
		;
	virtual HRESULT __safecall Set_EndArrowheadStyle(Activex::TOleEnum EndArrowheadStyle) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadWidth(Activex::TOleEnum &Get_EndArrowheadWidth_result) = 0 
		;
	virtual HRESULT __safecall Set_EndArrowheadWidth(Activex::TOleEnum EndArrowheadWidth) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_Pattern(Activex::TOleEnum &Get_Pattern_result) = 0 ;
	virtual HRESULT __safecall Set_Pattern(Activex::TOleEnum Pattern) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Weight(float &Get_Weight_result) = 0 ;
	virtual HRESULT __safecall Set_Weight(float Weight) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_BackColor() { _di_ColorFormat r; HRESULT hr = Get_BackColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadLength() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadLength = {read=_scw_Get_BeginArrowheadLength, write=Set_BeginArrowheadLength
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadStyle() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadStyle = {read=_scw_Get_BeginArrowheadStyle, write=Set_BeginArrowheadStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadWidth() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadWidth = {read=_scw_Get_BeginArrowheadWidth, write=Set_BeginArrowheadWidth
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DashStyle() { Activex::TOleEnum r; HRESULT hr = Get_DashStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DashStyle = {read=_scw_Get_DashStyle, write=Set_DashStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadLength() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadLength = {read=_scw_Get_EndArrowheadLength, write=Set_EndArrowheadLength
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadStyle() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadStyle = {read=_scw_Get_EndArrowheadStyle, write=Set_EndArrowheadStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadWidth() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadWidth = {read=_scw_Get_EndArrowheadWidth, write=Set_EndArrowheadWidth
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Pattern() { Activex::TOleEnum r; HRESULT hr = Get_Pattern(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Pattern = {read=_scw_Get_Pattern, write=Set_Pattern};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Weight() { float r; HRESULT hr = Get_Weight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Weight = {read=_scw_Get_Weight, write=Set_Weight};
};

__interface ShapeNodes;
typedef System::DelphiInterface<ShapeNodes> _di_ShapeNodes;
__interface ShapeNode;
typedef System::DelphiInterface<ShapeNode> _di_ShapeNode;
__interface INTERFACE_UUID("{000C0319-0000-0000-C000-000000000046}") ShapeNodes  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_ShapeNode &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Delete(int Index) = 0 ;
	virtual HRESULT __safecall Insert(int Index, Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType
		, float X1, float Y1, float X2, float Y2, float X3, float Y3) = 0 ;
	virtual HRESULT __safecall SetEditingType(int Index, Activex::TOleEnum EditingType) = 0 ;
	virtual HRESULT __safecall SetPosition(int Index, float X1, float Y1) = 0 ;
	virtual HRESULT __safecall SetSegmentType(int Index, Activex::TOleEnum SegmentType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__interface PictureFormat;
typedef System::DelphiInterface<PictureFormat> _di_PictureFormat;
__interface INTERFACE_UUID("{000C031A-0000-0000-C000-000000000046}") PictureFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementBrightness(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementContrast(float Increment) = 0 ;
	virtual HRESULT __safecall Get_Brightness(float &Get_Brightness_result) = 0 ;
	virtual HRESULT __safecall Set_Brightness(float Brightness) = 0 ;
	virtual HRESULT __safecall Get_ColorType(Activex::TOleEnum &Get_ColorType_result) = 0 ;
	virtual HRESULT __safecall Set_ColorType(Activex::TOleEnum ColorType) = 0 ;
	virtual HRESULT __safecall Get_Contrast(float &Get_Contrast_result) = 0 ;
	virtual HRESULT __safecall Set_Contrast(float Contrast) = 0 ;
	virtual HRESULT __safecall Get_CropBottom(float &Get_CropBottom_result) = 0 ;
	virtual HRESULT __safecall Set_CropBottom(float CropBottom) = 0 ;
	virtual HRESULT __safecall Get_CropLeft(float &Get_CropLeft_result) = 0 ;
	virtual HRESULT __safecall Set_CropLeft(float CropLeft) = 0 ;
	virtual HRESULT __safecall Get_CropRight(float &Get_CropRight_result) = 0 ;
	virtual HRESULT __safecall Set_CropRight(float CropRight) = 0 ;
	virtual HRESULT __safecall Get_CropTop(float &Get_CropTop_result) = 0 ;
	virtual HRESULT __safecall Set_CropTop(float CropTop) = 0 ;
	virtual HRESULT __safecall Get_TransparencyColor(int &Get_TransparencyColor_result) = 0 ;
	virtual HRESULT __safecall Set_TransparencyColor(int TransparencyColor) = 0 ;
	virtual HRESULT __safecall Get_TransparentBackground(Activex::TOleEnum &Get_TransparentBackground_result
		) = 0 ;
	virtual HRESULT __safecall Set_TransparentBackground(Activex::TOleEnum TransparentBackground) = 0 ;
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Brightness() { float r; HRESULT hr = Get_Brightness(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Brightness = {read=_scw_Get_Brightness, write=Set_Brightness};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ColorType() { Activex::TOleEnum r; HRESULT hr = Get_ColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ColorType = {read=_scw_Get_ColorType, write=Set_ColorType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Contrast() { float r; HRESULT hr = Get_Contrast(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Contrast = {read=_scw_Get_Contrast, write=Set_Contrast};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropBottom() { float r; HRESULT hr = Get_CropBottom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropBottom = {read=_scw_Get_CropBottom, write=Set_CropBottom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropLeft() { float r; HRESULT hr = Get_CropLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropLeft = {read=_scw_Get_CropLeft, write=Set_CropLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropRight() { float r; HRESULT hr = Get_CropRight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropRight = {read=_scw_Get_CropRight, write=Set_CropRight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropTop() { float r; HRESULT hr = Get_CropTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropTop = {read=_scw_Get_CropTop, write=Set_CropTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TransparencyColor() { int r; HRESULT hr = Get_TransparencyColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int TransparencyColor = {read=_scw_Get_TransparencyColor, write=Set_TransparencyColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TransparentBackground() { Activex::TOleEnum r; HRESULT hr = Get_TransparentBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TransparentBackground = {read=_scw_Get_TransparentBackground, write=Set_TransparentBackground
		};
};

__interface ShadowFormat;
typedef System::DelphiInterface<ShadowFormat> _di_ShadowFormat;
__interface INTERFACE_UUID("{000C031B-0000-0000-C000-000000000046}") ShadowFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementOffsetX(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementOffsetY(float Increment) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_Obscured(Activex::TOleEnum &Get_Obscured_result) = 0 ;
	virtual HRESULT __safecall Set_Obscured(Activex::TOleEnum Obscured) = 0 ;
	virtual HRESULT __safecall Get_OffsetX(float &Get_OffsetX_result) = 0 ;
	virtual HRESULT __safecall Set_OffsetX(float OffsetX) = 0 ;
	virtual HRESULT __safecall Get_OffsetY(float &Get_OffsetY_result) = 0 ;
	virtual HRESULT __safecall Set_OffsetY(float OffsetY) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Obscured() { Activex::TOleEnum r; HRESULT hr = Get_Obscured(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Obscured = {read=_scw_Get_Obscured, write=Set_Obscured};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OffsetX() { float r; HRESULT hr = Get_OffsetX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OffsetX = {read=_scw_Get_OffsetX, write=Set_OffsetX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OffsetY() { float r; HRESULT hr = Get_OffsetY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OffsetY = {read=_scw_Get_OffsetY, write=Set_OffsetY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__interface TextEffectFormat;
typedef System::DelphiInterface<TextEffectFormat> _di_TextEffectFormat;
__interface INTERFACE_UUID("{000C031F-0000-0000-C000-000000000046}") TextEffectFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall ToggleVerticalText(void) = 0 ;
	virtual HRESULT __safecall Get_Alignment(Activex::TOleEnum &Get_Alignment_result) = 0 ;
	virtual HRESULT __safecall Set_Alignment(Activex::TOleEnum Alignment) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Activex::TOleEnum &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Activex::TOleEnum FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Activex::TOleEnum &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Activex::TOleEnum FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontSize(float &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(float FontSize) = 0 ;
	virtual HRESULT __safecall Get_KernedPairs(Activex::TOleEnum &Get_KernedPairs_result) = 0 ;
	virtual HRESULT __safecall Set_KernedPairs(Activex::TOleEnum KernedPairs) = 0 ;
	virtual HRESULT __safecall Get_NormalizedHeight(Activex::TOleEnum &Get_NormalizedHeight_result) = 0 
		;
	virtual HRESULT __safecall Set_NormalizedHeight(Activex::TOleEnum NormalizedHeight) = 0 ;
	virtual HRESULT __safecall Get_PresetShape(Activex::TOleEnum &Get_PresetShape_result) = 0 ;
	virtual HRESULT __safecall Set_PresetShape(Activex::TOleEnum PresetShape) = 0 ;
	virtual HRESULT __safecall Get_PresetTextEffect(Activex::TOleEnum &Get_PresetTextEffect_result) = 0 
		;
	virtual HRESULT __safecall Set_PresetTextEffect(Activex::TOleEnum Preset) = 0 ;
	virtual HRESULT __safecall Get_RotatedChars(Activex::TOleEnum &Get_RotatedChars_result) = 0 ;
	virtual HRESULT __safecall Set_RotatedChars(Activex::TOleEnum RotatedChars) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Tracking(float &Get_Tracking_result) = 0 ;
	virtual HRESULT __safecall Set_Tracking(float Tracking) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Alignment() { Activex::TOleEnum r; HRESULT hr = Get_Alignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Alignment = {read=_scw_Get_Alignment, write=Set_Alignment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FontBold() { Activex::TOleEnum r; HRESULT hr = Get_FontBold(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FontItalic() { Activex::TOleEnum r; HRESULT hr = Get_FontItalic(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_FontSize() { float r; HRESULT hr = Get_FontSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_KernedPairs() { Activex::TOleEnum r; HRESULT hr = Get_KernedPairs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum KernedPairs = {read=_scw_Get_KernedPairs, write=Set_KernedPairs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_NormalizedHeight() { Activex::TOleEnum r; HRESULT hr = Get_NormalizedHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum NormalizedHeight = {read=_scw_Get_NormalizedHeight, write=Set_NormalizedHeight
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetShape() { Activex::TOleEnum r; HRESULT hr = Get_PresetShape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetShape = {read=_scw_Get_PresetShape, write=Set_PresetShape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetTextEffect() { Activex::TOleEnum r; HRESULT hr = Get_PresetTextEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetTextEffect = {read=_scw_Get_PresetTextEffect, write=Set_PresetTextEffect
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RotatedChars() { Activex::TOleEnum r; HRESULT hr = Get_RotatedChars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RotatedChars = {read=_scw_Get_RotatedChars, write=Set_RotatedChars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Tracking() { float r; HRESULT hr = Get_Tracking(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Tracking = {read=_scw_Get_Tracking, write=Set_Tracking};
};

__interface ThreeDFormat;
typedef System::DelphiInterface<ThreeDFormat> _di_ThreeDFormat;
__interface INTERFACE_UUID("{000C0321-0000-0000-C000-000000000046}") ThreeDFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementRotationX(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementRotationY(float Increment) = 0 ;
	virtual HRESULT __safecall ResetRotation(void) = 0 ;
	virtual HRESULT __safecall SetThreeDFormat(Activex::TOleEnum PresetThreeDFormat) = 0 ;
	virtual HRESULT __safecall SetExtrusionDirection(Activex::TOleEnum PresetExtrusionDirection) = 0 ;
	virtual HRESULT __safecall Get_Depth(float &Get_Depth_result) = 0 ;
	virtual HRESULT __safecall Set_Depth(float Depth) = 0 ;
	virtual HRESULT __safecall Get_ExtrusionColor(_di_ColorFormat &Get_ExtrusionColor_result) = 0 ;
	virtual HRESULT __safecall Get_ExtrusionColorType(Activex::TOleEnum &Get_ExtrusionColorType_result)
		 = 0 ;
	virtual HRESULT __safecall Set_ExtrusionColorType(Activex::TOleEnum ExtrusionColorType) = 0 ;
	virtual HRESULT __safecall Get_Perspective(Activex::TOleEnum &Get_Perspective_result) = 0 ;
	virtual HRESULT __safecall Set_Perspective(Activex::TOleEnum Perspective) = 0 ;
	virtual HRESULT __safecall Get_PresetExtrusionDirection(Activex::TOleEnum &Get_PresetExtrusionDirection_result
		) = 0 ;
	virtual HRESULT __safecall Get_PresetLightingDirection(Activex::TOleEnum &Get_PresetLightingDirection_result
		) = 0 ;
	virtual HRESULT __safecall Set_PresetLightingDirection(Activex::TOleEnum PresetLightingDirection) = 0 
		;
	virtual HRESULT __safecall Get_PresetLightingSoftness(Activex::TOleEnum &Get_PresetLightingSoftness_result
		) = 0 ;
	virtual HRESULT __safecall Set_PresetLightingSoftness(Activex::TOleEnum PresetLightingSoftness) = 0 
		;
	virtual HRESULT __safecall Get_PresetMaterial(Activex::TOleEnum &Get_PresetMaterial_result) = 0 ;
	virtual HRESULT __safecall Set_PresetMaterial(Activex::TOleEnum PresetMaterial) = 0 ;
	virtual HRESULT __safecall Get_PresetThreeDFormat(Activex::TOleEnum &Get_PresetThreeDFormat_result)
		 = 0 ;
	virtual HRESULT __safecall Get_RotationX(float &Get_RotationX_result) = 0 ;
	virtual HRESULT __safecall Set_RotationX(float RotationX) = 0 ;
	virtual HRESULT __safecall Get_RotationY(float &Get_RotationY_result) = 0 ;
	virtual HRESULT __safecall Set_RotationY(float RotationY) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Depth() { float r; HRESULT hr = Get_Depth(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Depth = {read=_scw_Get_Depth, write=Set_Depth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ExtrusionColor() { _di_ColorFormat r; HRESULT hr = Get_ExtrusionColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ExtrusionColor = {read=_scw_Get_ExtrusionColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ExtrusionColorType() { Activex::TOleEnum r; HRESULT hr = Get_ExtrusionColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ExtrusionColorType = {read=_scw_Get_ExtrusionColorType, write=Set_ExtrusionColorType
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Perspective() { Activex::TOleEnum r; HRESULT hr = Get_Perspective(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Perspective = {read=_scw_Get_Perspective, write=Set_Perspective};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetExtrusionDirection() { Activex::TOleEnum r; HRESULT hr = Get_PresetExtrusionDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetExtrusionDirection = {read=_scw_Get_PresetExtrusionDirection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetLightingDirection() { Activex::TOleEnum r; HRESULT hr = Get_PresetLightingDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetLightingDirection = {read=_scw_Get_PresetLightingDirection, write=
		Set_PresetLightingDirection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetLightingSoftness() { Activex::TOleEnum r; HRESULT hr = Get_PresetLightingSoftness(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetLightingSoftness = {read=_scw_Get_PresetLightingSoftness, write=
		Set_PresetLightingSoftness};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetMaterial() { Activex::TOleEnum r; HRESULT hr = Get_PresetMaterial(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetMaterial = {read=_scw_Get_PresetMaterial, write=Set_PresetMaterial
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetThreeDFormat() { Activex::TOleEnum r; HRESULT hr = Get_PresetThreeDFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetThreeDFormat = {read=_scw_Get_PresetThreeDFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_RotationX() { float r; HRESULT hr = Get_RotationX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float RotationX = {read=_scw_Get_RotationX, write=Set_RotationX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_RotationY() { float r; HRESULT hr = Get_RotationY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float RotationY = {read=_scw_Get_RotationY, write=Set_RotationY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface INTERFACE_UUID("{0002443B-0000-0000-C000-000000000046}") ShapeRange  : public IDispatch 
	
{
	
};

__dispinterface Border;
typedef System::DelphiInterface<Border> _di_Border;
__dispinterface INTERFACE_UUID("{00020854-0000-0000-C000-000000000046}") Border  : public IDispatch 
	
{
	
};

__dispinterface Interior;
typedef System::DelphiInterface<Interior> _di_Interior;
__dispinterface INTERFACE_UUID("{00020870-0000-0000-C000-000000000046}") Interior  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208A2-0000-0000-C000-000000000046}") _OLEObject  : public IDispatch 
	
{
	
};
typedef _OLEObject OLEObject;

typedef Word *PWordBool1;

typedef int *PInteger1;

typedef GUID *PUserType1;

typedef Shortint *PShortint1;

typedef PShortint1 *PPShortint1;

__dispinterface AdjustmentsDisp;
typedef System::DelphiInterface<AdjustmentsDisp> _di_AdjustmentsDisp;
__dispinterface INTERFACE_UUID("{000C0310-0000-0000-C000-000000000046}") AdjustmentsDisp  : public IDispatch 
	
{
	
};

__dispinterface CalloutFormatDisp;
typedef System::DelphiInterface<CalloutFormatDisp> _di_CalloutFormatDisp;
__dispinterface INTERFACE_UUID("{000C0311-0000-0000-C000-000000000046}") CalloutFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0312-0000-0000-C000-000000000046}") ColorFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_RGB_(int &Get_RGB__result) = 0 ;
	virtual HRESULT __safecall Set_RGB_(int RGB_) = 0 ;
	virtual HRESULT __safecall Get_SchemeColor(int &Get_SchemeColor_result) = 0 ;
	virtual HRESULT __safecall Set_SchemeColor(int SchemeColor) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RGB_() { int r; HRESULT hr = Get_RGB_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RGB_ = {read=_scw_Get_RGB_, write=Set_RGB_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SchemeColor() { int r; HRESULT hr = Get_SchemeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SchemeColor = {read=_scw_Get_SchemeColor, write=Set_SchemeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
};

__dispinterface ColorFormatDisp;
typedef System::DelphiInterface<ColorFormatDisp> _di_ColorFormatDisp;
__dispinterface INTERFACE_UUID("{000C0312-0000-0000-C000-000000000046}") ColorFormatDisp  : public IDispatch 
	
{
	
};

__dispinterface LineFormatDisp;
typedef System::DelphiInterface<LineFormatDisp> _di_LineFormatDisp;
__dispinterface INTERFACE_UUID("{000C0317-0000-0000-C000-000000000046}") LineFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0318-0000-0000-C000-000000000046}") ShapeNode  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_EditingType(Activex::TOleEnum &Get_EditingType_result) = 0 ;
	virtual HRESULT __safecall Get_Points(OleVariant &Get_Points_result) = 0 ;
	virtual HRESULT __safecall Get_SegmentType(Activex::TOleEnum &Get_SegmentType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EditingType() { Activex::TOleEnum r; HRESULT hr = Get_EditingType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EditingType = {read=_scw_Get_EditingType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Points() { OleVariant r; HRESULT hr = Get_Points(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Points = {read=_scw_Get_Points};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SegmentType() { Activex::TOleEnum r; HRESULT hr = Get_SegmentType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SegmentType = {read=_scw_Get_SegmentType};
};

__dispinterface ShapeNodeDisp;
typedef System::DelphiInterface<ShapeNodeDisp> _di_ShapeNodeDisp;
__dispinterface INTERFACE_UUID("{000C0318-0000-0000-C000-000000000046}") ShapeNodeDisp  : public IDispatch 
	
{
	
};

__dispinterface ShapeNodesDisp;
typedef System::DelphiInterface<ShapeNodesDisp> _di_ShapeNodesDisp;
__dispinterface INTERFACE_UUID("{000C0319-0000-0000-C000-000000000046}") ShapeNodesDisp  : public IDispatch 
	
{
	
};

__dispinterface PictureFormatDisp;
typedef System::DelphiInterface<PictureFormatDisp> _di_PictureFormatDisp;
__dispinterface INTERFACE_UUID("{000C031A-0000-0000-C000-000000000046}") PictureFormatDisp  : public IDispatch 
	
{
	
};

__dispinterface ShadowFormatDisp;
typedef System::DelphiInterface<ShadowFormatDisp> _di_ShadowFormatDisp;
__dispinterface INTERFACE_UUID("{000C031B-0000-0000-C000-000000000046}") ShadowFormatDisp  : public IDispatch 
	
{
	
};

__dispinterface TextEffectFormatDisp;
typedef System::DelphiInterface<TextEffectFormatDisp> _di_TextEffectFormatDisp;
__dispinterface INTERFACE_UUID("{000C031F-0000-0000-C000-000000000046}") TextEffectFormatDisp  : public IDispatch 
	
{
	
};

__dispinterface ThreeDFormatDisp;
typedef System::DelphiInterface<ThreeDFormatDisp> _di_ThreeDFormatDisp;
__dispinterface INTERFACE_UUID("{000C0321-0000-0000-C000-000000000046}") ThreeDFormatDisp  : public IDispatch 
	
{
	
};

__dispinterface FillFormatDisp;
typedef System::DelphiInterface<FillFormatDisp> _di_FillFormatDisp;
__dispinterface INTERFACE_UUID("{000C0314-0000-0000-C000-000000000046}") FillFormatDisp  : public IDispatch 
	
{
	
};

__interface IFont;
typedef System::DelphiInterface<IFont> _di_IFont;
__interface INTERFACE_UUID("{0002084D-0001-0000-C000-000000000046}") IFont  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Background(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Background(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Bold(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Bold(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Color(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Color(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColorIndex(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColorIndex(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FontStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FontStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Italic(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Italic(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_OutlineFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OutlineFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Size(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Strikethrough(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Strikethrough(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Subscript(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Subscript(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Superscript(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Superscript(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Underline(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Underline(const OleVariant RHS) = 0 ;
};

__interface IWindow;
typedef System::DelphiInterface<IWindow> _di_IWindow;
__dispinterface Pane;
typedef System::DelphiInterface<Pane> _di_Pane;
__dispinterface Panes;
typedef System::DelphiInterface<Panes> _di_Panes;
__interface INTERFACE_UUID("{00020893-0001-0000-C000-000000000046}") IWindow  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall ActivateNext(void) = 0 ;
	virtual HRESULT __stdcall ActivatePrevious(void) = 0 ;
	virtual HRESULT __stdcall Get_ActiveCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ActiveChart(/* out */ _di__Chart &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ActivePane(/* out */ _di_Pane &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ActiveSheet(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Close(const OleVariant SaveChanges, const OleVariant Filename, const OleVariant 
		RouteWorkbook) = 0 ;
	virtual HRESULT __stdcall Get_DisplayFormulas(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayFormulas(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayGridlines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayGridlines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayHeadings(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayHeadings(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayHorizontalScrollBar(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayHorizontalScrollBar(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayOutline(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayOutline(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayRightToLeft(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayRightToLeft(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayVerticalScrollBar(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayVerticalScrollBar(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayWorkbookTabs(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayWorkbookTabs(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayZeros(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayZeros(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableResize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableResize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_FreezePanes(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FreezePanes(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_GridlineColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_GridlineColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_GridlineColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_GridlineColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall LargeScroll(const OleVariant Down, const OleVariant Up, const OleVariant 
		ToRight, const OleVariant ToLeft) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall NewWindow(/* out */ _di_Window_ &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnWindow(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnWindow(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Panes(/* out */ _di_Panes &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges) = 0 ;
	virtual HRESULT __stdcall Get_RangeSelection(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ScrollColumn(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScrollColumn(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ScrollRow(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScrollRow(int RHS) = 0 ;
	virtual HRESULT __stdcall ScrollWorkbookTabs(const OleVariant Sheets, const OleVariant Position) = 0 
		;
	virtual HRESULT __stdcall Get_SelectedSheets(/* out */ _di_Sheets &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Selection(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall SmallScroll(const OleVariant Down, const OleVariant Up, const OleVariant 
		ToRight, const OleVariant ToLeft) = 0 ;
	virtual HRESULT __stdcall Get_Split(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Split(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitColumn(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitColumn(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitHorizontal(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitHorizontal(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitRow(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitRow(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitVertical(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitVertical(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TabRatio(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TabRatio(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_UsableHeight(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_UsableWidth(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_VisibleRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_WindowNumber(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_WindowState(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_WindowState(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Zoom(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Zoom(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_View(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_View(Activex::TOleEnum RHS) = 0 ;
};

__interface IWindows;
typedef System::DelphiInterface<IWindows> _di_IWindows;
__interface INTERFACE_UUID("{00020892-0001-0000-C000-000000000046}") IWindows  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Arrange(Activex::TOleEnum ArrangeStyle, const OleVariant ActiveWorkbook, 
		const OleVariant SyncHorizontal, const OleVariant SyncVertical) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_Window_ &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_Window_ &RHS) = 0 ;
};

__interface IAppEvents;
typedef System::DelphiInterface<IAppEvents> _di_IAppEvents;
__interface INTERFACE_UUID("{00024413-0001-0000-C000-000000000046}") IAppEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall NewWorkbook(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall SheetSelectionChange(const _di_IDispatch Sh, const _di_Range Target) = 0 
		;
	virtual HRESULT __stdcall SheetBeforeDoubleClick(const _di_IDispatch Sh, const _di_Range Target, Word 
		&Cancel) = 0 ;
	virtual HRESULT __stdcall SheetBeforeRightClick(const _di_IDispatch Sh, const _di_Range Target, Word 
		&Cancel) = 0 ;
	virtual HRESULT __stdcall SheetActivate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetDeactivate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetCalculate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetChange(const _di_IDispatch Sh, const _di_Range Target) = 0 ;
	virtual HRESULT __stdcall WorkbookOpen(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall WorkbookActivate(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall WorkbookDeactivate(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall WorkbookBeforeClose(const _di__Workbook Wb, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall WorkbookBeforeSave(const _di__Workbook Wb, Word SaveAsUI, Word &Cancel) = 0 
		;
	virtual HRESULT __stdcall WorkbookBeforePrint(const _di__Workbook Wb, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall WorkbookNewSheet(const _di__Workbook Wb, const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall WorkbookAddinInstall(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall WorkbookAddinUninstall(const _di__Workbook Wb) = 0 ;
	virtual HRESULT __stdcall WindowResize(const _di__Workbook Wb, const _di_Window_ Wn) = 0 ;
	virtual HRESULT __stdcall WindowActivate(const _di__Workbook Wb, const _di_Window_ Wn) = 0 ;
	virtual HRESULT __stdcall WindowDeactivate(const _di__Workbook Wb, const _di_Window_ Wn) = 0 ;
};

__dispinterface _ApplicationDisp;
typedef System::DelphiInterface<_ApplicationDisp> _di__ApplicationDisp;
__dispinterface INTERFACE_UUID("{000208D5-0000-0000-C000-000000000046}") _ApplicationDisp  : public IDispatch 
	
{
	
};

__interface IWorksheetFunction;
typedef System::DelphiInterface<IWorksheetFunction> _di_IWorksheetFunction;
__interface INTERFACE_UUID("{00020845-0001-0000-C000-000000000046}") IWorksheetFunction  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _WSFunction(const OleVariant Arg1, const OleVariant Arg2, const OleVariant 
		Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, 
		const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const 
		OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant 
		Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20
		, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, 
		const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const 
		OleVariant Arg29, const OleVariant Arg30, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Count(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall IsNA(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall IsError(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Sum(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Average(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Min(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Max(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Npv(double Arg1, const OleVariant Arg2, const OleVariant Arg3, const OleVariant 
		Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const OleVariant Arg8, 
		const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant Arg12, const 
		OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16, const OleVariant 
		Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, const OleVariant Arg21
		, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const OleVariant Arg25, 
		const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant Arg29, const 
		OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall StDev(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Dollar(double Arg1, const OleVariant Arg2, /* out */ WideString &RHS) = 0 
		;
	virtual HRESULT __stdcall Fixed(double Arg1, const OleVariant Arg2, const OleVariant Arg3, /* out */ 
		WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Pi(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Ln(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Log10(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Round(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Lookup(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Index(const OleVariant Arg1, double Arg2, const OleVariant Arg3, const OleVariant 
		Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Rept(const WideString Arg1, double Arg2, /* out */ WideString &RHS) = 0 ;
		
	virtual HRESULT __stdcall And_(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Or_(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall DCount(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DSum(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DAverage(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DMin(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DMax(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DStDev(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Var_(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DVar(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Text(const OleVariant Arg1, const WideString Arg2, /* out */ WideString &
		RHS) = 0 ;
	virtual HRESULT __stdcall LinEst(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Trend(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall LogEst(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Growth(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Pv(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const OleVariant 
		Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Fv(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const OleVariant 
		Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall NPer(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const 
		OleVariant Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Pmt(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const OleVariant 
		Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Rate(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const 
		OleVariant Arg5, const OleVariant Arg6, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall MIrr(const OleVariant Arg1, double Arg2, double Arg3, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Irr(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall Match(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Weekday(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Search(const WideString Arg1, const WideString Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Transpose(const OleVariant Arg1, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Atan2(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Asin(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Acos(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Choose(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall HLookup(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall VLookup(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Log(double Arg1, const OleVariant Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Proper(const WideString Arg1, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Trim(const WideString Arg1, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Replace(const WideString Arg1, double Arg2, double Arg3, const WideString 
		Arg4, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Substitute(const WideString Arg1, const WideString Arg2, const WideString 
		Arg3, const OleVariant Arg4, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Find(const WideString Arg1, const WideString Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall IsErr(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall IsText(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall IsNumber(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Sln(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Syd(double Arg1, double Arg2, double Arg3, double Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Ddb(double Arg1, double Arg2, double Arg3, double Arg4, const OleVariant 
		Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Clean(const WideString Arg1, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall MDeterm(const OleVariant Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall MInverse(const OleVariant Arg1, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall MMult(const OleVariant Arg1, const OleVariant Arg2, /* out */ OleVariant 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Ipmt(double Arg1, double Arg2, double Arg3, double Arg4, const OleVariant 
		Arg5, const OleVariant Arg6, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Ppmt(double Arg1, double Arg2, double Arg3, double Arg4, const OleVariant 
		Arg5, const OleVariant Arg6, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall CountA(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Product(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Fact(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DProduct(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall IsNonText(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall StDevP(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall VarP(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DStDevP(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DVarP(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall IsLogical(const OleVariant Arg1, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall DCountA(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall USDollar(double Arg1, double Arg2, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall FindB(const WideString Arg1, const WideString Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall SearchB(const WideString Arg1, const WideString Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall ReplaceB(const WideString Arg1, double Arg2, double Arg3, const WideString 
		Arg4, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall RoundUp(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall RoundDown(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Rank(double Arg1, const _di_Range Arg2, const OleVariant Arg3, /* out */ 
		double &RHS) = 0 ;
	virtual HRESULT __stdcall Days360(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Vdb(double Arg1, double Arg2, double Arg3, double Arg4, double Arg5, const 
		OleVariant Arg6, const OleVariant Arg7, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Median(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall SumProduct(const OleVariant Arg1, const OleVariant Arg2, const OleVariant 
		Arg3, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, 
		const OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const 
		OleVariant Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant 
		Arg16, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20
		, const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, 
		const OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const 
		OleVariant Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Sinh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Cosh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Tanh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Asinh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Acosh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Atanh(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DGet(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Db(double Arg1, double Arg2, double Arg3, double Arg4, const OleVariant Arg5
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Frequency(const OleVariant Arg1, const OleVariant Arg2, /* out */ OleVariant 
		&RHS) = 0 ;
	virtual HRESULT __stdcall AveDev(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall BetaDist(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const 
		OleVariant Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall GammaLn(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall BetaInv(double Arg1, double Arg2, double Arg3, const OleVariant Arg4, const 
		OleVariant Arg5, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall BinomDist(double Arg1, double Arg2, double Arg3, Word Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall ChiDist(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall ChiInv(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Combin(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Confidence(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall CritBinom(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall Even(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall ExponDist(double Arg1, double Arg2, Word Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall FDist(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 ;
		
	virtual HRESULT __stdcall FInv(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Fisher(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall FisherInv(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Floor(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall GammaDist(double Arg1, double Arg2, double Arg3, Word Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall GammaInv(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall Ceiling(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall HypGeomDist(double Arg1, double Arg2, double Arg3, double Arg4, /* out */ 
		double &RHS) = 0 ;
	virtual HRESULT __stdcall LogNormDist(double Arg1, double Arg2, double Arg3, /* out */ double &RHS)
		 = 0 ;
	virtual HRESULT __stdcall LogInv(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall NegBinomDist(double Arg1, double Arg2, double Arg3, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall NormDist(double Arg1, double Arg2, double Arg3, Word Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall NormSDist(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall NormInv(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall NormSInv(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Standardize(double Arg1, double Arg2, double Arg3, /* out */ double &RHS)
		 = 0 ;
	virtual HRESULT __stdcall Odd(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Permut(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Poisson(double Arg1, double Arg2, Word Arg3, /* out */ double &RHS) = 0 ;
		
	virtual HRESULT __stdcall TDist(double Arg1, double Arg2, double Arg3, /* out */ double &RHS) = 0 ;
		
	virtual HRESULT __stdcall Weibull(double Arg1, double Arg2, double Arg3, Word Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall SumXMY2(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall SumX2MY2(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &
		RHS) = 0 ;
	virtual HRESULT __stdcall SumX2PY2(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &
		RHS) = 0 ;
	virtual HRESULT __stdcall ChiTest(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Correl(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Covar(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Forecast(double Arg1, const OleVariant Arg2, const OleVariant Arg3, /* out */ 
		double &RHS) = 0 ;
	virtual HRESULT __stdcall FTest(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Intercept(const OleVariant Arg1, const OleVariant Arg2, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Pearson(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall RSq(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall StEyx(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall Slope(const OleVariant Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall TTest(const OleVariant Arg1, const OleVariant Arg2, double Arg3, double Arg4
		, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Prob(const OleVariant Arg1, const OleVariant Arg2, double Arg3, const OleVariant 
		Arg4, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall DevSq(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall GeoMean(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall HarMean(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall SumSq(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3
		, const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Kurt(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Skew(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall ZTest(const OleVariant Arg1, double Arg2, const OleVariant Arg3, /* out */ 
		double &RHS) = 0 ;
	virtual HRESULT __stdcall Large(const OleVariant Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Small(const OleVariant Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Quartile(const OleVariant Arg1, double Arg2, /* out */ double &RHS) = 0 ;
		
	virtual HRESULT __stdcall Percentile(const OleVariant Arg1, double Arg2, /* out */ double &RHS) = 0 
		;
	virtual HRESULT __stdcall PercentRank(const OleVariant Arg1, double Arg2, const OleVariant Arg3, /* out */ 
		double &RHS) = 0 ;
	virtual HRESULT __stdcall Mode(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall TrimMean(const OleVariant Arg1, double Arg2, /* out */ double &RHS) = 0 ;
		
	virtual HRESULT __stdcall TInv(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Power(double Arg1, double Arg2, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Radians(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Degrees(double Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Subtotal(double Arg1, const _di_Range Arg2, const OleVariant Arg3, const 
		OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const OleVariant 
		Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant Arg12
		, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16, 
		const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, const 
		OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const OleVariant 
		Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant Arg29
		, const OleVariant Arg30, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall SumIf(const _di_Range Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall CountIf(const _di_Range Arg1, const OleVariant Arg2, /* out */ double &RHS
		) = 0 ;
	virtual HRESULT __stdcall CountBlank(const _di_Range Arg1, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Ispmt(double Arg1, double Arg2, double Arg3, double Arg4, /* out */ double 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Roman(double Arg1, const OleVariant Arg2, /* out */ WideString &RHS) = 0 
		;
	virtual HRESULT __stdcall Asc(const WideString Arg1, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Dbcs(const WideString Arg1, /* out */ WideString &RHS) = 0 ;
};

__interface IRange;
typedef System::DelphiInterface<IRange> _di_IRange;
__dispinterface Areas;
typedef System::DelphiInterface<Areas> _di_Areas;
__dispinterface Borders;
typedef System::DelphiInterface<Borders> _di_Borders;
__dispinterface Font;
typedef System::DelphiInterface<Font> _di_Font;
__dispinterface PivotField;
typedef System::DelphiInterface<PivotField> _di_PivotField;
__dispinterface PivotItem;
typedef System::DelphiInterface<PivotItem> _di_PivotItem;
__dispinterface SoundNote;
typedef System::DelphiInterface<SoundNote> _di_SoundNote;
__dispinterface Validation;
typedef System::DelphiInterface<Validation> _di_Validation;
__dispinterface Comment;
typedef System::DelphiInterface<Comment> _di_Comment;
__dispinterface Phonetic;
typedef System::DelphiInterface<Phonetic> _di_Phonetic;
__dispinterface FormatConditions;
typedef System::DelphiInterface<FormatConditions> _di_FormatConditions;
__interface INTERFACE_UUID("{00020846-0001-0000-C000-000000000046}") IRange  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Address(const OleVariant RowAbsolute, const OleVariant ColumnAbsolute
		, Activex::TOleEnum ReferenceStyle, const OleVariant External, const OleVariant RelativeTo, int lcid
		, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddressLocal(const OleVariant RowAbsolute, const OleVariant ColumnAbsolute
		, Activex::TOleEnum ReferenceStyle, const OleVariant External, const OleVariant RelativeTo, /* out */ 
		WideString &RHS) = 0 ;
	virtual HRESULT __stdcall AdvancedFilter(Activex::TOleEnum Action, const OleVariant CriteriaRange, 
		const OleVariant CopyToRange, const OleVariant Unique) = 0 ;
	virtual HRESULT __stdcall ApplyNames(const OleVariant Names, const OleVariant IgnoreRelativeAbsolute
		, const OleVariant UseRowColumnNames, const OleVariant OmitColumn, const OleVariant OmitRow, Activex::TOleEnum 
		Order, const OleVariant AppendLast) = 0 ;
	virtual HRESULT __stdcall ApplyOutlineStyles(void) = 0 ;
	virtual HRESULT __stdcall Get_Areas(/* out */ _di_Areas &RHS) = 0 ;
	virtual HRESULT __stdcall AutoComplete(const WideString String_, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall AutoFill(const _di_Range Destination, Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __stdcall AutoFilter(const OleVariant Field, const OleVariant Criteria1, Activex::TOleEnum 
		Operator, const OleVariant Criteria2, const OleVariant VisibleDropDown) = 0 ;
	virtual HRESULT __stdcall AutoFit(void) = 0 ;
	virtual HRESULT __stdcall AutoFormat(Activex::TOleEnum Format, const OleVariant Number, const OleVariant 
		Font, const OleVariant Alignment, const OleVariant Border, const OleVariant Pattern, const OleVariant 
		Width) = 0 ;
	virtual HRESULT __stdcall AutoOutline(void) = 0 ;
	virtual HRESULT __stdcall BorderAround(const OleVariant LineStyle, Activex::TOleEnum Weight, Activex::TOleEnum 
		ColorIndex, const OleVariant Color) = 0 ;
	virtual HRESULT __stdcall Get_Borders(/* out */ _di_Borders &RHS) = 0 ;
	virtual HRESULT __stdcall Calculate(void) = 0 ;
	virtual HRESULT __stdcall Get_Cells(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall ClearContents(void) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall ClearNotes(void) = 0 ;
	virtual HRESULT __stdcall ClearOutline(void) = 0 ;
	virtual HRESULT __stdcall Get_Column(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall ColumnDifferences(const OleVariant Comparison, /* out */ _di_Range &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_Columns(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColumnWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColumnWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Consolidate(const OleVariant Sources, const OleVariant Function_, const OleVariant 
		TopRow, const OleVariant LeftColumn, const OleVariant CreateLinks) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Destination) = 0 ;
	virtual HRESULT __stdcall CopyFromRecordset(const _di_IUnknown Data, const OleVariant MaxRows, const 
		OleVariant MaxColumns, /* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall CreateNames(const OleVariant Top, const OleVariant Left, const OleVariant 
		Bottom, const OleVariant Right) = 0 ;
	virtual HRESULT __stdcall CreatePublisher(const OleVariant Edition, Activex::TOleEnum Appearance, const 
		OleVariant ContainsPICT, const OleVariant ContainsBIFF, const OleVariant ContainsRTF, const OleVariant 
		ContainsVALU) = 0 ;
	virtual HRESULT __stdcall Get_CurrentArray(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_CurrentRegion(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Cut(const OleVariant Destination) = 0 ;
	virtual HRESULT __stdcall DataSeries(const OleVariant Rowcol, Activex::TOleEnum Type_, Activex::TOleEnum 
		Date, const OleVariant Step, const OleVariant Stop, const OleVariant Trend) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant RowIndex, const OleVariant ColumnIndex, int 
		lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(const OleVariant RowIndex, const OleVariant ColumnIndex, int 
		lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Delete(const OleVariant Shift) = 0 ;
	virtual HRESULT __stdcall Get_Dependents(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall DialogBox_(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DirectDependents(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DirectPrecedents(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall EditionOptions(Activex::TOleEnum Type_, Activex::TOleEnum Option, const OleVariant 
		Name, const OleVariant Reference, Activex::TOleEnum Appearance, Activex::TOleEnum ChartSize, const 
		OleVariant Format, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_End_(Activex::TOleEnum Direction, /* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_EntireColumn(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_EntireRow(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall FillDown(void) = 0 ;
	virtual HRESULT __stdcall FillLeft(void) = 0 ;
	virtual HRESULT __stdcall FillRight(void) = 0 ;
	virtual HRESULT __stdcall FillUp(void) = 0 ;
	virtual HRESULT __stdcall Find(const OleVariant What, const OleVariant After, const OleVariant LookIn
		, const OleVariant LookAt, const OleVariant SearchOrder, Activex::TOleEnum SearchDirection, const 
		OleVariant MatchCase, const OleVariant MatchByte, const OleVariant MatchControlCharacters, const OleVariant 
		MatchDiacritics, const OleVariant MatchKashida, const OleVariant MatchAlefHamza, /* out */ _di_Range 
		&RHS) = 0 ;
	virtual HRESULT __stdcall FindNext(const OleVariant After, /* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall FindPrevious(const OleVariant After, /* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaArray(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaArray(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaLabel(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaLabel(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaHidden(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaHidden(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaLocal(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaLocal(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaR1C1(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaR1C1(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaR1C1Local(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaR1C1Local(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall FunctionWizard(void) = 0 ;
	virtual HRESULT __stdcall GoalSeek(const OleVariant Goal, const _di_Range ChangingCell, /* out */ Word 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Group(const OleVariant Start, const OleVariant End_, const OleVariant By, 
		const OleVariant Periods, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasArray(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasFormula(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Hidden(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Hidden(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_IndentLevel(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IndentLevel(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall InsertIndent(int InsertAmount) = 0 ;
	virtual HRESULT __stdcall Insert(const OleVariant Shift) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant RowIndex, const OleVariant ColumnIndex, int lcid
		, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Item(const OleVariant RowIndex, const OleVariant ColumnIndex, int lcid
		, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Justify(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListHeaderRows(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall ListNames(void) = 0 ;
	virtual HRESULT __stdcall Get_LocationInTable(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Merge(const OleVariant Across) = 0 ;
	virtual HRESULT __stdcall UnMerge(void) = 0 ;
	virtual HRESULT __stdcall Get_MergeArea(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MergeCells(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MergeCells(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall NavigateArrow(const OleVariant TowardPrecedent, const OleVariant ArrowNumber
		, const OleVariant LinkNumber) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Next(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall NoteText(const OleVariant Text, const OleVariant Start, const OleVariant 
		Length, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormatLocal(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormatLocal(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Offset(const OleVariant RowOffset, const OleVariant ColumnOffset, /* out */ 
		_di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_OutlineLevel(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OutlineLevel(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageBreak(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PageBreak(int RHS) = 0 ;
	virtual HRESULT __stdcall Parse(const OleVariant ParseLine, const OleVariant Destination) = 0 ;
	virtual HRESULT __stdcall PasteSpecial(Activex::TOleEnum Paste, Activex::TOleEnum Operation, const 
		OleVariant SkipBlanks, const OleVariant Transpose) = 0 ;
	virtual HRESULT __stdcall Get_PivotField(/* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PivotItem(/* out */ _di_PivotItem &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PivotTable(/* out */ _di_PivotTable &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Precedents(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrefixCharacter(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Previous(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges) = 0 ;
	virtual HRESULT __stdcall Get_QueryTable(/* out */ _di__QueryTable &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Range(const OleVariant Cell1, const OleVariant Cell2, /* out */ _di_Range 
		&RHS) = 0 ;
	virtual HRESULT __stdcall RemoveSubtotal(void) = 0 ;
	virtual HRESULT __stdcall Replace(const OleVariant What, const OleVariant Replacement, const OleVariant 
		LookAt, const OleVariant SearchOrder, const OleVariant MatchCase, const OleVariant MatchByte, const 
		OleVariant MatchControlCharacters, const OleVariant MatchDiacritics, const OleVariant MatchKashida
		, const OleVariant MatchAlefHamza, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Resize(const OleVariant RowSize, const OleVariant ColumnSize, /* out */ 
		_di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Row(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall RowDifferences(const OleVariant Comparison, /* out */ _di_Range &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_RowHeight(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RowHeight(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Rows(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Run(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Show(void) = 0 ;
	virtual HRESULT __stdcall ShowDependents(const OleVariant Remove) = 0 ;
	virtual HRESULT __stdcall Get_ShowDetail(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowDetail(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall ShowErrors(void) = 0 ;
	virtual HRESULT __stdcall ShowPrecedents(const OleVariant Remove) = 0 ;
	virtual HRESULT __stdcall Get_ShrinkToFit(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShrinkToFit(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Sort(const OleVariant Key1, Activex::TOleEnum Order1, const OleVariant Key2
		, const OleVariant Type_, Activex::TOleEnum Order2, const OleVariant Key3, Activex::TOleEnum Order3
		, Activex::TOleEnum Header, const OleVariant OrderCustom, const OleVariant MatchCase, Activex::TOleEnum 
		Orientation, Activex::TOleEnum SortMethod, const OleVariant IgnoreControlCharacters, const OleVariant 
		IgnoreDiacritics, const OleVariant IgnoreKashida) = 0 ;
	virtual HRESULT __stdcall SortSpecial(Activex::TOleEnum SortMethod, const OleVariant Key1, Activex::TOleEnum 
		Order1, const OleVariant Type_, const OleVariant Key2, Activex::TOleEnum Order2, const OleVariant 
		Key3, Activex::TOleEnum Order3, Activex::TOleEnum Header, const OleVariant OrderCustom, const OleVariant 
		MatchCase, Activex::TOleEnum Orientation) = 0 ;
	virtual HRESULT __stdcall Get_SoundNote(/* out */ _di_SoundNote &RHS) = 0 ;
	virtual HRESULT __stdcall SpecialCells(Activex::TOleEnum Type_, const OleVariant Value, /* out */ _di_Range 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Style(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Style(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall SubscribeTo(const WideString Edition, Activex::TOleEnum Format) = 0 ;
	virtual HRESULT __stdcall Subtotal(int GroupBy, Activex::TOleEnum Function_, const OleVariant TotalList
		, const OleVariant Replace, const OleVariant PageBreaks, Activex::TOleEnum SummaryBelowData) = 0 ;
		
	virtual HRESULT __stdcall Get_Summary(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Table(const OleVariant RowInput, const OleVariant ColumnInput) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall TextToColumns(const OleVariant Destination, Activex::TOleEnum DataType, Activex::TOleEnum 
		TextQualifier, const OleVariant ConsecutiveDelimiter, const OleVariant Tab, const OleVariant Semicolon
		, const OleVariant Comma, const OleVariant Space, const OleVariant Other, const OleVariant OtherChar
		, const OleVariant FieldInfo) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Ungroup(void) = 0 ;
	virtual HRESULT __stdcall Get_UseStandardHeight(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_UseStandardHeight(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_UseStandardWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_UseStandardWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Validation(/* out */ _di_Validation &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value2(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value2(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Worksheet(/* out */ _di__Worksheet &RHS) = 0 ;
	virtual HRESULT __stdcall Get_WrapText(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_WrapText(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall AddComment(const OleVariant Text, /* out */ _di_Comment &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Comment(/* out */ _di_Comment &RHS) = 0 ;
	virtual HRESULT __stdcall ClearComments(void) = 0 ;
	virtual HRESULT __stdcall Get_Phonetic(/* out */ _di_Phonetic &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormatConditions(/* out */ _di_FormatConditions &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Hyperlinks(/* out */ _di_Hyperlinks &RHS) = 0 ;
};

__interface IChartEvents;
typedef System::DelphiInterface<IChartEvents> _di_IChartEvents;
__interface INTERFACE_UUID("{0002440F-0001-0000-C000-000000000046}") IChartEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Deactivate(void) = 0 ;
	virtual HRESULT __stdcall Resize(void) = 0 ;
	virtual HRESULT __stdcall MouseDown(Activex::TOleEnum Button, int Shift, int X, int Y) = 0 ;
	virtual HRESULT __stdcall MouseUp(Activex::TOleEnum Button, int Shift, int X, int Y) = 0 ;
	virtual HRESULT __stdcall MouseMove(Activex::TOleEnum Button, int Shift, int X, int Y) = 0 ;
	virtual HRESULT __stdcall BeforeRightClick(Word &Cancel) = 0 ;
	virtual HRESULT __stdcall DragPlot(void) = 0 ;
	virtual HRESULT __stdcall DragOver(void) = 0 ;
	virtual HRESULT __stdcall BeforeDoubleClick(Activex::TOleEnum ElementID, int Arg1, int Arg2, Word &
		Cancel) = 0 ;
	virtual HRESULT __stdcall Select(Activex::TOleEnum ElementID, int Arg1, int Arg2) = 0 ;
	virtual HRESULT __stdcall SeriesChange(int SeriesIndex, int PointIndex) = 0 ;
	virtual HRESULT __stdcall Calculate(void) = 0 ;
};

__dispinterface _ChartDisp;
typedef System::DelphiInterface<_ChartDisp> _di__ChartDisp;
__dispinterface ChartGroup;
typedef System::DelphiInterface<ChartGroup> _di_ChartGroup;
__dispinterface ChartArea;
typedef System::DelphiInterface<ChartArea> _di_ChartArea;
__dispinterface ChartTitle;
typedef System::DelphiInterface<ChartTitle> _di_ChartTitle;
__dispinterface Corners;
typedef System::DelphiInterface<Corners> _di_Corners;
__dispinterface DataTable;
typedef System::DelphiInterface<DataTable> _di_DataTable;
__dispinterface INTERFACE_UUID("{00020843-0000-0000-C000-000000000046}") DataTable  : public IDispatch 
	
{
	
};

__dispinterface Floor;
typedef System::DelphiInterface<Floor> _di_Floor;
__dispinterface Legend;
typedef System::DelphiInterface<Legend> _di_Legend;
__dispinterface PlotArea;
typedef System::DelphiInterface<PlotArea> _di_PlotArea;
__dispinterface Walls;
typedef System::DelphiInterface<Walls> _di_Walls;
__dispinterface INTERFACE_UUID("{000208D6-0000-0000-C000-000000000046}") _ChartDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000208D7-0000-0000-C000-000000000046}") Sheets  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(Activex::TOleEnum &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Add(const OleVariant Before, const OleVariant After, const OleVariant Count
		, const OleVariant Type_, int lcid, _di_IDispatch &Add_result) = 0 ;
	virtual HRESULT __safecall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Delete(int lcid) = 0 ;
	virtual HRESULT __safecall FillAcrossSheets(const _di_Range Range, Activex::TOleEnum Type_, int lcid
		) = 0 ;
	virtual HRESULT __safecall Get_Item(const OleVariant Index, _di_IDispatch &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __safecall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __safecall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __safecall Get_HPageBreaks(_di_HPageBreaks &Get_HPageBreaks_result) = 0 ;
	virtual HRESULT __safecall Get_VPageBreaks(_di_VPageBreaks &Get_VPageBreaks_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(int lcid, OleVariant &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __safecall Get__Default(const OleVariant Index, _di_IDispatch &Get__Default_result)
		 = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Creator() { Activex::TOleEnum r; HRESULT hr = Get_Creator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Item(const OleVariant Index) { _di_IDispatch r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Item[OleVariant Index] = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HPageBreaks _scw_Get_HPageBreaks() { _di_HPageBreaks r; HRESULT hr = Get_HPageBreaks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HPageBreaks HPageBreaks = {read=_scw_Get_HPageBreaks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_VPageBreaks _scw_Get_VPageBreaks() { _di_VPageBreaks r; HRESULT hr = Get_VPageBreaks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_VPageBreaks VPageBreaks = {read=_scw_Get_VPageBreaks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Visible(int lcid) { OleVariant r; HRESULT hr = Get_Visible(
		lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Visible[int lcid] = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get__Default(const OleVariant Index) { _di_IDispatch r; HRESULT hr = Get__Default(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch _Default[OleVariant Index] = {read=_scw_Get__Default/*, default*/};
};

__dispinterface SheetsDisp;
typedef System::DelphiInterface<SheetsDisp> _di_SheetsDisp;
__dispinterface INTERFACE_UUID("{000208D7-0000-0000-C000-000000000046}") SheetsDisp  : public IDispatch 
	
{
	
};

__interface IVPageBreak;
typedef System::DelphiInterface<IVPageBreak> _di_IVPageBreak;
__interface INTERFACE_UUID("{00024402-0001-0000-C000-000000000046}") IVPageBreak  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di__Worksheet &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall DragOff(Activex::TOleEnum Direction, int RegionIndex) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Extent(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Location(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Location(const _di_Range RHS) = 0 ;
};

__interface IHPageBreak;
typedef System::DelphiInterface<IHPageBreak> _di_IHPageBreak;
__interface INTERFACE_UUID("{00024401-0001-0000-C000-000000000046}") IHPageBreak  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di__Worksheet &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall DragOff(Activex::TOleEnum Direction, int RegionIndex) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Extent(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Location(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Location(const _di_Range RHS) = 0 ;
};

__interface IHPageBreaks;
typedef System::DelphiInterface<IHPageBreaks> _di_IHPageBreaks;
__dispinterface HPageBreak;
typedef System::DelphiInterface<HPageBreak> _di_HPageBreak;
__interface INTERFACE_UUID("{00024404-0001-0000-C000-000000000046}") IHPageBreaks  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_HPageBreak &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_HPageBreak &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const _di_IDispatch Before, /* out */ _di_HPageBreak &RHS) = 0 ;
};

__interface IVPageBreaks;
typedef System::DelphiInterface<IVPageBreaks> _di_IVPageBreaks;
__dispinterface VPageBreak;
typedef System::DelphiInterface<VPageBreak> _di_VPageBreak;
__interface INTERFACE_UUID("{00024405-0001-0000-C000-000000000046}") IVPageBreaks  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_VPageBreak &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_VPageBreak &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const _di_IDispatch Before, /* out */ _di_VPageBreak &RHS) = 0 ;
};

__interface IRecentFile;
typedef System::DelphiInterface<IRecentFile> _di_IRecentFile;
__interface INTERFACE_UUID("{00024407-0001-0000-C000-000000000046}") IRecentFile  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Path(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Open(/* out */ _di__Workbook &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IRecentFiles;
typedef System::DelphiInterface<IRecentFiles> _di_IRecentFiles;
__dispinterface RecentFile;
typedef System::DelphiInterface<RecentFile> _di_RecentFile;
__interface INTERFACE_UUID("{00024406-0001-0000-C000-000000000046}") IRecentFiles  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Maximum(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Maximum(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_RecentFile &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_RecentFile &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, /* out */ _di_RecentFile &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IDocEvents;
typedef System::DelphiInterface<IDocEvents> _di_IDocEvents;
__interface INTERFACE_UUID("{00024411-0001-0000-C000-000000000046}") IDocEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall SelectionChange(const _di_Range Target) = 0 ;
	virtual HRESULT __stdcall BeforeDoubleClick(const _di_Range Target, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall BeforeRightClick(const _di_Range Target, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Deactivate(void) = 0 ;
	virtual HRESULT __stdcall Calculate(void) = 0 ;
	virtual HRESULT __stdcall Change(const _di_Range Target) = 0 ;
};

__dispinterface _WorksheetDisp;
typedef System::DelphiInterface<_WorksheetDisp> _di__WorksheetDisp;
__dispinterface INTERFACE_UUID("{000208D8-0000-0000-C000-000000000046}") _WorksheetDisp  : public IDispatch 
	
{
	
};

__interface IStyle;
typedef System::DelphiInterface<IStyle> _di_IStyle;
__interface INTERFACE_UUID("{00020852-0001-0000-C000-000000000046}") IStyle  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_BuiltIn(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Borders(/* out */ _di_Borders &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaHidden(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaHidden(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludeAlignment(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludeAlignment(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludeBorder(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludeBorder(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludeFont(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludeFont(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludeNumber(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludeNumber(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludePatterns(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludePatterns(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IncludeProtection(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IncludeProtection(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IndentLevel(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IndentLevel(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MergeCells(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MergeCells(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_NameLocal(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormatLocal(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormatLocal(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShrinkToFit(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShrinkToFit(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_WrapText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_WrapText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
};

__interface IStyles;
typedef System::DelphiInterface<IStyles> _di_IStyles;
__dispinterface Style;
typedef System::DelphiInterface<Style> _di_Style;
__interface INTERFACE_UUID("{00020853-0001-0000-C000-000000000046}") IStyles  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const OleVariant BasedOn, /* out */ _di_Style 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, int lcid, /* out */ _di_Style &RHS) = 0 
		;
	virtual HRESULT __stdcall Merge(const OleVariant Workbook) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, int lcid, /* out */ _di_Style &RHS) = 0 
		;
};

__interface IBorders;
typedef System::DelphiInterface<IBorders> _di_IBorders;
__interface INTERFACE_UUID("{00020855-0001-0000-C000-000000000046}") IBorders  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Color(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Color(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColorIndex(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColorIndex(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(Activex::TOleEnum Index, /* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LineStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LineStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Weight(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Weight(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(Activex::TOleEnum Index, /* out */ _di_Border &RHS) = 0 ;
};

__dispinterface _GlobalDisp;
typedef System::DelphiInterface<_GlobalDisp> _di__GlobalDisp;
__dispinterface INTERFACE_UUID("{000208D9-0000-0000-C000-000000000046}") _GlobalDisp  : public IDispatch 
	
{
	
};

__interface IAddIn;
typedef System::DelphiInterface<IAddIn> _di_IAddIn;
__interface INTERFACE_UUID("{00020857-0001-0000-C000-000000000046}") IAddIn  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Author(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Comments(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FullName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Installed(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Installed(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Keywords(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Path(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Title(/* out */ WideString &RHS) = 0 ;
};

__interface IAddIns;
typedef System::DelphiInterface<IAddIns> _di_IAddIns;
__dispinterface AddIn;
typedef System::DelphiInterface<AddIn> _di_AddIn;
__interface INTERFACE_UUID("{00020858-0001-0000-C000-000000000046}") IAddIns  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Filename, const OleVariant CopyFile, /* out */ _di_AddIn 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_AddIn &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_AddIn &RHS) = 0 ;
};

__interface IToolbar;
typedef System::DelphiInterface<IToolbar> _di_IToolbar;
__dispinterface ToolbarButtons;
typedef System::DelphiInterface<ToolbarButtons> _di_ToolbarButtons;
__interface INTERFACE_UUID("{0002085C-0001-0000-C000-000000000046}") IToolbar  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BuiltIn(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Protection(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Protection(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Reset(void) = 0 ;
	virtual HRESULT __stdcall Get_ToolbarButtons(/* out */ _di_ToolbarButtons &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(int RHS) = 0 ;
};

__interface IToolbars;
typedef System::DelphiInterface<IToolbars> _di_IToolbars;
__dispinterface Toolbar;
typedef System::DelphiInterface<Toolbar> _di_Toolbar;
__interface INTERFACE_UUID("{0002085D-0001-0000-C000-000000000046}") IToolbars  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Name, /* out */ _di_Toolbar &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_Toolbar &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_Toolbar &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IToolbarButton;
typedef System::DelphiInterface<IToolbarButton> _di_IToolbarButton;
__interface INTERFACE_UUID("{0002085E-0001-0000-C000-000000000046}") IToolbarButton  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BuiltIn(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BuiltInFace(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BuiltInFace(Word RHS) = 0 ;
	virtual HRESULT __stdcall Copy(const _di_Toolbar Toolbar, int Before) = 0 ;
	virtual HRESULT __stdcall CopyFace(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Edit(void) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpContextID(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpContextID(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpFile(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpFile(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Id(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_IsGap(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const _di_Toolbar Toolbar, int Before) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall PasteFace(void) = 0 ;
	virtual HRESULT __stdcall Get_Pushed(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Pushed(Word RHS) = 0 ;
	virtual HRESULT __stdcall Reset(void) = 0 ;
	virtual HRESULT __stdcall Get_StatusBar(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_StatusBar(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(int RHS) = 0 ;
};

__interface IToolbarButtons;
typedef System::DelphiInterface<IToolbarButtons> _di_IToolbarButtons;
__dispinterface ToolbarButton;
typedef System::DelphiInterface<ToolbarButton> _di_ToolbarButton;
__interface INTERFACE_UUID("{0002085F-0001-0000-C000-000000000046}") IToolbarButtons  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Button, const OleVariant Before, const OleVariant OnAction
		, const OleVariant Pushed, const OleVariant Enabled, const OleVariant StatusBar, const OleVariant 
		HelpFile, const OleVariant HelpContextID, /* out */ _di_ToolbarButton &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_ToolbarButton &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_ToolbarButton &RHS) = 0 ;
};

__interface IAreas;
typedef System::DelphiInterface<IAreas> _di_IAreas;
__interface INTERFACE_UUID("{00020860-0001-0000-C000-000000000046}") IAreas  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_Range &RHS) = 0 ;
};

__interface IWorkbookEvents;
typedef System::DelphiInterface<IWorkbookEvents> _di_IWorkbookEvents;
__interface INTERFACE_UUID("{00024412-0001-0000-C000-000000000046}") IWorkbookEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Open(void) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Deactivate(void) = 0 ;
	virtual HRESULT __stdcall BeforeClose(Word &Cancel) = 0 ;
	virtual HRESULT __stdcall BeforeSave(Word SaveAsUI, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall BeforePrint(Word &Cancel) = 0 ;
	virtual HRESULT __stdcall NewSheet(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall AddinInstall(void) = 0 ;
	virtual HRESULT __stdcall AddinUninstall(void) = 0 ;
	virtual HRESULT __stdcall WindowResize(const _di_Window_ Wn) = 0 ;
	virtual HRESULT __stdcall WindowActivate(const _di_Window_ Wn) = 0 ;
	virtual HRESULT __stdcall WindowDeactivate(const _di_Window_ Wn) = 0 ;
	virtual HRESULT __stdcall SheetSelectionChange(const _di_IDispatch Sh, const _di_Range Target) = 0 
		;
	virtual HRESULT __stdcall SheetBeforeDoubleClick(const _di_IDispatch Sh, const _di_Range Target, Word 
		&Cancel) = 0 ;
	virtual HRESULT __stdcall SheetBeforeRightClick(const _di_IDispatch Sh, const _di_Range Target, Word 
		&Cancel) = 0 ;
	virtual HRESULT __stdcall SheetActivate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetDeactivate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetCalculate(const _di_IDispatch Sh) = 0 ;
	virtual HRESULT __stdcall SheetChange(const _di_IDispatch Sh, const _di_Range Target) = 0 ;
};

__dispinterface _WorkbookDisp;
typedef System::DelphiInterface<_WorkbookDisp> _di__WorkbookDisp;
__dispinterface Mailer;
typedef System::DelphiInterface<Mailer> _di_Mailer;
__dispinterface INTERFACE_UUID("{000208D1-0000-0000-C000-000000000046}") Mailer  : public IDispatch 
	
{
	
};

__dispinterface PivotCaches;
typedef System::DelphiInterface<PivotCaches> _di_PivotCaches;
__dispinterface RoutingSlip;
typedef System::DelphiInterface<RoutingSlip> _di_RoutingSlip;
__dispinterface INTERFACE_UUID("{000208AA-0000-0000-C000-000000000046}") RoutingSlip  : public IDispatch 
	
{
	
};

__dispinterface Styles;
typedef System::DelphiInterface<Styles> _di_Styles;
__dispinterface INTERFACE_UUID("{00020853-0000-0000-C000-000000000046}") Styles  : public IDispatch 
	
{
	
};

__dispinterface CustomViews;
typedef System::DelphiInterface<CustomViews> _di_CustomViews;
__dispinterface CustomView;
typedef System::DelphiInterface<CustomView> _di_CustomView;
__dispinterface INTERFACE_UUID("{00024422-0000-0000-C000-000000000046}") CustomViews  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208DA-0000-0000-C000-000000000046}") _WorkbookDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000208DB-0000-0000-C000-000000000046}") Workbooks  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(Activex::TOleEnum &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Add(const OleVariant Template, int lcid, _di__Workbook &Add_result) = 0 
		;
	virtual HRESULT __safecall Close(int lcid) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(const OleVariant Index, _di__Workbook &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Open(const WideString Filename, const OleVariant UpdateLinks, const OleVariant 
		ReadOnly, const OleVariant Format, const OleVariant Password, const OleVariant WriteResPassword, const 
		OleVariant IgnoreReadOnlyRecommended, const OleVariant Origin, const OleVariant Delimiter, const OleVariant 
		Editable, const OleVariant Notify, const OleVariant Converter, const OleVariant AddToMru, int lcid
		, _di__Workbook &Open_result) = 0 ;
	virtual HRESULT __safecall OpenText(const WideString Filename, const OleVariant Origin, const OleVariant 
		StartRow, const OleVariant DataType, Activex::TOleEnum TextQualifier, const OleVariant ConsecutiveDelimiter
		, const OleVariant Tab, const OleVariant Semicolon, const OleVariant Comma, const OleVariant Space
		, const OleVariant Other, const OleVariant OtherChar, const OleVariant FieldInfo, const OleVariant 
		TextVisualLayout, int lcid) = 0 ;
	virtual HRESULT __safecall Get__Default(const OleVariant Index, _di__Workbook &Get__Default_result)
		 = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Creator() { Activex::TOleEnum r; HRESULT hr = Get_Creator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get_Item(const OleVariant Index) { _di__Workbook r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook Item[OleVariant Index] = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Workbook _scw_Get__Default(const OleVariant Index) { _di__Workbook r; HRESULT hr = Get__Default(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Workbook _Default[OleVariant Index] = {read=_scw_Get__Default/*, default*/};
};

__dispinterface WorkbooksDisp;
typedef System::DelphiInterface<WorkbooksDisp> _di_WorkbooksDisp;
__dispinterface INTERFACE_UUID("{000208DB-0000-0000-C000-000000000046}") WorkbooksDisp  : public IDispatch 
	
{
	
};

__interface IMenuBars;
typedef System::DelphiInterface<IMenuBars> _di_IMenuBars;
__interface INTERFACE_UUID("{00020863-0001-0000-C000-000000000046}") IMenuBars  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Name, /* out */ _di_MenuBar &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_MenuBar &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_MenuBar &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IMenuBar;
typedef System::DelphiInterface<IMenuBar> _di_IMenuBar;
__dispinterface Menus;
typedef System::DelphiInterface<Menus> _di_Menus;
__interface INTERFACE_UUID("{00020864-0001-0000-C000-000000000046}") IMenuBar  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_BuiltIn(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Menus(/* out */ _di_Menus &RHS) = 0 ;
	virtual HRESULT __stdcall Reset(void) = 0 ;
};

__interface IMenus;
typedef System::DelphiInterface<IMenus> _di_IMenus;
__interface INTERFACE_UUID("{00020865-0001-0000-C000-000000000046}") IMenus  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Caption, const OleVariant Before, const OleVariant Restore
		, /* out */ _di_Menu &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_Menu &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_Menu &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IMenu;
typedef System::DelphiInterface<IMenu> _di_IMenu;
__dispinterface MenuItems;
typedef System::DelphiInterface<MenuItems> _di_MenuItems;
__interface INTERFACE_UUID("{00020866-0001-0000-C000-000000000046}") IMenu  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MenuItems(/* out */ _di_MenuItems &RHS) = 0 ;
};

__interface IMenuItems;
typedef System::DelphiInterface<IMenuItems> _di_IMenuItems;
__dispinterface MenuItem;
typedef System::DelphiInterface<MenuItem> _di_MenuItem;
__interface INTERFACE_UUID("{00020867-0001-0000-C000-000000000046}") IMenuItems  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Caption, const OleVariant OnAction, const OleVariant 
		ShortcutKey, const OleVariant Before, const OleVariant Restore, const OleVariant StatusBar, const 
		OleVariant HelpFile, const OleVariant HelpContextID, /* out */ _di_MenuItem &RHS) = 0 ;
	virtual HRESULT __stdcall AddMenu(const WideString Caption, const OleVariant Before, const OleVariant 
		Restore, /* out */ _di_Menu &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IMenuItem;
typedef System::DelphiInterface<IMenuItem> _di_IMenuItem;
__interface INTERFACE_UUID("{00020868-0001-0000-C000-000000000046}") IMenuItem  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Checked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Checked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpContextID(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpContextID(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpFile(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpFile(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_StatusBar(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_StatusBar(const WideString RHS) = 0 ;
};

__interface ICharts;
typedef System::DelphiInterface<ICharts> _di_ICharts;
__interface INTERFACE_UUID("{0002086D-0001-0000-C000-000000000046}") ICharts  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Before, const OleVariant After, const OleVariant Count
		, /* out */ _di__Chart &RHS) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual void __stdcall _Dummy7(void) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_HPageBreaks(/* out */ _di_HPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VPageBreaks(/* out */ _di_VPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
};

__interface IDrawingObjects;
typedef System::DelphiInterface<IDrawingObjects> _di_IDrawingObjects;
__dispinterface GroupObject;
typedef System::DelphiInterface<GroupObject> _di_GroupObject;
__interface INTERFACE_UUID("{0002086F-0001-0000-C000-000000000046}") IDrawingObjects  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy28(void) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const OleVariant Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadLength(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadLength(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_CancelButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CancelButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_DefaultButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DefaultButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DismissButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DismissButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayVerticalScrollBar(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayVerticalScrollBar(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DropDownLines(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DropDownLines(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual void __stdcall _Dummy47(void) = 0 ;
	virtual HRESULT __stdcall Get_HelpButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_InputType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InputType(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LargeChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LargeChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual void __stdcall _Dummy54(void) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual void __stdcall _Dummy56(void) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiLine(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiLine(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiSelect(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiSelect(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Reshape(int Vertex, const OleVariant Insert, const OleVariant Left, const 
		OleVariant Top) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Selected(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Ungroup(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Vertices(const OleVariant Index1, const OleVariant Index2, /* out */ OleVariant 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall LinkCombo(const OleVariant Link) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPivotCache;
typedef System::DelphiInterface<IPivotCache> _di_IPivotCache;
__interface INTERFACE_UUID("{0002441C-0001-0000-C000-000000000046}") IPivotCache  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BackgroundQuery(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BackgroundQuery(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Connection(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Connection(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableRefresh(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableRefresh(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MemoryUsed(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OptimizeCache(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OptimizeCache(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RecordCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Refresh(void) = 0 ;
	virtual HRESULT __stdcall Get_RefreshDate(/* out */ System::TDateTime &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefreshName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefreshOnFileOpen(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefreshOnFileOpen(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Sql(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Sql(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_SavePassword(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SavePassword(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceData(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SourceData(const OleVariant RHS) = 0 ;
};

__interface IPivotCaches;
typedef System::DelphiInterface<IPivotCaches> _di_IPivotCaches;
__dispinterface PivotCache;
typedef System::DelphiInterface<PivotCache> _di_PivotCache;
__interface INTERFACE_UUID("{0002441D-0001-0000-C000-000000000046}") IPivotCaches  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_PivotCache &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_PivotCache &RHS) = 0 ;
		
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPivotFormula;
typedef System::DelphiInterface<IPivotFormula> _di_IPivotFormula;
__interface INTERFACE_UUID("{0002441E-0001-0000-C000-000000000046}") IPivotFormula  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Index(int RHS) = 0 ;
};

__interface IPivotFormulas;
typedef System::DelphiInterface<IPivotFormulas> _di_IPivotFormulas;
__dispinterface PivotFormula;
typedef System::DelphiInterface<PivotFormula> _di_PivotFormula;
__interface INTERFACE_UUID("{0002441F-0001-0000-C000-000000000046}") IPivotFormulas  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Formula, /* out */ _di_PivotFormula &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_PivotFormula &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_PivotFormula &RHS) = 0 
		;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPivotTable;
typedef System::DelphiInterface<IPivotTable> _di_IPivotTable;
__dispinterface CalculatedFields;
typedef System::DelphiInterface<CalculatedFields> _di_CalculatedFields;
__dispinterface PivotFormulas;
typedef System::DelphiInterface<PivotFormulas> _di_PivotFormulas;
__interface INTERFACE_UUID("{00020872-0001-0000-C000-000000000046}") IPivotTable  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall AddFields(const OleVariant RowFields, const OleVariant ColumnFields, const 
		OleVariant PageFields, const OleVariant AddToTable) = 0 ;
	virtual HRESULT __stdcall Get_ColumnFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_ColumnGrand(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColumnGrand(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColumnRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall ShowPages(const OleVariant PageField) = 0 ;
	virtual HRESULT __stdcall Get_DataBodyRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DataFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_DataLabelRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasAutoFormat(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasAutoFormat(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HiddenFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_InnerDetail(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InnerDetail(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_PageRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageRangeCells(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall PivotFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefreshDate(/* out */ System::TDateTime &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefreshName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall RefreshTable(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RowFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
		
	virtual HRESULT __stdcall Get_RowGrand(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RowGrand(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RowRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SaveData(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SaveData(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceData(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SourceData(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_TableRange1(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TableRange2(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VisibleFields(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_CacheIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CacheIndex(int RHS) = 0 ;
	virtual HRESULT __stdcall CalculatedFields(/* out */ _di_CalculatedFields &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayErrorString(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayErrorString(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayNullString(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayNullString(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableDrilldown(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableDrilldown(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableFieldDialog(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableFieldDialog(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableWizard(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableWizard(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ErrorString(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ErrorString(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall GetData(const WideString Name, /* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall ListFormulas(void) = 0 ;
	virtual HRESULT __stdcall Get_ManualUpdate(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ManualUpdate(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MergeLabels(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MergeLabels(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_NullString(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NullString(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall PivotCache(/* out */ _di_PivotCache &RHS) = 0 ;
	virtual HRESULT __stdcall PivotFormulas(/* out */ _di_PivotFormulas &RHS) = 0 ;
	virtual HRESULT __stdcall PivotTableWizard(const OleVariant SourceType, const OleVariant SourceData
		, const OleVariant TableDestination, const OleVariant TableName, const OleVariant RowGrand, const 
		OleVariant ColumnGrand, const OleVariant SaveData, const OleVariant HasAutoFormat, const OleVariant 
		AutoPage, const OleVariant Reserved, const OleVariant BackgroundQuery, const OleVariant OptimizeCache
		, const OleVariant PageFieldOrder, const OleVariant PageFieldWrapCount, const OleVariant ReadData, 
		const OleVariant Connection) = 0 ;
	virtual HRESULT __stdcall Get_SubtotalHiddenPageItems(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SubtotalHiddenPageItems(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageFieldOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PageFieldOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageFieldStyle(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PageFieldStyle(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageFieldWrapCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PageFieldWrapCount(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_PreserveFormatting(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PreserveFormatting(Word RHS) = 0 ;
	virtual HRESULT __stdcall PivotSelect(const WideString Name, Activex::TOleEnum Mode) = 0 ;
	virtual HRESULT __stdcall Get_PivotSelection(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PivotSelection(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_SelectionMode(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SelectionMode(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_TableStyle(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TableStyle(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Tag(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Tag(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Update(void) = 0 ;
	virtual HRESULT __stdcall Get_VacatedStyle(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VacatedStyle(const WideString RHS) = 0 ;
};

__interface IPivotTables;
typedef System::DelphiInterface<IPivotTables> _di_IPivotTables;
__interface INTERFACE_UUID("{00020873-0001-0000-C000-000000000046}") IPivotTables  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_PivotTable &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPivotField;
typedef System::DelphiInterface<IPivotField> _di_IPivotField;
__dispinterface CalculatedItems;
typedef System::DelphiInterface<CalculatedItems> _di_CalculatedItems;
__interface INTERFACE_UUID("{00020874-0001-0000-C000-000000000046}") IPivotField  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_PivotTable &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Calculation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Calculation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_ChildField(/* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ChildItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_CurrentPage(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CurrentPage(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_DataRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DataType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Function_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Function_(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_GroupLevel(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HiddenItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LabelRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowAllItems(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowAllItems(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ParentField(/* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ParentItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall PivotItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Subtotals(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BaseField(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BaseField(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_BaseItem(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BaseItem(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_TotalLevels(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VisibleItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
		
	virtual HRESULT __stdcall CalculatedItems(/* out */ _di_CalculatedItems &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_DragToColumn(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DragToColumn(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DragToHide(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DragToHide(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DragToPage(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DragToPage(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DragToRow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DragToRow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_IsCalculated(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MemoryUsed(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ServerBased(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ServerBased(Word RHS) = 0 ;
	virtual HRESULT __stdcall AutoSort(int Order, const WideString Field) = 0 ;
	virtual HRESULT __stdcall AutoShow(int Type_, int Range, int Count, const WideString Field) = 0 ;
	virtual HRESULT __stdcall Get_AutoSortOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSortField(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShowType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShowRange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShowCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShowField(/* out */ WideString &RHS) = 0 ;
};

__interface IPivotFields;
typedef System::DelphiInterface<IPivotFields> _di_IPivotFields;
__interface INTERFACE_UUID("{00020875-0001-0000-C000-000000000046}") IPivotFields  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_PivotTable &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ICalculatedFields;
typedef System::DelphiInterface<ICalculatedFields> _di_ICalculatedFields;
__interface INTERFACE_UUID("{00024420-0001-0000-C000-000000000046}") ICalculatedFields  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const WideString Formula, /* out */ _di_PivotField 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Field, /* out */ _di_PivotField &RHS) = 0 ;
		
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPivotItem;
typedef System::DelphiInterface<IPivotItem> _di_IPivotItem;
__interface INTERFACE_UUID("{00020876-0001-0000-C000-000000000046}") IPivotItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ChildItems(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DataRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_LabelRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ParentItem(/* out */ _di_PivotItem &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ParentShowDetail(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowDetail(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowDetail(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceName(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_IsCalculated(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RecordCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
};

__interface IPivotItems;
typedef System::DelphiInterface<IPivotItems> _di_IPivotItems;
__interface INTERFACE_UUID("{00020877-0001-0000-C000-000000000046}") IPivotItems  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_PivotField &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ICalculatedItems;
typedef System::DelphiInterface<ICalculatedItems> _di_ICalculatedItems;
__interface INTERFACE_UUID("{00024421-0001-0000-C000-000000000046}") ICalculatedItems  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const WideString Formula, /* out */ _di_PivotItem 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_PivotItem &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Field, /* out */ _di_PivotItem &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ICharacters;
typedef System::DelphiInterface<ICharacters> _di_ICharacters;
__interface INTERFACE_UUID("{00020878-0001-0000-C000-000000000046}") ICharacters  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Insert(const WideString String_) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticCharacters(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticCharacters(const WideString RHS) = 0 ;
};

__interface IDialogs;
typedef System::DelphiInterface<IDialogs> _di_IDialogs;
__dispinterface Dialog;
typedef System::DelphiInterface<Dialog> _di_Dialog;
__interface INTERFACE_UUID("{00020879-0001-0000-C000-000000000046}") IDialogs  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(Activex::TOleEnum Index, /* out */ _di_Dialog &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(Activex::TOleEnum Index, /* out */ _di_Dialog &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IDialog;
typedef System::DelphiInterface<IDialog> _di_IDialog;
__interface INTERFACE_UUID("{0002087A-0001-0000-C000-000000000046}") IDialog  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Show(const OleVariant Arg1, const OleVariant Arg2, const OleVariant Arg3, 
		const OleVariant Arg4, const OleVariant Arg5, const OleVariant Arg6, const OleVariant Arg7, const 
		OleVariant Arg8, const OleVariant Arg9, const OleVariant Arg10, const OleVariant Arg11, const OleVariant 
		Arg12, const OleVariant Arg13, const OleVariant Arg14, const OleVariant Arg15, const OleVariant Arg16
		, const OleVariant Arg17, const OleVariant Arg18, const OleVariant Arg19, const OleVariant Arg20, 
		const OleVariant Arg21, const OleVariant Arg22, const OleVariant Arg23, const OleVariant Arg24, const 
		OleVariant Arg25, const OleVariant Arg26, const OleVariant Arg27, const OleVariant Arg28, const OleVariant 
		Arg29, const OleVariant Arg30, /* out */ Word &RHS) = 0 ;
};

__interface ISoundNote;
typedef System::DelphiInterface<ISoundNote> _di_ISoundNote;
__interface INTERFACE_UUID("{0002087B-0001-0000-C000-000000000046}") ISoundNote  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Import(const WideString Filename) = 0 ;
	virtual HRESULT __stdcall Play(void) = 0 ;
	virtual HRESULT __stdcall Record_(void) = 0 ;
};

__interface IButton;
typedef System::DelphiInterface<IButton> _di_IButton;
__interface INTERFACE_UUID("{0002087D-0001-0000-C000-000000000046}") IButton  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_CancelButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CancelButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DefaultButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DefaultButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DismissButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DismissButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
};

__interface IButtons;
typedef System::DelphiInterface<IButtons> _di_IButtons;
__dispinterface Button;
typedef System::DelphiInterface<Button> _di_Button;
__interface INTERFACE_UUID("{0002087E-0001-0000-C000-000000000046}") IButtons  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_CancelButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CancelButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DefaultButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DefaultButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DismissButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DismissButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HelpButton(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HelpButton(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Button 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ICheckBox;
typedef System::DelphiInterface<ICheckBox> _di_ICheckBox;
__interface INTERFACE_UUID("{0002087F-0001-0000-C000-000000000046}") ICheckBox  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant RHS) = 0 ;
};

__interface ICheckBoxes;
typedef System::DelphiInterface<ICheckBoxes> _di_ICheckBoxes;
__dispinterface CheckBox;
typedef System::DelphiInterface<CheckBox> _di_CheckBox;
__interface INTERFACE_UUID("{00020880-0001-0000-C000-000000000046}") ICheckBoxes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_CheckBox 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IOptionButton;
typedef System::DelphiInterface<IOptionButton> _di_IOptionButton;
__dispinterface GroupBox;
typedef System::DelphiInterface<GroupBox> _di_GroupBox;
__interface INTERFACE_UUID("{00020881-0001-0000-C000-000000000046}") IOptionButton  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_GroupBox(/* out */ _di_GroupBox &RHS) = 0 ;
};

__interface IOptionButtons;
typedef System::DelphiInterface<IOptionButtons> _di_IOptionButtons;
__dispinterface OptionButton;
typedef System::DelphiInterface<OptionButton> _di_OptionButton;
__interface INTERFACE_UUID("{00020882-0001-0000-C000-000000000046}") IOptionButtons  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_GroupBox(/* out */ _di_GroupBox &RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_OptionButton 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IEditBox;
typedef System::DelphiInterface<IEditBox> _di_IEditBox;
__interface INTERFACE_UUID("{00020883-0001-0000-C000-000000000046}") IEditBox  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayVerticalScrollBar(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayVerticalScrollBar(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_InputType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InputType(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedObject(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiLine(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiLine(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PasswordEdit(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PasswordEdit(Word RHS) = 0 ;
};

__interface IEditBoxes;
typedef System::DelphiInterface<IEditBoxes> _di_IEditBoxes;
__dispinterface EditBox;
typedef System::DelphiInterface<EditBox> _di_EditBox;
__interface INTERFACE_UUID("{00020884-0001-0000-C000-000000000046}") IEditBoxes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayVerticalScrollBar(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayVerticalScrollBar(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_InputType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InputType(int RHS) = 0 ;
	virtual void __stdcall _Dummy34(void) = 0 ;
	virtual HRESULT __stdcall Get_MultiLine(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiLine(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PasswordEdit(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PasswordEdit(Word RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_EditBox 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IScrollBar;
typedef System::DelphiInterface<IScrollBar> _di_IScrollBar;
__interface INTERFACE_UUID("{00020885-0001-0000-C000-000000000046}") IScrollBar  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LargeChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LargeChange(int RHS) = 0 ;
};

__interface IScrollBars;
typedef System::DelphiInterface<IScrollBars> _di_IScrollBars;
__dispinterface ScrollBar;
typedef System::DelphiInterface<ScrollBar> _di_ScrollBar;
__interface INTERFACE_UUID("{00020886-0001-0000-C000-000000000046}") IScrollBars  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LargeChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LargeChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_ScrollBar 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IListBox;
typedef System::DelphiInterface<IListBox> _di_IListBox;
__interface INTERFACE_UUID("{00020887-0001-0000-C000-000000000046}") IListBox  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const OleVariant Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedObject(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiSelect(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiSelect(int RHS) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Selected(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
};

__interface IListBoxes;
typedef System::DelphiInterface<IListBoxes> _di_IListBoxes;
__dispinterface ListBox;
typedef System::DelphiInterface<ListBox> _di_ListBox;
__interface INTERFACE_UUID("{00020888-0001-0000-C000-000000000046}") IListBoxes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const OleVariant Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual void __stdcall _Dummy31(void) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual void __stdcall _Dummy33(void) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiSelect(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiSelect(int RHS) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Selected(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_ListBox 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IGroupBox;
typedef System::DelphiInterface<IGroupBox> _di_IGroupBox;
__interface INTERFACE_UUID("{00020889-0001-0000-C000-000000000046}") IGroupBox  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
};

__interface IGroupBoxes;
typedef System::DelphiInterface<IGroupBoxes> _di_IGroupBoxes;
__interface INTERFACE_UUID("{0002088A-0001-0000-C000-000000000046}") IGroupBoxes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_GroupBox 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IDropDown;
typedef System::DelphiInterface<IDropDown> _di_IDropDown;
__interface INTERFACE_UUID("{0002088B-0001-0000-C000-000000000046}") IDropDown  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const OleVariant Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedObject(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Selected(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DropDownLines(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DropDownLines(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
};

__interface IDropDowns;
typedef System::DelphiInterface<IDropDowns> _di_IDropDowns;
__dispinterface DropDown;
typedef System::DelphiInterface<DropDown> _di_DropDown;
__interface INTERFACE_UUID("{0002088C-0001-0000-C000-000000000046}") IDropDowns  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const OleVariant Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual void __stdcall _Dummy31(void) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual void __stdcall _Dummy33(void) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Selected(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DropDownLines(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DropDownLines(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, const OleVariant 
		Editable, /* out */ _di_DropDown &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ISpinner;
typedef System::DelphiInterface<ISpinner> _di_ISpinner;
__interface INTERFACE_UUID("{0002088D-0001-0000-C000-000000000046}") ISpinner  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
};

__interface ISpinners;
typedef System::DelphiInterface<ISpinners> _di_ISpinners;
__dispinterface Spinner;
typedef System::DelphiInterface<Spinner> _di_Spinner;
__interface INTERFACE_UUID("{0002088E-0001-0000-C000-000000000046}") ISpinners  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Display3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Display3DShading(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Spinner 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IDialogFrame;
typedef System::DelphiInterface<IDialogFrame> _di_IDialogFrame;
__interface INTERFACE_UUID("{0002088F-0001-0000-C000-000000000046}") IDialogFrame  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual void __stdcall _Dummy4(void) = 0 ;
	virtual void __stdcall _Dummy5(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual void __stdcall _Dummy7(void) = 0 ;
	virtual void __stdcall _Dummy8(void) = 0 ;
	virtual void __stdcall _Dummy9(void) = 0 ;
	virtual void __stdcall _Dummy10(void) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual void __stdcall _Dummy17(void) = 0 ;
	virtual void __stdcall _Dummy18(void) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual void __stdcall _Dummy20(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual void __stdcall _Dummy23(void) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual void __stdcall _Dummy25(void) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
};

__interface ILabel;
typedef System::DelphiInterface<ILabel> _di_ILabel;
__interface INTERFACE_UUID("{00020890-0001-0000-C000-000000000046}") ILabel  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy33(void) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
};

__interface ILabels;
typedef System::DelphiInterface<ILabels> _di_ILabels;
__dispinterface Label_;
typedef System::DelphiInterface<Label_> _di_Label_;
__interface INTERFACE_UUID("{00020891-0001-0000-C000-000000000046}") ILabels  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Accelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Accelerator(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy33(void) = 0 ;
	virtual HRESULT __stdcall Get_PhoneticAccelerator(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PhoneticAccelerator(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Label_ 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPanes;
typedef System::DelphiInterface<IPanes> _di_IPanes;
__interface INTERFACE_UUID("{00020894-0001-0000-C000-000000000046}") IPanes  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_Pane &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_Pane &RHS) = 0 ;
};

__interface IPane;
typedef System::DelphiInterface<IPane> _di_IPane;
__interface INTERFACE_UUID("{00020895-0001-0000-C000-000000000046}") IPane  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall LargeScroll(const OleVariant Down, const OleVariant Up, const OleVariant 
		ToRight, const OleVariant ToLeft) = 0 ;
	virtual HRESULT __stdcall Get_ScrollColumn(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScrollColumn(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ScrollRow(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScrollRow(int RHS) = 0 ;
	virtual HRESULT __stdcall SmallScroll(const OleVariant Down, const OleVariant Up, const OleVariant 
		ToRight, const OleVariant ToLeft) = 0 ;
	virtual HRESULT __stdcall Get_VisibleRange(/* out */ _di_Range &RHS) = 0 ;
};

__interface IScenarios;
typedef System::DelphiInterface<IScenarios> _di_IScenarios;
__dispinterface Scenario;
typedef System::DelphiInterface<Scenario> _di_Scenario;
__interface INTERFACE_UUID("{00020896-0001-0000-C000-000000000046}") IScenarios  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const OleVariant ChangingCells, const OleVariant 
		Values, const OleVariant Comment, const OleVariant Locked, const OleVariant Hidden, /* out */ _di_Scenario 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall CreateSummary(Activex::TOleEnum ReportType, const OleVariant ResultCells)
		 = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Scenario &RHS) = 0 ;
	virtual HRESULT __stdcall Merge(const OleVariant Source) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IScenario;
typedef System::DelphiInterface<IScenario> _di_IScenario;
__interface INTERFACE_UUID("{00020897-0001-0000-C000-000000000046}") IScenario  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall ChangeScenario(const OleVariant ChangingCells, const OleVariant Values) = 0 
		;
	virtual HRESULT __stdcall Get_ChangingCells(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Comment(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Comment(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Hidden(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Hidden(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Show(void) = 0 ;
	virtual HRESULT __stdcall Get_Values(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
};

__interface IGroupObject;
typedef System::DelphiInterface<IGroupObject> _di_IGroupObject;
__interface INTERFACE_UUID("{00020898-0001-0000-C000-000000000046}") IGroupObject  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual void __stdcall _Dummy27(void) = 0 ;
	virtual void __stdcall _Dummy28(void) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual void __stdcall _Dummy30(void) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadLength(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadLength(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual void __stdcall _Dummy37(void) = 0 ;
	virtual void __stdcall _Dummy38(void) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual void __stdcall _Dummy41(void) = 0 ;
	virtual void __stdcall _Dummy42(void) = 0 ;
	virtual void __stdcall _Dummy43(void) = 0 ;
	virtual void __stdcall _Dummy44(void) = 0 ;
	virtual void __stdcall _Dummy45(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual void __stdcall _Dummy47(void) = 0 ;
	virtual void __stdcall _Dummy48(void) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy50(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual void __stdcall _Dummy52(void) = 0 ;
	virtual void __stdcall _Dummy53(void) = 0 ;
	virtual void __stdcall _Dummy54(void) = 0 ;
	virtual void __stdcall _Dummy55(void) = 0 ;
	virtual void __stdcall _Dummy56(void) = 0 ;
	virtual void __stdcall _Dummy57(void) = 0 ;
	virtual void __stdcall _Dummy58(void) = 0 ;
	virtual void __stdcall _Dummy59(void) = 0 ;
	virtual void __stdcall _Dummy60(void) = 0 ;
	virtual void __stdcall _Dummy61(void) = 0 ;
	virtual void __stdcall _Dummy62(void) = 0 ;
	virtual void __stdcall _Dummy63(void) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy65(void) = 0 ;
	virtual void __stdcall _Dummy66(void) = 0 ;
	virtual void __stdcall _Dummy67(void) = 0 ;
	virtual void __stdcall _Dummy68(void) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual void __stdcall _Dummy70(void) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual void __stdcall _Dummy72(void) = 0 ;
	virtual void __stdcall _Dummy73(void) = 0 ;
	virtual HRESULT __stdcall Ungroup(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy75(void) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy77(void) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
};

__interface IGroupObjects;
typedef System::DelphiInterface<IGroupObjects> _di_IGroupObjects;
__interface INTERFACE_UUID("{00020899-0001-0000-C000-000000000046}") IGroupObjects  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual void __stdcall _Dummy27(void) = 0 ;
	virtual void __stdcall _Dummy28(void) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual void __stdcall _Dummy30(void) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadLength(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadLength(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual void __stdcall _Dummy37(void) = 0 ;
	virtual void __stdcall _Dummy38(void) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual void __stdcall _Dummy41(void) = 0 ;
	virtual void __stdcall _Dummy42(void) = 0 ;
	virtual void __stdcall _Dummy43(void) = 0 ;
	virtual void __stdcall _Dummy44(void) = 0 ;
	virtual void __stdcall _Dummy45(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual void __stdcall _Dummy47(void) = 0 ;
	virtual void __stdcall _Dummy48(void) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy50(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual void __stdcall _Dummy52(void) = 0 ;
	virtual void __stdcall _Dummy53(void) = 0 ;
	virtual void __stdcall _Dummy54(void) = 0 ;
	virtual void __stdcall _Dummy55(void) = 0 ;
	virtual void __stdcall _Dummy56(void) = 0 ;
	virtual void __stdcall _Dummy57(void) = 0 ;
	virtual void __stdcall _Dummy58(void) = 0 ;
	virtual void __stdcall _Dummy59(void) = 0 ;
	virtual void __stdcall _Dummy60(void) = 0 ;
	virtual void __stdcall _Dummy61(void) = 0 ;
	virtual void __stdcall _Dummy62(void) = 0 ;
	virtual void __stdcall _Dummy63(void) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy65(void) = 0 ;
	virtual void __stdcall _Dummy66(void) = 0 ;
	virtual void __stdcall _Dummy67(void) = 0 ;
	virtual void __stdcall _Dummy68(void) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual void __stdcall _Dummy70(void) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual void __stdcall _Dummy72(void) = 0 ;
	virtual void __stdcall _Dummy73(void) = 0 ;
	virtual HRESULT __stdcall Ungroup(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy75(void) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy77(void) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ILine;
typedef System::DelphiInterface<ILine> _di_ILine;
__interface INTERFACE_UUID("{0002089A-0001-0000-C000-000000000046}") ILine  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadLength(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadLength(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
};

__interface ILines;
typedef System::DelphiInterface<ILines> _di_ILines;
__dispinterface Line;
typedef System::DelphiInterface<Line> _di_Line;
__interface INTERFACE_UUID("{0002089B-0001-0000-C000-000000000046}") ILines  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadLength(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadLength(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ArrowHeadWidth(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ArrowHeadWidth(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Add(double X1, double Y1, double X2, double Y2, /* out */ _di_Line &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IRectangle;
typedef System::DelphiInterface<IRectangle> _di_IRectangle;
__interface INTERFACE_UUID("{0002089C-0001-0000-C000-000000000046}") IRectangle  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
};

__interface IRectangles;
typedef System::DelphiInterface<IRectangles> _di_IRectangles;
__dispinterface Rectangle;
typedef System::DelphiInterface<Rectangle> _di_Rectangle;
__interface INTERFACE_UUID("{0002089D-0001-0000-C000-000000000046}") IRectangles  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Rectangle 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IOval;
typedef System::DelphiInterface<IOval> _di_IOval;
__interface INTERFACE_UUID("{0002089E-0001-0000-C000-000000000046}") IOval  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
};

__interface IOvals;
typedef System::DelphiInterface<IOvals> _di_IOvals;
__dispinterface Oval;
typedef System::DelphiInterface<Oval> _di_Oval;
__interface INTERFACE_UUID("{0002089F-0001-0000-C000-000000000046}") IOvals  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Oval 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IArc;
typedef System::DelphiInterface<IArc> _di_IArc;
__interface INTERFACE_UUID("{000208A0-0001-0000-C000-000000000046}") IArc  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual void __stdcall _Dummy43(void) = 0 ;
};

__interface IArcs;
typedef System::DelphiInterface<IArcs> _di_IArcs;
__dispinterface Arc;
typedef System::DelphiInterface<Arc> _di_Arc;
__interface INTERFACE_UUID("{000208A1-0001-0000-C000-000000000046}") IArcs  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual void __stdcall _Dummy43(void) = 0 ;
	virtual HRESULT __stdcall Add(double X1, double Y1, double X2, double Y2, /* out */ _di_Arc &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IOLEObjectEvents;
typedef System::DelphiInterface<IOLEObjectEvents> _di_IOLEObjectEvents;
__interface INTERFACE_UUID("{00024410-0001-0000-C000-000000000046}") IOLEObjectEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall GotFocus(void) = 0 ;
	virtual HRESULT __stdcall LostFocus(void) = 0 ;
};

__interface _IOLEObject;
typedef System::DelphiInterface<_IOLEObject> _di__IOLEObject;
__interface INTERFACE_UUID("{000208A2-0001-0000-C000-000000000046}") _IOLEObject  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_AutoLoad(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoLoad(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoUpdate(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoUpdate(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Object_(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OLEType(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SourceName(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Update(void) = 0 ;
	virtual HRESULT __stdcall Verb(Activex::TOleEnum Verb) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProgId(/* out */ WideString &RHS) = 0 ;
};

__interface IOLEObjects;
typedef System::DelphiInterface<IOLEObjects> _di_IOLEObjects;
__interface INTERFACE_UUID("{000208A3-0001-0000-C000-000000000046}") IOLEObjects  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual void __stdcall _Dummy30(void) = 0 ;
	virtual HRESULT __stdcall Get_AutoLoad(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoLoad(Word RHS) = 0 ;
	virtual void __stdcall _Dummy32(void) = 0 ;
	virtual void __stdcall _Dummy33(void) = 0 ;
	virtual void __stdcall _Dummy34(void) = 0 ;
	virtual HRESULT __stdcall Get_SourceName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SourceName(const WideString RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual void __stdcall _Dummy37(void) = 0 ;
	virtual void __stdcall _Dummy38(void) = 0 ;
	virtual void __stdcall _Dummy39(void) = 0 ;
	virtual void __stdcall _Dummy40(void) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant ClassType, const OleVariant Filename, const OleVariant 
		Link, const OleVariant DisplayAsIcon, const OleVariant IconFileName, const OleVariant IconIndex, const 
		OleVariant IconLabel, const OleVariant Left, const OleVariant Top, const OleVariant Width, const OleVariant 
		Height, /* out */ _di__OLEObject &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ITextBox;
typedef System::DelphiInterface<ITextBox> _di_ITextBox;
__interface INTERFACE_UUID("{000208A4-0001-0000-C000-000000000046}") ITextBox  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
};

__interface ITextBoxes;
typedef System::DelphiInterface<ITextBoxes> _di_ITextBoxes;
__dispinterface TextBox;
typedef System::DelphiInterface<TextBox> _di_TextBox;
__interface INTERFACE_UUID("{000208A5-0001-0000-C000-000000000046}") ITextBoxes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_TextBox 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPicture;
typedef System::DelphiInterface<IPicture> _di_IPicture;
__interface INTERFACE_UUID("{000208A6-0001-0000-C000-000000000046}") IPicture  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
};

__interface IPictures;
typedef System::DelphiInterface<IPictures> _di_IPictures;
__dispinterface Picture;
typedef System::DelphiInterface<Picture> _di_Picture;
__interface INTERFACE_UUID("{000208A7-0001-0000-C000-000000000046}") IPictures  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_Picture 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Insert(const WideString Filename, const OleVariant Converter, /* out */ _di_Picture 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Paste(const OleVariant Link, /* out */ _di_Picture &RHS) = 0 ;
};

__interface IDrawing;
typedef System::DelphiInterface<IDrawing> _di_IDrawing;
__interface INTERFACE_UUID("{000208A8-0001-0000-C000-000000000046}") IDrawing  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall AddVertex(double Left, double Top) = 0 ;
	virtual HRESULT __stdcall Reshape(int Vertex, Word Insert, const OleVariant Left, const OleVariant 
		Top) = 0 ;
	virtual HRESULT __stdcall Get_Vertices(const OleVariant Index1, const OleVariant Index2, /* out */ 
		OleVariant &RHS) = 0 ;
};

__interface IDrawings;
typedef System::DelphiInterface<IDrawings> _di_IDrawings;
__dispinterface Drawing;
typedef System::DelphiInterface<Drawing> _di_Drawing;
__interface INTERFACE_UUID("{000208A9-0001-0000-C000-000000000046}") IDrawings  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AddIndent(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AddIndent(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual void __stdcall _Dummy44(void) = 0 ;
	virtual HRESULT __stdcall Reshape(int Vertex, Word Insert, const OleVariant Left, const OleVariant 
		Top) = 0 ;
	virtual void __stdcall _Dummy46(void) = 0 ;
	virtual HRESULT __stdcall Add(double X1, double Y1, double X2, double Y2, Word Closed, /* out */ _di_Drawing 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IRoutingSlip;
typedef System::DelphiInterface<IRoutingSlip> _di_IRoutingSlip;
__interface INTERFACE_UUID("{000208AA-0001-0000-C000-000000000046}") IRoutingSlip  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Delivery(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Delivery(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Message(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Message(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Recipients(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Reset(void) = 0 ;
	virtual HRESULT __stdcall Get_ReturnWhenDone(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReturnWhenDone(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Status(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_TrackStatus(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TrackStatus(Word RHS) = 0 ;
};

__interface IOutline;
typedef System::DelphiInterface<IOutline> _di_IOutline;
__interface INTERFACE_UUID("{000208AB-0001-0000-C000-000000000046}") IOutline  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutomaticStyles(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutomaticStyles(Word RHS) = 0 ;
	virtual HRESULT __stdcall ShowLevels(const OleVariant RowLevels, const OleVariant ColumnLevels) = 0 
		;
	virtual HRESULT __stdcall Get_SummaryColumn(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SummaryColumn(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_SummaryRow(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SummaryRow(Activex::TOleEnum RHS) = 0 ;
};

__interface IModule;
typedef System::DelphiInterface<IModule> _di_IModule;
__interface INTERFACE_UUID("{000208AD-0001-0000-C000-000000000046}") IModule  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(int lcid) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual HRESULT __stdcall Get_CodeName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get__CodeName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__CodeName(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(int lcid, /* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Next(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnDoubleClick(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnDoubleClick(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnSheetActivate(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnSheetActivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnSheetDeactivate(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnSheetDeactivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageSetup(/* out */ _di_PageSetup &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Previous(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual void __stdcall _Dummy18(void) = 0 ;
	virtual HRESULT __stdcall Protect(const OleVariant Password, const OleVariant DrawingObjects, const 
		OleVariant Contents, const OleVariant Scenarios, const OleVariant UserInterfaceOnly, int lcid) = 0 
		;
	virtual HRESULT __stdcall Get_ProtectContents(int lcid, /* out */ Word &RHS) = 0 ;
	virtual void __stdcall _Dummy21(void) = 0 ;
	virtual HRESULT __stdcall Get_ProtectionMode(int lcid, /* out */ Word &RHS) = 0 ;
	virtual void __stdcall _Dummy23(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Filename, const OleVariant FileFormat, const OleVariant 
		Password, const OleVariant WriteResPassword, const OleVariant ReadOnlyRecommended, const OleVariant 
		CreateBackup, const OleVariant AddToMru, const OleVariant TextCodepage, const OleVariant TextVisualLayout
		, int lcid) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Unprotect(const OleVariant Password, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shapes(/* out */ _di_Shapes &RHS) = 0 ;
	virtual HRESULT __stdcall InsertFile(const OleVariant Filename, const OleVariant Merge) = 0 ;
};

__interface IModules;
typedef System::DelphiInterface<IModules> _di_IModules;
__dispinterface Module;
typedef System::DelphiInterface<Module> _di_Module;
__interface INTERFACE_UUID("{000208AE-0001-0000-C000-000000000046}") IModules  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Before, const OleVariant After, const OleVariant Count
		, /* out */ _di_Module &RHS) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual void __stdcall _Dummy7(void) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_HPageBreaks(/* out */ _di_HPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VPageBreaks(/* out */ _di_VPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
};

__interface IDialogSheet;
typedef System::DelphiInterface<IDialogSheet> _di_IDialogSheet;
__dispinterface DialogFrame;
typedef System::DelphiInterface<DialogFrame> _di_DialogFrame;
__interface INTERFACE_UUID("{000208AF-0001-0000-C000-000000000046}") IDialogSheet  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(int lcid) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual HRESULT __stdcall Get_CodeName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get__CodeName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set__CodeName(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(int lcid, /* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Next(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnDoubleClick(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnDoubleClick(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnSheetActivate(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnSheetActivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnSheetDeactivate(int lcid, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnSheetDeactivate(int lcid, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PageSetup(/* out */ _di_PageSetup &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Previous(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __stdcall Protect(const OleVariant Password, const OleVariant DrawingObjects, const 
		OleVariant Contents, const OleVariant Scenarios, const OleVariant UserInterfaceOnly, int lcid) = 0 
		;
	virtual HRESULT __stdcall Get_ProtectContents(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProtectDrawingObjects(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProtectionMode(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProtectScenarios(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Filename, const OleVariant FileFormat, const OleVariant 
		Password, const OleVariant WriteResPassword, const OleVariant ReadOnlyRecommended, const OleVariant 
		CreateBackup, const OleVariant AddToMru, const OleVariant TextCodepage, const OleVariant TextVisualLayout
		, int lcid) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Unprotect(const OleVariant Password, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shapes(/* out */ _di_Shapes &RHS) = 0 ;
	virtual void __stdcall _Dummy29(void) = 0 ;
	virtual HRESULT __stdcall Arcs(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual void __stdcall _Dummy31(void) = 0 ;
	virtual void __stdcall _Dummy32(void) = 0 ;
	virtual HRESULT __stdcall Buttons(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual void __stdcall _Dummy34(void) = 0 ;
	virtual HRESULT __stdcall Get_EnableCalculation(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableCalculation(Word RHS) = 0 ;
	virtual void __stdcall _Dummy36(void) = 0 ;
	virtual HRESULT __stdcall ChartObjects(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual HRESULT __stdcall CheckBoxes(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual HRESULT __stdcall CheckSpelling(const OleVariant CustomDictionary, const OleVariant IgnoreUppercase
		, const OleVariant AlwaysSuggest, const OleVariant IgnoreInitialAlefHamza, const OleVariant IgnoreFinalYaa
		, const OleVariant SpellScript, int lcid) = 0 ;
	virtual void __stdcall _Dummy40(void) = 0 ;
	virtual void __stdcall _Dummy41(void) = 0 ;
	virtual void __stdcall _Dummy42(void) = 0 ;
	virtual void __stdcall _Dummy43(void) = 0 ;
	virtual void __stdcall _Dummy44(void) = 0 ;
	virtual void __stdcall _Dummy45(void) = 0 ;
	virtual HRESULT __stdcall Get_DisplayAutomaticPageBreaks(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayAutomaticPageBreaks(int lcid, Word RHS) = 0 ;
	virtual HRESULT __stdcall Drawings(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall DrawingObjects(const OleVariant Index, int lcid, /* out */ _di_IDispatch 
		&RHS) = 0 ;
	virtual HRESULT __stdcall DropDowns(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS)
		 = 0 ;
	virtual HRESULT __stdcall Get_EnableAutoFilter(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableAutoFilter(int lcid, Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableSelection(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableSelection(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableOutlining(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableOutlining(int lcid, Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnablePivotTable(int lcid, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnablePivotTable(int lcid, Word RHS) = 0 ;
	virtual HRESULT __stdcall Evaluate(const OleVariant Name, int lcid, /* out */ OleVariant &RHS) = 0 
		;
	virtual HRESULT __stdcall _Evaluate(const OleVariant Name, int lcid, /* out */ OleVariant &RHS) = 0 
		;
	virtual void __stdcall _Dummy56(void) = 0 ;
	virtual HRESULT __stdcall ResetAllPageBreaks(void) = 0 ;
	virtual HRESULT __stdcall GroupBoxes(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual HRESULT __stdcall GroupObjects(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual HRESULT __stdcall Labels(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Lines(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall ListBoxes(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS)
		 = 0 ;
	virtual HRESULT __stdcall Get_Names(/* out */ _di_Names &RHS) = 0 ;
	virtual HRESULT __stdcall OLEObjects(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual void __stdcall _Dummy65(void) = 0 ;
	virtual void __stdcall _Dummy66(void) = 0 ;
	virtual void __stdcall _Dummy67(void) = 0 ;
	virtual HRESULT __stdcall OptionButtons(const OleVariant Index, int lcid, /* out */ _di_IDispatch &
		RHS) = 0 ;
	virtual void __stdcall _Dummy69(void) = 0 ;
	virtual HRESULT __stdcall Ovals(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Paste(const OleVariant Destination, const OleVariant Link, int lcid) = 0 
		;
	virtual HRESULT __stdcall PasteSpecial(const OleVariant Format, const OleVariant Link, const OleVariant 
		DisplayAsIcon, const OleVariant IconFileName, const OleVariant IconIndex, const OleVariant IconLabel
		, int lcid) = 0 ;
	virtual HRESULT __stdcall Pictures(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual void __stdcall _Dummy74(void) = 0 ;
	virtual void __stdcall _Dummy75(void) = 0 ;
	virtual void __stdcall _Dummy76(void) = 0 ;
	virtual HRESULT __stdcall Rectangles(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual void __stdcall _Dummy78(void) = 0 ;
	virtual void __stdcall _Dummy79(void) = 0 ;
	virtual HRESULT __stdcall Get_ScrollArea(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScrollArea(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall ScrollBars(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS
		) = 0 ;
	virtual void __stdcall _Dummy82(void) = 0 ;
	virtual void __stdcall _Dummy83(void) = 0 ;
	virtual HRESULT __stdcall Spinners(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual void __stdcall _Dummy85(void) = 0 ;
	virtual void __stdcall _Dummy86(void) = 0 ;
	virtual HRESULT __stdcall TextBoxes(const OleVariant Index, int lcid, /* out */ _di_IDispatch &RHS)
		 = 0 ;
	virtual void __stdcall _Dummy88(void) = 0 ;
	virtual void __stdcall _Dummy89(void) = 0 ;
	virtual void __stdcall _Dummy90(void) = 0 ;
	virtual HRESULT __stdcall Get_HPageBreaks(/* out */ _di_HPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VPageBreaks(/* out */ _di_VPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_QueryTables(/* out */ _di_QueryTables &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayPageBreaks(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayPageBreaks(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Comments(/* out */ _di_Comments &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Hyperlinks(/* out */ _di_Hyperlinks &RHS) = 0 ;
	virtual HRESULT __stdcall ClearCircles(void) = 0 ;
	virtual HRESULT __stdcall CircleInvalid(void) = 0 ;
	virtual HRESULT __stdcall Get_DisplayRightToLeft(int lcid, /* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayRightToLeft(int lcid, int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoFilter(/* out */ _di_AutoFilter &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DefaultButton(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DefaultButton(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_DialogFrame(/* out */ _di_DialogFrame &RHS) = 0 ;
	virtual HRESULT __stdcall EditBoxes(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Focus(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Focus(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Hide(const OleVariant Cancel, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Show(/* out */ Word &RHS) = 0 ;
};

__interface IDialogSheets;
typedef System::DelphiInterface<IDialogSheets> _di_IDialogSheets;
__interface INTERFACE_UUID("{000208B0-0001-0000-C000-000000000046}") IDialogSheets  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Before, const OleVariant After, const OleVariant Count
		, /* out */ _di_DialogSheet &RHS) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual void __stdcall _Dummy7(void) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_HPageBreaks(/* out */ _di_HPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VPageBreaks(/* out */ _di_VPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
};

__interface IWorksheets;
typedef System::DelphiInterface<IWorksheets> _di_IWorksheets;
__interface INTERFACE_UUID("{000208B1-0001-0000-C000-000000000046}") IWorksheets  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Before, const OleVariant After, const OleVariant Count
		, const OleVariant Type_, int lcid, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Copy(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(int lcid) = 0 ;
	virtual HRESULT __stdcall FillAcrossSheets(const _di_Range Range, Activex::TOleEnum Type_, int lcid
		) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Move(const OleVariant Before, const OleVariant After, int lcid) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall PrintOut(const OleVariant From, const OleVariant To_, const OleVariant Copies
		, const OleVariant Preview, const OleVariant ActivePrinter, const OleVariant PrintToFile, const OleVariant 
		Collate, int lcid) = 0 ;
	virtual HRESULT __stdcall PrintPreview(const OleVariant EnableChanges, int lcid) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace, int lcid) = 0 ;
	virtual HRESULT __stdcall Get_HPageBreaks(/* out */ _di_HPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VPageBreaks(/* out */ _di_VPageBreaks &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(int lcid, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(int lcid, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
};

__interface IPageSetup;
typedef System::DelphiInterface<IPageSetup> _di_IPageSetup;
__interface INTERFACE_UUID("{000208B4-0001-0000-C000-000000000046}") IPageSetup  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BlackAndWhite(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BlackAndWhite(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BottomMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_CenterFooter(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CenterFooter(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_CenterHeader(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CenterHeader(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_CenterHorizontally(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CenterHorizontally(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_CenterVertically(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CenterVertically(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ChartSize(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ChartSize(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Draft(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Draft(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_FirstPageNumber(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FirstPageNumber(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_FitToPagesTall(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FitToPagesTall(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FitToPagesWide(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FitToPagesWide(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_FooterMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FooterMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_HeaderMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HeaderMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_LeftFooter(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LeftFooter(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_LeftHeader(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LeftHeader(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_LeftMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LeftMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Order(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Order(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_PaperSize(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PaperSize(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintArea(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintArea(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintGridlines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintGridlines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintHeadings(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintHeadings(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintNotes(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintNotes(Word RHS) = 0 ;
	virtual HRESULT __stdcall PrintQuality(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintTitleColumns(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintTitleColumns(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintTitleRows(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintTitleRows(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_RightFooter(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RightFooter(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_RightHeader(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RightHeader(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_RightMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RightMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopMargin(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TopMargin(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Zoom(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Zoom(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintComments(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintComments(Activex::TOleEnum RHS) = 0 ;
};

__interface INames;
typedef System::DelphiInterface<INames> _di_INames;
__dispinterface Name;
typedef System::DelphiInterface<Name> _di_Name;
__interface INTERFACE_UUID("{000208B8-0001-0000-C000-000000000046}") INames  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Name, const OleVariant RefersTo, const OleVariant Visible
		, const OleVariant MacroType, const OleVariant ShortcutKey, const OleVariant Category, const OleVariant 
		NameLocal, const OleVariant RefersToLocal, const OleVariant CategoryLocal, const OleVariant RefersToR1C1
		, const OleVariant RefersToR1C1Local, /* out */ _di_Name &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, const OleVariant IndexLocal, const OleVariant 
		RefersTo, int lcid, /* out */ _di_Name &RHS) = 0 ;
	virtual HRESULT __stdcall _Default(const OleVariant Index, const OleVariant IndexLocal, const OleVariant 
		RefersTo, int lcid, /* out */ _di_Name &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IName;
typedef System::DelphiInterface<IName> _di_IName;
__interface INTERFACE_UUID("{000208B9-0001-0000-C000-000000000046}") IName  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Category(int lcidIn, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Category(int lcidIn, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_CategoryLocal(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CategoryLocal(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_MacroType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MacroType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(int lcidIn, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(int lcidIn, const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefersTo(int lcidIn, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefersTo(int lcidIn, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShortcutKey(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShortcutKey(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_NameLocal(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NameLocal(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefersToLocal(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefersToLocal(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefersToR1C1(int lcidIn, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefersToR1C1(int lcidIn, const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefersToR1C1Local(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefersToR1C1Local(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefersToRange(/* out */ _di_Range &RHS) = 0 ;
};

__interface IChartObject;
typedef System::DelphiInterface<IChartObject> _di_IChartObject;
__interface INTERFACE_UUID("{000208CF-0001-0000-C000-000000000046}") IChartObject  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_Chart(/* out */ _di__Chart &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProtectChartObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ProtectChartObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
};

__interface IChartObjects;
typedef System::DelphiInterface<IChartObjects> _di_IChartObjects;
__dispinterface ChartObject;
typedef System::DelphiInterface<ChartObject> _di_ChartObject;
__interface INTERFACE_UUID("{000208D0-0001-0000-C000-000000000046}") IChartObjects  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual void __stdcall _Dummy3(void) = 0 ;
	virtual HRESULT __stdcall BringToFront(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(Activex::TOleEnum Appearance, Activex::TOleEnum Format) = 0 ;
		
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual void __stdcall _Dummy12(void) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual void __stdcall _Dummy15(void) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SendToBack(void) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual void __stdcall _Dummy22(void) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual void __stdcall _Dummy25(void) = 0 ;
	virtual HRESULT __stdcall Get_ShapeRange(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual void __stdcall _Dummy27(void) = 0 ;
	virtual void __stdcall _Dummy28(void) = 0 ;
	virtual void __stdcall _Dummy29(void) = 0 ;
	virtual HRESULT __stdcall Get_RoundedCorners(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RoundedCorners(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Add(double Left, double Top, double Width, double Height, /* out */ _di_ChartObject 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_GroupObject &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IMailer;
typedef System::DelphiInterface<IMailer> _di_IMailer;
__interface INTERFACE_UUID("{000208D1-0001-0000-C000-000000000046}") IMailer  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BCCRecipients(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BCCRecipients(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_CCRecipients(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CCRecipients(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enclosures(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enclosures(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Received(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SendDateTime(/* out */ System::TDateTime &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Sender(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ToRecipients(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ToRecipients(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_WhichAddress(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_WhichAddress(const OleVariant RHS) = 0 ;
};

__interface ICustomViews;
typedef System::DelphiInterface<ICustomViews> _di_ICustomViews;
__interface INTERFACE_UUID("{00024422-0001-0000-C000-000000000046}") ICustomViews  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant ViewName, /* out */ _di_CustomView &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString ViewName, const OleVariant PrintSettings, const OleVariant 
		RowColSettings, /* out */ _di_CustomView &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant ViewName, /* out */ _di_CustomView &RHS) = 0 
		;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ICustomView;
typedef System::DelphiInterface<ICustomView> _di_ICustomView;
__interface INTERFACE_UUID("{00024423-0001-0000-C000-000000000046}") ICustomView  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintSettings(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_RowColSettings(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Show(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IFormatConditions;
typedef System::DelphiInterface<IFormatConditions> _di_IFormatConditions;
__dispinterface FormatCondition;
typedef System::DelphiInterface<FormatCondition> _di_FormatCondition;
__interface INTERFACE_UUID("{00024424-0001-0000-C000-000000000046}") IFormatConditions  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_FormatCondition &RHS) = 0 ;
	virtual HRESULT __stdcall Add(Activex::TOleEnum Type_, const OleVariant Operator, const OleVariant 
		Formula1, const OleVariant Formula2, /* out */ _di_FormatCondition &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_FormatCondition &RHS) = 0 
		;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IFormatCondition;
typedef System::DelphiInterface<IFormatCondition> _di_IFormatCondition;
__interface INTERFACE_UUID("{00024425-0001-0000-C000-000000000046}") IFormatCondition  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Modify(Activex::TOleEnum Type_, const OleVariant Operator, const OleVariant 
		Formula1, const OleVariant Formula2) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Operator(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula1(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula2(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Borders(/* out */ _di_Borders &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IComments;
typedef System::DelphiInterface<IComments> _di_IComments;
__interface INTERFACE_UUID("{00024426-0001-0000-C000-000000000046}") IComments  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(int Index, /* out */ _di_Comment &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_Comment &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IComment;
typedef System::DelphiInterface<IComment> _di_IComment;
__interface INTERFACE_UUID("{00024427-0001-0000-C000-000000000046}") IComment  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Author(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shape(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Text(const OleVariant Text, const OleVariant Start, const OleVariant Overwrite
		, /* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Next(/* out */ _di_Comment &RHS) = 0 ;
	virtual HRESULT __stdcall Previous(/* out */ _di_Comment &RHS) = 0 ;
};

__interface IRefreshEvents;
typedef System::DelphiInterface<IRefreshEvents> _di_IRefreshEvents;
__interface INTERFACE_UUID("{0002441B-0001-0000-C000-000000000046}") IRefreshEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall BeforeRefresh(Word &Cancel) = 0 ;
	virtual HRESULT __stdcall AfterRefresh(Word Success) = 0 ;
};

__interface _IQueryTable;
typedef System::DelphiInterface<_IQueryTable> _di__IQueryTable;
__interface INTERFACE_UUID("{00024428-0001-0000-C000-000000000046}") _IQueryTable  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_FieldNames(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FieldNames(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RowNumbers(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RowNumbers(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_FillAdjacentFormulas(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FillAdjacentFormulas(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasAutoFormat(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasAutoFormat(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_RefreshOnFileOpen(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefreshOnFileOpen(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Refreshing(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FetchedRowOverflow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BackgroundQuery(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BackgroundQuery(Word RHS) = 0 ;
	virtual HRESULT __stdcall CancelRefresh(void) = 0 ;
	virtual HRESULT __stdcall Get_RefreshStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_RefreshStyle(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableRefresh(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableRefresh(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SavePassword(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SavePassword(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Destination(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Connection(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Connection(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Sql(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Sql(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PostText(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PostText(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ResultRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Refresh(const OleVariant BackgroundQuery, /* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parameters(/* out */ _di_Parameters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Recordset(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Recordset(const _di_IDispatch RHS) = 0 ;
	virtual HRESULT __stdcall Get_SaveData(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SaveData(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_TablesOnlyFromHTML(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TablesOnlyFromHTML(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_EnableEditing(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EnableEditing(Word RHS) = 0 ;
};

__interface IQueryTables;
typedef System::DelphiInterface<IQueryTables> _di_IQueryTables;
__interface INTERFACE_UUID("{00024429-0001-0000-C000-000000000046}") IQueryTables  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Connection, const _di_Range Destination, const OleVariant 
		Sql, /* out */ _di__QueryTable &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di__QueryTable &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di__QueryTable &RHS) = 0 
		;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IParameter;
typedef System::DelphiInterface<IParameter> _di_IParameter;
__interface INTERFACE_UUID("{0002442A-0001-0000-C000-000000000046}") IParameter  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DataType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DataType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PromptString(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SourceRange(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall SetParam(Activex::TOleEnum Type_, const OleVariant Value) = 0 ;
};

__interface IParameters;
typedef System::DelphiInterface<IParameters> _di_IParameters;
__interface INTERFACE_UUID("{0002442B-0001-0000-C000-000000000046}") IParameters  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const OleVariant iDataType, /* out */ _di_Parameter 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Parameter &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_Parameter &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IODBCError;
typedef System::DelphiInterface<IODBCError> _di_IODBCError;
__interface INTERFACE_UUID("{0002442C-0001-0000-C000-000000000046}") IODBCError  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SqlState(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ErrorString(/* out */ WideString &RHS) = 0 ;
};

__interface IODBCErrors;
typedef System::DelphiInterface<IODBCErrors> _di_IODBCErrors;
__dispinterface ODBCError;
typedef System::DelphiInterface<ODBCError> _di_ODBCError;
__interface INTERFACE_UUID("{0002442D-0001-0000-C000-000000000046}") IODBCErrors  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(int Index, /* out */ _di_ODBCError &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_ODBCError &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IValidation;
typedef System::DelphiInterface<IValidation> _di_IValidation;
__interface INTERFACE_UUID("{0002442F-0001-0000-C000-000000000046}") IValidation  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(Activex::TOleEnum Type_, const OleVariant AlertStyle, const OleVariant 
		Operator, const OleVariant Formula1, const OleVariant Formula2) = 0 ;
	virtual HRESULT __stdcall Get_AlertStyle(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_IgnoreBlank(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IgnoreBlank(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_IMEMode(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_IMEMode(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_InCellDropdown(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InCellDropdown(Word RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_ErrorMessage(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ErrorMessage(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ErrorTitle(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ErrorTitle(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_InputMessage(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InputMessage(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_InputTitle(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InputTitle(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula1(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula2(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Modify(const OleVariant Type_, const OleVariant AlertStyle, const OleVariant 
		Operator, const OleVariant Formula1, const OleVariant Formula2) = 0 ;
	virtual HRESULT __stdcall Get_Operator(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowError(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowError(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowInput(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowInput(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ Word &RHS) = 0 ;
};

__interface IHyperlinks;
typedef System::DelphiInterface<IHyperlinks> _di_IHyperlinks;
__dispinterface Hyperlink;
typedef System::DelphiInterface<Hyperlink> _di_Hyperlink;
__interface INTERFACE_UUID("{00024430-0001-0000-C000-000000000046}") IHyperlinks  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const _di_IDispatch Anchor, const WideString Address, const OleVariant 
		SubAddress, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, /* out */ _di_Hyperlink &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(const OleVariant Index, /* out */ _di_Hyperlink &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IHyperlink;
typedef System::DelphiInterface<IHyperlink> _di_IHyperlink;
__interface INTERFACE_UUID("{00024431-0001-0000-C000-000000000046}") IHyperlink  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Range(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shape(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SubAddress(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SubAddress(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Address(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Address(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall AddToFavorites(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Follow(const OleVariant NewWindow, const OleVariant AddHistory, const OleVariant 
		ExtraInfo, const OleVariant Method, const OleVariant HeaderInfo) = 0 ;
};

__interface IAutoFilter;
typedef System::DelphiInterface<IAutoFilter> _di_IAutoFilter;
__dispinterface Filters;
typedef System::DelphiInterface<Filters> _di_Filters;
__interface INTERFACE_UUID("{00024432-0001-0000-C000-000000000046}") IAutoFilter  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Range(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Filters(/* out */ _di_Filters &RHS) = 0 ;
};

__interface IFilters;
typedef System::DelphiInterface<IFilters> _di_IFilters;
__dispinterface Filter;
typedef System::DelphiInterface<Filter> _di_Filter;
__interface INTERFACE_UUID("{00024433-0001-0000-C000-000000000046}") IFilters  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(int Index, /* out */ _di_Filter &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Item(int Index, /* out */ _di_Filter &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IFilter;
typedef System::DelphiInterface<IFilter> _di_IFilter;
__interface INTERFACE_UUID("{00024434-0001-0000-C000-000000000046}") IFilter  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_On_(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Criteria1(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Operator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Criteria2(/* out */ OleVariant &RHS) = 0 ;
};

__interface IAutoCorrect;
typedef System::DelphiInterface<IAutoCorrect> _di_IAutoCorrect;
__interface INTERFACE_UUID("{000208D4-0001-0000-C000-000000000046}") IAutoCorrect  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall AddReplacement(const WideString What, const WideString Replacement) = 0 ;
		
	virtual HRESULT __stdcall Get_CapitalizeNamesOfDays(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CapitalizeNamesOfDays(Word RHS) = 0 ;
	virtual HRESULT __stdcall DeleteReplacement(const WideString What) = 0 ;
	virtual HRESULT __stdcall ReplacementList(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReplaceText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReplaceText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_TwoInitialCapitals(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TwoInitialCapitals(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_CorrectSentenceCap(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CorrectSentenceCap(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_CorrectCapsLock(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CorrectCapsLock(Word RHS) = 0 ;
};

__interface IBorder;
typedef System::DelphiInterface<IBorder> _di_IBorder;
__interface INTERFACE_UUID("{00020854-0001-0000-C000-000000000046}") IBorder  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Color(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Color(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColorIndex(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColorIndex(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_LineStyle(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LineStyle(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Weight(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Weight(const OleVariant RHS) = 0 ;
};

__interface IInterior;
typedef System::DelphiInterface<IInterior> _di_IInterior;
__interface INTERFACE_UUID("{00020870-0001-0000-C000-000000000046}") IInterior  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Color(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Color(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ColorIndex(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ColorIndex(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_InvertIfNegative(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InvertIfNegative(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Pattern(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Pattern(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PatternColor(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PatternColor(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_PatternColorIndex(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PatternColorIndex(const OleVariant RHS) = 0 ;
};

__interface IChartFillFormat;
typedef System::DelphiInterface<IChartFillFormat> _di_IChartFillFormat;
__dispinterface ChartColorFormat;
typedef System::DelphiInterface<ChartColorFormat> _di_ChartColorFormat;
__interface INTERFACE_UUID("{00024435-0001-0000-C000-000000000046}") IChartFillFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall OneColorGradient(Activex::TOleEnum Style, int Variant, float Degree) = 0 
		;
	virtual HRESULT __stdcall TwoColorGradient(Activex::TOleEnum Style, int Variant) = 0 ;
	virtual HRESULT __stdcall PresetTextured(Activex::TOleEnum PresetTexture) = 0 ;
	virtual HRESULT __stdcall Solid(void) = 0 ;
	virtual HRESULT __stdcall Patterned(Activex::TOleEnum Pattern) = 0 ;
	virtual HRESULT __stdcall UserPicture(const OleVariant PictureFile, const OleVariant PictureFormat, 
		const OleVariant PictureStackUnit, const OleVariant PicturePlacement) = 0 ;
	virtual HRESULT __stdcall UserTextured(const WideString TextureFile) = 0 ;
	virtual HRESULT __stdcall PresetGradient(Activex::TOleEnum Style, int Variant, Activex::TOleEnum PresetGradientType
		) = 0 ;
	virtual HRESULT __stdcall Get_BackColor(/* out */ _di_ChartColorFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ForeColor(/* out */ _di_ChartColorFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GradientColorType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GradientDegree(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GradientStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GradientVariant(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Pattern(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PresetGradientType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PresetTexture(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextureName(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextureType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Activex::TOleEnum RHS) = 0 ;
};

__interface IChartColorFormat;
typedef System::DelphiInterface<IChartColorFormat> _di_IChartColorFormat;
__interface INTERFACE_UUID("{00024436-0001-0000-C000-000000000046}") IChartColorFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SchemeColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SchemeColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_RGB_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
};

__interface IAxis;
typedef System::DelphiInterface<IAxis> _di_IAxis;
__dispinterface AxisTitle;
typedef System::DelphiInterface<AxisTitle> _di_AxisTitle;
__dispinterface Gridlines;
typedef System::DelphiInterface<Gridlines> _di_Gridlines;
__dispinterface TickLabels;
typedef System::DelphiInterface<TickLabels> _di_TickLabels;
__interface INTERFACE_UUID("{00020848-0001-0000-C000-000000000046}") IAxis  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AxisBetweenCategories(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AxisBetweenCategories(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_AxisGroup(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AxisTitle(/* out */ _di_AxisTitle &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_CategoryNames(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CategoryNames(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Crosses(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Crosses(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_CrossesAt(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CrossesAt(double RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_HasMajorGridlines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasMajorGridlines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasMinorGridlines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasMinorGridlines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasTitle(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasTitle(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MajorGridlines(/* out */ _di_Gridlines &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MajorTickMark(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MajorTickMark(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MajorUnit(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MajorUnit(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_MajorUnitIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MajorUnitIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MaximumScale(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MaximumScale(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_MaximumScaleIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MaximumScaleIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinimumScale(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinimumScale(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinimumScaleIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinimumScaleIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinorGridlines(/* out */ _di_Gridlines &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinorTickMark(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinorTickMark(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinorUnit(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinorUnit(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinorUnitIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinorUnitIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReversePlotOrder(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReversePlotOrder(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ScaleType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ScaleType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_TickLabelPosition(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TickLabelPosition(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_TickLabels(/* out */ _di_TickLabels &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TickLabelSpacing(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TickLabelSpacing(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_TickMarkSpacing(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_TickMarkSpacing(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_BaseUnit(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BaseUnit(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_BaseUnitIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BaseUnitIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MajorUnitScale(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MajorUnitScale(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MinorUnitScale(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MinorUnitScale(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_CategoryType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CategoryType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
};

__interface IChartTitle;
typedef System::DelphiInterface<IChartTitle> _di_IChartTitle;
__dispinterface ChartFillFormat;
typedef System::DelphiInterface<ChartFillFormat> _di_ChartFillFormat;
__interface INTERFACE_UUID("{00020849-0001-0000-C000-000000000046}") IChartTitle  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface IAxisTitle;
typedef System::DelphiInterface<IAxisTitle> _di_IAxisTitle;
__interface INTERFACE_UUID("{0002084A-0001-0000-C000-000000000046}") IAxisTitle  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface IChartGroup;
typedef System::DelphiInterface<IChartGroup> _di_IChartGroup;
__dispinterface DownBars;
typedef System::DelphiInterface<DownBars> _di_DownBars;
__dispinterface DropLines;
typedef System::DelphiInterface<DropLines> _di_DropLines;
__dispinterface HiLoLines;
typedef System::DelphiInterface<HiLoLines> _di_HiLoLines;
__dispinterface SeriesLines;
typedef System::DelphiInterface<SeriesLines> _di_SeriesLines;
__dispinterface UpBars;
typedef System::DelphiInterface<UpBars> _di_UpBars;
__interface INTERFACE_UUID("{00020859-0001-0000-C000-000000000046}") IChartGroup  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AxisGroup(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AxisGroup(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_DoughnutHoleSize(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DoughnutHoleSize(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_DownBars(/* out */ _di_DownBars &RHS) = 0 ;
	virtual HRESULT __stdcall Get_DropLines(/* out */ _di_DropLines &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FirstSliceAngle(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FirstSliceAngle(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_GapWidth(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_GapWidth(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasDropLines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasDropLines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasHiLoLines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasHiLoLines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasRadarAxisLabels(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasRadarAxisLabels(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasSeriesLines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasSeriesLines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasUpDownBars(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasUpDownBars(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HiLoLines(/* out */ _di_HiLoLines &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Overlap(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Overlap(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_RadarAxisLabels(/* out */ _di_TickLabels &RHS) = 0 ;
	virtual HRESULT __stdcall SeriesCollection(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 
		;
	virtual HRESULT __stdcall Get_SeriesLines(/* out */ _di_SeriesLines &RHS) = 0 ;
	virtual HRESULT __stdcall Get_SubType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SubType(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_UpBars(/* out */ _di_UpBars &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VaryByCategories(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VaryByCategories(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SizeRepresents(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SizeRepresents(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_BubbleScale(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BubbleScale(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowNegativeBubbles(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowNegativeBubbles(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_SplitValue(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SplitValue(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_SecondPlotSize(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SecondPlotSize(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Has3DShading(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Has3DShading(Word RHS) = 0 ;
};

__interface IChartGroups;
typedef System::DelphiInterface<IChartGroups> _di_IChartGroups;
__interface INTERFACE_UUID("{0002085A-0001-0000-C000-000000000046}") IChartGroups  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_ChartGroup &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IAxes;
typedef System::DelphiInterface<IAxes> _di_IAxes;
__dispinterface Axis;
typedef System::DelphiInterface<Axis> _di_Axis;
__interface INTERFACE_UUID("{0002085B-0001-0000-C000-000000000046}") IAxes  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(Activex::TOleEnum Type_, Activex::TOleEnum AxisGroup, /* out */ _di_Axis 
		&RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPoints;
typedef System::DelphiInterface<IPoints> _di_IPoints;
__dispinterface Point;
typedef System::DelphiInterface<Point> _di_Point;
__interface INTERFACE_UUID("{00020869-0001-0000-C000-000000000046}") IPoints  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(int Index, /* out */ _di_Point &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface IPoint;
typedef System::DelphiInterface<IPoint> _di_IPoint;
__dispinterface DataLabel;
typedef System::DelphiInterface<DataLabel> _di_DataLabel;
__interface INTERFACE_UUID("{0002086A-0001-0000-C000-000000000046}") IPoint  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall ApplyDataLabels(Activex::TOleEnum Type_, const OleVariant LegendKey, const 
		OleVariant AutoText) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall Get_DataLabel(/* out */ _di_DataLabel &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Explosion(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Explosion(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasDataLabel(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasDataLabel(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InvertIfNegative(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InvertIfNegative(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerSize(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerSize(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerStyle(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Paste(void) = 0 ;
	virtual HRESULT __stdcall Get_PictureType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureUnit(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureUnit(int RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToSides(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToSides(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToFront(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToFront(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToEnd(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToEnd(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SecondaryPlot(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SecondaryPlot(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
};

__interface ISeries;
typedef System::DelphiInterface<ISeries> _di_ISeries;
__dispinterface ErrorBars;
typedef System::DelphiInterface<ErrorBars> _di_ErrorBars;
__dispinterface LeaderLines;
typedef System::DelphiInterface<LeaderLines> _di_LeaderLines;
__interface INTERFACE_UUID("{0002086B-0001-0000-C000-000000000046}") ISeries  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall ApplyDataLabels(Activex::TOleEnum Type_, const OleVariant LegendKey, const 
		OleVariant AutoText, const OleVariant HasLeaderLines) = 0 ;
	virtual HRESULT __stdcall Get_AxisGroup(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AxisGroup(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall DataLabels(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall ErrorBar(Activex::TOleEnum Direction, Activex::TOleEnum Include, Activex::TOleEnum 
		Type_, const OleVariant Amount, const OleVariant MinusValues) = 0 ;
	virtual HRESULT __stdcall Get_ErrorBars(/* out */ _di_ErrorBars &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Explosion(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Explosion(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaLocal(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaLocal(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaR1C1(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaR1C1(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormulaR1C1Local(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_FormulaR1C1Local(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasDataLabels(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasDataLabels(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasErrorBars(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasErrorBars(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InvertIfNegative(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InvertIfNegative(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerSize(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerSize(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerStyle(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Paste(void) = 0 ;
	virtual HRESULT __stdcall Get_PictureType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureUnit(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureUnit(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_PlotOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PlotOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Points(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Smooth(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Smooth(Word RHS) = 0 ;
	virtual HRESULT __stdcall Trendlines(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ChartType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ChartType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall ApplyCustomType(Activex::TOleEnum ChartType) = 0 ;
	virtual HRESULT __stdcall Get_Values(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Values(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_XValues(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_XValues(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_BubbleSizes(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BubbleSizes(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_BarShape(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BarShape(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToSides(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToSides(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToFront(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToFront(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ApplyPictToEnd(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ApplyPictToEnd(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Has3DEffect(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Has3DEffect(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasLeaderLines(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasLeaderLines(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LeaderLines(/* out */ _di_LeaderLines &RHS) = 0 ;
};

__interface ISeriesCollection;
typedef System::DelphiInterface<ISeriesCollection> _di_ISeriesCollection;
__dispinterface Series;
typedef System::DelphiInterface<Series> _di_Series;
__interface INTERFACE_UUID("{0002086C-0001-0000-C000-000000000046}") ISeriesCollection  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Source, Activex::TOleEnum Rowcol, const OleVariant SeriesLabels
		, const OleVariant CategoryLabels, const OleVariant Replace, /* out */ _di_Series &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Extend(const OleVariant Source, const OleVariant Rowcol, const OleVariant 
		CategoryLabels) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Series &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Paste(Activex::TOleEnum Rowcol, const OleVariant SeriesLabels, const OleVariant 
		CategoryLabels, const OleVariant Replace, const OleVariant NewSeries) = 0 ;
	virtual HRESULT __stdcall NewSeries(/* out */ _di_Series &RHS) = 0 ;
};

__interface IDataLabel;
typedef System::DelphiInterface<IDataLabel> _di_IDataLabel;
__interface INTERFACE_UUID("{000208B2-0001-0000-C000-000000000046}") IDataLabel  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Caption(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Caption(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Characters(const OleVariant Start, const OleVariant Length, /* out */ 
		_di_Characters &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormatLinked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormatLinked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowLegendKey(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowLegendKey(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(Activex::TOleEnum RHS) = 0 ;
};

__interface IDataLabels;
typedef System::DelphiInterface<IDataLabels> _di_IDataLabels;
__interface INTERFACE_UUID("{000208B3-0001-0000-C000-000000000046}") IDataLabels  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual void __stdcall _Dummy9(void) = 0 ;
	virtual void __stdcall _Dummy10(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(const OleVariant RHS) = 0 ;
	virtual void __stdcall _Dummy13(void) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual void __stdcall _Dummy16(void) = 0 ;
	virtual void __stdcall _Dummy17(void) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormatLinked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormatLinked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowLegendKey(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowLegendKey(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_DataLabel &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ILegendEntry;
typedef System::DelphiInterface<ILegendEntry> _di_ILegendEntry;
__dispinterface LegendKey;
typedef System::DelphiInterface<LegendKey> _di_LegendKey;
__interface INTERFACE_UUID("{000208BA-0001-0000-C000-000000000046}") ILegendEntry  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LegendKey(/* out */ _di_LegendKey &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
};

__interface ILegendEntries;
typedef System::DelphiInterface<ILegendEntries> _di_ILegendEntries;
__dispinterface LegendEntry;
typedef System::DelphiInterface<LegendEntry> _di_LegendEntry;
__interface INTERFACE_UUID("{000208BB-0001-0000-C000-000000000046}") ILegendEntries  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_LegendEntry &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ILegendKey;
typedef System::DelphiInterface<ILegendKey> _di_ILegendKey;
__interface INTERFACE_UUID("{000208BC-0001-0000-C000-000000000046}") ILegendKey  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InvertIfNegative(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InvertIfNegative(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerBackgroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerBackgroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColor(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColor(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerForegroundColorIndex(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerForegroundColorIndex(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerSize(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerSize(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarkerStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarkerStyle(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureType(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureUnit(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureUnit(int RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Smooth(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Smooth(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
};

__interface ITrendlines;
typedef System::DelphiInterface<ITrendlines> _di_ITrendlines;
__dispinterface Trendline;
typedef System::DelphiInterface<Trendline> _di_Trendline;
__interface INTERFACE_UUID("{000208BD-0001-0000-C000-000000000046}") ITrendlines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Add(Activex::TOleEnum Type_, const OleVariant Order, const OleVariant Period
		, const OleVariant Forward, const OleVariant Backward, const OleVariant Intercept, const OleVariant 
		DisplayEquation, const OleVariant DisplayRSquared, const OleVariant Name, /* out */ _di_Trendline 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Trendline &RHS) = 0 ;
	virtual HRESULT __stdcall _NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ITrendline;
typedef System::DelphiInterface<ITrendline> _di_ITrendline;
__interface INTERFACE_UUID("{000208BE-0001-0000-C000-000000000046}") ITrendline  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Backward(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Backward(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_DataLabel(/* out */ _di_DataLabel &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_DisplayEquation(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayEquation(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_DisplayRSquared(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DisplayRSquared(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Forward(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Forward(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Index(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Intercept(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Intercept(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_InterceptIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_InterceptIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NameIsAuto(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NameIsAuto(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Order(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Order(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Period(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Period(int RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(Activex::TOleEnum RHS) = 0 ;
};

__interface ICorners;
typedef System::DelphiInterface<ICorners> _di_ICorners;
__interface INTERFACE_UUID("{000208C0-0001-0000-C000-000000000046}") ICorners  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
};

__interface ISeriesLines;
typedef System::DelphiInterface<ISeriesLines> _di_ISeriesLines;
__interface INTERFACE_UUID("{000208C1-0001-0000-C000-000000000046}") ISeriesLines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IHiLoLines;
typedef System::DelphiInterface<IHiLoLines> _di_IHiLoLines;
__interface INTERFACE_UUID("{000208C2-0001-0000-C000-000000000046}") IHiLoLines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IGridlines;
typedef System::DelphiInterface<IGridlines> _di_IGridlines;
__interface INTERFACE_UUID("{000208C3-0001-0000-C000-000000000046}") IGridlines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface IDropLines;
typedef System::DelphiInterface<IDropLines> _di_IDropLines;
__interface INTERFACE_UUID("{000208C4-0001-0000-C000-000000000046}") IDropLines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__interface ILeaderLines;
typedef System::DelphiInterface<ILeaderLines> _di_ILeaderLines;
__interface INTERFACE_UUID("{00024437-0001-0000-C000-000000000046}") ILeaderLines  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
};

__interface IUpBars;
typedef System::DelphiInterface<IUpBars> _di_IUpBars;
__interface INTERFACE_UUID("{000208C5-0001-0000-C000-000000000046}") IUpBars  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
};

__interface IDownBars;
typedef System::DelphiInterface<IDownBars> _di_IDownBars;
__interface INTERFACE_UUID("{000208C6-0001-0000-C000-000000000046}") IDownBars  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
};

__interface IFloor;
typedef System::DelphiInterface<IFloor> _di_IFloor;
__interface INTERFACE_UUID("{000208C7-0001-0000-C000-000000000046}") IFloor  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureType(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureType(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Paste(void) = 0 ;
};

__interface IWalls;
typedef System::DelphiInterface<IWalls> _di_IWalls;
__interface INTERFACE_UUID("{000208C8-0001-0000-C000-000000000046}") IWalls  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureType(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureType(const OleVariant RHS) = 0 ;
	virtual HRESULT __stdcall Paste(void) = 0 ;
	virtual HRESULT __stdcall Get_PictureUnit(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PictureUnit(const OleVariant RHS) = 0 ;
};

__interface ITickLabels;
typedef System::DelphiInterface<ITickLabels> _di_ITickLabels;
__interface INTERFACE_UUID("{000208C9-0001-0000-C000-000000000046}") ITickLabels  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormat(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormat(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_NumberFormatLinked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_NumberFormatLinked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface IPlotArea;
typedef System::DelphiInterface<IPlotArea> _di_IPlotArea;
__interface INTERFACE_UUID("{000208CB-0001-0000-C000-000000000046}") IPlotArea  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_InsideLeft(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InsideTop(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InsideWidth(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Get_InsideHeight(/* out */ double &RHS) = 0 ;
};

__interface IChartArea;
typedef System::DelphiInterface<IChartArea> _di_IChartArea;
__interface INTERFACE_UUID("{000208CC-0001-0000-C000-000000000046}") IChartArea  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall ClearContents(void) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface ILegend;
typedef System::DelphiInterface<ILegend> _di_ILegend;
__interface INTERFACE_UUID("{000208CD-0001-0000-C000-000000000046}") ILegend  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall LegendEntries(const OleVariant Index, /* out */ _di_IDispatch &RHS) = 0 ;
		
	virtual HRESULT __stdcall Get_Position(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Position(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Shadow(Word RHS) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Interior(/* out */ _di_Interior &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_ChartFillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ double &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(double RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface IErrorBars;
typedef System::DelphiInterface<IErrorBars> _di_IErrorBars;
__interface INTERFACE_UUID("{000208CE-0001-0000-C000-000000000046}") IErrorBars  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall ClearFormats(void) = 0 ;
	virtual HRESULT __stdcall Get_EndStyle(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_EndStyle(Activex::TOleEnum RHS) = 0 ;
};

__interface IDataTable;
typedef System::DelphiInterface<IDataTable> _di_IDataTable;
__interface INTERFACE_UUID("{00020843-0001-0000-C000-000000000046}") IDataTable  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ShowLegendKey(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ShowLegendKey(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasBorderHorizontal(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasBorderHorizontal(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasBorderVertical(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasBorderVertical(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_HasBorderOutline(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HasBorderOutline(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Border(/* out */ _di_Border &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Select(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_AutoScaleFont(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoScaleFont(const OleVariant RHS) = 0 ;
};

__interface IPhonetic;
typedef System::DelphiInterface<IPhonetic> _di_IPhonetic;
__interface INTERFACE_UUID("{00024438-0001-0000-C000-000000000046}") IPhonetic  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_CharacterType(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_CharacterType(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Alignment(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Alignment(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_Font &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Text(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Text(const WideString RHS) = 0 ;
};

__interface IShape;
typedef System::DelphiInterface<IShape> _di_IShape;
__dispinterface ControlFormat;
typedef System::DelphiInterface<ControlFormat> _di_ControlFormat;
__dispinterface LinkFormat;
typedef System::DelphiInterface<LinkFormat> _di_LinkFormat;
__dispinterface OLEFormat;
typedef System::DelphiInterface<OLEFormat> _di_OLEFormat;
__interface INTERFACE_UUID("{00024439-0001-0000-C000-000000000046}") IShape  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Apply(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Flip(Activex::TOleEnum FlipCmd) = 0 ;
	virtual HRESULT __stdcall IncrementLeft(float Increment) = 0 ;
	virtual HRESULT __stdcall IncrementRotation(float Increment) = 0 ;
	virtual HRESULT __stdcall IncrementTop(float Increment) = 0 ;
	virtual HRESULT __stdcall PickUp(void) = 0 ;
	virtual HRESULT __stdcall RerouteConnections(void) = 0 ;
	virtual HRESULT __stdcall ScaleHeight(float Factor, Activex::TOleEnum RelativeToOriginalSize, const 
		OleVariant Scale) = 0 ;
	virtual HRESULT __stdcall ScaleWidth(float Factor, Activex::TOleEnum RelativeToOriginalSize, const 
		OleVariant Scale) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SetShapesDefaultProperties(void) = 0 ;
	virtual HRESULT __stdcall Ungroup(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall ZOrder(Activex::TOleEnum ZOrderCmd) = 0 ;
	virtual HRESULT __stdcall Get_Adjustments(/* out */ _di_Adjustments &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextFrame(/* out */ _di_TextFrame &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShapeType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoShapeType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Callout(/* out */ _di_CalloutFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ConnectionSiteCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Connector(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ConnectorFormat(/* out */ _di_ConnectorFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_FillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GroupItems(/* out */ _di_GroupShapes &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalFlip(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_Line(/* out */ _di_LineFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockAspectRatio(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockAspectRatio(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Nodes(/* out */ _di_ShapeNodes &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Rotation(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Rotation(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureFormat(/* out */ _di_PictureFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ _di_ShadowFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextEffect(/* out */ _di_TextEffectFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ThreeD(/* out */ _di_ThreeDFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalFlip(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Vertices(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrderPosition(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Hyperlink(/* out */ _di_Hyperlink &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BlackWhiteMode(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BlackWhiteMode(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_DrawingObject(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OnAction(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_OnAction(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_TopLeftCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BottomRightCell(/* out */ _di_Range &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Placement(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Placement(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Copy(void) = 0 ;
	virtual HRESULT __stdcall Cut(void) = 0 ;
	virtual HRESULT __stdcall CopyPicture(const OleVariant Appearance, const OleVariant Format) = 0 ;
	virtual HRESULT __stdcall Get_ControlFormat(/* out */ _di_ControlFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkFormat(/* out */ _di_LinkFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_OLEFormat(/* out */ _di_OLEFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_FormControlType(/* out */ Activex::TOleEnum &RHS) = 0 ;
};

__interface IShapes;
typedef System::DelphiInterface<IShapes> _di_IShapes;
__dispinterface FreeformBuilder;
typedef System::DelphiInterface<FreeformBuilder> _di_FreeformBuilder;
__interface INTERFACE_UUID("{0002443A-0001-0000-C000-000000000046}") IShapes  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall _Default(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall AddCallout(Activex::TOleEnum Type_, float Left, float Top, float Width, float 
		Height, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddConnector(Activex::TOleEnum Type_, float BeginX, float BeginY, float EndX
		, float EndY, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddCurve(const OleVariant SafeArrayOfPoints, /* out */ _di_Shape &RHS) = 0 
		;
	virtual HRESULT __stdcall AddLabel(Activex::TOleEnum Orientation, float Left, float Top, float Width
		, float Height, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddLine(float BeginX, float BeginY, float EndX, float EndY, /* out */ _di_Shape 
		&RHS) = 0 ;
	virtual HRESULT __stdcall AddPicture(const WideString Filename, Activex::TOleEnum LinkToFile, Activex::TOleEnum 
		SaveWithDocument, float Left, float Top, float Width, float Height, /* out */ _di_Shape &RHS) = 0 
		;
	virtual HRESULT __stdcall AddPolyline(const OleVariant SafeArrayOfPoints, /* out */ _di_Shape &RHS)
		 = 0 ;
	virtual HRESULT __stdcall AddShape(Activex::TOleEnum Type_, float Left, float Top, float Width, float 
		Height, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddTextEffect(Activex::TOleEnum PresetTextEffect, const WideString Text, 
		const WideString FontName, float FontSize, Activex::TOleEnum FontBold, Activex::TOleEnum FontItalic
		, float Left, float Top, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddTextbox(Activex::TOleEnum Orientation, float Left, float Top, float Width
		, float Height, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall BuildFreeform(Activex::TOleEnum EditingType, float X1, float Y1, /* out */ 
		_di_FreeformBuilder &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Range(const OleVariant Index, /* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall SelectAll(void) = 0 ;
	virtual HRESULT __stdcall AddFormControl(Activex::TOleEnum Type_, int Left, int Top, int Width, int 
		Height, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall AddOLEObject(const OleVariant ClassType, const OleVariant Filename, const 
		OleVariant Link, const OleVariant DisplayAsIcon, const OleVariant IconFileName, const OleVariant IconIndex
		, const OleVariant IconLabel, const OleVariant Left, const OleVariant Top, const OleVariant Width, 
		const OleVariant Height, /* out */ _di_Shape &RHS) = 0 ;
};

__interface IShapeRange;
typedef System::DelphiInterface<IShapeRange> _di_IShapeRange;
__interface INTERFACE_UUID("{0002443B-0001-0000-C000-000000000046}") IShapeRange  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall _Default(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
	virtual HRESULT __stdcall Align(Activex::TOleEnum AlignCmd, Activex::TOleEnum RelativeTo) = 0 ;
	virtual HRESULT __stdcall Apply(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Distribute(Activex::TOleEnum DistributeCmd, Activex::TOleEnum RelativeTo)
		 = 0 ;
	virtual HRESULT __stdcall Duplicate(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall Flip(Activex::TOleEnum FlipCmd) = 0 ;
	virtual HRESULT __stdcall IncrementLeft(float Increment) = 0 ;
	virtual HRESULT __stdcall IncrementRotation(float Increment) = 0 ;
	virtual HRESULT __stdcall IncrementTop(float Increment) = 0 ;
	virtual HRESULT __stdcall Group(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall PickUp(void) = 0 ;
	virtual HRESULT __stdcall RerouteConnections(void) = 0 ;
	virtual HRESULT __stdcall Regroup(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall ScaleHeight(float Factor, Activex::TOleEnum RelativeToOriginalSize, const 
		OleVariant Scale) = 0 ;
	virtual HRESULT __stdcall ScaleWidth(float Factor, Activex::TOleEnum RelativeToOriginalSize, const 
		OleVariant Scale) = 0 ;
	virtual HRESULT __stdcall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __stdcall SetShapesDefaultProperties(void) = 0 ;
	virtual HRESULT __stdcall Ungroup(/* out */ _di_ShapeRange &RHS) = 0 ;
	virtual HRESULT __stdcall ZOrder(Activex::TOleEnum ZOrderCmd) = 0 ;
	virtual HRESULT __stdcall Get_Adjustments(/* out */ _di_Adjustments &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextFrame(/* out */ _di_TextFrame &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoShapeType(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoShapeType(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Callout(/* out */ _di_CalloutFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ConnectionSiteCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Connector(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ConnectorFormat(/* out */ _di_ConnectorFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Fill(/* out */ _di_FillFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_GroupItems(/* out */ _di_GroupShapes &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Height(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalFlip(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Left(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_Line(/* out */ _di_LineFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockAspectRatio(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockAspectRatio(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_Nodes(/* out */ _di_ShapeNodes &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Rotation(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Rotation(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_PictureFormat(/* out */ _di_PictureFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Shadow(/* out */ _di_ShadowFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_TextEffect(/* out */ _di_TextEffectFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ThreeD(/* out */ _di_ThreeDFormat &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Top(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalFlip(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Vertices(/* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Visible(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Visible(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Width(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_ZOrderPosition(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BlackWhiteMode(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_BlackWhiteMode(Activex::TOleEnum RHS) = 0 ;
};

__interface IGroupShapes;
typedef System::DelphiInterface<IGroupShapes> _di_IGroupShapes;
__interface INTERFACE_UUID("{0002443C-0001-0000-C000-000000000046}") IGroupShapes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall _Default(const OleVariant Index, /* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &RHS) = 0 ;
};

__interface ITextFrame;
typedef System::DelphiInterface<ITextFrame> _di_ITextFrame;
__interface INTERFACE_UUID("{0002443D-0001-0000-C000-000000000046}") ITextFrame  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarginBottom(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarginBottom(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarginLeft(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarginLeft(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarginRight(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarginRight(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_MarginTop(/* out */ float &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MarginTop(float RHS) = 0 ;
	virtual HRESULT __stdcall Get_Orientation(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Orientation(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Characters(const OleVariant Start, const OleVariant Length, /* out */ _di_Characters 
		&RHS) = 0 ;
	virtual HRESULT __stdcall Get_HorizontalAlignment(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_HorizontalAlignment(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_VerticalAlignment(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_VerticalAlignment(Activex::TOleEnum RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoSize(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoSize(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_ReadingOrder(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ReadingOrder(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoMargins(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoMargins(Word RHS) = 0 ;
};

__interface IConnectorFormat;
typedef System::DelphiInterface<IConnectorFormat> _di_IConnectorFormat;
__interface INTERFACE_UUID("{0002443E-0001-0000-C000-000000000046}") IConnectorFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall BeginConnect(const _di_Shape ConnectedShape, int ConnectionSite) = 0 ;
	virtual HRESULT __stdcall BeginDisconnect(void) = 0 ;
	virtual HRESULT __stdcall EndConnect(const _di_Shape ConnectedShape, int ConnectionSite) = 0 ;
	virtual HRESULT __stdcall EndDisconnect(void) = 0 ;
	virtual HRESULT __stdcall Get_BeginConnected(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BeginConnectedShape(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get_BeginConnectionSite(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_EndConnected(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_EndConnectedShape(/* out */ _di_Shape &RHS) = 0 ;
	virtual HRESULT __stdcall Get_EndConnectionSite(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Type_(Activex::TOleEnum RHS) = 0 ;
};

__interface IFreeformBuilder;
typedef System::DelphiInterface<IFreeformBuilder> _di_IFreeformBuilder;
__interface INTERFACE_UUID("{0002443F-0001-0000-C000-000000000046}") IFreeformBuilder  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall AddNodes(Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType, float 
		X1, float Y1, const OleVariant X2, const OleVariant Y2, const OleVariant X3, const OleVariant Y3) = 0 
		;
	virtual HRESULT __stdcall ConvertToShape(/* out */ _di_Shape &RHS) = 0 ;
};

__interface IControlFormat;
typedef System::DelphiInterface<IControlFormat> _di_IControlFormat;
__interface INTERFACE_UUID("{00024440-0001-0000-C000-000000000046}") IControlFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall AddItem(const WideString Text, const OleVariant Index) = 0 ;
	virtual HRESULT __stdcall RemoveAllItems(void) = 0 ;
	virtual HRESULT __stdcall RemoveItem(int Index, const OleVariant Count) = 0 ;
	virtual HRESULT __stdcall Get_DropDownLines(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_DropDownLines(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_LargeChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LargeChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LinkedCell(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LinkedCell(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall List(const OleVariant Index, /* out */ OleVariant &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListCount(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListCount(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListFillRange(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListFillRange(const WideString RHS) = 0 ;
	virtual HRESULT __stdcall Get_ListIndex(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_ListIndex(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_LockedText(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_LockedText(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Max(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Max(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Min(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Min(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_MultiSelect(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_MultiSelect(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_PrintObject(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_PrintObject(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_SmallChange(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_SmallChange(int RHS) = 0 ;
	virtual HRESULT __stdcall Get__Default(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set__Default(int RHS) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ int &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Value(int RHS) = 0 ;
};

__interface IOLEFormat;
typedef System::DelphiInterface<IOLEFormat> _di_IOLEFormat;
__interface INTERFACE_UUID("{00024441-0001-0000-C000-000000000046}") IOLEFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Activate(void) = 0 ;
	virtual HRESULT __stdcall Get_Object_(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_ProgId(/* out */ WideString &RHS) = 0 ;
	virtual HRESULT __stdcall Verb(const OleVariant Verb) = 0 ;
};

__interface ILinkFormat;
typedef System::DelphiInterface<ILinkFormat> _di_ILinkFormat;
__interface INTERFACE_UUID("{00024442-0001-0000-C000-000000000046}") ILinkFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__Application &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ Activex::TOleEnum &RHS) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &RHS) = 0 ;
	virtual HRESULT __stdcall Get_AutoUpdate(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_AutoUpdate(Word RHS) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &RHS) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word RHS) = 0 ;
	virtual HRESULT __stdcall Update(void) = 0 ;
};

__dispinterface INTERFACE_UUID("{0002084D-0000-0000-C000-000000000046}") Font  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020893-0000-0000-C000-000000000046}") Window_  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020892-0000-0000-C000-000000000046}") Windows  : public IDispatch 
	
{
	
};

__dispinterface AppEvents;
typedef System::DelphiInterface<AppEvents> _di_AppEvents;
__dispinterface INTERFACE_UUID("{00024413-0000-0000-C000-000000000046}") AppEvents  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020845-0000-0000-C000-000000000046}") WorksheetFunction  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020846-0000-0000-C000-000000000046}") Range  : public IDispatch 
{
	
};

__dispinterface ChartEvents;
typedef System::DelphiInterface<ChartEvents> _di_ChartEvents;
__dispinterface INTERFACE_UUID("{0002440F-0000-0000-C000-000000000046}") ChartEvents  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024402-0000-0000-C000-000000000046}") VPageBreak  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024401-0000-0000-C000-000000000046}") HPageBreak  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024404-0000-0000-C000-000000000046}") HPageBreaks  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024405-0000-0000-C000-000000000046}") VPageBreaks  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024407-0000-0000-C000-000000000046}") RecentFile  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024406-0000-0000-C000-000000000046}") RecentFiles  : public IDispatch 
	
{
	
};

__dispinterface DocEvents;
typedef System::DelphiInterface<DocEvents> _di_DocEvents;
__dispinterface INTERFACE_UUID("{00024411-0000-0000-C000-000000000046}") DocEvents  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020852-0000-0000-C000-000000000046}") Style  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020855-0000-0000-C000-000000000046}") Borders  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020857-0000-0000-C000-000000000046}") AddIn  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020858-0000-0000-C000-000000000046}") AddIns  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002085C-0000-0000-C000-000000000046}") Toolbar  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002085D-0000-0000-C000-000000000046}") Toolbars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002085E-0000-0000-C000-000000000046}") ToolbarButton  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002085F-0000-0000-C000-000000000046}") ToolbarButtons  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020860-0000-0000-C000-000000000046}") Areas  : public IDispatch 
{
	
};

__dispinterface WorkbookEvents;
typedef System::DelphiInterface<WorkbookEvents> _di_WorkbookEvents;
__dispinterface INTERFACE_UUID("{00024412-0000-0000-C000-000000000046}") WorkbookEvents  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020863-0000-0000-C000-000000000046}") MenuBars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020864-0000-0000-C000-000000000046}") MenuBar  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020865-0000-0000-C000-000000000046}") Menus  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020866-0000-0000-C000-000000000046}") Menu  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020867-0000-0000-C000-000000000046}") MenuItems  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020868-0000-0000-C000-000000000046}") MenuItem  : public IDispatch 
	
{
	
};

__dispinterface Charts;
typedef System::DelphiInterface<Charts> _di_Charts;
__dispinterface INTERFACE_UUID("{0002086D-0000-0000-C000-000000000046}") Charts  : public IDispatch 
	
{
	
};

__dispinterface DrawingObjects;
typedef System::DelphiInterface<DrawingObjects> _di_DrawingObjects;
__dispinterface INTERFACE_UUID("{0002086F-0000-0000-C000-000000000046}") DrawingObjects  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002441C-0000-0000-C000-000000000046}") PivotCache  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002441D-0000-0000-C000-000000000046}") PivotCaches  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002441E-0000-0000-C000-000000000046}") PivotFormula  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002441F-0000-0000-C000-000000000046}") PivotFormulas  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020872-0000-0000-C000-000000000046}") PivotTable  : public IDispatch 
	
{
	
};

__dispinterface PivotTables;
typedef System::DelphiInterface<PivotTables> _di_PivotTables;
__dispinterface INTERFACE_UUID("{00020873-0000-0000-C000-000000000046}") PivotTables  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020874-0000-0000-C000-000000000046}") PivotField  : public IDispatch 
	
{
	
};

__dispinterface PivotFields;
typedef System::DelphiInterface<PivotFields> _di_PivotFields;
__dispinterface INTERFACE_UUID("{00020875-0000-0000-C000-000000000046}") PivotFields  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024420-0000-0000-C000-000000000046}") CalculatedFields  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020876-0000-0000-C000-000000000046}") PivotItem  : public IDispatch 
	
{
	
};

__dispinterface PivotItems;
typedef System::DelphiInterface<PivotItems> _di_PivotItems;
__dispinterface INTERFACE_UUID("{00020877-0000-0000-C000-000000000046}") PivotItems  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024421-0000-0000-C000-000000000046}") CalculatedItems  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020878-0000-0000-C000-000000000046}") Characters  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020879-0000-0000-C000-000000000046}") Dialogs  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002087A-0000-0000-C000-000000000046}") Dialog  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002087B-0000-0000-C000-000000000046}") SoundNote  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002087D-0000-0000-C000-000000000046}") Button  : public IDispatch 
	
{
	
};

__dispinterface Buttons;
typedef System::DelphiInterface<Buttons> _di_Buttons;
__dispinterface INTERFACE_UUID("{0002087E-0000-0000-C000-000000000046}") Buttons  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002087F-0000-0000-C000-000000000046}") CheckBox  : public IDispatch 
	
{
	
};

__dispinterface CheckBoxes;
typedef System::DelphiInterface<CheckBoxes> _di_CheckBoxes;
__dispinterface INTERFACE_UUID("{00020880-0000-0000-C000-000000000046}") CheckBoxes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020881-0000-0000-C000-000000000046}") OptionButton  : public IDispatch 
	
{
	
};

__dispinterface OptionButtons;
typedef System::DelphiInterface<OptionButtons> _di_OptionButtons;
__dispinterface INTERFACE_UUID("{00020882-0000-0000-C000-000000000046}") OptionButtons  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020883-0000-0000-C000-000000000046}") EditBox  : public IDispatch 
	
{
	
};

__dispinterface EditBoxes;
typedef System::DelphiInterface<EditBoxes> _di_EditBoxes;
__dispinterface INTERFACE_UUID("{00020884-0000-0000-C000-000000000046}") EditBoxes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020885-0000-0000-C000-000000000046}") ScrollBar  : public IDispatch 
	
{
	
};

__dispinterface ScrollBars;
typedef System::DelphiInterface<ScrollBars> _di_ScrollBars;
__dispinterface INTERFACE_UUID("{00020886-0000-0000-C000-000000000046}") ScrollBars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020887-0000-0000-C000-000000000046}") ListBox  : public IDispatch 
	
{
	
};

__dispinterface ListBoxes;
typedef System::DelphiInterface<ListBoxes> _di_ListBoxes;
__dispinterface INTERFACE_UUID("{00020888-0000-0000-C000-000000000046}") ListBoxes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020889-0000-0000-C000-000000000046}") GroupBox  : public IDispatch 
	
{
	
};

__dispinterface GroupBoxes;
typedef System::DelphiInterface<GroupBoxes> _di_GroupBoxes;
__dispinterface INTERFACE_UUID("{0002088A-0000-0000-C000-000000000046}") GroupBoxes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002088B-0000-0000-C000-000000000046}") DropDown  : public IDispatch 
	
{
	
};

__dispinterface DropDowns;
typedef System::DelphiInterface<DropDowns> _di_DropDowns;
__dispinterface INTERFACE_UUID("{0002088C-0000-0000-C000-000000000046}") DropDowns  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002088D-0000-0000-C000-000000000046}") Spinner  : public IDispatch 
	
{
	
};

__dispinterface Spinners;
typedef System::DelphiInterface<Spinners> _di_Spinners;
__dispinterface INTERFACE_UUID("{0002088E-0000-0000-C000-000000000046}") Spinners  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002088F-0000-0000-C000-000000000046}") DialogFrame  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020890-0000-0000-C000-000000000046}") Label_  : public IDispatch 
	
{
	
};

__dispinterface Labels;
typedef System::DelphiInterface<Labels> _di_Labels;
__dispinterface INTERFACE_UUID("{00020891-0000-0000-C000-000000000046}") Labels  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020894-0000-0000-C000-000000000046}") Panes  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020895-0000-0000-C000-000000000046}") Pane  : public IDispatch 
{
	
};

__dispinterface Scenarios;
typedef System::DelphiInterface<Scenarios> _di_Scenarios;
__dispinterface INTERFACE_UUID("{00020896-0000-0000-C000-000000000046}") Scenarios  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020897-0000-0000-C000-000000000046}") Scenario  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020898-0000-0000-C000-000000000046}") GroupObject  : public IDispatch 
	
{
	
};

__dispinterface GroupObjects;
typedef System::DelphiInterface<GroupObjects> _di_GroupObjects;
__dispinterface INTERFACE_UUID("{00020899-0000-0000-C000-000000000046}") GroupObjects  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002089A-0000-0000-C000-000000000046}") Line  : public IDispatch 
{
	
};

__dispinterface Lines;
typedef System::DelphiInterface<Lines> _di_Lines;
__dispinterface INTERFACE_UUID("{0002089B-0000-0000-C000-000000000046}") Lines  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{0002089C-0000-0000-C000-000000000046}") Rectangle  : public IDispatch 
	
{
	
};

__dispinterface Rectangles;
typedef System::DelphiInterface<Rectangles> _di_Rectangles;
__dispinterface INTERFACE_UUID("{0002089D-0000-0000-C000-000000000046}") Rectangles  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002089E-0000-0000-C000-000000000046}") Oval  : public IDispatch 
{
	
};

__dispinterface Ovals;
typedef System::DelphiInterface<Ovals> _di_Ovals;
__dispinterface INTERFACE_UUID("{0002089F-0000-0000-C000-000000000046}") Ovals  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{000208A0-0000-0000-C000-000000000046}") Arc  : public IDispatch 
{
	
};

__dispinterface Arcs;
typedef System::DelphiInterface<Arcs> _di_Arcs;
__dispinterface INTERFACE_UUID("{000208A1-0000-0000-C000-000000000046}") Arcs  : public IDispatch 
{
	
};

__dispinterface OLEObjectEvents;
typedef System::DelphiInterface<OLEObjectEvents> _di_OLEObjectEvents;
__dispinterface INTERFACE_UUID("{00024410-0000-0000-C000-000000000046}") OLEObjectEvents  : public IDispatch 
	
{
	
};

__dispinterface OLEObjects;
typedef System::DelphiInterface<OLEObjects> _di_OLEObjects;
__dispinterface INTERFACE_UUID("{000208A3-0000-0000-C000-000000000046}") OLEObjects  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208A4-0000-0000-C000-000000000046}") TextBox  : public IDispatch 
	
{
	
};

__dispinterface TextBoxes;
typedef System::DelphiInterface<TextBoxes> _di_TextBoxes;
__dispinterface INTERFACE_UUID("{000208A5-0000-0000-C000-000000000046}") TextBoxes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208A6-0000-0000-C000-000000000046}") Picture  : public IDispatch 
	
{
	
};

__dispinterface Pictures;
typedef System::DelphiInterface<Pictures> _di_Pictures;
__dispinterface INTERFACE_UUID("{000208A7-0000-0000-C000-000000000046}") Pictures  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208A8-0000-0000-C000-000000000046}") Drawing  : public IDispatch 
	
{
	
};

__dispinterface Drawings;
typedef System::DelphiInterface<Drawings> _di_Drawings;
__dispinterface INTERFACE_UUID("{000208A9-0000-0000-C000-000000000046}") Drawings  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208AB-0000-0000-C000-000000000046}") Outline  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208AD-0000-0000-C000-000000000046}") Module  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208AE-0000-0000-C000-000000000046}") Modules  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208AF-0000-0000-C000-000000000046}") DialogSheet  : public IDispatch 
	
{
	
};

__dispinterface DialogSheets;
typedef System::DelphiInterface<DialogSheets> _di_DialogSheets;
__dispinterface INTERFACE_UUID("{000208B0-0000-0000-C000-000000000046}") DialogSheets  : public IDispatch 
	
{
	
};

__dispinterface Worksheets;
typedef System::DelphiInterface<Worksheets> _di_Worksheets;
__dispinterface INTERFACE_UUID("{000208B1-0000-0000-C000-000000000046}") Worksheets  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208B4-0000-0000-C000-000000000046}") PageSetup  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208B8-0000-0000-C000-000000000046}") Names  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{000208B9-0000-0000-C000-000000000046}") Name  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{000208CF-0000-0000-C000-000000000046}") ChartObject  : public IDispatch 
	
{
	
};

__dispinterface ChartObjects;
typedef System::DelphiInterface<ChartObjects> _di_ChartObjects;
__dispinterface INTERFACE_UUID("{000208D0-0000-0000-C000-000000000046}") ChartObjects  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024423-0000-0000-C000-000000000046}") CustomView  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024424-0000-0000-C000-000000000046}") FormatConditions  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024425-0000-0000-C000-000000000046}") FormatCondition  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024426-0000-0000-C000-000000000046}") Comments  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024427-0000-0000-C000-000000000046}") Comment  : public IDispatch 
	
{
	
};

__dispinterface RefreshEvents;
typedef System::DelphiInterface<RefreshEvents> _di_RefreshEvents;
__dispinterface INTERFACE_UUID("{0002441B-0000-0000-C000-000000000046}") RefreshEvents  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024429-0000-0000-C000-000000000046}") QueryTables  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002442A-0000-0000-C000-000000000046}") Parameter  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002442C-0000-0000-C000-000000000046}") ODBCError  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002442D-0000-0000-C000-000000000046}") ODBCErrors  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002442F-0000-0000-C000-000000000046}") Validation  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024430-0000-0000-C000-000000000046}") Hyperlinks  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024431-0000-0000-C000-000000000046}") Hyperlink  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024432-0000-0000-C000-000000000046}") AutoFilter  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024433-0000-0000-C000-000000000046}") Filters  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024434-0000-0000-C000-000000000046}") Filter  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208D4-0000-0000-C000-000000000046}") AutoCorrect  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024435-0000-0000-C000-000000000046}") ChartFillFormat  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024436-0000-0000-C000-000000000046}") ChartColorFormat  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020848-0000-0000-C000-000000000046}") Axis  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{00020849-0000-0000-C000-000000000046}") ChartTitle  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002084A-0000-0000-C000-000000000046}") AxisTitle  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00020859-0000-0000-C000-000000000046}") ChartGroup  : public IDispatch 
	
{
	
};

__dispinterface ChartGroups;
typedef System::DelphiInterface<ChartGroups> _di_ChartGroups;
__dispinterface INTERFACE_UUID("{0002085A-0000-0000-C000-000000000046}") ChartGroups  : public IDispatch 
	
{
	
};

__dispinterface Axes;
typedef System::DelphiInterface<Axes> _di_Axes;
__dispinterface INTERFACE_UUID("{0002085B-0000-0000-C000-000000000046}") Axes  : public IDispatch 
{
	
};

__dispinterface Points;
typedef System::DelphiInterface<Points> _di_Points;
__dispinterface INTERFACE_UUID("{00020869-0000-0000-C000-000000000046}") Points  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002086A-0000-0000-C000-000000000046}") Point  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{0002086B-0000-0000-C000-000000000046}") Series  : public IDispatch 
	
{
	
};

__dispinterface SeriesCollection;
typedef System::DelphiInterface<SeriesCollection> _di_SeriesCollection;
__dispinterface INTERFACE_UUID("{0002086C-0000-0000-C000-000000000046}") SeriesCollection  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208B2-0000-0000-C000-000000000046}") DataLabel  : public IDispatch 
	
{
	
};

__dispinterface DataLabels;
typedef System::DelphiInterface<DataLabels> _di_DataLabels;
__dispinterface INTERFACE_UUID("{000208B3-0000-0000-C000-000000000046}") DataLabels  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208BA-0000-0000-C000-000000000046}") LegendEntry  : public IDispatch 
	
{
	
};

__dispinterface LegendEntries;
typedef System::DelphiInterface<LegendEntries> _di_LegendEntries;
__dispinterface INTERFACE_UUID("{000208BB-0000-0000-C000-000000000046}") LegendEntries  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208BC-0000-0000-C000-000000000046}") LegendKey  : public IDispatch 
	
{
	
};

__dispinterface Trendlines;
typedef System::DelphiInterface<Trendlines> _di_Trendlines;
__dispinterface INTERFACE_UUID("{000208BD-0000-0000-C000-000000000046}") Trendlines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208BE-0000-0000-C000-000000000046}") Trendline  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C0-0000-0000-C000-000000000046}") Corners  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C1-0000-0000-C000-000000000046}") SeriesLines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C2-0000-0000-C000-000000000046}") HiLoLines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C3-0000-0000-C000-000000000046}") Gridlines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C4-0000-0000-C000-000000000046}") DropLines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024437-0000-0000-C000-000000000046}") LeaderLines  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C5-0000-0000-C000-000000000046}") UpBars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C6-0000-0000-C000-000000000046}") DownBars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208C7-0000-0000-C000-000000000046}") Floor  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{000208C8-0000-0000-C000-000000000046}") Walls  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{000208C9-0000-0000-C000-000000000046}") TickLabels  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208CB-0000-0000-C000-000000000046}") PlotArea  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208CC-0000-0000-C000-000000000046}") ChartArea  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208CD-0000-0000-C000-000000000046}") Legend  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{000208CE-0000-0000-C000-000000000046}") ErrorBars  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024438-0000-0000-C000-000000000046}") Phonetic  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024439-0000-0000-C000-000000000046}") Shape  : public IDispatch 
{
	
};

__dispinterface INTERFACE_UUID("{0002443A-0000-0000-C000-000000000046}") Shapes  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{0002443F-0000-0000-C000-000000000046}") FreeformBuilder  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024440-0000-0000-C000-000000000046}") ControlFormat  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024441-0000-0000-C000-000000000046}") OLEFormat  : public IDispatch 
	
{
	
};

__dispinterface INTERFACE_UUID("{00024442-0000-0000-C000-000000000046}") LinkFormat  : public IDispatch 
	
{
	
};

__interface IDummy;
typedef System::DelphiInterface<IDummy> _di_IDummy;
__interface INTERFACE_UUID("{0002442E-0001-0000-C000-000000000046}") IDummy  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall _ActiveSheetOrChart(void) = 0 ;
	virtual HRESULT __stdcall RGB_(void) = 0 ;
	virtual HRESULT __stdcall ChDir(void) = 0 ;
	virtual HRESULT __stdcall DoScript(void) = 0 ;
	virtual HRESULT __stdcall DirectObject(void) = 0 ;
};

class DELPHICLASS CoQueryTable;
class PASCALIMPLEMENTATION CoQueryTable : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__QueryTable __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__QueryTable __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoQueryTable(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoQueryTable(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoApplication_;
class PASCALIMPLEMENTATION CoApplication_ : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Application __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Application __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoApplication_(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoApplication_(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoChart;
class PASCALIMPLEMENTATION CoChart : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Chart __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Chart __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoChart(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoChart(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoWorksheet;
class PASCALIMPLEMENTATION CoWorksheet : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Worksheet __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Worksheet __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoWorksheet(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoWorksheet(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoGlobal;
class PASCALIMPLEMENTATION CoGlobal : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Global __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Global __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoGlobal(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoGlobal(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoWorkbook;
class PASCALIMPLEMENTATION CoWorkbook : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Workbook __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Workbook __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoWorkbook(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoWorkbook(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoOLEObject;
class PASCALIMPLEMENTATION CoOLEObject : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__OLEObject __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__OLEObject __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoOLEObject(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoOLEObject(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE GUID LIBID_Excel;
extern PACKAGE GUID IID_Adjustments;
extern PACKAGE GUID IID_CalloutFormat;
extern PACKAGE GUID IID_ColorFormat;
extern PACKAGE GUID IID_LineFormat;
extern PACKAGE GUID IID_ShapeNode;
extern PACKAGE GUID IID_ShapeNodes;
extern PACKAGE GUID IID_PictureFormat;
extern PACKAGE GUID IID_ShadowFormat;
extern PACKAGE GUID IID_TextEffectFormat;
extern PACKAGE GUID IID_ThreeDFormat;
extern PACKAGE GUID IID_FillFormat;
extern PACKAGE GUID IID_IFont;
extern PACKAGE GUID IID_IWindow;
extern PACKAGE GUID IID_IWindows;
extern PACKAGE GUID IID_IAppEvents;
extern PACKAGE GUID IID__Application;
extern PACKAGE GUID IID_IWorksheetFunction;
extern PACKAGE GUID IID_IRange;
extern PACKAGE GUID IID_IChartEvents;
extern PACKAGE GUID IID__Chart;
extern PACKAGE GUID IID_Sheets;
extern PACKAGE GUID IID_IVPageBreak;
extern PACKAGE GUID IID_IHPageBreak;
extern PACKAGE GUID IID_IHPageBreaks;
extern PACKAGE GUID IID_IVPageBreaks;
extern PACKAGE GUID IID_IRecentFile;
extern PACKAGE GUID IID_IRecentFiles;
extern PACKAGE GUID IID_IDocEvents;
extern PACKAGE GUID IID__Worksheet;
extern PACKAGE GUID IID_IStyle;
extern PACKAGE GUID IID_IStyles;
extern PACKAGE GUID IID_IBorders;
extern PACKAGE GUID IID__Global;
extern PACKAGE GUID IID_IAddIn;
extern PACKAGE GUID IID_IAddIns;
extern PACKAGE GUID IID_IToolbar;
extern PACKAGE GUID IID_IToolbars;
extern PACKAGE GUID IID_IToolbarButton;
extern PACKAGE GUID IID_IToolbarButtons;
extern PACKAGE GUID IID_IAreas;
extern PACKAGE GUID IID_IWorkbookEvents;
extern PACKAGE GUID IID__Workbook;
extern PACKAGE GUID IID_Workbooks;
extern PACKAGE GUID IID_IMenuBars;
extern PACKAGE GUID IID_IMenuBar;
extern PACKAGE GUID IID_IMenus;
extern PACKAGE GUID IID_IMenu;
extern PACKAGE GUID IID_IMenuItems;
extern PACKAGE GUID IID_IMenuItem;
extern PACKAGE GUID IID_ICharts;
extern PACKAGE GUID IID_IDrawingObjects;
extern PACKAGE GUID IID_IPivotCache;
extern PACKAGE GUID IID_IPivotCaches;
extern PACKAGE GUID IID_IPivotFormula;
extern PACKAGE GUID IID_IPivotFormulas;
extern PACKAGE GUID IID_IPivotTable;
extern PACKAGE GUID IID_IPivotTables;
extern PACKAGE GUID IID_IPivotField;
extern PACKAGE GUID IID_IPivotFields;
extern PACKAGE GUID IID_ICalculatedFields;
extern PACKAGE GUID IID_IPivotItem;
extern PACKAGE GUID IID_IPivotItems;
extern PACKAGE GUID IID_ICalculatedItems;
extern PACKAGE GUID IID_ICharacters;
extern PACKAGE GUID IID_IDialogs;
extern PACKAGE GUID IID_IDialog;
extern PACKAGE GUID IID_ISoundNote;
extern PACKAGE GUID IID_IButton;
extern PACKAGE GUID IID_IButtons;
extern PACKAGE GUID IID_ICheckBox;
extern PACKAGE GUID IID_ICheckBoxes;
extern PACKAGE GUID IID_IOptionButton;
extern PACKAGE GUID IID_IOptionButtons;
extern PACKAGE GUID IID_IEditBox;
extern PACKAGE GUID IID_IEditBoxes;
extern PACKAGE GUID IID_IScrollBar;
extern PACKAGE GUID IID_IScrollBars;
extern PACKAGE GUID IID_IListBox;
extern PACKAGE GUID IID_IListBoxes;
extern PACKAGE GUID IID_IGroupBox;
extern PACKAGE GUID IID_IGroupBoxes;
extern PACKAGE GUID IID_IDropDown;
extern PACKAGE GUID IID_IDropDowns;
extern PACKAGE GUID IID_ISpinner;
extern PACKAGE GUID IID_ISpinners;
extern PACKAGE GUID IID_IDialogFrame;
extern PACKAGE GUID IID_ILabel;
extern PACKAGE GUID IID_ILabels;
extern PACKAGE GUID IID_IPanes;
extern PACKAGE GUID IID_IPane;
extern PACKAGE GUID IID_IScenarios;
extern PACKAGE GUID IID_IScenario;
extern PACKAGE GUID IID_IGroupObject;
extern PACKAGE GUID IID_IGroupObjects;
extern PACKAGE GUID IID_ILine;
extern PACKAGE GUID IID_ILines;
extern PACKAGE GUID IID_IRectangle;
extern PACKAGE GUID IID_IRectangles;
extern PACKAGE GUID IID_IOval;
extern PACKAGE GUID IID_IOvals;
extern PACKAGE GUID IID_IArc;
extern PACKAGE GUID IID_IArcs;
extern PACKAGE GUID IID_IOLEObjectEvents;
extern PACKAGE GUID IID__IOLEObject;
extern PACKAGE GUID IID_IOLEObjects;
extern PACKAGE GUID IID_ITextBox;
extern PACKAGE GUID IID_ITextBoxes;
extern PACKAGE GUID IID_IPicture;
extern PACKAGE GUID IID_IPictures;
extern PACKAGE GUID IID_IDrawing;
extern PACKAGE GUID IID_IDrawings;
extern PACKAGE GUID IID_IRoutingSlip;
extern PACKAGE GUID IID_IOutline;
extern PACKAGE GUID IID_IModule;
extern PACKAGE GUID IID_IModules;
extern PACKAGE GUID IID_IDialogSheet;
extern PACKAGE GUID IID_IDialogSheets;
extern PACKAGE GUID IID_IWorksheets;
extern PACKAGE GUID IID_IPageSetup;
extern PACKAGE GUID IID_INames;
extern PACKAGE GUID IID_IName;
extern PACKAGE GUID IID_IChartObject;
extern PACKAGE GUID IID_IChartObjects;
extern PACKAGE GUID IID_IMailer;
extern PACKAGE GUID IID_ICustomViews;
extern PACKAGE GUID IID_ICustomView;
extern PACKAGE GUID IID_IFormatConditions;
extern PACKAGE GUID IID_IFormatCondition;
extern PACKAGE GUID IID_IComments;
extern PACKAGE GUID IID_IComment;
extern PACKAGE GUID IID_IRefreshEvents;
extern PACKAGE GUID IID__IQueryTable;
extern PACKAGE GUID IID_IQueryTables;
extern PACKAGE GUID IID_IParameter;
extern PACKAGE GUID IID_IParameters;
extern PACKAGE GUID IID_IODBCError;
extern PACKAGE GUID IID_IODBCErrors;
extern PACKAGE GUID IID_IValidation;
extern PACKAGE GUID IID_IHyperlinks;
extern PACKAGE GUID IID_IHyperlink;
extern PACKAGE GUID IID_IAutoFilter;
extern PACKAGE GUID IID_IFilters;
extern PACKAGE GUID IID_IFilter;
extern PACKAGE GUID IID_IAutoCorrect;
extern PACKAGE GUID IID_IBorder;
extern PACKAGE GUID IID_IInterior;
extern PACKAGE GUID IID_IChartFillFormat;
extern PACKAGE GUID IID_IChartColorFormat;
extern PACKAGE GUID IID_IAxis;
extern PACKAGE GUID IID_IChartTitle;
extern PACKAGE GUID IID_IAxisTitle;
extern PACKAGE GUID IID_IChartGroup;
extern PACKAGE GUID IID_IChartGroups;
extern PACKAGE GUID IID_IAxes;
extern PACKAGE GUID IID_IPoints;
extern PACKAGE GUID IID_IPoint;
extern PACKAGE GUID IID_ISeries;
extern PACKAGE GUID IID_ISeriesCollection;
extern PACKAGE GUID IID_IDataLabel;
extern PACKAGE GUID IID_IDataLabels;
extern PACKAGE GUID IID_ILegendEntry;
extern PACKAGE GUID IID_ILegendEntries;
extern PACKAGE GUID IID_ILegendKey;
extern PACKAGE GUID IID_ITrendlines;
extern PACKAGE GUID IID_ITrendline;
extern PACKAGE GUID IID_ICorners;
extern PACKAGE GUID IID_ISeriesLines;
extern PACKAGE GUID IID_IHiLoLines;
extern PACKAGE GUID IID_IGridlines;
extern PACKAGE GUID IID_IDropLines;
extern PACKAGE GUID IID_ILeaderLines;
extern PACKAGE GUID IID_IUpBars;
extern PACKAGE GUID IID_IDownBars;
extern PACKAGE GUID IID_IFloor;
extern PACKAGE GUID IID_IWalls;
extern PACKAGE GUID IID_ITickLabels;
extern PACKAGE GUID IID_IPlotArea;
extern PACKAGE GUID IID_IChartArea;
extern PACKAGE GUID IID_ILegend;
extern PACKAGE GUID IID_IErrorBars;
extern PACKAGE GUID IID_IDataTable;
extern PACKAGE GUID IID_IPhonetic;
extern PACKAGE GUID IID_IShape;
extern PACKAGE GUID IID_IShapes;
extern PACKAGE GUID IID_IShapeRange;
extern PACKAGE GUID IID_IGroupShapes;
extern PACKAGE GUID IID_ITextFrame;
extern PACKAGE GUID IID_IConnectorFormat;
extern PACKAGE GUID IID_IFreeformBuilder;
extern PACKAGE GUID IID_IControlFormat;
extern PACKAGE GUID IID_IOLEFormat;
extern PACKAGE GUID IID_ILinkFormat;
extern PACKAGE GUID DIID_Font;
extern PACKAGE GUID DIID_Window_;
extern PACKAGE GUID DIID_Windows;
extern PACKAGE GUID DIID_AppEvents;
extern PACKAGE GUID DIID_WorksheetFunction;
extern PACKAGE GUID DIID_Range;
extern PACKAGE GUID DIID_ChartEvents;
extern PACKAGE GUID DIID_VPageBreak;
extern PACKAGE GUID DIID_HPageBreak;
extern PACKAGE GUID DIID_HPageBreaks;
extern PACKAGE GUID DIID_VPageBreaks;
extern PACKAGE GUID DIID_RecentFile;
extern PACKAGE GUID DIID_RecentFiles;
extern PACKAGE GUID DIID_DocEvents;
extern PACKAGE GUID DIID_Style;
extern PACKAGE GUID DIID_Styles;
extern PACKAGE GUID DIID_Borders;
extern PACKAGE GUID DIID_AddIn;
extern PACKAGE GUID DIID_AddIns;
extern PACKAGE GUID DIID_Toolbar;
extern PACKAGE GUID DIID_Toolbars;
extern PACKAGE GUID DIID_ToolbarButton;
extern PACKAGE GUID DIID_ToolbarButtons;
extern PACKAGE GUID DIID_Areas;
extern PACKAGE GUID DIID_WorkbookEvents;
extern PACKAGE GUID DIID_MenuBars;
extern PACKAGE GUID DIID_MenuBar;
extern PACKAGE GUID DIID_Menus;
extern PACKAGE GUID DIID_Menu;
extern PACKAGE GUID DIID_MenuItems;
extern PACKAGE GUID DIID_MenuItem;
extern PACKAGE GUID DIID_Charts;
extern PACKAGE GUID DIID_DrawingObjects;
extern PACKAGE GUID DIID_PivotCache;
extern PACKAGE GUID DIID_PivotCaches;
extern PACKAGE GUID DIID_PivotFormula;
extern PACKAGE GUID DIID_PivotFormulas;
extern PACKAGE GUID DIID_PivotTable;
extern PACKAGE GUID DIID_PivotTables;
extern PACKAGE GUID DIID_PivotField;
extern PACKAGE GUID DIID_PivotFields;
extern PACKAGE GUID DIID_CalculatedFields;
extern PACKAGE GUID DIID_PivotItem;
extern PACKAGE GUID DIID_PivotItems;
extern PACKAGE GUID DIID_CalculatedItems;
extern PACKAGE GUID DIID_Characters;
extern PACKAGE GUID DIID_Dialogs;
extern PACKAGE GUID DIID_Dialog;
extern PACKAGE GUID DIID_SoundNote;
extern PACKAGE GUID DIID_Button;
extern PACKAGE GUID DIID_Buttons;
extern PACKAGE GUID DIID_CheckBox;
extern PACKAGE GUID DIID_CheckBoxes;
extern PACKAGE GUID DIID_OptionButton;
extern PACKAGE GUID DIID_OptionButtons;
extern PACKAGE GUID DIID_EditBox;
extern PACKAGE GUID DIID_EditBoxes;
extern PACKAGE GUID DIID_ScrollBar;
extern PACKAGE GUID DIID_ScrollBars;
extern PACKAGE GUID DIID_ListBox;
extern PACKAGE GUID DIID_ListBoxes;
extern PACKAGE GUID DIID_GroupBox;
extern PACKAGE GUID DIID_GroupBoxes;
extern PACKAGE GUID DIID_DropDown;
extern PACKAGE GUID DIID_DropDowns;
extern PACKAGE GUID DIID_Spinner;
extern PACKAGE GUID DIID_Spinners;
extern PACKAGE GUID DIID_DialogFrame;
extern PACKAGE GUID DIID_Label_;
extern PACKAGE GUID DIID_Labels;
extern PACKAGE GUID DIID_Panes;
extern PACKAGE GUID DIID_Pane;
extern PACKAGE GUID DIID_Scenarios;
extern PACKAGE GUID DIID_Scenario;
extern PACKAGE GUID DIID_GroupObject;
extern PACKAGE GUID DIID_GroupObjects;
extern PACKAGE GUID DIID_Line;
extern PACKAGE GUID DIID_Lines;
extern PACKAGE GUID DIID_Rectangle;
extern PACKAGE GUID DIID_Rectangles;
extern PACKAGE GUID DIID_Oval;
extern PACKAGE GUID DIID_Ovals;
extern PACKAGE GUID DIID_Arc;
extern PACKAGE GUID DIID_Arcs;
extern PACKAGE GUID DIID_OLEObjectEvents;
extern PACKAGE GUID DIID__OLEObject;
extern PACKAGE GUID DIID_OLEObjects;
extern PACKAGE GUID DIID_TextBox;
extern PACKAGE GUID DIID_TextBoxes;
extern PACKAGE GUID DIID_Picture;
extern PACKAGE GUID DIID_Pictures;
extern PACKAGE GUID DIID_Drawing;
extern PACKAGE GUID DIID_Drawings;
extern PACKAGE GUID DIID_RoutingSlip;
extern PACKAGE GUID DIID_Outline;
extern PACKAGE GUID DIID_Module;
extern PACKAGE GUID DIID_Modules;
extern PACKAGE GUID DIID_DialogSheet;
extern PACKAGE GUID DIID_DialogSheets;
extern PACKAGE GUID DIID_Worksheets;
extern PACKAGE GUID DIID_PageSetup;
extern PACKAGE GUID DIID_Names;
extern PACKAGE GUID DIID_Name;
extern PACKAGE GUID DIID_ChartObject;
extern PACKAGE GUID DIID_ChartObjects;
extern PACKAGE GUID DIID_Mailer;
extern PACKAGE GUID DIID_CustomViews;
extern PACKAGE GUID DIID_CustomView;
extern PACKAGE GUID DIID_FormatConditions;
extern PACKAGE GUID DIID_FormatCondition;
extern PACKAGE GUID DIID_Comments;
extern PACKAGE GUID DIID_Comment;
extern PACKAGE GUID DIID_RefreshEvents;
extern PACKAGE GUID DIID__QueryTable;
extern PACKAGE GUID DIID_QueryTables;
extern PACKAGE GUID DIID_Parameter;
extern PACKAGE GUID DIID_Parameters;
extern PACKAGE GUID DIID_ODBCError;
extern PACKAGE GUID DIID_ODBCErrors;
extern PACKAGE GUID DIID_Validation;
extern PACKAGE GUID DIID_Hyperlinks;
extern PACKAGE GUID DIID_Hyperlink;
extern PACKAGE GUID DIID_AutoFilter;
extern PACKAGE GUID DIID_Filters;
extern PACKAGE GUID DIID_Filter;
extern PACKAGE GUID DIID_AutoCorrect;
extern PACKAGE GUID DIID_Border;
extern PACKAGE GUID DIID_Interior;
extern PACKAGE GUID DIID_ChartFillFormat;
extern PACKAGE GUID DIID_ChartColorFormat;
extern PACKAGE GUID DIID_Axis;
extern PACKAGE GUID DIID_ChartTitle;
extern PACKAGE GUID DIID_AxisTitle;
extern PACKAGE GUID DIID_ChartGroup;
extern PACKAGE GUID DIID_ChartGroups;
extern PACKAGE GUID DIID_Axes;
extern PACKAGE GUID DIID_Points;
extern PACKAGE GUID DIID_Point;
extern PACKAGE GUID DIID_Series;
extern PACKAGE GUID DIID_SeriesCollection;
extern PACKAGE GUID DIID_DataLabel;
extern PACKAGE GUID DIID_DataLabels;
extern PACKAGE GUID DIID_LegendEntry;
extern PACKAGE GUID DIID_LegendEntries;
extern PACKAGE GUID DIID_LegendKey;
extern PACKAGE GUID DIID_Trendlines;
extern PACKAGE GUID DIID_Trendline;
extern PACKAGE GUID DIID_Corners;
extern PACKAGE GUID DIID_SeriesLines;
extern PACKAGE GUID DIID_HiLoLines;
extern PACKAGE GUID DIID_Gridlines;
extern PACKAGE GUID DIID_DropLines;
extern PACKAGE GUID DIID_LeaderLines;
extern PACKAGE GUID DIID_UpBars;
extern PACKAGE GUID DIID_DownBars;
extern PACKAGE GUID DIID_Floor;
extern PACKAGE GUID DIID_Walls;
extern PACKAGE GUID DIID_TickLabels;
extern PACKAGE GUID DIID_PlotArea;
extern PACKAGE GUID DIID_ChartArea;
extern PACKAGE GUID DIID_Legend;
extern PACKAGE GUID DIID_ErrorBars;
extern PACKAGE GUID DIID_DataTable;
extern PACKAGE GUID DIID_Phonetic;
extern PACKAGE GUID DIID_Shape;
extern PACKAGE GUID DIID_Shapes;
extern PACKAGE GUID DIID_ShapeRange;
extern PACKAGE GUID DIID_GroupShapes;
extern PACKAGE GUID DIID_TextFrame;
extern PACKAGE GUID DIID_ConnectorFormat;
extern PACKAGE GUID DIID_FreeformBuilder;
extern PACKAGE GUID DIID_ControlFormat;
extern PACKAGE GUID DIID_OLEFormat;
extern PACKAGE GUID DIID_LinkFormat;
extern PACKAGE GUID IID_IDummy;
extern PACKAGE GUID CLASS_QueryTable;
extern PACKAGE GUID CLASS_Application_;
extern PACKAGE GUID CLASS_Chart;
extern PACKAGE GUID CLASS_Worksheet;
extern PACKAGE GUID CLASS_Global;
extern PACKAGE GUID CLASS_Workbook;
extern PACKAGE GUID CLASS_OLEObject;
static const unsigned xlAll = 0xffffeff8;
static const unsigned xlAutomatic = 0xffffeff7;
static const Shortint xlBoth = 0x1;
static const unsigned xlCenter = 0xffffeff4;
static const Shortint xlChecker = 0x9;
static const Shortint xlCircle = 0x8;
static const Shortint xlCorner = 0x2;
static const Shortint xlCrissCross = 0x10;
static const Shortint xlCross = 0x4;
static const Shortint xlDiamond = 0x2;
static const unsigned xlDistributed = 0xffffefeb;
static const Shortint xlDoubleAccounting = 0x5;
static const Shortint xlFixedValue = 0x1;
static const unsigned xlFormats = 0xffffefe6;
static const Shortint xlGray16 = 0x11;
static const Shortint xlGray8 = 0x12;
static const Shortint xlGrid = 0xf;
static const unsigned xlHigh = 0xffffefe1;
static const Shortint xlInside = 0x2;
static const unsigned xlJustify = 0xffffefde;
static const Shortint xlLightDown = 0xd;
static const Shortint xlLightHorizontal = 0xb;
static const Shortint xlLightUp = 0xe;
static const Shortint xlLightVertical = 0xc;
static const unsigned xlLow = 0xffffefda;
static const unsigned xlManual = 0xffffefd9;
static const Shortint xlMinusValues = 0x3;
static const unsigned xlModule = 0xffffefd3;
static const Shortint xlNextToAxis = 0x4;
static const unsigned xlNone = 0xffffefd2;
static const unsigned xlNotes = 0xffffefd0;
static const unsigned xlOff = 0xffffefce;
static const Shortint xlOn = 0x1;
static const Shortint xlPercent = 0x2;
static const Shortint xlPlus = 0x9;
static const Shortint xlPlusValues = 0x2;
static const Shortint xlSemiGray75 = 0xa;
static const Shortint xlShowLabel = 0x4;
static const Shortint xlShowLabelAndPercent = 0x5;
static const Shortint xlShowPercent = 0x3;
static const Shortint xlShowValue = 0x2;
static const unsigned xlSimple = 0xffffefc6;
static const Shortint xlSingle = 0x2;
static const Shortint xlSingleAccounting = 0x4;
static const Shortint xlSolid = 0x1;
static const Shortint xlSquare = 0x1;
static const Shortint xlStar = 0x5;
static const Shortint xlStError = 0x4;
static const Shortint xlToolbarButton = 0x2;
static const Shortint xlTriangle = 0x3;
static const unsigned xlGray25 = 0xffffefe4;
static const unsigned xlGray50 = 0xffffefe3;
static const unsigned xlGray75 = 0xffffefe2;
static const unsigned xlBottom = 0xffffeff5;
static const unsigned xlLeft = 0xffffefdd;
static const unsigned xlRight = 0xffffefc8;
static const unsigned xlTop = 0xffffefc0;
static const unsigned xl3DBar = 0xffffeffd;
static const unsigned xl3DSurface = 0xffffeff9;
static const Shortint xlBar = 0x2;
static const Shortint xlColumn = 0x3;
static const unsigned xlCombination = 0xffffeff1;
static const unsigned xlCustom = 0xffffefee;
static const unsigned xlDefaultAutoFormat = 0xffffffff;
static const Shortint xlMaximum = 0x2;
static const Shortint xlMinimum = 0x4;
static const Shortint xlOpaque = 0x3;
static const Shortint xlTransparent = 0x2;
static const unsigned xlBidi = 0xffffec78;
static const unsigned xlLatin = 0xffffec77;
static const unsigned xlContext = 0xffffec76;
static const unsigned xlLTR = 0xffffec75;
static const unsigned xlRTL = 0xffffec74;
static const Shortint xlVisualCursor = 0x2;
static const Shortint xlLogicalCursor = 0x1;
static const Shortint xlSystem = 0x1;
static const Shortint xlPartial = 0x3;
static const Shortint xlHindiNumerals = 0x3;
static const Shortint xlBidiCalendar = 0x3;
static const Shortint xlGregorian = 0x2;
static const Shortint xlComplete = 0x4;
static const Shortint xlScale = 0x3;
static const Shortint xlClosed = 0x3;
static const Shortint xlColor1 = 0x7;
static const Shortint xlColor2 = 0x8;
static const Shortint xlColor3 = 0x9;
static const Shortint xlConstants = 0x2;
static const Shortint xlContents = 0x2;
static const Shortint xlBelow = 0x1;
static const Shortint xlCascade = 0x7;
static const Shortint xlCenterAcrossSelection = 0x7;
static const Shortint xlChart4 = 0x2;
static const Shortint xlChartSeries = 0x11;
static const Shortint xlChartShort = 0x6;
static const Shortint xlChartTitles = 0x12;
static const Shortint xlClassic1 = 0x1;
static const Shortint xlClassic2 = 0x2;
static const Shortint xlClassic3 = 0x3;
static const Shortint xl3DEffects1 = 0xd;
static const Shortint xl3DEffects2 = 0xe;
static const Shortint xlAbove = 0x0;
static const Shortint xlAccounting1 = 0x4;
static const Shortint xlAccounting2 = 0x5;
static const Shortint xlAccounting3 = 0x6;
static const Shortint xlAccounting4 = 0x11;
static const Shortint xlAdd = 0x2;
static const Shortint xlDebugCodePane = 0xd;
static const Shortint xlDesktop = 0x9;
static const Shortint xlDirect = 0x1;
static const Shortint xlDivide = 0x5;
static const Shortint xlDoubleClosed = 0x5;
static const Shortint xlDoubleOpen = 0x4;
static const Shortint xlDoubleQuote = 0x1;
static const Shortint xlEntireChart = 0x14;
static const Shortint xlExcelMenus = 0x1;
static const Shortint xlExtended = 0x3;
static const Shortint xlFill = 0x5;
static const Shortint xlFirst = 0x0;
static const Shortint xlFloating = 0x5;
static const Shortint xlFormula = 0x5;
static const Shortint xlGeneral = 0x1;
static const Shortint xlGridline = 0x16;
static const Shortint xlIcons = 0x1;
static const Shortint xlImmediatePane = 0xc;
static const Shortint xlInteger = 0x2;
static const Shortint xlLast = 0x1;
static const Shortint xlLastCell = 0xb;
static const Shortint xlList1 = 0xa;
static const Shortint xlList2 = 0xb;
static const Shortint xlList3 = 0xc;
static const Shortint xlLocalFormat1 = 0xf;
static const Shortint xlLocalFormat2 = 0x10;
static const Shortint xlLong = 0x3;
static const Shortint xlLotusHelp = 0x2;
static const Shortint xlMacrosheetCell = 0x7;
static const Shortint xlMixed = 0x2;
static const Shortint xlMultiply = 0x4;
static const Shortint xlNarrow = 0x1;
static const Shortint xlNoDocuments = 0x3;
static const Shortint xlOpen = 0x2;
static const Shortint xlOutside = 0x3;
static const Shortint xlReference = 0x4;
static const Shortint xlSemiautomatic = 0x2;
static const Shortint xlShort = 0x1;
static const Shortint xlSingleQuote = 0x2;
static const Shortint xlStrict = 0x2;
static const Shortint xlSubtract = 0x3;
static const Shortint xlTextBox = 0x10;
static const Shortint xlTiled = 0x1;
static const Shortint xlTitleBar = 0x8;
static const Shortint xlToolbar = 0x1;
static const Shortint xlVisible = 0xc;
static const Shortint xlWatchPane = 0xb;
static const Shortint xlWide = 0x3;
static const Shortint xlWorkbookTab = 0x6;
static const Shortint xlWorksheet4 = 0x1;
static const Shortint xlWorksheetCell = 0x3;
static const Shortint xlWorksheetShort = 0x5;
static const Shortint xlAllExceptBorders = 0x6;
static const Shortint xlLeftToRight = 0x2;
static const Shortint xlTopToBottom = 0x1;
static const Shortint xlVeryHidden = 0x2;
static const Shortint xlDrawingObject = 0xe;
static const int xlCreatorCode = 0x5843454c;
static const Shortint xlBuiltIn = 0x15;
static const Shortint xlUserDefined = 0x16;
static const Shortint xlAnyGallery = 0x17;
static const unsigned xlColorIndexAutomatic = 0xffffeff7;
static const unsigned xlColorIndexNone = 0xffffefd2;
static const Shortint xlCap = 0x1;
static const Shortint xlNoCap = 0x2;
static const Shortint xlColumns = 0x2;
static const Shortint xlRows = 0x1;
static const unsigned xlScaleLinear = 0xffffefdc;
static const unsigned xlScaleLogarithmic = 0xffffefdb;
static const Shortint xlAutoFill = 0x4;
static const Shortint xlChronological = 0x3;
static const Shortint xlGrowth = 0x2;
static const unsigned xlDataSeriesLinear = 0xffffefdc;
static const unsigned xlAxisCrossesAutomatic = 0xffffeff7;
static const unsigned xlAxisCrossesCustom = 0xffffefee;
static const Shortint xlAxisCrossesMaximum = 0x2;
static const Shortint xlAxisCrossesMinimum = 0x4;
static const Shortint xlPrimary = 0x1;
static const Shortint xlSecondary = 0x2;
static const unsigned xlBackgroundAutomatic = 0xffffeff7;
static const Shortint xlBackgroundOpaque = 0x3;
static const Shortint xlBackgroundTransparent = 0x2;
static const unsigned xlMaximized = 0xffffefd7;
static const unsigned xlMinimized = 0xffffefd4;
static const unsigned xlNormal = 0xffffefd1;
static const Shortint xlCategory = 0x1;
static const Shortint xlSeriesAxis = 0x3;
static const Shortint xlValue = 0x2;
static const Shortint xlArrowHeadLengthLong = 0x3;
static const unsigned xlArrowHeadLengthMedium = 0xffffefd6;
static const Shortint xlArrowHeadLengthShort = 0x1;
static const unsigned xlVAlignBottom = 0xffffeff5;
static const unsigned xlVAlignCenter = 0xffffeff4;
static const unsigned xlVAlignDistributed = 0xffffefeb;
static const unsigned xlVAlignJustify = 0xffffefde;
static const unsigned xlVAlignTop = 0xffffefc0;
static const Shortint xlTickMarkCross = 0x4;
static const Shortint xlTickMarkInside = 0x2;
static const unsigned xlTickMarkNone = 0xffffefd2;
static const Shortint xlTickMarkOutside = 0x3;
static const unsigned xlX = 0xffffefb8;
static const Shortint xlY = 0x1;
static const Shortint xlErrorBarIncludeBoth = 0x1;
static const Shortint xlErrorBarIncludeMinusValues = 0x3;
static const unsigned xlErrorBarIncludeNone = 0xffffefd2;
static const Shortint xlErrorBarIncludePlusValues = 0x2;
static const Shortint xlInterpolated = 0x3;
static const Shortint xlNotPlotted = 0x1;
static const Shortint xlZero = 0x2;
static const Shortint xlArrowHeadStyleClosed = 0x3;
static const Shortint xlArrowHeadStyleDoubleClosed = 0x5;
static const Shortint xlArrowHeadStyleDoubleOpen = 0x4;
static const unsigned xlArrowHeadStyleNone = 0xffffefd2;
static const Shortint xlArrowHeadStyleOpen = 0x2;
static const unsigned xlArrowHeadWidthMedium = 0xffffefd6;
static const Shortint xlArrowHeadWidthNarrow = 0x1;
static const Shortint xlArrowHeadWidthWide = 0x3;
static const unsigned xlHAlignCenter = 0xffffeff4;
static const Shortint xlHAlignCenterAcrossSelection = 0x7;
static const unsigned xlHAlignDistributed = 0xffffefeb;
static const Shortint xlHAlignFill = 0x5;
static const Shortint xlHAlignGeneral = 0x1;
static const unsigned xlHAlignJustify = 0xffffefde;
static const unsigned xlHAlignLeft = 0xffffefdd;
static const unsigned xlHAlignRight = 0xffffefc8;
static const unsigned xlTickLabelPositionHigh = 0xffffefe1;
static const unsigned xlTickLabelPositionLow = 0xffffefda;
static const Shortint xlTickLabelPositionNextToAxis = 0x4;
static const unsigned xlTickLabelPositionNone = 0xffffefd2;
static const unsigned xlLegendPositionBottom = 0xffffeff5;
static const Shortint xlLegendPositionCorner = 0x2;
static const unsigned xlLegendPositionLeft = 0xffffefdd;
static const unsigned xlLegendPositionRight = 0xffffefc8;
static const unsigned xlLegendPositionTop = 0xffffefc0;
static const Shortint xlStackScale = 0x3;
static const Shortint xlStack = 0x2;
static const Shortint xlStretch = 0x1;
static const Shortint xlSides = 0x1;
static const Shortint xlEnd = 0x2;
static const Shortint xlEndSides = 0x3;
static const Shortint xlFront = 0x4;
static const Shortint xlFrontSides = 0x5;
static const Shortint xlFrontEnd = 0x6;
static const Shortint xlAllFaces = 0x7;
static const unsigned xlDownward = 0xffffefb6;
static const unsigned xlHorizontal = 0xffffefe0;
static const unsigned xlUpward = 0xffffefb5;
static const unsigned xlVertical = 0xffffefba;
static const unsigned xlTickLabelOrientationAutomatic = 0xffffeff7;
static const unsigned xlTickLabelOrientationDownward = 0xffffefb6;
static const unsigned xlTickLabelOrientationHorizontal = 0xffffefe0;
static const unsigned xlTickLabelOrientationUpward = 0xffffefb5;
static const unsigned xlTickLabelOrientationVertical = 0xffffefba;
static const Shortint xlHairline = 0x1;
static const unsigned xlMedium = 0xffffefd6;
static const Shortint xlThick = 0x4;
static const Shortint xlThin = 0x2;
static const Shortint xlDay = 0x1;
static const Shortint xlMonth = 0x3;
static const Shortint xlWeekday = 0x2;
static const Shortint xlYear = 0x4;
static const unsigned xlUnderlineStyleDouble = 0xffffefe9;
static const Shortint xlUnderlineStyleDoubleAccounting = 0x5;
static const unsigned xlUnderlineStyleNone = 0xffffefd2;
static const Shortint xlUnderlineStyleSingle = 0x2;
static const Shortint xlUnderlineStyleSingleAccounting = 0x4;
static const unsigned xlErrorBarTypeCustom = 0xffffefee;
static const Shortint xlErrorBarTypeFixedValue = 0x1;
static const Shortint xlErrorBarTypePercent = 0x2;
static const unsigned xlErrorBarTypeStDev = 0xffffefc5;
static const Shortint xlErrorBarTypeStError = 0x4;
static const Shortint xlExponential = 0x5;
static const unsigned xlLinear = 0xffffefdc;
static const unsigned xlLogarithmic = 0xffffefdb;
static const Shortint xlMovingAvg = 0x6;
static const Shortint xlPolynomial = 0x3;
static const Shortint xlPower = 0x4;
static const Shortint xlContinuous = 0x1;
static const unsigned xlDash = 0xffffefed;
static const Shortint xlDashDot = 0x4;
static const Shortint xlDashDotDot = 0x5;
static const unsigned xlDot = 0xffffefea;
static const unsigned xlDouble = 0xffffefe9;
static const Shortint xlSlantDashDot = 0xd;
static const unsigned xlLineStyleNone = 0xffffefd2;
static const unsigned xlDataLabelsShowNone = 0xffffefd2;
static const Shortint xlDataLabelsShowValue = 0x2;
static const Shortint xlDataLabelsShowPercent = 0x3;
static const Shortint xlDataLabelsShowLabel = 0x4;
static const Shortint xlDataLabelsShowLabelAndPercent = 0x5;
static const Shortint xlDataLabelsShowBubbleSizes = 0x6;
static const unsigned xlMarkerStyleAutomatic = 0xffffeff7;
static const Shortint xlMarkerStyleCircle = 0x8;
static const unsigned xlMarkerStyleDash = 0xffffefed;
static const Shortint xlMarkerStyleDiamond = 0x2;
static const unsigned xlMarkerStyleDot = 0xffffefea;
static const unsigned xlMarkerStyleNone = 0xffffefd2;
static const unsigned xlMarkerStylePicture = 0xffffefcd;
static const Shortint xlMarkerStylePlus = 0x9;
static const Shortint xlMarkerStyleSquare = 0x1;
static const Shortint xlMarkerStyleStar = 0x5;
static const Shortint xlMarkerStyleTriangle = 0x3;
static const unsigned xlMarkerStyleX = 0xffffefb8;
static const Shortint xlBMP = 0x1;
static const Shortint xlCGM = 0x7;
static const Shortint xlDRW = 0x4;
static const Shortint xlDXF = 0x5;
static const Shortint xlEPS = 0x8;
static const Shortint xlHGL = 0x6;
static const Shortint xlPCT = 0xd;
static const Shortint xlPCX = 0xa;
static const Shortint xlPIC = 0xb;
static const Shortint xlPLT = 0xc;
static const Shortint xlTIF = 0x9;
static const Shortint xlWMF = 0x2;
static const Shortint xlWPG = 0x3;
static const unsigned xlPatternAutomatic = 0xffffeff7;
static const Shortint xlPatternChecker = 0x9;
static const Shortint xlPatternCrissCross = 0x10;
static const unsigned xlPatternDown = 0xffffefe7;
static const Shortint xlPatternGray16 = 0x11;
static const unsigned xlPatternGray25 = 0xffffefe4;
static const unsigned xlPatternGray50 = 0xffffefe3;
static const unsigned xlPatternGray75 = 0xffffefe2;
static const Shortint xlPatternGray8 = 0x12;
static const Shortint xlPatternGrid = 0xf;
static const unsigned xlPatternHorizontal = 0xffffefe0;
static const Shortint xlPatternLightDown = 0xd;
static const Shortint xlPatternLightHorizontal = 0xb;
static const Shortint xlPatternLightUp = 0xe;
static const Shortint xlPatternLightVertical = 0xc;
static const unsigned xlPatternNone = 0xffffefd2;
static const Shortint xlPatternSemiGray75 = 0xa;
static const Shortint xlPatternSolid = 0x1;
static const unsigned xlPatternUp = 0xffffefbe;
static const unsigned xlPatternVertical = 0xffffefba;
static const Shortint xlSplitByPosition = 0x1;
static const Shortint xlSplitByPercentValue = 0x3;
static const Shortint xlSplitByCustomSplit = 0x4;
static const Shortint xlSplitByValue = 0x2;
static const unsigned xlLabelPositionCenter = 0xffffeff4;
static const Shortint xlLabelPositionAbove = 0x0;
static const Shortint xlLabelPositionBelow = 0x1;
static const unsigned xlLabelPositionLeft = 0xffffefdd;
static const unsigned xlLabelPositionRight = 0xffffefc8;
static const Shortint xlLabelPositionOutsideEnd = 0x2;
static const Shortint xlLabelPositionInsideEnd = 0x3;
static const Shortint xlLabelPositionInsideBase = 0x4;
static const Shortint xlLabelPositionBestFit = 0x5;
static const Shortint xlLabelPositionMixed = 0x6;
static const Shortint xlLabelPositionCustom = 0x7;
static const Shortint xlDays = 0x0;
static const Shortint xlMonths = 0x1;
static const Shortint xlYears = 0x2;
static const Shortint xlCategoryScale = 0x2;
static const Shortint xlTimeScale = 0x3;
static const unsigned xlAutomaticScale = 0xffffeff7;
static const Shortint xlBox = 0x0;
static const Shortint xlPyramidToPoint = 0x1;
static const Shortint xlPyramidToMax = 0x2;
static const Shortint xlCylinder = 0x3;
static const Shortint xlConeToPoint = 0x4;
static const Shortint xlConeToMax = 0x5;
static const Shortint xlColumnClustered = 0x33;
static const Shortint xlColumnStacked = 0x34;
static const Shortint xlColumnStacked100 = 0x35;
static const Shortint xl3DColumnClustered = 0x36;
static const Shortint xl3DColumnStacked = 0x37;
static const Shortint xl3DColumnStacked100 = 0x38;
static const Shortint xlBarClustered = 0x39;
static const Shortint xlBarStacked = 0x3a;
static const Shortint xlBarStacked100 = 0x3b;
static const Shortint xl3DBarClustered = 0x3c;
static const Shortint xl3DBarStacked = 0x3d;
static const Shortint xl3DBarStacked100 = 0x3e;
static const Shortint xlLineStacked = 0x3f;
static const Shortint xlLineStacked100 = 0x40;
static const Shortint xlLineMarkers = 0x41;
static const Shortint xlLineMarkersStacked = 0x42;
static const Shortint xlLineMarkersStacked100 = 0x43;
static const Shortint xlPieOfPie = 0x44;
static const Shortint xlPieExploded = 0x45;
static const Shortint xl3DPieExploded = 0x46;
static const Shortint xlBarOfPie = 0x47;
static const Shortint xlXYScatterSmooth = 0x48;
static const Shortint xlXYScatterSmoothNoMarkers = 0x49;
static const Shortint xlXYScatterLines = 0x4a;
static const Shortint xlXYScatterLinesNoMarkers = 0x4b;
static const Shortint xlAreaStacked = 0x4c;
static const Shortint xlAreaStacked100 = 0x4d;
static const Shortint xl3DAreaStacked = 0x4e;
static const Shortint xl3DAreaStacked100 = 0x4f;
static const Shortint xlDoughnutExploded = 0x50;
static const Shortint xlRadarMarkers = 0x51;
static const Shortint xlRadarFilled = 0x52;
static const Shortint xlSurface = 0x53;
static const Shortint xlSurfaceWireframe = 0x54;
static const Shortint xlSurfaceTopView = 0x55;
static const Shortint xlSurfaceTopViewWireframe = 0x56;
static const Shortint xlBubble = 0xf;
static const Shortint xlBubble3DEffect = 0x57;
static const Shortint xlStockHLC = 0x58;
static const Shortint xlStockOHLC = 0x59;
static const Shortint xlStockVHLC = 0x5a;
static const Shortint xlStockVOHLC = 0x5b;
static const Shortint xlCylinderColClustered = 0x5c;
static const Shortint xlCylinderColStacked = 0x5d;
static const Shortint xlCylinderColStacked100 = 0x5e;
static const Shortint xlCylinderBarClustered = 0x5f;
static const Shortint xlCylinderBarStacked = 0x60;
static const Shortint xlCylinderBarStacked100 = 0x61;
static const Shortint xlCylinderCol = 0x62;
static const Shortint xlConeColClustered = 0x63;
static const Shortint xlConeColStacked = 0x64;
static const Shortint xlConeColStacked100 = 0x65;
static const Shortint xlConeBarClustered = 0x66;
static const Shortint xlConeBarStacked = 0x67;
static const Shortint xlConeBarStacked100 = 0x68;
static const Shortint xlConeCol = 0x69;
static const Shortint xlPyramidColClustered = 0x6a;
static const Shortint xlPyramidColStacked = 0x6b;
static const Shortint xlPyramidColStacked100 = 0x6c;
static const Shortint xlPyramidBarClustered = 0x6d;
static const Shortint xlPyramidBarStacked = 0x6e;
static const Shortint xlPyramidBarStacked100 = 0x6f;
static const Shortint xlPyramidCol = 0x70;
static const unsigned xl3DColumn = 0xffffeffc;
static const Shortint xlLine = 0x4;
static const unsigned xl3DLine = 0xffffeffb;
static const unsigned xl3DPie = 0xffffeffa;
static const Shortint xlPie = 0x5;
static const unsigned xlXYScatter = 0xffffefb7;
static const unsigned xl3DArea = 0xffffeffe;
static const Shortint xlArea = 0x1;
static const unsigned xlDoughnut = 0xffffefe8;
static const unsigned xlRadar = 0xffffefc9;
static const Shortint xlDataLabel = 0x0;
static const Shortint xlChartArea = 0x2;
static const Shortint xlSeries = 0x3;
static const Shortint xlChartTitle = 0x4;
static const Shortint xlWalls = 0x5;
static const Shortint xlCorners = 0x6;
static const Shortint xlDataTable = 0x7;
static const Shortint xlTrendline = 0x8;
static const Shortint xlErrorBars = 0x9;
static const Shortint xlXErrorBars = 0xa;
static const Shortint xlYErrorBars = 0xb;
static const Shortint xlLegendEntry = 0xc;
static const Shortint xlLegendKey = 0xd;
static const Shortint xlShape = 0xe;
static const Shortint xlMajorGridlines = 0xf;
static const Shortint xlMinorGridlines = 0x10;
static const Shortint xlAxisTitle = 0x11;
static const Shortint xlUpBars = 0x12;
static const Shortint xlPlotArea = 0x13;
static const Shortint xlDownBars = 0x14;
static const Shortint xlAxis = 0x15;
static const Shortint xlSeriesLines = 0x16;
static const Shortint xlFloor = 0x17;
static const Shortint xlLegend = 0x18;
static const Shortint xlHiLoLines = 0x19;
static const Shortint xlDropLines = 0x1a;
static const Shortint xlRadarAxisLabels = 0x1b;
static const Shortint xlNothing = 0x1c;
static const Shortint xlLeaderLines = 0x1d;
static const Shortint xlSizeIsWidth = 0x2;
static const Shortint xlSizeIsArea = 0x1;
static const unsigned xlShiftDown = 0xffffefe7;
static const unsigned xlShiftToRight = 0xffffefbf;
static const unsigned xlShiftToLeft = 0xffffefc1;
static const unsigned xlShiftUp = 0xffffefbe;
static const unsigned xlDown = 0xffffefe7;
static const unsigned xlToLeft = 0xffffefc1;
static const unsigned xlToRight = 0xffffefbf;
static const unsigned xlUp = 0xffffefbe;
static const unsigned xlAverage = 0xffffeff6;
static const unsigned xlCount = 0xffffeff0;
static const unsigned xlCountNums = 0xffffefef;
static const unsigned xlMax = 0xffffefd8;
static const unsigned xlMin = 0xffffefd5;
static const unsigned xlProduct = 0xffffefcb;
static const unsigned xlStDev = 0xffffefc5;
static const unsigned xlStDevP = 0xffffefc4;
static const unsigned xlSum = 0xffffefc3;
static const unsigned xlVar = 0xffffefbc;
static const unsigned xlVarP = 0xffffefbb;
static const unsigned xlChart = 0xffffeff3;
static const unsigned xlDialogSheet = 0xffffefec;
static const Shortint xlExcel4IntlMacroSheet = 0x4;
static const Shortint xlExcel4MacroSheet = 0x3;
static const unsigned xlWorksheet = 0xffffefb9;
static const unsigned xlColumnHeader = 0xffffeff2;
static const Shortint xlColumnItem = 0x5;
static const Shortint xlDataHeader = 0x3;
static const Shortint xlDataItem = 0x7;
static const Shortint xlPageHeader = 0x2;
static const Shortint xlPageItem = 0x6;
static const unsigned xlRowHeader = 0xffffefc7;
static const Shortint xlRowItem = 0x4;
static const Shortint xlTableBody = 0x8;
static const unsigned xlFormulas = 0xffffefe5;
static const unsigned xlComments = 0xffffefd0;
static const unsigned xlValues = 0xffffefbd;
static const Shortint xlChartAsWindow = 0x5;
static const Shortint xlChartInPlace = 0x4;
static const Shortint xlClipboard = 0x3;
static const unsigned xlInfo = 0xffffefdf;
static const Shortint xlWorkbook = 0x1;
static const Shortint xlDate = 0x2;
static const unsigned xlNumber = 0xffffefcf;
static const unsigned xlText = 0xffffefc2;
static const Shortint xlBitmap = 0x2;
static const unsigned xlPicture = 0xffffefcd;
static const Shortint xlConsolidation = 0x3;
static const Shortint xlDatabase = 0x1;
static const Shortint xlExternal = 0x2;
static const unsigned xlPivotTable = 0xffffefcc;
static const Shortint xlA1 = 0x1;
static const unsigned xlR1C1 = 0xffffefca;
static const Shortint xlMicrosoftAccess = 0x4;
static const Shortint xlMicrosoftFoxPro = 0x5;
static const Shortint xlMicrosoftMail = 0x3;
static const Shortint xlMicrosoftPowerPoint = 0x2;
static const Shortint xlMicrosoftProject = 0x6;
static const Shortint xlMicrosoftSchedulePlus = 0x7;
static const Shortint xlMicrosoftWord = 0x1;
static const Shortint xlNoButton = 0x0;
static const Shortint xlPrimaryButton = 0x1;
static const Shortint xlSecondaryButton = 0x2;
static const Shortint xlCopy = 0x1;
static const Shortint xlCut = 0x2;
static const unsigned xlFillWithAll = 0xffffeff8;
static const Shortint xlFillWithContents = 0x2;
static const unsigned xlFillWithFormats = 0xffffefe6;
static const Shortint xlFilterCopy = 0x2;
static const Shortint xlFilterInPlace = 0x1;
static const Shortint xlDownThenOver = 0x1;
static const Shortint xlOverThenDown = 0x2;
static const Shortint xlLinkTypeExcelLinks = 0x1;
static const Shortint xlLinkTypeOLELinks = 0x2;
static const Shortint xlColumnThenRow = 0x2;
static const Shortint xlRowThenColumn = 0x1;
static const Shortint xlDisabled = 0x0;
static const Shortint xlErrorHandler = 0x2;
static const Shortint xlInterrupt = 0x1;
static const unsigned xlPageBreakAutomatic = 0xffffeff7;
static const unsigned xlPageBreakManual = 0xffffefd9;
static const Shortint xlOLEControl = 0x2;
static const Shortint xlOLEEmbed = 0x1;
static const Shortint xlOLELink = 0x0;
static const Shortint xlLandscape = 0x2;
static const Shortint xlPortrait = 0x1;
static const Shortint xlEditionDate = 0x2;
static const Shortint xlUpdateState = 0x1;
static const unsigned xlCommandUnderlinesAutomatic = 0xffffeff7;
static const unsigned xlCommandUnderlinesOff = 0xffffefce;
static const Shortint xlCommandUnderlinesOn = 0x1;
static const Shortint xlVerbOpen = 0x2;
static const Shortint xlVerbPrimary = 0x1;
static const unsigned xlCalculationAutomatic = 0xffffeff7;
static const unsigned xlCalculationManual = 0xffffefd9;
static const Shortint xlCalculationSemiautomatic = 0x2;
static const Shortint xlReadOnly = 0x3;
static const Shortint xlReadWrite = 0x2;
static const Shortint xlPublisher = 0x1;
static const Shortint xlSubscriber = 0x2;
static const Shortint xlFitToPage = 0x2;
static const Shortint xlFullPage = 0x3;
static const Shortint xlScreenSize = 0x1;
static const Shortint xlPart = 0x2;
static const Shortint xlWhole = 0x1;
static const Shortint xlMAPI = 0x1;
static const Shortint xlNoMailSystem = 0x0;
static const Shortint xlPowerTalk = 0x2;
static const Shortint xlLinkInfoOLELinks = 0x2;
static const Shortint xlLinkInfoPublishers = 0x5;
static const Shortint xlLinkInfoSubscribers = 0x6;
static const Word xlErrDiv0 = 0x7d7;
static const Word xlErrNA = 0x7fa;
static const Word xlErrName = 0x7ed;
static const Word xlErrNull = 0x7d0;
static const Word xlErrNum = 0x7f4;
static const Word xlErrRef = 0x7e7;
static const Word xlErrValue = 0x7df;
static const Shortint xlBIFF = 0x2;
static const Shortint xlPICT = 0x1;
static const Shortint xlRTF = 0x4;
static const Shortint xlVALU = 0x8;
static const Shortint xlExcelLinks = 0x1;
static const Shortint xlOLELinks = 0x2;
static const Shortint xlPublishers = 0x5;
static const Shortint xlSubscribers = 0x6;
static const Shortint xlCellTypeBlanks = 0x4;
static const Shortint xlCellTypeConstants = 0x2;
static const unsigned xlCellTypeFormulas = 0xffffefe5;
static const Shortint xlCellTypeLastCell = 0xb;
static const unsigned xlCellTypeComments = 0xffffefd0;
static const Shortint xlCellTypeVisible = 0xc;
static const unsigned xlCellTypeAllFormatConditions = 0xffffefb4;
static const unsigned xlCellTypeSameFormatConditions = 0xffffefb3;
static const unsigned xlCellTypeAllValidation = 0xffffefb2;
static const unsigned xlCellTypeSameValidation = 0xffffefb1;
static const Shortint xlArrangeStyleCascade = 0x7;
static const unsigned xlArrangeStyleHorizontal = 0xffffefe0;
static const Shortint xlArrangeStyleTiled = 0x1;
static const unsigned xlArrangeStyleVertical = 0xffffefba;
static const Shortint xlIBeam = 0x3;
static const unsigned xlDefault = 0xffffefd1;
static const Shortint xlNorthwestArrow = 0x1;
static const Shortint xlWait = 0x2;
static const Shortint xlAutomaticUpdate = 0x4;
static const Shortint xlCancel = 0x1;
static const Shortint xlChangeAttributes = 0x6;
static const Shortint xlManualUpdate = 0x5;
static const Shortint xlOpenSource = 0x3;
static const Shortint xlSelect = 0x3;
static const Shortint xlSendPublisher = 0x2;
static const Shortint xlUpdateSubscriber = 0x2;
static const Shortint xlFillCopy = 0x1;
static const Shortint xlFillDays = 0x5;
static const Shortint xlFillDefault = 0x0;
static const Shortint xlFillFormats = 0x3;
static const Shortint xlFillMonths = 0x7;
static const Shortint xlFillSeries = 0x2;
static const Shortint xlFillValues = 0x4;
static const Shortint xlFillWeekdays = 0x6;
static const Shortint xlFillYears = 0x8;
static const Shortint xlGrowthTrend = 0xa;
static const Shortint xlLinearTrend = 0x9;
static const Shortint xlAnd = 0x1;
static const Shortint xlBottom10Items = 0x4;
static const Shortint xlBottom10Percent = 0x6;
static const Shortint xlOr = 0x2;
static const Shortint xlTop10Items = 0x3;
static const Shortint xlTop10Percent = 0x5;
static const Shortint xlClipboardFormatBIFF = 0x8;
static const Shortint xlClipboardFormatBIFF2 = 0x12;
static const Shortint xlClipboardFormatBIFF3 = 0x14;
static const Shortint xlClipboardFormatBIFF4 = 0x1e;
static const Shortint xlClipboardFormatBinary = 0xf;
static const Shortint xlClipboardFormatBitmap = 0x9;
static const Shortint xlClipboardFormatCGM = 0xd;
static const Shortint xlClipboardFormatCSV = 0x5;
static const Shortint xlClipboardFormatDIF = 0x4;
static const Shortint xlClipboardFormatDspText = 0xc;
static const Shortint xlClipboardFormatEmbeddedObject = 0x15;
static const Shortint xlClipboardFormatEmbedSource = 0x16;
static const Shortint xlClipboardFormatLink = 0xb;
static const Shortint xlClipboardFormatLinkSource = 0x17;
static const Shortint xlClipboardFormatLinkSourceDesc = 0x20;
static const Shortint xlClipboardFormatMovie = 0x18;
static const Shortint xlClipboardFormatNative = 0xe;
static const Shortint xlClipboardFormatObjectDesc = 0x1f;
static const Shortint xlClipboardFormatObjectLink = 0x13;
static const Shortint xlClipboardFormatOwnerLink = 0x11;
static const Shortint xlClipboardFormatPICT = 0x2;
static const Shortint xlClipboardFormatPrintPICT = 0x3;
static const Shortint xlClipboardFormatRTF = 0x7;
static const Shortint xlClipboardFormatScreenPICT = 0x1d;
static const Shortint xlClipboardFormatStandardFont = 0x1c;
static const Shortint xlClipboardFormatStandardScale = 0x1b;
static const Shortint xlClipboardFormatSYLK = 0x6;
static const Shortint xlClipboardFormatTable = 0x10;
static const Shortint xlClipboardFormatText = 0x0;
static const Shortint xlClipboardFormatToolFace = 0x19;
static const Shortint xlClipboardFormatToolFacePICT = 0x1a;
static const Shortint xlClipboardFormatVALU = 0x1;
static const Shortint xlClipboardFormatWK1 = 0xa;
static const Shortint xlAddIn = 0x12;
static const Shortint xlCSV = 0x6;
static const Shortint xlCSVMac = 0x16;
static const Shortint xlCSVMSDOS = 0x18;
static const Shortint xlCSVWindows = 0x17;
static const Shortint xlDBF2 = 0x7;
static const Shortint xlDBF3 = 0x8;
static const Shortint xlDBF4 = 0xb;
static const Shortint xlDIF = 0x9;
static const Shortint xlExcel2 = 0x10;
static const Shortint xlExcel2FarEast = 0x1b;
static const Shortint xlExcel3 = 0x1d;
static const Shortint xlExcel4 = 0x21;
static const Shortint xlExcel5 = 0x27;
static const Shortint xlExcel7 = 0x27;
static const Shortint xlExcel9795 = 0x2b;
static const Shortint xlExcel4Workbook = 0x23;
static const Shortint xlIntlAddIn = 0x1a;
static const Shortint xlIntlMacro = 0x19;
static const unsigned xlWorkbookNormal = 0xffffefd1;
static const Shortint xlSYLK = 0x2;
static const Shortint xlTemplate = 0x11;
static const unsigned xlCurrentPlatformText = 0xffffefc2;
static const Shortint xlTextMac = 0x13;
static const Shortint xlTextMSDOS = 0x15;
static const Shortint xlTextPrinter = 0x24;
static const Shortint xlTextWindows = 0x14;
static const Shortint xlWJ2WD1 = 0xe;
static const Shortint xlWK1 = 0x5;
static const Shortint xlWK1ALL = 0x1f;
static const Shortint xlWK1FMT = 0x1e;
static const Shortint xlWK3 = 0xf;
static const Shortint xlWK4 = 0x26;
static const Shortint xlWK3FM3 = 0x20;
static const Shortint xlWKS = 0x4;
static const Shortint xlWorks2FarEast = 0x1c;
static const Shortint xlWQ1 = 0x22;
static const Shortint xlWJ3 = 0x28;
static const Shortint xlWJ3FJ3 = 0x29;
static const Shortint xl24HourClock = 0x21;
static const Shortint xl4DigitYears = 0x2b;
static const Shortint xlAlternateArraySeparator = 0x10;
static const Shortint xlColumnSeparator = 0xe;
static const Shortint xlCountryCode = 0x1;
static const Shortint xlCountrySetting = 0x2;
static const Shortint xlCurrencyBefore = 0x25;
static const Shortint xlCurrencyCode = 0x19;
static const Shortint xlCurrencyDigits = 0x1b;
static const Shortint xlCurrencyLeadingZeros = 0x28;
static const Shortint xlCurrencyMinusSign = 0x26;
static const Shortint xlCurrencyNegative = 0x1c;
static const Shortint xlCurrencySpaceBefore = 0x24;
static const Shortint xlCurrencyTrailingZeros = 0x27;
static const Shortint xlDateOrder = 0x20;
static const Shortint xlDateSeparator = 0x11;
static const Shortint xlDayCode = 0x15;
static const Shortint xlDayLeadingZero = 0x2a;
static const Shortint xlDecimalSeparator = 0x3;
static const Shortint xlGeneralFormatName = 0x1a;
static const Shortint xlHourCode = 0x16;
static const Shortint xlLeftBrace = 0xc;
static const Shortint xlLeftBracket = 0xa;
static const Shortint xlListSeparator = 0x5;
static const Shortint xlLowerCaseColumnLetter = 0x9;
static const Shortint xlLowerCaseRowLetter = 0x8;
static const Shortint xlMDY = 0x2c;
static const Shortint xlMetric = 0x23;
static const Shortint xlMinuteCode = 0x17;
static const Shortint xlMonthCode = 0x14;
static const Shortint xlMonthLeadingZero = 0x29;
static const Shortint xlMonthNameChars = 0x1e;
static const Shortint xlNoncurrencyDigits = 0x1d;
static const Shortint xlNonEnglishFunctions = 0x22;
static const Shortint xlRightBrace = 0xd;
static const Shortint xlRightBracket = 0xb;
static const Shortint xlRowSeparator = 0xf;
static const Shortint xlSecondCode = 0x18;
static const Shortint xlThousandsSeparator = 0x4;
static const Shortint xlTimeLeadingZero = 0x2d;
static const Shortint xlTimeSeparator = 0x12;
static const Shortint xlUpperCaseColumnLetter = 0x7;
static const Shortint xlUpperCaseRowLetter = 0x6;
static const Shortint xlWeekdayNameChars = 0x1f;
static const Shortint xlYearCode = 0x13;
static const Shortint xlPageBreakFull = 0x1;
static const Shortint xlPageBreakPartial = 0x2;
static const Shortint xlOverwriteCells = 0x0;
static const Shortint xlInsertDeleteCells = 0x1;
static const Shortint xlInsertEntireRows = 0x2;
static const unsigned xlNoLabels = 0xffffefd2;
static const Shortint xlRowLabels = 0x1;
static const Shortint xlColumnLabels = 0x2;
static const Shortint xlMixedLabels = 0x3;
static const Shortint xlSinceMyLastSave = 0x1;
static const Shortint xlAllChanges = 0x2;
static const Shortint xlNotYetReviewed = 0x3;
static const Shortint xlNoIndicator = 0x0;
static const unsigned xlCommentIndicatorOnly = 0xffffffff;
static const Shortint xlCommentAndIndicator = 0x1;
static const Shortint xlCellValue = 0x1;
static const Shortint xlExpression = 0x2;
static const Shortint xlBetween = 0x1;
static const Shortint xlNotBetween = 0x2;
static const Shortint xlEqual = 0x3;
static const Shortint xlNotEqual = 0x4;
static const Shortint xlGreater = 0x5;
static const Shortint xlLess = 0x6;
static const Shortint xlGreaterEqual = 0x7;
static const Shortint xlLessEqual = 0x8;
static const Shortint xlNoRestrictions = 0x0;
static const Shortint xlUnlockedCells = 0x1;
static const unsigned xlNoSelection = 0xffffefd2;
static const Shortint xlValidateInputOnly = 0x0;
static const Shortint xlValidateWholeNumber = 0x1;
static const Shortint xlValidateDecimal = 0x2;
static const Shortint xlValidateList = 0x3;
static const Shortint xlValidateDate = 0x4;
static const Shortint xlValidateTime = 0x5;
static const Shortint xlValidateTextLength = 0x6;
static const Shortint xlValidateCustom = 0x7;
static const Shortint xlIMEModeNoControl = 0x0;
static const Shortint xlIMEModeOn = 0x1;
static const Shortint xlIMEModeOff = 0x2;
static const Shortint xlIMEModeDisable = 0x3;
static const Shortint xlIMEModeHiragana = 0x4;
static const Shortint xlIMEModeKatakana = 0x5;
static const Shortint xlIMEModeKatakanaHalf = 0x6;
static const Shortint xlIMEModeAlphaFull = 0x7;
static const Shortint xlIMEModeAlpha = 0x8;
static const Shortint xlIMEModeHangulFull = 0x9;
static const Shortint xlIMEModeHangul = 0xa;
static const Shortint xlValidAlertStop = 0x1;
static const Shortint xlValidAlertWarning = 0x2;
static const Shortint xlValidAlertInformation = 0x3;
static const Shortint xlLocationAsNewSheet = 0x1;
static const Shortint xlLocationAsObject = 0x2;
static const Shortint xlLocationAutomatic = 0x3;
static const Shortint xlPaper10x14 = 0x10;
static const Shortint xlPaper11x17 = 0x11;
static const Shortint xlPaperA3 = 0x8;
static const Shortint xlPaperA4 = 0x9;
static const Shortint xlPaperA4Small = 0xa;
static const Shortint xlPaperA5 = 0xb;
static const Shortint xlPaperB4 = 0xc;
static const Shortint xlPaperB5 = 0xd;
static const Shortint xlPaperCsheet = 0x18;
static const Shortint xlPaperDsheet = 0x19;
static const Shortint xlPaperEnvelope10 = 0x14;
static const Shortint xlPaperEnvelope11 = 0x15;
static const Shortint xlPaperEnvelope12 = 0x16;
static const Shortint xlPaperEnvelope14 = 0x17;
static const Shortint xlPaperEnvelope9 = 0x13;
static const Shortint xlPaperEnvelopeB4 = 0x21;
static const Shortint xlPaperEnvelopeB5 = 0x22;
static const Shortint xlPaperEnvelopeB6 = 0x23;
static const Shortint xlPaperEnvelopeC3 = 0x1d;
static const Shortint xlPaperEnvelopeC4 = 0x1e;
static const Shortint xlPaperEnvelopeC5 = 0x1c;
static const Shortint xlPaperEnvelopeC6 = 0x1f;
static const Shortint xlPaperEnvelopeC65 = 0x20;
static const Shortint xlPaperEnvelopeDL = 0x1b;
static const Shortint xlPaperEnvelopeItaly = 0x24;
static const Shortint xlPaperEnvelopeMonarch = 0x25;
static const Shortint xlPaperEnvelopePersonal = 0x26;
static const Shortint xlPaperEsheet = 0x1a;
static const Shortint xlPaperExecutive = 0x7;
static const Shortint xlPaperFanfoldLegalGerman = 0x29;
static const Shortint xlPaperFanfoldStdGerman = 0x28;
static const Shortint xlPaperFanfoldUS = 0x27;
static const Shortint xlPaperFolio = 0xe;
static const Shortint xlPaperLedger = 0x4;
static const Shortint xlPaperLegal = 0x5;
static const Shortint xlPaperLetter = 0x1;
static const Shortint xlPaperLetterSmall = 0x2;
static const Shortint xlPaperNote = 0x12;
static const Shortint xlPaperQuarto = 0xf;
static const Shortint xlPaperStatement = 0x6;
static const Shortint xlPaperTabloid = 0x3;
static const Word xlPaperUser = 0x100;
static const Shortint xlPasteSpecialOperationAdd = 0x2;
static const Shortint xlPasteSpecialOperationDivide = 0x5;
static const Shortint xlPasteSpecialOperationMultiply = 0x4;
static const unsigned xlPasteSpecialOperationNone = 0xffffefd2;
static const Shortint xlPasteSpecialOperationSubtract = 0x3;
static const unsigned xlPasteAll = 0xffffeff8;
static const Shortint xlPasteAllExceptBorders = 0x6;
static const unsigned xlPasteFormats = 0xffffefe6;
static const unsigned xlPasteFormulas = 0xffffefe5;
static const unsigned xlPasteComments = 0xffffefd0;
static const unsigned xlPasteValues = 0xffffefbd;
static const Shortint xlKatakanaHalf = 0x0;
static const Shortint xlKatakana = 0x1;
static const Shortint xlHiragana = 0x2;
static const Shortint xlNoConversion = 0x3;
static const Shortint xlPhoneticAlignNoControl = 0x0;
static const Shortint xlPhoneticAlignLeft = 0x1;
static const Shortint xlPhoneticAlignCenter = 0x2;
static const Shortint xlPhoneticAlignDistributed = 0x3;
static const Shortint xlPrinter = 0x2;
static const Shortint xlScreen = 0x1;
static const Shortint xlColumnField = 0x2;
static const Shortint xlDataField = 0x4;
static const Shortint xlHidden = 0x0;
static const Shortint xlPageField = 0x3;
static const Shortint xlRowField = 0x1;
static const Shortint xlDifferenceFrom = 0x2;
static const Shortint xlIndex = 0x9;
static const unsigned xlNoAdditionalCalculation = 0xffffefd1;
static const Shortint xlPercentDifferenceFrom = 0x4;
static const Shortint xlPercentOf = 0x3;
static const Shortint xlPercentOfColumn = 0x7;
static const Shortint xlPercentOfRow = 0x6;
static const Shortint xlPercentOfTotal = 0x8;
static const Shortint xlRunningTotal = 0x5;
static const Shortint xlFreeFloating = 0x3;
static const Shortint xlMove = 0x2;
static const Shortint xlMoveAndSize = 0x1;
static const Shortint xlMacintosh = 0x1;
static const Shortint xlMSDOS = 0x3;
static const Shortint xlWindows = 0x2;
static const Shortint xlPrintSheetEnd = 0x1;
static const Shortint xlPrintInPlace = 0x10;
static const unsigned xlPrintNoComments = 0xffffefd2;
static const unsigned xlPriorityHigh = 0xffffefe1;
static const unsigned xlPriorityLow = 0xffffefda;
static const unsigned xlPriorityNormal = 0xffffefd1;
static const Shortint xlLabelOnly = 0x1;
static const Shortint xlDataAndLabel = 0x0;
static const Shortint xlDataOnly = 0x2;
static const Shortint xlOrigin = 0x3;
static const Shortint xlButton = 0xf;
static const Shortint xlBlanks = 0x4;
static const Shortint xlRangeAutoFormat3DEffects1 = 0xd;
static const Shortint xlRangeAutoFormat3DEffects2 = 0xe;
static const Shortint xlRangeAutoFormatAccounting1 = 0x4;
static const Shortint xlRangeAutoFormatAccounting2 = 0x5;
static const Shortint xlRangeAutoFormatAccounting3 = 0x6;
static const Shortint xlRangeAutoFormatAccounting4 = 0x11;
static const Shortint xlRangeAutoFormatClassic1 = 0x1;
static const Shortint xlRangeAutoFormatClassic2 = 0x2;
static const Shortint xlRangeAutoFormatClassic3 = 0x3;
static const Shortint xlRangeAutoFormatColor1 = 0x7;
static const Shortint xlRangeAutoFormatColor2 = 0x8;
static const Shortint xlRangeAutoFormatColor3 = 0x9;
static const Shortint xlRangeAutoFormatList1 = 0xa;
static const Shortint xlRangeAutoFormatList2 = 0xb;
static const Shortint xlRangeAutoFormatList3 = 0xc;
static const Shortint xlRangeAutoFormatLocalFormat1 = 0xf;
static const Shortint xlRangeAutoFormatLocalFormat2 = 0x10;
static const Shortint xlRangeAutoFormatLocalFormat3 = 0x13;
static const Shortint xlRangeAutoFormatLocalFormat4 = 0x14;
static const unsigned xlRangeAutoFormatNone = 0xffffefd2;
static const unsigned xlRangeAutoFormatSimple = 0xffffefc6;
static const Shortint xlAbsolute = 0x1;
static const Shortint xlAbsRowRelColumn = 0x2;
static const Shortint xlRelative = 0x4;
static const Shortint xlRelRowAbsColumn = 0x3;
static const Shortint xlAllAtOnce = 0x2;
static const Shortint xlOneAfterAnother = 0x1;
static const Shortint xlNotYetRouted = 0x0;
static const Shortint xlRoutingComplete = 0x2;
static const Shortint xlRoutingInProgress = 0x1;
static const Shortint xlAutoActivate = 0x3;
static const Shortint xlAutoClose = 0x2;
static const Shortint xlAutoDeactivate = 0x4;
static const Shortint xlAutoOpen = 0x1;
static const Shortint xlDoNotSaveChanges = 0x2;
static const Shortint xlSaveChanges = 0x1;
static const Shortint xlExclusive = 0x3;
static const Shortint xlNoChange = 0x1;
static const Shortint xlShared = 0x2;
static const Shortint xlLocalSessionChanges = 0x2;
static const Shortint xlOtherSessionChanges = 0x3;
static const Shortint xlUserResolution = 0x1;
static const Shortint xlNext = 0x1;
static const Shortint xlPrevious = 0x2;
static const Shortint xlByColumns = 0x2;
static const Shortint xlByRows = 0x1;
static const unsigned xlSheetVisible = 0xffffffff;
static const Shortint xlSheetHidden = 0x0;
static const Shortint xlSheetVeryHidden = 0x2;
static const Shortint xlPinYin = 0x1;
static const Shortint xlStroke = 0x2;
static const Shortint xlCodePage = 0x2;
static const Shortint xlSyllabary = 0x1;
static const Shortint xlAscending = 0x1;
static const Shortint xlDescending = 0x2;
static const Shortint xlSortRows = 0x2;
static const Shortint xlSortColumns = 0x1;
static const Shortint xlSortLabels = 0x2;
static const Shortint xlSortValues = 0x1;
static const Shortint xlErrors = 0x10;
static const Shortint xlLogical = 0x4;
static const Shortint xlNumbers = 0x1;
static const Shortint xlTextValues = 0x2;
static const unsigned xlSubscribeToPicture = 0xffffefcd;
static const unsigned xlSubscribeToText = 0xffffefc2;
static const Shortint xlSummaryAbove = 0x0;
static const Shortint xlSummaryBelow = 0x1;
static const unsigned xlSummaryOnLeft = 0xffffefdd;
static const unsigned xlSummaryOnRight = 0xffffefc8;
static const unsigned xlSummaryPivotTable = 0xffffefcc;
static const Shortint xlStandardSummary = 0x1;
static const Shortint xlTabPositionFirst = 0x0;
static const Shortint xlTabPositionLast = 0x1;
static const Shortint xlDelimited = 0x1;
static const Shortint xlFixedWidth = 0x2;
static const Shortint xlTextQualifierDoubleQuote = 0x1;
static const unsigned xlTextQualifierNone = 0xffffefd2;
static const Shortint xlTextQualifierSingleQuote = 0x2;
static const unsigned xlWBATChart = 0xffffeff3;
static const Shortint xlWBATExcel4IntlMacroSheet = 0x4;
static const Shortint xlWBATExcel4MacroSheet = 0x3;
static const unsigned xlWBATWorksheet = 0xffffefb9;
static const Shortint xlNormalView = 0x1;
static const Shortint xlPageBreakPreview = 0x2;
static const Shortint xlCommand = 0x2;
static const Shortint xlFunction = 0x1;
static const Shortint xlNotXLM = 0x3;
static const Shortint xlGuess = 0x0;
static const Shortint xlNo = 0x2;
static const Shortint xlYes = 0x1;
static const unsigned XlDisplayShapes_ = 0xffffeff8;
static const Shortint xlHide = 0x3;
static const Shortint xlPlaceholders = 0x2;
static const Shortint xlInsideHorizontal = 0xc;
static const Shortint xlInsideVertical = 0xb;
static const Shortint xlDiagonalDown = 0x5;
static const Shortint xlDiagonalUp = 0x6;
static const Shortint xlEdgeBottom = 0x9;
static const Shortint xlEdgeLeft = 0x7;
static const Shortint xlEdgeRight = 0xa;
static const Shortint xlEdgeTop = 0x8;
static const Shortint xlNoButtonChanges = 0x1;
static const Shortint xlNoChanges = 0x4;
static const Shortint xlNoDockingChanges = 0x3;
static const unsigned xlToolbarProtectionNone = 0xffffefd1;
static const Shortint xlNoShapeChanges = 0x2;
static const Shortint xlDialogOpen = 0x1;
static const Shortint xlDialogOpenLinks = 0x2;
static const Shortint xlDialogSaveAs = 0x5;
static const Shortint xlDialogFileDelete = 0x6;
static const Shortint xlDialogPageSetup = 0x7;
static const Shortint xlDialogPrint = 0x8;
static const Shortint xlDialogPrinterSetup = 0x9;
static const Shortint xlDialogArrangeAll = 0xc;
static const Shortint xlDialogWindowSize = 0xd;
static const Shortint xlDialogWindowMove = 0xe;
static const Shortint xlDialogRun = 0x11;
static const Shortint xlDialogSetPrintTitles = 0x17;
static const Shortint xlDialogFont = 0x1a;
static const Shortint xlDialogDisplay = 0x1b;
static const Shortint xlDialogProtectDocument = 0x1c;
static const Shortint xlDialogCalculation = 0x20;
static const Shortint xlDialogExtract = 0x23;
static const Shortint xlDialogDataDelete = 0x24;
static const Shortint xlDialogSort = 0x27;
static const Shortint xlDialogDataSeries = 0x28;
static const Shortint xlDialogTable = 0x29;
static const Shortint xlDialogFormatNumber = 0x2a;
static const Shortint xlDialogAlignment = 0x2b;
static const Shortint xlDialogStyle = 0x2c;
static const Shortint xlDialogBorder = 0x2d;
static const Shortint xlDialogCellProtection = 0x2e;
static const Shortint xlDialogColumnWidth = 0x2f;
static const Shortint xlDialogClear = 0x34;
static const Shortint xlDialogPasteSpecial = 0x35;
static const Shortint xlDialogEditDelete = 0x36;
static const Shortint xlDialogInsert = 0x37;
static const Shortint xlDialogPasteNames = 0x3a;
static const Shortint xlDialogDefineName = 0x3d;
static const Shortint xlDialogCreateNames = 0x3e;
static const Shortint xlDialogFormulaGoto = 0x3f;
static const Shortint xlDialogFormulaFind = 0x40;
static const Shortint xlDialogGalleryArea = 0x43;
static const Shortint xlDialogGalleryBar = 0x44;
static const Shortint xlDialogGalleryColumn = 0x45;
static const Shortint xlDialogGalleryLine = 0x46;
static const Shortint xlDialogGalleryPie = 0x47;
static const Shortint xlDialogGalleryScatter = 0x48;
static const Shortint xlDialogCombination = 0x49;
static const Shortint xlDialogGridlines = 0x4c;
static const Shortint xlDialogAxes = 0x4e;
static const Shortint xlDialogAttachText = 0x50;
static const Shortint xlDialogPatterns = 0x54;
static const Shortint xlDialogMainChart = 0x55;
static const Shortint xlDialogOverlay = 0x56;
static const Shortint xlDialogScale = 0x57;
static const Shortint xlDialogFormatLegend = 0x58;
static const Shortint xlDialogFormatText = 0x59;
static const Shortint xlDialogParse = 0x5b;
static const Shortint xlDialogUnhide = 0x5e;
static const Shortint xlDialogWorkspace = 0x5f;
static const Shortint xlDialogActivate = 0x67;
static const Shortint xlDialogCopyPicture = 0x6c;
static const Shortint xlDialogDeleteName = 0x6e;
static const Shortint xlDialogDeleteFormat = 0x6f;
static const Shortint xlDialogNew = 0x77;
static const Shortint xlDialogRowHeight = 0x7f;
static const Byte xlDialogFormatMove = 0x80;
static const Byte xlDialogFormatSize = 0x81;
static const Byte xlDialogFormulaReplace = 0x82;
static const Byte xlDialogSelectSpecial = 0x84;
static const Byte xlDialogApplyNames = 0x85;
static const Byte xlDialogReplaceFont = 0x86;
static const Byte xlDialogSplit = 0x89;
static const Byte xlDialogOutline = 0x8e;
static const Byte xlDialogSaveWorkbook = 0x91;
static const Byte xlDialogCopyChart = 0x93;
static const Byte xlDialogFormatFont = 0x96;
static const Byte xlDialogNote = 0x9a;
static const Byte xlDialogSetUpdateStatus = 0x9f;
static const Byte xlDialogColorPalette = 0xa1;
static const Byte xlDialogChangeLink = 0xa6;
static const Byte xlDialogAppMove = 0xaa;
static const Byte xlDialogAppSize = 0xab;
static const Byte xlDialogMainChartType = 0xb9;
static const Byte xlDialogOverlayChartType = 0xba;
static const Byte xlDialogOpenMail = 0xbc;
static const Byte xlDialogSendMail = 0xbd;
static const Byte xlDialogStandardFont = 0xbe;
static const Byte xlDialogConsolidate = 0xbf;
static const Byte xlDialogSortSpecial = 0xc0;
static const Byte xlDialogGallery3dArea = 0xc1;
static const Byte xlDialogGallery3dColumn = 0xc2;
static const Byte xlDialogGallery3dLine = 0xc3;
static const Byte xlDialogGallery3dPie = 0xc4;
static const Byte xlDialogView3d = 0xc5;
static const Byte xlDialogGoalSeek = 0xc6;
static const Byte xlDialogWorkgroup = 0xc7;
static const Byte xlDialogFillGroup = 0xc8;
static const Byte xlDialogUpdateLink = 0xc9;
static const Byte xlDialogPromote = 0xca;
static const Byte xlDialogDemote = 0xcb;
static const Byte xlDialogShowDetail = 0xcc;
static const Byte xlDialogObjectProperties = 0xcf;
static const Byte xlDialogSaveNewObject = 0xd0;
static const Byte xlDialogApplyStyle = 0xd4;
static const Byte xlDialogAssignToObject = 0xd5;
static const Byte xlDialogObjectProtection = 0xd6;
static const Byte xlDialogCreatePublisher = 0xd9;
static const Byte xlDialogSubscribeTo = 0xda;
static const Byte xlDialogShowToolbar = 0xdc;
static const Byte xlDialogPrintPreview = 0xde;
static const Byte xlDialogEditColor = 0xdf;
static const Byte xlDialogFormatMain = 0xe1;
static const Byte xlDialogFormatOverlay = 0xe2;
static const Byte xlDialogEditSeries = 0xe4;
static const Byte xlDialogDefineStyle = 0xe5;
static const Byte xlDialogGalleryRadar = 0xf9;
static const Byte xlDialogEditionOptions = 0xfb;
static const Word xlDialogZoom = 0x100;
static const Word xlDialogInsertObject = 0x103;
static const Word xlDialogSize = 0x105;
static const Word xlDialogMove = 0x106;
static const Word xlDialogFormatAuto = 0x10d;
static const Word xlDialogGallery3dBar = 0x110;
static const Word xlDialogGallery3dSurface = 0x111;
static const Word xlDialogCustomizeToolbar = 0x114;
static const Word xlDialogWorkbookAdd = 0x119;
static const Word xlDialogWorkbookMove = 0x11a;
static const Word xlDialogWorkbookCopy = 0x11b;
static const Word xlDialogWorkbookOptions = 0x11c;
static const Word xlDialogSaveWorkspace = 0x11d;
static const Word xlDialogChartWizard = 0x120;
static const Word xlDialogAssignToTool = 0x125;
static const Word xlDialogPlacement = 0x12c;
static const Word xlDialogFillWorkgroup = 0x12d;
static const Word xlDialogWorkbookNew = 0x12e;
static const Word xlDialogScenarioCells = 0x131;
static const Word xlDialogScenarioAdd = 0x133;
static const Word xlDialogScenarioEdit = 0x134;
static const Word xlDialogScenarioSummary = 0x137;
static const Word xlDialogPivotTableWizard = 0x138;
static const Word xlDialogPivotFieldProperties = 0x139;
static const Word xlDialogOptionsCalculation = 0x13e;
static const Word xlDialogOptionsEdit = 0x13f;
static const Word xlDialogOptionsView = 0x140;
static const Word xlDialogAddinManager = 0x141;
static const Word xlDialogMenuEditor = 0x142;
static const Word xlDialogAttachToolbars = 0x143;
static const Word xlDialogOptionsChart = 0x145;
static const Word xlDialogVbaInsertFile = 0x148;
static const Word xlDialogVbaProcedureDefinition = 0x14a;
static const Word xlDialogRoutingSlip = 0x150;
static const Word xlDialogMailLogon = 0x153;
static const Word xlDialogInsertPicture = 0x156;
static const Word xlDialogGalleryDoughnut = 0x158;
static const Word xlDialogChartTrend = 0x15e;
static const Word xlDialogWorkbookInsert = 0x162;
static const Word xlDialogOptionsTransition = 0x163;
static const Word xlDialogOptionsGeneral = 0x164;
static const Word xlDialogFilterAdvanced = 0x172;
static const Word xlDialogMailNextLetter = 0x17a;
static const Word xlDialogDataLabel = 0x17b;
static const Word xlDialogInsertTitle = 0x17c;
static const Word xlDialogFontProperties = 0x17d;
static const Word xlDialogMacroOptions = 0x17e;
static const Word xlDialogWorkbookUnhide = 0x180;
static const Word xlDialogWorkbookName = 0x182;
static const Word xlDialogGalleryCustom = 0x184;
static const Word xlDialogAddChartAutoformat = 0x186;
static const Word xlDialogChartAddData = 0x188;
static const Word xlDialogTabOrder = 0x18a;
static const Word xlDialogSubtotalCreate = 0x18e;
static const Word xlDialogWorkbookTabSplit = 0x19f;
static const Word xlDialogWorkbookProtect = 0x1a1;
static const Word xlDialogScrollbarProperties = 0x1a4;
static const Word xlDialogPivotShowPages = 0x1a5;
static const Word xlDialogTextToColumns = 0x1a6;
static const Word xlDialogFormatCharttype = 0x1a7;
static const Word xlDialogPivotFieldGroup = 0x1b1;
static const Word xlDialogPivotFieldUngroup = 0x1b2;
static const Word xlDialogCheckboxProperties = 0x1b3;
static const Word xlDialogLabelProperties = 0x1b4;
static const Word xlDialogListboxProperties = 0x1b5;
static const Word xlDialogEditboxProperties = 0x1b6;
static const Word xlDialogOpenText = 0x1b9;
static const Word xlDialogPushbuttonProperties = 0x1bd;
static const Word xlDialogFilter = 0x1bf;
static const Word xlDialogFunctionWizard = 0x1c2;
static const Word xlDialogSaveCopyAs = 0x1c8;
static const Word xlDialogOptionsListsAdd = 0x1ca;
static const Word xlDialogSeriesAxes = 0x1cc;
static const Word xlDialogSeriesX = 0x1cd;
static const Word xlDialogSeriesY = 0x1ce;
static const Word xlDialogErrorbarX = 0x1cf;
static const Word xlDialogErrorbarY = 0x1d0;
static const Word xlDialogFormatChart = 0x1d1;
static const Word xlDialogSeriesOrder = 0x1d2;
static const Word xlDialogMailEditMailer = 0x1d6;
static const Word xlDialogStandardWidth = 0x1d8;
static const Word xlDialogScenarioMerge = 0x1d9;
static const Word xlDialogProperties = 0x1da;
static const Word xlDialogSummaryInfo = 0x1da;
static const Word xlDialogFindFile = 0x1db;
static const Word xlDialogActiveCellFont = 0x1dc;
static const Word xlDialogVbaMakeAddin = 0x1de;
static const Word xlDialogFileSharing = 0x1e1;
static const Word xlDialogAutoCorrect = 0x1e5;
static const Word xlDialogCustomViews = 0x1ed;
static const Word xlDialogInsertNameLabel = 0x1f0;
static const Word xlDialogSeriesShape = 0x1f8;
static const Word xlDialogChartOptionsDataLabels = 0x1f9;
static const Word xlDialogChartOptionsDataTable = 0x1fa;
static const Word xlDialogSetBackgroundPicture = 0x1fd;
static const Word xlDialogDataValidation = 0x20d;
static const Word xlDialogChartType = 0x20e;
static const Word xlDialogChartLocation = 0x20f;
static const Word xlDialogPhonetic = 0x21a;
static const Word xlDialogChartSourceData = 0x21d;
static const Word xlDialogSeriesOptions = 0x22d;
static const Word xlDialogPivotTableOptions = 0x237;
static const Word xlDialogPivotSolveOrder = 0x238;
static const Word xlDialogPivotCalculatedField = 0x23a;
static const Word xlDialogPivotCalculatedItem = 0x23c;
static const Word xlDialogConditionalFormatting = 0x247;
static const Word xlDialogInsertHyperlink = 0x254;
static const Word xlDialogProtectSharing = 0x26c;
static const Shortint xlPrompt = 0x0;
static const Shortint xlConstant = 0x1;
static const Shortint xlRange = 0x2;
static const Shortint xlParamTypeUnknown = 0x0;
static const Shortint xlParamTypeChar = 0x1;
static const Shortint xlParamTypeNumeric = 0x2;
static const Shortint xlParamTypeDecimal = 0x3;
static const Shortint xlParamTypeInteger = 0x4;
static const Shortint xlParamTypeSmallInt = 0x5;
static const Shortint xlParamTypeFloat = 0x6;
static const Shortint xlParamTypeReal = 0x7;
static const Shortint xlParamTypeDouble = 0x8;
static const Shortint xlParamTypeVarChar = 0xc;
static const Shortint xlParamTypeDate = 0x9;
static const Shortint xlParamTypeTime = 0xa;
static const Shortint xlParamTypeTimestamp = 0xb;
static const unsigned xlParamTypeLongVarChar = 0xffffffff;
static const unsigned xlParamTypeBinary = 0xfffffffe;
static const unsigned xlParamTypeVarBinary = 0xfffffffd;
static const unsigned xlParamTypeLongVarBinary = 0xfffffffc;
static const unsigned xlParamTypeBigInt = 0xfffffffb;
static const unsigned xlParamTypeTinyInt = 0xfffffffa;
static const unsigned xlParamTypeBit = 0xfffffff9;
static const Shortint xlButtonControl = 0x0;
static const Shortint xlCheckBox = 0x1;
static const Shortint xlDropDown = 0x2;
static const Shortint xlEditBox = 0x3;
static const Shortint xlGroupBox = 0x4;
static const Shortint xlLabel = 0x5;
static const Shortint xlListBox = 0x6;
static const Shortint xlOptionButton = 0x7;
static const Shortint xlScrollBar = 0x8;
static const Shortint xlSpinner = 0x9;

}	/* namespace Opxl97 */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opxl97;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpXL97
