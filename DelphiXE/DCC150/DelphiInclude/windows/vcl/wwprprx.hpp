// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwprprx.pas' rev: 22.00

#ifndef WwprprxHPP
#define WwprprxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Wwpicdb.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <wwedtpic.hpp>	// Pascal unit
#include <ipdsgn.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprprx
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwEditRegexForm;
class PASCALIMPLEMENTATION TwwEditRegexForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TMemo* PictureDescription;
	Stdctrls::TButton* Button1;
	Stdctrls::TButton* Button2;
	Stdctrls::TGroupBox* GroupBox2;
	Wwdbedit::TwwDBEdit* wwPictureEdit1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TButton* Button3;
	Extctrls::TPanel* Status;
	Stdctrls::TCheckBox* AutoFill;
	Stdctrls::TButton* Button4;
	Wwdotdot::TwwDBComboDlg* NewPicture;
	Wwintl::TwwIntl* wwIntl1;
	void __fastcall NewPictureChange(System::TObject* Sender);
	void __fastcall wwPictureEdit1Change(System::TObject* Sender);
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall Button2Click(System::TObject* Sender);
	void __fastcall AutoFillClick(System::TObject* Sender);
	void __fastcall Button3Click(System::TObject* Sender);
	void __fastcall Button4Click(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall NewPictureCustomDlg(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall NewPictureExit(System::TObject* Sender);
	
private:
	Stdctrls::TCustomEdit* Component;
	System::UnicodeString OrigRegexMask;
	bool OrigCaseSensitive;
	void __fastcall RefreshDescription(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwEditRegexForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwEditRegexForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwEditRegexForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwEditRegexForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwEditRegexForm* wwEditRegexForm;
extern PACKAGE bool __fastcall wwPrpEdit_RegexMask(Wwdbedit::TwwCustomMaskEdit* AComponent);

}	/* namespace Wwprprx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprprx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwprprxHPP
