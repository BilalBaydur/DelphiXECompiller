// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ipabout.pas' rev: 22.00

#ifndef IpaboutHPP
#define IpaboutHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ipabout
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TIPAboutForm;
class PASCALIMPLEMENTATION TIPAboutForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* Label4;
	Stdctrls::TButton* Button1;
	Stdctrls::TLabel* Registration;
	Stdctrls::TLabel* Version;
	void __fastcall FormShow(System::TObject* Sender);
	
public:
	System::UnicodeString ARegistration;
	System::UnicodeString AVersion;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TIPAboutForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TIPAboutForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TIPAboutForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIPAboutForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TIPAboutForm* IPAboutForm;

}	/* namespace Ipabout */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Ipabout;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IpaboutHPP
