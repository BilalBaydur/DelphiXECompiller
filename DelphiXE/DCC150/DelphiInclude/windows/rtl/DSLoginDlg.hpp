// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSLoginDlg.pas' rev: 22.00

#ifndef DslogindlgHPP
#define DslogindlgHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DSClientRest.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dslogindlg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TLoginDialog;
class PASCALIMPLEMENTATION TLoginDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKButton;
	Stdctrls::TButton* CancelButton;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* Password;
	Stdctrls::TEdit* UserName;
	void __fastcall OKButtonClick(System::TObject* Sender);
	
private:
	Dsclientrest::TTestConnectionMethod FTestConnectionMethod;
	Dsclientrest::TDSRestLoginProperties* FLoginProperties;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TLoginDialog(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TLoginDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TLoginDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLoginDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall LoginDialog(System::TObject* ASender, Dsclientrest::TDSRestLoginProperties* &ALoginProperties, Dsclientrest::TTestConnectionMethod ATestConnectionMethod);

}	/* namespace Dslogindlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dslogindlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DslogindlgHPP
