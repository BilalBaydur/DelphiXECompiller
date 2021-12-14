// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrtfprintpreview.pas' rev: 22.00

#ifndef WwrtfprintpreviewHPP
#define WwrtfprintpreviewHPP

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
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <ToolWin.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <Wwdbspin.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrtfprintpreview
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwRtfPreviewForm;
class PASCALIMPLEMENTATION TwwRtfPreviewForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
private:
	typedef System::DynamicArray<_charrange> _TwwRtfPreviewForm__1;
	
	
__published:
	Comctrls::TToolBar* ToolBar1;
	Forms::TScrollBox* ScrollBox1;
	Extctrls::TPaintBox* PaintBox1;
	Dialogs::TPrintDialog* PrintDialog;
	Controls::TImageList* RichEditButtonIcons;
	Menus::TPopupMenu* PopupMenu1;
	Menus::TMenuItem* N5001;
	Menus::TMenuItem* N2001;
	Menus::TMenuItem* N1501;
	Menus::TMenuItem* N10001;
	Menus::TMenuItem* N751;
	Menus::TMenuItem* N501;
	Menus::TMenuItem* N251;
	Menus::TMenuItem* Auto1;
	Wwdbcomb::TwwDBComboBox* zoomCombo;
	Comctrls::TToolButton* ToolButton2;
	Comctrls::TToolButton* ToolButton5;
	Stdctrls::TLabel* Label1;
	Wwdbspin::TwwDBSpinEdit* wwDBSpinEdit1;
	void __fastcall PaintBox1Paint(System::TObject* Sender);
	void __fastcall ToolButton1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ScrollBox1Resize(System::TObject* Sender);
	void __fastcall wwDBSpinEdit1Change(System::TObject* Sender);
	void __fastcall ToolButton5Click(System::TObject* Sender);
	void __fastcall ToolButton2Click(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall zoomComboChange(System::TObject* Sender);
	
private:
	Graphics::TMetafile* FMetafile;
	Wwriched::TwwCustomRichEdit* FRichedit;
	_TwwRtfPreviewForm__1 FPages;
	Types::TRect FPagerect;
	Types::TRect FPrintRect;
	double FZoomFactor;
	int NumPages;
	void __fastcall PreparePreview(Wwriched::TwwCustomRichEdit* aRichedit);
	void __fastcall Paginate(void);
	void __fastcall DrawPage(int pagenum);
	int __fastcall RenderPage(int pagenum, BOOL render = true);
	void __fastcall VerifyPagenum(int pagenum);
	void __fastcall PrintHeader(Graphics::TCanvas* cv);
	void __fastcall UpdateZoom(void);
	void __fastcall DrawScaled(Graphics::TCanvas* Canvas, const Types::TRect &outrect, Graphics::TGraphic* image, int iwidth, int iheight);
	
public:
	__fastcall virtual ~TwwRtfPreviewForm(void);
	__fastcall virtual TwwRtfPreviewForm(Classes::TComponent* AOwner);
	__classmethod void __fastcall Preview(Wwriched::TwwCustomRichEdit* arichedit);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwRtfPreviewForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRtfPreviewForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwRtfPreviewForm* wwRtfPreviewForm;

}	/* namespace Wwrtfprintpreview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrtfprintpreview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrtfprintpreviewHPP
