�
 TACFSTORAGEEDITOR 0�  TPF0TacFStorageEditoracFStorageEditorLeftTop� BorderIconsbiSystemMenubiHelp BorderStylebsDialogCaptionTacFileStorage.FilesClientHeight� ClientWidth
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style PositionpoScreenCenterOnClose	FormCloseOnShowFormShowPixelsPerInch`
TextHeight 	TGroupBox	GroupBox1Left Top WidthHeight� AlignalTopCaption Stored Files TabOrder  TButtonAddBtnLeft� TopWidthCHeightHintE|Uploads new file onto form and add it to the FileStorage.Files list.Caption&Add file(s)...TabOrder OnClickAddBtnClick  TButton	DeleteBtnLeft� Top(WidthCHeightHint7|Deletes selected file from the FileStorage.Files list.Caption&Delete file(s)EnabledTabOrderOnClickDeleteBtnClick  TButtonClearBtnLeft� Top@WidthCHeightHint?|Click to clear all uploaded files from FileStorage.Files list.Caption&Clear listEnabledTabOrderOnClickClearBtnClick  TButton
ExtractBtnLeft� Top� WidthCHeightHintN|Extracts selected file from the FileStorage.Files list to specified location.Caption&Extract...EnabledTabOrderOnClickExtractBtnClick  TacListViewListViewLeftTopWidth� Height� Hint�|This is the list of files which currently uploaded onto your form. Please check out manual for more information and for examples how to access files at run-time.

To upload or remove files from list - use buttons on right side of this dialog.AlignalLeftHideSelectionMultiSelect		PopupMenu	PopupMenuTabOrderOnChangeListViewChangeOnEditedListViewEditedRegistrySaver.Enabled	RegistrySaver.RegKey1\Software\UtilMind Solutions\FileStorage\ListView	GridLinesHotTrack	RowSelectFlatScrollBars	HoverTime�ColumnsCaption	File nameWidth�  CaptionSizeWidthF  SmallImages	ImageList   TButtonCloseBtnLeft� Top� WidthYHeightHint�|Closes the FileStorage designer. All files uploaded onto form will be stored in Files property and could be extracted or auto-extracted at run-time.Cancel	CaptionClose
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style ModalResult
ParentFontTabOrderOnClickCloseBtnClick  TOpenDialog
OpenDialogFileEditStylefsEditFilterAny File (*.*)|*.*OptionsofHideReadOnlyofAllowMultiSelectofPathMustExistofFileMustExist Title&Please point file to upload in StorageLeftTopd  
TPopupMenu	PopupMenuLeft@Topd 	TMenuItem
UploadItemCaption&Upload file(s)...EnabledShortCutU@  	TMenuItem
DeleteItemCaption&Delete file(s)EnabledShortCutD@  	TMenuItemN1Caption-ShortCut   	TMenuItemExtractItemCaptionE&xtract...EnabledShortCutX@  	TMenuItemN2Caption-ShortCut   	TMenuItem
SelectAll1CaptionSelect &AllShortCutA@OnClickSelectAll1Click   TSaveDialog
SaveDialogFileEditStylefsEditFilterAny File (*.*)|*.*Title,Please point location to Extract Stored FileLeft$Topd  TacFormHelp
acFormHelpCaptionButton.BtnOrder CaptionButton.CursorDowncrHelpCaptionButton.HintHelpCaptionButton.VisibleSystemMenu.ApplyToMenu	SystemMenu.CaptionWhat's This?SystemMenu.PositionSystemMenu.SeparatorsseBefore DelayInterval Cursor	crDefault
CursorHelpcrHelp
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 
ParentFont	WhatsThis.Caption&What's This?LeftTopH  TacExtAssociationacExtAssociation
AccessMode
amReadOnly	IconIndex Left@TopH  
TImageList	ImageListLeft$TopH   