�
 TACRICHTEXTEDITOR 0o7  TPF0TacRichTextEditoracRichTextEditorLeft� Top� BorderIconsbiSystemMenu
biMaximize 
AutoScrollCaptionRichText EditorClientHeight� ClientWidthD
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 	Icon.Data
�             �     (       @         �                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ���                  ��             �ww             � w           ����          ������         � ����        �� ���         x�� ���         wp����         ������           ��� ����         �������        ���������      ����� ���     ��    ����      ��������     ����������     ���     ���   ��� ����p�� �������p��� �������p�p   ��������     ���������     ������p��     ������p��      �������        ����p��        ����            ��             ��                        ������������  ��  �  �  �� ��  �  �   ��  ��  ��  ��  �  �   �   �   �   �  	�  �  �  �  ?�  �  �� ������?�����Position	poDefault
OnKeyPressTagEditorKeyPressOnResize
FormResizeOnShowFormShowPixelsPerInch`
TextHeight TPanelPanelLeft TopWidthDHeight� AlignalTopTabOrder  	TRichEdit	TagEditorLeftTopWidthBHeightvHint�|This edit field provides space to edit the tags for the rich text in plain mode.

To edit the rich text in WYSIWYG mode � switch to the Tag Editor.AlignalClient
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 
ParentFont	PlainText		PopupMenuTagPopupMenu
ScrollBars
ssVerticalTabOrder Visible
OnKeyPressTagEditorKeyPressOnSelectionChangeTagEditorSelectionChange  TTabSetTabSetLeftTopwWidthBHeightHint  |Switches mode of the rich text editor for current control selected in Object Inspector.

Click [B]Rich Editor[] tab to edit the context-sensitive help in WYSIWYG mode or switch to [B]Tag Editor[] to edit the context-sensitive help as plain tagged text.
On switching the editor mode - all tags and formatting will be remained intact and will represent same text that you've typed.AlignalBottom
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style Tabs.StringsRich Editor
Tag Editor TabIndex OnChangeTabSetChange  	TRichEdit
RichEditorLeftTopWidthBHeightvHint�|This edit field provides space to edit the rich text in WYSIWYG mode.

To edit the tags for the rich text manually � switch to the Tag Editor.AlignalClient
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 
ParentFont	PopupMenuRichPopupMenu
ScrollBars
ssVerticalTabOrder
OnKeyPressTagEditorKeyPressOnSelectionChangeRichEditorSelectionChange   TButtonOkBtnLeft� Top� WidthPHeightHint;|Closes the dialog box and saves any changes you have made.CaptionOKDefault	ModalResultTabOrderOnClick
OkBtnClick  TButton	CancelBtnLeft� Top� WidthPHeightHint@|Closes the dialog box without saving any changes you have made.Cancel	CaptionCancelModalResultTabOrderOnClick
OkBtnClick  TMemotmpMemoLeftTop� Width3HeightTabStopTabOrderVisible  TPanelToolbarLeft Top WidthDHeightAlignalTop
BevelOuterbvNoneParentShowHintShowHint	TabOrder TPanelPanel4Left Top Width� HeightAlignalLeft
BevelOuterbvNoneTabOrder  TSpeedButton	StrikeBtnLeftFTopWidthHeightHint�Strike out|[BS]Strike out
[]Applies the striked out text character style to the selected text. If the selection is already striked, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwp� �wwwwpxwwwwp�w wwwwpwx wwwwwx�wwwp     wwwx �wwwwwpwpwwwwpw�wwwwxx wwwww��wwwwwwwwwwwwwwwwwwOnClickStrikeBtnClick  TSpeedButtonUnderlineBtnLeft/TopWidthHeightHint�Underline|[BU]Underline
[]Applies the underline text character style to the selected text. If the selection is already underlined, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwp    wwwwwwwwwwwwp  wwwww ��wwww wpwwww wpwwww wpwwww wpwwww wpwwww wpwwwp   wwwwwwwwwwwwwwwwwwOnClickUnderlineBtnClick  TSpeedButton	ItalicBtnLeftTopWidthHeightHint�Italic|[BI]Italic
[]Makes selected text and numbers italic. If the selection is already italic, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwp  wwwwwpwwwwwwx wwwwwww �wwwwww�wwwwwwpwwwwwwx wwwwwww �wwwwwp  wwwwwwwwwwwwwwwwwwwwwwwwwwOnClickItalicBtnClick  TSpeedButtonBoldBtnLeftTopWidthHeightHint�Bold|[B]Bold
[]Makes selected text and numbers bold.  If the selection is already bold, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwp   wwww p wwww p wwww p wwww   wwww p wwww p wwww p wwwp   wwwwwwwwwwwwwwwwwwwwwwwwwwOnClickBoldBtnClick  TSpeedButtonSpeedButton1LeftbTopWidthHeightHint�|[B]Hyperlink
[]Insert a [U][GREEN]hyperlink[DEF]. This may be a URL-link to the Web page, link to file, or to another topic in real help-file.

Links can be one of two types:
 1. [a href=]link[/a]
 2. [a topic=]link[/a]
Glyph.Data
�   �   BM�       v   (               �   �  �                �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� 330   333����30p    p30��30��30p    p3����0��   3���",H33���"&�33��"",�33�r"$d 33�wt"� 33��|��(338��""333�gw 33338���333  	TComboBoxColorComboBoxLeft~TopWidthOHeightHint�Select color|[B]Font Color
[]Formats selected text with the color you click. You can choose from a set of standard colors that match the theme.TabStopStylecsOwnerDrawFixed
ItemHeightItems.StringsBlackMaroonGreenOliveNavyPurpleTealGraySilverRedLimeYellowBlueFuchsiaAquaWhite TabOrder OnChangeColorComboBoxChange
OnDrawItemColorComboBoxDrawItem   TPanel	RichPanelLeft� Top Width`HeightAlignalLeft
BevelOuterbvNoneTabOrder TSpeedButtonRichUndoBtnLeftTopWidthHeightHintNUndo|[B]Undo
[]Reverses the last command or deletes the last entry you typed.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxGww��ww�wwDDGwwHww���ww��wDDwwwtww��wwwx�wDGwwwtww���wwx�wDtwwwtww�x�wxwwGwHwwHww�w���wwwwxDD�wwwww��wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichUndoBtnClick  TSpeedButton
RichCutBtnLeftTopWidthHeightHint�Cut|[B]Cut
[]Removes selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents. If you paste cutted text into the rich text editor, only plain text will be pasted.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwww�wwwwwwDwwwwwww�w�wwwtwGtGwwwx��x��wwtwGGtwwwx���x�wwtwGGtwwwx��x�wwwDGGtwwww����wwwwwGDGwwwww���wwwww@Gwwwwww��wwwwwwpwwwwwwwx�wwwwww wwwwww��wwwwwwwwwwww���wwwwp wwwwwx���wwwwpwpwwwwwx�x�wwwwpwpwwwwwx�x�wwwwpwpwwwwwxwxwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichCutItemClick  TSpeedButtonRichCopyBtnLeft0TopWidthHeightHinte  Copy|[B]Copy
[]Copies selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents. If you paste cutted text into the rich text editor, only plain text will pasted.

If you would like to copy the rich text to paste it to another control - switch to [B]Tag Editor[] mode to remain tags and formatting untouched.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwww����wwwDDDDGwww�����wwwO���Gwww����wwwO  G�������   O���G���������O  G�������  O���G���������O �DG����x��  O���w����wx�w��O��Gw������w �DDDww��x���ww���wwww�wx�wwww��wwww����wwww   wwwww���wwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichCopyItemClick  TSpeedButtonRichPasteBtnLeftGTopWidthHeightHint  Paste|[B]Paste
[]Inserts the contents of the Clipboard at the insertion point. If there are currently selected text, they are overwritten. When you paste text, some of its character attributes may be overridden. Please note that only plain text could be pasted to the rich text editor.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� """""""""""/����"""DDDDD"�������   O����(������88ODDD􈈈����x��O���􈈈���88ODODD����������O��OB����ww��88O��D"����������DDD@"��������888880"���������   �"���������www0"��������� ���"�������"   �  "(������"""  """""(��"""""""""""""""""""	NumGlyphsOnClickRichPasteItemClick   TPanelTagPanelLeft1Top WidthdHeightAlignalLeft
BevelOuterbvNoneTabOrderVisible TSpeedButtonTagPasteBtnLeftGTopWidthHeightHint  Paste|[B]Paste
[]Inserts the contents of the Clipboard at the insertion point. If there are currently selected text, they are overwritten. When you paste text, some of its character attributes may be overridden. Please note that only plain text could be pasted to rich text editor.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� """""""""""/����"""DDDDD"�������   O����(������88ODDD􈈈����x��O���􈈈���88ODODD����������O��OB����ww��88O��D"����������DDD@"��������888880"���������   �"���������www0"��������� ���"�������"   �  "(������"""  """""(��"""""""""""""""""""	NumGlyphsOnClickTagPasteItemClick  TSpeedButton
TagCopyBtnLeft0TopWidthHeightHint�Copy|[B]Copy
[]Copies selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwww����wwwDDDDGwww�����wwwO���Gwww����wwwO  G�������   O���G���������O  G�������  O���G���������O �DG����x��  O���w����wx�w��O��Gw������w �DDDww��x���ww���wwww�wx�wwww��wwww����wwww   wwwww���wwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickTagCopyItemClick  TSpeedButton	TagCutBtnLeftTopWidthHeightHintCut|[B]Cut
[]Removes selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwww�wwwwwwDwwwwwww�w�wwwtwGtGwwwx��x��wwtwGGtwwwx���x�wwtwGGtwwwx��x�wwwDGGtwwww����wwwwwGDGwwwww���wwwww@Gwwwwww��wwwwwwpwwwwwwwx�wwwwww wwwwww��wwwwwwwwwwww���wwwwp wwwwwx���wwwwpwpwwwwwx�x�wwwwpwpwwwwwx�x�wwwwpwpwwwwwxwxwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickTagCutItemClick  TSpeedButton
TagUndoBtnLeftTopWidthHeightHintNUndo|[B]Undo
[]Reverses the last command or deletes the last entry you typed.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxGww��ww�wwDDGwwHww���ww��wDDwwwtww��wwwx�wDGwwwtww���wwx�wDtwwwtww�x�wxwwGwHwwHww�w���wwwwxDD�wwwww��wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickTagUndoBtnClick    
TPopupMenuRichPopupMenuLeft� Top> 	TMenuItemRichCutItemCaptionCu&tEnabledShortCut OnClickRichCutItemClick  	TMenuItemRichCopyItemCaption&CopyEnabledShortCut OnClickRichCopyItemClick  	TMenuItemRichPasteItemCaption&PasteEnabledShortCut OnClickRichPasteItemClick  	TMenuItemRichDeleteItemCaption&DeleteEnabledShortCut OnClickRichDeleteItemClick  	TMenuItemN1Caption-ShortCut   	TMenuItemRichSelectAllItemCaptionSelect &AllShortCut OnClickRichSelectAllItemClick   TTimerTimerInterval2OnTimer
TimerTimerLeftTop>  TacFormHelp
acFormHelpCaptionButton.BtnOrder CaptionButton.CursorDowncrHelpCaptionButton.HintHelpCaptionButton.Visible	SystemMenu.ApplyToMenuSystemMenu.CaptionWhat's This?SystemMenu.PositionSystemMenu.SeparatorsseBefore DelayInterval Cursor	crDefault
CursorHelpcrHelp
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 
ParentFont	
PopupWidth"WhatsThis.Caption&What's This?Left� Top>  TacFormSizeRestrictionsacFormSizeRestrictionsEnabled	MaxWidth 	MaxHeight MinWidth	MinHeight� Left� Top>  
TPopupMenuTagPopupMenuLeftTopZ 	TMenuItem
TagCutItemCaptionCu&tEnabledShortCut OnClickTagCutItemClick  	TMenuItemTagCopyItemCaption&CopyEnabledShortCut OnClickTagCopyItemClick  	TMenuItemTagPasteItemCaption&PasteEnabledShortCut OnClickTagPasteItemClick  	TMenuItemTagDeleteItemCaption&DeleteEnabledShortCut OnClickTagDeleteItemClick  	TMenuItem	MenuItem6Caption-ShortCut   	TMenuItemTagSelectAllCaptionSelect &AllShortCut OnClickTagSelectAllClick   TacFormPlacementSaveracFormPlacementSaverRegLocationrlCurrentUserRegKey8\Software\UtilMind Solutions\App Controls\RichTextEditorOptionssaveOnClose Left� TopZ  TacFormResizeGripacFormResizeGripLeft� TopZ   