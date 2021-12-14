// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrichtb.pas' rev: 22.00

#ifndef WwrichtbHPP
#define WwrichtbHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrichtb
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwRichTabDialog;
class PASCALIMPLEMENTATION TwwRichTabDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKButton;
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TEdit* Edit1;
	Stdctrls::TListBox* ListBox1;
	Stdctrls::TButton* Button1;
	Stdctrls::TButton* Button2;
	Stdctrls::TButton* Button3;
	Stdctrls::TButton* Button4;
	void __fastcall Button4Click(System::TObject* Sender);
	void __fastcall SetButtonClick(System::TObject* Sender);
	void __fastcall Button2Click(System::TObject* Sender);
	void __fastcall Edit1Enter(System::TObject* Sender);
	void __fastcall Edit1Exit(System::TObject* Sender);
	void __fastcall Edit1KeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall OKButtonClick(System::TObject* Sender);
	
private:
	Wwriched::TwwCustomRichEdit* richedit;
	void __fastcall ApplyIntl(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwRichTabDialog(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwRichTabDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwRichTabDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRichTabDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwRichTabDialog* wwRichTabDialog;
extern PACKAGE bool __fastcall wwRichTabDlg(Wwriched::TwwCustomRichEdit* richedit1);

}	/* namespace Wwrichtb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrichtb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrichtbHPP
