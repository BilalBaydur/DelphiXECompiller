// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrich.pas' rev: 22.00

#ifndef WwrichHPP
#define WwrichHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <DBGrids.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <wwrchdlg.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwrichtb.hpp>	// Pascal unit
#include <Printers.hpp>	// Pascal unit
#include <CommDlg.hpp>	// Pascal unit
#include <WinSpool.hpp>	// Pascal unit
#include <wwTrackIcon.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrich
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwRichEditForm;
class PASCALIMPLEMENTATION TwwRichEditForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Menus::TMainMenu* MainMenu1;
	Menus::TMenuItem* File1;
	Menus::TMenuItem* Print1;
	Menus::TMenuItem* PageSetup1;
	Menus::TMenuItem* SaveExit1;
	Menus::TMenuItem* Exit1;
	Menus::TMenuItem* Edit1;
	Menus::TMenuItem* Undo1;
	Menus::TMenuItem* EditSep1;
	Menus::TMenuItem* Cut1;
	Menus::TMenuItem* Copy1;
	Menus::TMenuItem* Paste1;
	Menus::TMenuItem* Clear1;
	Menus::TMenuItem* SelectAll1;
	Menus::TMenuItem* EditSep2;
	Menus::TMenuItem* Find1;
	Menus::TMenuItem* FindNext1;
	Menus::TMenuItem* Replace1;
	Menus::TMenuItem* View1;
	Menus::TMenuItem* Toolbar1;
	Menus::TMenuItem* FormatBar1;
	Comctrls::TStatusBar* StatusBar;
	Menus::TMenuItem* OptionsSep;
	Menus::TMenuItem* Options1;
	Menus::TMenuItem* Insert1;
	Menus::TMenuItem* DateandTime1;
	Menus::TMenuItem* Format1;
	Menus::TMenuItem* Font1;
	Menus::TMenuItem* BulletStyle1;
	Menus::TMenuItem* Paragraph1;
	Menus::TMenuItem* Tabs1;
	Menus::TMenuItem* Help1;
	Extctrls::TPanel* FormatBar;
	Wwdbcomb::TwwDBComboBox* FontNameCombo;
	Wwdbcomb::TwwDBComboBox* FontSizeCombo;
	Buttons::TSpeedButton* BoldButton;
	Buttons::TSpeedButton* UnderlineButton;
	Buttons::TSpeedButton* ItalicButton;
	Buttons::TSpeedButton* LeftButton;
	Buttons::TSpeedButton* CenterButton;
	Buttons::TSpeedButton* RightButton;
	Buttons::TSpeedButton* BulletButton;
	Menus::TMenuItem* StatusBar1;
	Dialogs::TPrintDialog* PrintDialog1;
	Menus::TMenuItem* FileSep2;
	Menus::TMenuItem* FileSep1;
	Menus::TMenuItem* Load1;
	Menus::TMenuItem* SaveAs1;
	Dialogs::TOpenDialog* OpenDialog1;
	Extctrls::TPanel* Toolbar;
	Buttons::TSpeedButton* NewButton;
	Extctrls::TBevel* ToolBarBevel;
	Extctrls::TBevel* FormatBarBevel;
	Buttons::TSpeedButton* LoadButton1;
	Buttons::TSpeedButton* SaveAsButton;
	Buttons::TSpeedButton* PrintButton;
	Buttons::TSpeedButton* FindButton;
	Buttons::TSpeedButton* CutButton;
	Buttons::TSpeedButton* CopyButton;
	Buttons::TSpeedButton* UndoButton;
	Buttons::TSpeedButton* PasteButton;
	Dialogs::TSaveDialog* SaveDialog1;
	Extctrls::TBevel* RulerBevel;
	Menus::TMenuItem* Ruler1;
	Menus::TMenuItem* InsertObject1;
	Buttons::TSpeedButton* RedoButton;
	Menus::TMenuItem* Redo1;
	Extctrls::TBevel* ToolbarBevel1;
	Extctrls::TBevel* Bevel1;
	Extctrls::TBevel* Bevel2;
	Extctrls::TBevel* Bevel3;
	Extctrls::TBevel* UserButtonBevel;
	Extctrls::TBevel* Bevel4;
	Menus::TPopupMenu* PopupMenu1;
	Menus::TMenuItem* Black1;
	Menus::TMenuItem* Green1;
	Menus::TMenuItem* Red1;
	Menus::TMenuItem* Blue1;
	Menus::TMenuItem* Yellow1;
	Menus::TMenuItem* Purple1;
	Menus::TMenuItem* Teal1;
	Menus::TMenuItem* Gray1;
	Menus::TMenuItem* Silver1;
	Menus::TMenuItem* Red2;
	Menus::TMenuItem* Lime1;
	Menus::TMenuItem* Yellow2;
	Menus::TMenuItem* Blue2;
	Menus::TMenuItem* Fuchsia1;
	Menus::TMenuItem* Aqua1;
	Menus::TMenuItem* White1;
	Menus::TMenuItem* Automatic1;
	Buttons::TSpeedButton* ColorButton;
	Menus::TMenuItem* Tools1;
	Menus::TMenuItem* Spelling1;
	Buttons::TSpeedButton* SpellButton;
	Controls::TImageList* ImageList1;
	Buttons::TSpeedButton* HighlightButton;
	Buttons::TSpeedButton* JustifyButton;
	Buttons::TSpeedButton* PrintPreviewButton;
	Menus::TMenuItem* PrintPreview1;
	Extctrls::TBevel* Bevel5;
	Buttons::TSpeedButton* NumberingButton;
	void __fastcall BoldButtonClick(System::TObject* Sender);
	void __fastcall UnderlineButtonClick(System::TObject* Sender);
	void __fastcall ItalicButtonClick(System::TObject* Sender);
	void __fastcall RightButtonClick(System::TObject* Sender);
	void __fastcall CenterButtonClick(System::TObject* Sender);
	void __fastcall LeftButtonClick(System::TObject* Sender);
	void __fastcall BulletButtonClick(System::TObject* Sender);
	void __fastcall RichEdit1SelectionChange(System::TObject* Sender);
	void __fastcall Undo1Click(System::TObject* Sender);
	void __fastcall Cut1Click(System::TObject* Sender);
	void __fastcall Copy1Click(System::TObject* Sender);
	void __fastcall Paste1Click(System::TObject* Sender);
	void __fastcall SelectAll1Click(System::TObject* Sender);
	void __fastcall Clear1Click(System::TObject* Sender);
	void __fastcall Find1Click(System::TObject* Sender);
	void __fastcall FindNext1Click(System::TObject* Sender);
	void __fastcall Replace1Click(System::TObject* Sender);
	void __fastcall Font1Click(System::TObject* Sender);
	void __fastcall FontNameComboCloseUp(Wwdbcomb::TwwDBComboBox* Sender, bool Select);
	void __fastcall FontSizeComboCloseUp(Wwdbcomb::TwwDBComboBox* Sender, bool Select);
	void __fastcall BulletStyle1Click(System::TObject* Sender);
	void __fastcall FormKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall Paragraph1Click(System::TObject* Sender);
	void __fastcall Edit1Click(System::TObject* Sender);
	void __fastcall Print1Click(System::TObject* Sender);
	void __fastcall FormatBar1Click(System::TObject* Sender);
	void __fastcall StatusBar1Click(System::TObject* Sender);
	void __fastcall Exit1Click(System::TObject* Sender);
	void __fastcall SaveExit1Click(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall Tabs1Click(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall PageSetup1Click(System::TObject* Sender);
	void __fastcall Load1Click(System::TObject* Sender);
	void __fastcall SaveAs1Click(System::TObject* Sender);
	void __fastcall Toolbar1Click(System::TObject* Sender);
	void __fastcall NewButtonClick(System::TObject* Sender);
	void __fastcall LoadButton1Click(System::TObject* Sender);
	void __fastcall SaveAsButtonClick(System::TObject* Sender);
	void __fastcall PrintButtonClick(System::TObject* Sender);
	void __fastcall FindButtonClick(System::TObject* Sender);
	void __fastcall CutButtonClick(System::TObject* Sender);
	void __fastcall CopyButtonClick(System::TObject* Sender);
	void __fastcall PasteButtonClick(System::TObject* Sender);
	void __fastcall UndoButtonClick(System::TObject* Sender);
	void __fastcall FontNameComboDropDown(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall Ruler1Click(System::TObject* Sender);
	void __fastcall InsertObject1Click(System::TObject* Sender);
	void __fastcall RedoButtonClick(System::TObject* Sender);
	void __fastcall Redo1Click(System::TObject* Sender);
	void __fastcall ColorButtonClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall Spelling1Click(System::TObject* Sender);
	void __fastcall SpellButtonClick(System::TObject* Sender);
	void __fastcall HighlightButtonClick(System::TObject* Sender);
	void __fastcall BoldButtonMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall JustifyButtonClick(System::TObject* Sender);
	void __fastcall PrintPreviewButtonClick(System::TObject* Sender);
	void __fastcall NumberingButtonClick(System::TObject* Sender);
	
private:
	bool tempDown;
	Classes::TNotifyEvent OrigOnHint;
	Graphics::TCanvas* FCanvas;
	Controls::TWinControl* OldParent1;
	Controls::TWinControl* OldParent2;
	void __fastcall RefreshControls(void);
	void __fastcall SetRichEditFontName(System::UnicodeString Value);
	void __fastcall UpdateStatusBar(void);
	void __fastcall UpdateFormatToolBar(bool ShowToolBar, bool ShowFormatBar);
	void __fastcall FormChangeHint(System::TObject* Sender);
	void __fastcall ApplyIntl(void);
	HIDESBASE MESSAGE void __fastcall WMCommand(Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMMeasureItem(Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall WMDrawItem(Messages::TWMDrawItem &Message);
	void __fastcall ColorClick(System::TObject* Sender);
	void __fastcall InitColorMenu(void);
	
public:
	Wwriched::TwwCustomRichEdit* OrigRichEdit;
	Wwriched::TwwDBRichEdit* RichEdit1;
	Wwriched::TwwRulerPanel* RulerPanel;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwRichEditForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwRichEditForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwRichEditForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRichEditForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define wwCentimetersPerInch  (2.537000E+00)
extern PACKAGE TwwRichEditForm* wwRichEditForm;

}	/* namespace Wwrich */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrich;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrichHPP
