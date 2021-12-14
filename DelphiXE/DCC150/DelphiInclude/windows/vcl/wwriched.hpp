// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwriched.pas' rev: 22.00

#ifndef WwrichedHPP
#define WwrichedHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Printers.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwTrackIcon.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwrichole.hpp>	// Pascal unit
#include <OleCtnrs.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <ShellAPI.hpp>	// Pascal unit
#include <OleDlg.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <OleConst.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <FileCtrl.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwriched
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwRichEditWidth { rewWindowSize, rewPrinterSize };
#pragma option pop

typedef void __fastcall (__closure *TwwOnRichEditDlgEvent)(Forms::TForm* Form);

class DELPHICLASS TwwCustomRichEdit;
typedef void __fastcall (__closure *TwwURLOpenEvent)(TwwCustomRichEdit* Sender, System::UnicodeString URLLink, bool &UseDefault);

#pragma option push -b-
enum TwwMeasurementUnits { muInches, muCentimeters };
#pragma option pop

#pragma option push -b-
enum TwwRichEditParaOption { rpoAlignment, rpoBullet, rpoLeftIndent, rpoRightIndent, rpoFirstLineIndent, rpoTabs, rpoSpaceBefore, rpoSpaceAfter, rpoLineSpacing };
#pragma option pop

#pragma option push -b-
enum TwwRichEditOleOption { reoAdjustPopupMenu, reoDisableOLE };
#pragma option pop

typedef System::Set<TwwRichEditOleOption, TwwRichEditOleOption::reoAdjustPopupMenu, TwwRichEditOleOption::reoDisableOLE>  TwwRichEditOleOptions;

#pragma option push -b-
enum TwwRichEditCopyMethod { recmByMemory, recmByTempFile };
#pragma option pop

#pragma option push -b-
enum TwwRichEditNumberingStyle { renRightParens, renEncloseParens = 256, renPeriodAfter = 512, renOnlyNumber = 768, renContinueNumber = 1024, renNewNumber = 32768 };
#pragma option pop

#pragma option push -b-
enum TwwRichEditNumberingLetter { renNone, renBullet, renArabic, renLowercaseLetter, renUppercaseLetter, renLowercaseRoman, renUppercaseRoman, renCharacterSequence };
#pragma option pop

typedef System::Set<TwwRichEditParaOption, TwwRichEditParaOption::rpoAlignment, TwwRichEditParaOption::rpoLineSpacing>  TwwRichEditParaOptions;

#pragma option push -b-
enum TwwRichEditPopupOption { rpoPopupEdit, rpoPopupCut, rpoPopupCopy, rpoPopupPaste, rpoPopupBold, rpoPopupItalic, rpoPopupUnderline, rpoPopupFont, rpoPopupBullet, rpoPopupParagraph, rpoPopupTabs, rpoPopupFind, rpoPopupReplace, rpoPopupInsertObject, rpoPopupMSWordSpellCheck };
#pragma option pop

typedef System::Set<TwwRichEditPopupOption, TwwRichEditPopupOption::rpoPopupEdit, TwwRichEditPopupOption::rpoPopupMSWordSpellCheck>  TwwRichEditPopupOptions;

#pragma option push -b-
enum TwwRichEditOption { reoShowLoad, reoShowSaveAs, reoShowSaveExit, reoShowPrint, reoShowPrintPreview, reoShowPageSetup, reoShowFormatBar, reoShowToolBar, reoShowStatusBar, reoShowHints, reoShowRuler, reoShowInsertObject, reoCloseOnEscape, reoFlatButtons, reoShowSpellCheck, reoShowMainMenuIcons, reoShowJustifyButton, reoUseBackColor, reoNoConfirmation };
#pragma option pop

typedef System::Set<TwwRichEditOption, TwwRichEditOption::reoShowLoad, TwwRichEditOption::reoNoConfirmation>  TwwRichEditOptions;

#pragma option push -b-
enum TwwRichSelection { wwstText, wwstObject, wwstMultiChar, wwstMultiObject };
#pragma option pop

typedef System::Set<TwwRichSelection, TwwRichSelection::wwstText, TwwRichSelection::wwstMultiObject>  TwwRichSelectionType;

typedef void __fastcall (__closure *TwwRTFDrawHeaderFooter)(TwwCustomRichEdit* Sender, const Types::TRect &DrawRect, int PageNumber, System::UnicodeString &LeftText, System::UnicodeString &CenterText, System::UnicodeString &RightText, bool &DoDefault);

class DELPHICLASS TwwRTFHeaderFooter;
class PASCALIMPLEMENTATION TwwRTFHeaderFooter : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	double FVertMargin;
	System::UnicodeString FLeftText;
	System::UnicodeString FCenterText;
	System::UnicodeString FRightText;
	Graphics::TFont* FFont;
	bool FLineSeparator;
	void __fastcall SetFont(Graphics::TFont* Value);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual TwwRTFHeaderFooter(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwRTFHeaderFooter(void);
	
__published:
	__property double VertMargin = {read=FVertMargin, write=FVertMargin};
	__property System::UnicodeString LeftText = {read=FLeftText, write=FLeftText};
	__property System::UnicodeString CenterText = {read=FCenterText, write=FCenterText};
	__property System::UnicodeString RightText = {read=FRightText, write=FRightText};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool LineSeparator = {read=FLineSeparator, write=FLineSeparator, default=0};
};


class DELPHICLASS TwwPrintMargins;
class PASCALIMPLEMENTATION TwwPrintMargins : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	double FTop;
	double FBottom;
	double FLeft;
	double FRight;
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual TwwPrintMargins(Classes::TComponent* AOwner);
	
__published:
	__property double Top = {read=FTop, write=FTop};
	__property double Bottom = {read=FBottom, write=FBottom};
	__property double Left = {read=FLeft, write=FLeft};
	__property double Right = {read=FRight, write=FRight};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwPrintMargins(void) { }
	
};


struct DECLSPEC_DRECORD TwwParaFormat2
{
	
public:
	unsigned cbSize;
	unsigned dwMask;
	System::Word wNumbering;
	System::Word wReserved;
	int dxStartIndent;
	int dxRightIndent;
	int dxOffset;
	System::Word wAlignment;
	short cTabCount;
	System::StaticArray<int, 32> rgxTabs;
	int dySpaceBefore;
	int dySpaceAfter;
	int dyLineSpacing;
	short sStyle;
	System::Byte bLineSpacingRule;
	System::Byte bCRC;
	System::Word wShadingWeight;
	System::Word wShadingStyle;
	System::Word wNumberingStart;
	System::Word wNumberingStyle;
	System::Word wNumberingTab;
	System::Word wBorderSpace;
	System::Word wBorderWidth;
	System::Word wBorders;
};


typedef void __fastcall (__closure *TwwRTFNotifyEvent)(Forms::TForm* Form, TwwCustomRichEdit* RichEdit, bool &DoDefault);

class PASCALIMPLEMENTATION TwwCustomRichEdit : public Comctrls::TCustomRichEdit
{
	typedef Comctrls::TCustomRichEdit inherited;
	
private:
	bool FAutoURLDetect;
	bool FAutoSelect;
	TwwURLOpenEvent FOnURLOpen;
	unsigned FLibHandle;
	bool FWordWrap;
	TwwPrintMargins* FPrintMargins;
	TwwRTFHeaderFooter* FHeader;
	TwwRTFHeaderFooter* FFooter;
	TwwRTFDrawHeaderFooter FOnPrintHeader;
	TwwRTFDrawHeaderFooter FOnPrintFooter;
	int FPrintPageSize;
	TwwRichEditWidth FEditWidth;
	int StartingFindPos;
	bool InResetToStart;
	Menus::TMenuItem* PopupEdit;
	Menus::TMenuItem* PopupCut;
	Menus::TMenuItem* PopupCopy;
	Menus::TMenuItem* PopupPaste;
	Menus::TMenuItem* PopupBold;
	Menus::TMenuItem* PopupItalic;
	Menus::TMenuItem* PopupUnderline;
	Menus::TMenuItem* PopupFont;
	Menus::TMenuItem* PopupBullet;
	Menus::TMenuItem* PopupParagraph;
	Menus::TMenuItem* PopupTabs;
	Menus::TMenuItem* PopupFind;
	Menus::TMenuItem* PopupReplace;
	Menus::TMenuItem* PopupInsertObject;
	Menus::TMenuItem* PopupSpellCheck;
	Menus::TMenuItem* PopupSep1;
	Menus::TMenuItem* PopupSep2;
	Menus::TMenuItem* PopupSep3;
	Menus::TMenuItem* PopupSep4;
	Menus::TMenuItem* PopupSep5;
	TwwRichEditPopupOptions FPopupOptions;
	TwwRichEditOptions FEditorOptions;
	System::UnicodeString FEditorCaption;
	Wwtypes::TwwFormPosition* FEditorPosition;
	System::UnicodeString LastSearchText;
	TwwMeasurementUnits FUnits;
	TwwOnRichEditDlgEvent FOnInitDialog;
	TwwOnRichEditDlgEvent FOnCloseDialog;
	TwwOnRichEditDlgEvent FOnCreateDialog;
	TwwRTFNotifyEvent FOnMenuLoadClick;
	TwwRTFNotifyEvent FOnMenuPrintClick;
	TwwRTFNotifyEvent FOnMenuSaveAsClick;
	TwwRTFNotifyEvent FOnMenuSaveAndExitClick;
	Classes::TNotifyEvent FOnSpellCheck;
	bool OrigHideSelection;
	TwwRichEditOleOptions FOLEOptions;
	_di_IOleObject FOleSelObject;
	TwwRichEditCopyMethod FRichEditCopyMethod;
	Buttons::TSpeedButton* FUserSpeedButton1;
	Buttons::TSpeedButton* FUserSpeedButton2;
	System::UnicodeString FPrintJobName;
	System::UnicodeString FPrintPreviewCaption;
	Graphics::TColor FHighlightColor;
	Wwframe::TwwEditFrame* FFrame;
	bool FWantNavigationKeys;
	Controls::TControlCanvas* FCanvas;
	Controls::TWinControl* FPaintControl;
	Wwrichole::_di_IRichEditOle FRichEditOle;
	Wwrichole::_di_IRichEditOleCallback FRichEditOleCallback;
	Classes::TStringList* FObjectVerbs;
	Classes::TList* OleMenuItemList;
	bool InParentChanging;
	Classes::TStream* ReloadStream;
	bool UseReloadStream;
	bool NewDataFormat;
	bool URLDetectButtonPressed;
	Menus::TPopupMenu* FVerbMenu;
	bool InitEditRect;
	int FRichEditVersion;
	Classes::TStrings* FLines;
	System::UnicodeString FTitle;
	bool InMouseUp;
	bool SkipChange;
	int FGutterWidth;
	int OldLineCount;
	int OldCharPos;
	int OrigWin32MajorVersion;
	int FMSVersion;
	bool FHideSelection;
	Classes::TThread* MSWordThread;
	int FBulletIndent;
	TwwRichEditNumberingStyle FNumberingStyle;
	double FZoomMultiplier;
	HIDESBASE void __fastcall SetHideSelection(bool Value);
	void __fastcall FindDialog1Close(System::TObject* Sender);
	void __fastcall FindDialog1Find(System::TObject* Sender);
	void __fastcall FindReplaceDlg(Dialogs::TFindDialog* dialog, bool replace, System::UnicodeString replaceStr);
	void __fastcall ReplaceDialog1Replace(System::TObject* Sender);
	void __fastcall PopupMenuPopup(System::TObject* Sender);
	void __fastcall PopupEditclick(System::TObject* Sender);
	void __fastcall PopupCutClick(System::TObject* Sender);
	void __fastcall PopupCopyClick(System::TObject* Sender);
	void __fastcall PopupPasteClick(System::TObject* Sender);
	void __fastcall PopupFontClick(System::TObject* Sender);
	void __fastcall PopupParagraphClick(System::TObject* Sender);
	void __fastcall PopupTabsClick(System::TObject* Sender);
	void __fastcall PopupBulletClick(System::TObject* Sender);
	void __fastcall PopupBoldClick(System::TObject* Sender);
	void __fastcall PopupItalicClick(System::TObject* Sender);
	void __fastcall PopupUnderlineClick(System::TObject* Sender);
	void __fastcall PopupFindClick(System::TObject* Sender);
	void __fastcall PopupReplaceClick(System::TObject* Sender);
	void __fastcall PopupInsertObjectClick(System::TObject* Sender);
	void __fastcall PopupSpellCheckClick(System::TObject* Sender);
	HIDESBASE void __fastcall SetWordWrap(bool val);
	void __fastcall SetPrintPageSize(int val);
	int __fastcall TwipsToPixels(int twips);
	HIDESBASE MESSAGE void __fastcall WMNCDestroy(Messages::TMessage &Msg);
	void __fastcall SetOleOptions(TwwRichEditOleOptions val);
	void __fastcall ReadData(Classes::TStream* Stream);
	void __fastcall WriteData(Classes::TStream* Stream);
	void __fastcall ReadVersion(Classes::TReader* Reader);
	void __fastcall WriteVersion(Classes::TWriter* Writer);
	HIDESBASE MESSAGE void __fastcall WMNotify(Messages::TWMNotify &Message);
	void __fastcall URLLinkNotification(void * Link);
	void __fastcall SetAutoURLDetect(bool val);
	void __fastcall SetUserSpeedButton1(Buttons::TSpeedButton* val);
	void __fastcall SetUserSpeedButton2(Buttons::TSpeedButton* val);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE void __fastcall SetLines(Classes::TStrings* val);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Messages::TWMMouse &Message);
	TwwRichSelectionType __fastcall GetSelectionType(void);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Messages::TMessage &Message);
	void __fastcall SetTitle(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetScrollBars(Stdctrls::TScrollStyle Value);
	Stdctrls::TScrollStyle __fastcall GetScrollBars(void);
	double __fastcall GetZoomFactor(void);
	void __fastcall SetZoomFactor(double value);
	void __fastcall SendZoomFactor(double zoom);
	
protected:
	bool BoundMode;
	int ScreenPixelsPerInch;
	bool FFocused;
	bool __fastcall StoreScrollBars(void);
	DYNAMIC void __fastcall DblClick(void);
	virtual void __fastcall ClearSelectedBackgroundColor(void);
	virtual void __fastcall WriteState(Classes::TWriter* Writer);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	MESSAGE void __fastcall EMFormatRange(Messages::TMessage &msg);
	DYNAMIC void __fastcall SelectionChange(void);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &msg);
	virtual bool __fastcall GetReadOnly(void);
	virtual void __fastcall BeginEditing(void);
	virtual void __fastcall UpdateField(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC Menus::TPopupMenu* __fastcall GetPopupMenu(void);
	void __fastcall DestroyVerbs(void);
	void __fastcall UpdateVerbs(void);
	void __fastcall PopupVerbMenuClick(System::TObject* Sender);
	void __fastcall ObjectPropertiesMenuClick(System::TObject* Sender);
	virtual bool __fastcall IsMemoLoaded(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual Db::TField* __fastcall GetField(void);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoURLOpen(System::UnicodeString URLLink, bool &UseDefault);
	virtual void __fastcall LoadPacketsFromStream(Classes::TStream* Stream, bool AppendMode, int NumPackets = 0x0);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual bool __fastcall isTransparentEffective(void);
	virtual void __fastcall LoadMemo(void);
	virtual void __fastcall CreatePopup(void);
	virtual void __fastcall CreateRuntimeComponents(void);
	virtual System::UnicodeString __fastcall GetSelText(void);
	HIDESBASE virtual void __fastcall SetSelText(System::UnicodeString value);
	void __fastcall SetNumbering(TwwRichEditNumberingLetter val);
	TwwRichEditNumberingLetter __fastcall GetNumbering(void);
	void __fastcall SetBulletIndent(int val);
	int __fastcall GetBulletIndent(void);
	void __fastcall SetNumberingStyle(TwwRichEditNumberingStyle val);
	TwwRichEditNumberingStyle __fastcall GetNumberingStyle(void);
	
public:
	TwwCustomRichEdit* DialogRichEdit;
	Forms::TForm* RichEditForm;
	Dialogs::TFindDialog* FindDialog1;
	Dialogs::TReplaceDialog* ReplaceDialog1;
	Dialogs::TFontDialog* FontDialog1;
	System::UnicodeString FirstLineText;
	bool SkipPaint;
	bool SkipErase;
	System::Variant Patch;
	Menus::TPopupMenu* DefaultPopupMenu;
	bool BeforePopup;
	Graphics::TColor LastColor;
	int ClickTime;
	int TotalPages;
	HIDESBASE int __fastcall FindText(const System::UnicodeString SearchStr, int StartPos, int Length, Comctrls::TSearchTypes Options);
	virtual int __fastcall FindTextAfter(const System::UnicodeString SearchStr, int StartPos, int Length, Comctrls::TSearchTypes Options);
	TwwRichEditWidth __fastcall EffectiveEditWidth(void);
	void __fastcall SetTextBackgroundColor(Graphics::TColor BackColor);
	Graphics::TColor __fastcall GetTextBackgroundColor(void);
	virtual int __fastcall FindTextBefore(const System::UnicodeString SearchStr, int StartPos, int Length, Comctrls::TSearchTypes Options);
	virtual bool __fastcall InsertObjectDialog(void);
	virtual bool __fastcall ObjectPropertiesDialog(void);
	void __fastcall DoVerb(int Verb);
	__fastcall virtual TwwCustomRichEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomRichEdit(void);
	virtual bool __fastcall Execute(void);
	virtual void __fastcall ExecuteFindDialog(void);
	virtual void __fastcall ExecuteReplaceDialog(void);
	virtual void __fastcall ExecuteFontDialog(void);
	virtual bool __fastcall ExecuteParagraphDialog(void);
	virtual void __fastcall ExecuteTabDialog(void);
	virtual void __fastcall FindNextMatch(void);
	virtual void __fastcall FindReplace(void);
	virtual bool __fastcall FindReplaceText(System::UnicodeString SearchText, System::UnicodeString ReplaceText, Comctrls::TSearchTypes SearchTypes);
	void __fastcall SetBullet(bool val);
	void __fastcall SetBold(bool val);
	void __fastcall SetItalic(bool val);
	void __fastcall SetUnderline(bool val);
	HIDESBASE void __fastcall Undo(void);
	void __fastcall Redo(void);
	bool __fastcall CanPaste(void);
	HIDESBASE bool __fastcall CanUndo(void);
	bool __fastcall CanRedo(void);
	bool __fastcall CanCut(void);
	bool __fastcall CanFindNext(void);
	void __fastcall InsertBitmap(Graphics::TBitmap* Pict);
	void __fastcall CopyRichEditFromBlob(Db::TField* Field);
	void __fastcall CopyRichEdittoBlob(Db::TField* Field);
	void __fastcall CopyRichEditTo(Comctrls::TCustomRichEdit* val);
	void __fastcall AppendRichEditFrom(Comctrls::TCustomRichEdit* val);
	void __fastcall SetRichEditFontAttributes(System::UnicodeString FontName, int FontSize, Graphics::TFontStyles FontStyle, Graphics::TColor FontColor);
	void __fastcall SetStyleAttribute(Graphics::TFontStyle Attr, bool AttrOn);
	int __fastcall GetCharSetOfFontName(const System::UnicodeString FaceName);
	void __fastcall GetParaIndent(int &LeftIndent, int &RightIndent, int &FirstIndent);
	void __fastcall SetParaFormat(TwwRichEditParaOptions Options, System::UnicodeString alignment, bool bulletStyle, int leftindent, int rightindent, int firstlineindent, int tabCount, void * tabArray, int SpaceBefore, int SpaceAfter, int LineSpacing, int LineSpacingRule);
	System::UnicodeString __fastcall GetRTFText(void);
	void __fastcall SetRtfText(System::UnicodeString InsertText);
	Types::TRect __fastcall GetPrinterRect(void);
	void __fastcall GetParaFormat(TwwParaFormat2 &Format);
	int __fastcall UnitStrToTwips(System::UnicodeString str);
	int __fastcall UnitsToTwips(double val);
	System::UnicodeString __fastcall FormatUnitStr(double val);
	System::UnicodeString __fastcall RoundedFormatUnitStr(double units, int intervals);
	double __fastcall TwipsToUnits(int val);
	virtual void __fastcall DoInitDialog(Forms::TForm* Form);
	virtual void __fastcall DoCloseDialog(Forms::TForm* Form);
	virtual void __fastcall DoCreateDialog(Forms::TForm* Form);
	void __fastcall SetEditRect(void);
	virtual void __fastcall Print(const System::UnicodeString Caption);
	void __fastcall UpdatePrinter(void);
	Classes::TStrings* __fastcall ILines(void);
	virtual bool __fastcall MSWordSpellChecker(void);
	virtual bool __fastcall MSWordPrintDocument(System::UnicodeString TemplateFileName);
	void __fastcall GetRTFSelection(Classes::TStream* DestStream);
	void __fastcall PutRTFSelection(Classes::TStream* SourceStream);
	void __fastcall Import(System::UnicodeString Format, System::UnicodeString FileName);
	void __fastcall Export(System::UnicodeString Format, System::UnicodeString FileName);
	void __fastcall PrintPreview(void);
	virtual void __fastcall DoPrintHeader(const Types::TRect &DrawRect, int PageNumber, System::UnicodeString &LeftText, System::UnicodeString &CenterText, System::UnicodeString &RightText, bool &DoDefault);
	virtual void __fastcall DoPrintFooter(const Types::TRect &DrawRect, int PageNumber, System::UnicodeString &LeftText, System::UnicodeString &CenterText, System::UnicodeString &RightText, bool &DoDefault);
	void __fastcall StartMSWordMonitoring(System::UnicodeString TempFileName);
	void __fastcall StopMSWordMonitoring(void);
	__property Db::TField* Field = {read=GetField};
	__property _di_IOleObject OleSelObject = {read=FOleSelObject};
	__property Wwrichole::_di_IRichEditOle RichEditOle = {read=FRichEditOle};
	__property Wwrichole::_di_IRichEditOleCallback RichEditOleCallback = {read=FRichEditOleCallback};
	__property TwwRichEditPopupOptions PopupOptions = {read=FPopupOptions, write=FPopupOptions, default=32655};
	__property TwwRichEditOptions EditorOptions = {read=FEditorOptions, write=FEditorOptions, default=65532};
	__property int RichEditVersion = {read=FRichEditVersion, write=FRichEditVersion, nodefault};
	__property Graphics::TColor HighlightColor = {read=FHighlightColor, write=FHighlightColor, default=65535};
	__property System::UnicodeString EditorCaption = {read=FEditorCaption, write=FEditorCaption};
	__property TwwMeasurementUnits MeasurementUnits = {read=FUnits, write=FUnits, nodefault};
	__property TwwOnRichEditDlgEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property TwwOnRichEditDlgEvent OnCloseDialog = {read=FOnCloseDialog, write=FOnCloseDialog};
	__property TwwOnRichEditDlgEvent OnCreateDialog = {read=FOnCreateDialog, write=FOnCreateDialog};
	__property TwwPrintMargins* PrintMargins = {read=FPrintMargins, write=FPrintMargins};
	__property TwwRTFHeaderFooter* PrintHeader = {read=FHeader, write=FHeader};
	__property TwwRTFHeaderFooter* PrintFooter = {read=FFooter, write=FFooter};
	__property TwwRTFDrawHeaderFooter OnPrintHeader = {read=FOnPrintHeader, write=FOnPrintHeader};
	__property TwwRTFDrawHeaderFooter OnPrintFooter = {read=FOnPrintFooter, write=FOnPrintFooter};
	__property TwwRichEditWidth EditWidth = {read=FEditWidth, write=FEditWidth, default=0};
	__property Wwtypes::TwwFormPosition* EditorPosition = {read=FEditorPosition, write=FEditorPosition};
	__property int PrintPageSize = {read=FPrintPageSize, write=SetPrintPageSize, default=1};
	__property TwwRichEditOleOptions OleOptions = {read=FOLEOptions, write=SetOleOptions, default=1};
	__property TwwRichEditCopyMethod RichEditCopyMethod = {read=FRichEditCopyMethod, write=FRichEditCopyMethod, default=0};
	__property bool AutoURLDetect = {read=FAutoURLDetect, write=SetAutoURLDetect, nodefault};
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=0};
	__property TwwURLOpenEvent OnURLOpen = {read=FOnURLOpen, write=FOnURLOpen};
	__property Buttons::TSpeedButton* UserSpeedButton1 = {read=FUserSpeedButton1, write=SetUserSpeedButton1};
	__property Buttons::TSpeedButton* UserSpeedButton2 = {read=FUserSpeedButton2, write=SetUserSpeedButton2};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=1};
	__property PlainText = {default=0};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	__property System::UnicodeString PrintJobName = {read=FPrintJobName, write=FPrintJobName};
	__property System::UnicodeString PrintPreviewCaption = {read=FPrintPreviewCaption, write=FPrintPreviewCaption};
	__property int GutterWidth = {read=FGutterWidth, write=FGutterWidth, default=3};
	__property TwwRichSelectionType SelectionType = {read=GetSelectionType, nodefault};
	__property bool WantNavigationKeys = {read=FWantNavigationKeys, write=FWantNavigationKeys, default=0};
	__property System::UnicodeString Title = {read=FTitle, write=SetTitle};
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property TwwRTFNotifyEvent OnMenuLoadClick = {read=FOnMenuLoadClick, write=FOnMenuLoadClick};
	__property TwwRTFNotifyEvent OnMenuPrintClick = {read=FOnMenuPrintClick, write=FOnMenuPrintClick};
	__property TwwRTFNotifyEvent OnMenuSaveAsClick = {read=FOnMenuSaveAsClick, write=FOnMenuSaveAsClick};
	__property TwwRTFNotifyEvent OnMenuSaveAndExitClick = {read=FOnMenuSaveAndExitClick, write=FOnMenuSaveAndExitClick};
	__property Classes::TNotifyEvent OnSpellCheck = {read=FOnSpellCheck, write=FOnSpellCheck};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	__property TwwRichEditNumberingLetter Numbering = {read=GetNumbering, write=SetNumbering, nodefault};
	__property int BulletIndent = {read=GetBulletIndent, write=SetBulletIndent, default=0};
	__property TwwRichEditNumberingStyle NumberingStyle = {read=GetNumberingStyle, write=SetNumberingStyle, default=512};
	__property double ZoomFactor = {read=GetZoomFactor, write=SetZoomFactor};
	
__published:
	__property Stdctrls::TScrollStyle ScrollBars = {read=GetScrollBars, write=SetScrollBars, stored=StoreScrollBars, nodefault};
	__property int MSVersion = {read=FMSVersion, write=FMSVersion, default=3};
	__property Classes::TStrings* Lines = {read=FLines, write=SetLines, stored=false};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomRichEdit(HWND ParentWindow) : Comctrls::TCustomRichEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwRulerPanel;
class DELPHICLASS TwwDBRichEdit;
class PASCALIMPLEMENTATION TwwRulerPanel : public Extctrls::TPanel
{
	typedef Extctrls::TPanel inherited;
	
private:
	int __fastcall TwipsToPixels(int Twips);
	int __fastcall PrinterPixelsToTwipsX(int pixels);
	int __fastcall PixelsToTwipsX(int pixels);
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	Types::TRect RulerRect;
	Wwtrackicon::TwwTrackIcon* LeftDragButton;
	Wwtrackicon::TwwTrackIcon* RightDragButton;
	Wwtrackicon::TwwTrackIcon* FirstLineDragButton;
	TwwDBRichEdit* RichEdit;
	void __fastcall UpdateDragIcons(void);
	void __fastcall UpdateSize(TwwCustomRichEdit* DialogRichEdit);
	void __fastcall UpdateRulerProp(System::TObject* Sender);
	void __fastcall CreateDragButtons(void);
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TwwRulerPanel(Classes::TComponent* AOwner) : Extctrls::TPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TwwRulerPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRulerPanel(HWND ParentWindow) : Extctrls::TPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TwwDBRichEdit : public TwwCustomRichEdit
{
	typedef TwwCustomRichEdit inherited;
	
private:
	Wwintl::TwwController* FController;
	Dbctrls::TFieldDataLink* FDataLink;
	bool FAutoDisplay;
	bool FMemoLoaded;
	System::UnicodeString FDataSave;
	void __fastcall SetController(Wwintl::TwwController* Value);
	bool __fastcall isBlob(void);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetAutoDisplay(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall BeginEditing(void);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual bool __fastcall GetReadOnly(void);
	virtual void __fastcall UpdateField(void);
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall IsMemoLoaded(void);
	virtual Db::TField* __fastcall GetField(void);
	
public:
	__fastcall virtual TwwDBRichEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBRichEdit(void);
	virtual void __fastcall LoadMemo(void);
	void __fastcall LoadBlobStart(Db::TField* Field, int NumPackets = 0x2);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	
__published:
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property Anchors = {default=3};
	__property Constraints;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property AutoURLDetect;
	__property AutoSelect = {default=0};
	__property bool AutoDisplay = {read=FAutoDisplay, write=SetAutoDisplay, default=1};
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Frame;
	__property GutterWidth = {default=3};
	__property HideSelection = {default=1};
	__property HideScrollBars = {default=1};
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property OleOptions = {default=1};
	__property PrintPageSize = {default=1};
	__property UserSpeedButton1;
	__property UserSpeedButton2;
	__property HighlightColor = {default=65535};
	__property Title;
	__property PopupMenu;
	__property PrintJobName;
	__property PrintPreviewCaption;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property WantReturns = {default=1};
	__property WantTabs = {default=0};
	__property WantNavigationKeys = {default=0};
	__property WordWrap = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResizeRequest;
	__property OnSelectionChange;
	__property OnProtectChange;
	__property OnSaveClipboard;
	__property OnStartDrag;
	__property PopupOptions = {default=32655};
	__property EditorOptions = {default=65532};
	__property EditorCaption;
	__property EditorPosition;
	__property MeasurementUnits;
	__property PrintMargins;
	__property EditWidth = {default=0};
	__property OnInitDialog;
	__property OnCloseDialog;
	__property OnCreateDialog;
	__property OnURLOpen;
	__property OnMenuLoadClick;
	__property OnMenuPrintClick;
	__property OnMenuSaveAsClick;
	__property OnMenuSaveAndExitClick;
	__property OnSpellCheck;
	__property PrintHeader;
	__property PrintFooter;
	__property OnPrintHeader;
	__property OnPrintFooter;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBRichEdit(HWND ParentWindow) : TwwCustomRichEdit(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TwwCharFormat2
{
	
public:
	unsigned cbSize;
	int dwMask;
	int dwEffects;
	int yHeight;
	int yOffset;
	unsigned crTextColor;
	System::Byte bCharSet;
	System::Byte bPitchAndFamily;
	System::StaticArray<System::WideChar, 32> szFaceName;
	System::Word wWeight;
	short sSpacing;
	unsigned crBackColor;
	int lcid;
	int dwReserved;
	short style;
	System::Word wKerning;
	System::Byte bUnderlineType;
	System::Byte bAnimation;
	System::Byte bRevAuthor;
	System::Byte bReserved1;
};


class DELPHICLASS EwwRTFError;
class PASCALIMPLEMENTATION EwwRTFError : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
private:
	int FErrorCode;
	
public:
	__fastcall EwwRTFError(System::UnicodeString Message, int ErrCode, int Dummy);
	__property int ErrorCode = {read=FErrorCode, nodefault};
public:
	/* Exception.CreateFmt */ inline __fastcall EwwRTFError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EwwRTFError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EwwRTFError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EwwRTFError(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EwwRTFError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EwwRTFError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EwwRTFError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EwwRTFError(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word wwTwipsPerInch = 0x5a0;
static const System::ShortInt PFA_FULLJUSTIFY = 0x4;
extern PACKAGE bool __fastcall wwGetUniqueFileName(System::UnicodeString &Filename);
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwriched */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwriched;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrichedHPP
