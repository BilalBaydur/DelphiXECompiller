// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrchdlg.pas' rev: 22.00

#ifndef WwrchdlgHPP
#define WwrchdlgHPP

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
#include <Wwintl.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrchdlg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwRichParagraphDialog;
class PASCALIMPLEMENTATION TwwRichParagraphDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* Label4;
	Wwdbcomb::TwwDBComboBox* AlignmentCombo;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TEdit* LeftEdit;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* RightEdit;
	Stdctrls::TLabel* Label3;
	Stdctrls::TEdit* FirstLineEdit;
	Stdctrls::TLabel* GroupBox1;
	Stdctrls::TLabel* SpacingGroup;
	Extctrls::TBevel* Bevel2;
	Stdctrls::TLabel* BeforeParagraphLabel;
	Stdctrls::TEdit* BeforeParagraphEdit;
	Stdctrls::TLabel* AfterParagraphLabel;
	Stdctrls::TEdit* AfterParagraphEdit;
	Stdctrls::TLabel* WithinParagraphLabel;
	Stdctrls::TEdit* WithinParagraphEdit;
	Stdctrls::TComboBox* LineSpacingComboBox;
	Stdctrls::TLabel* WithinParagraphAt;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall OKClick(System::TObject* Sender);
	void __fastcall LineSpacingComboBoxClick(System::TObject* Sender);
	void __fastcall LineSpacingComboBoxChange(System::TObject* Sender);
	void __fastcall WithinParagraphEditKeyPress(System::TObject* Sender, System::WideChar &Key);
	
private:
	void __fastcall ApplyIntl(void);
	
public:
	Wwriched::TwwCustomRichEdit* RichEdit;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwRichParagraphDialog(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwRichParagraphDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwRichParagraphDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRichParagraphDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwRichParagraphDialog* wwRichParagraphDialog;
extern PACKAGE bool __fastcall wwRichEditParagraphDlg(Wwriched::TwwCustomRichEdit* richedit1);

}	/* namespace Wwrchdlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrchdlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrchdlgHPP
