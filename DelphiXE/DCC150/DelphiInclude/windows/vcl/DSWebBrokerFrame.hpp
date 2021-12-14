// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSWebBrokerFrame.pas' rev: 22.00

#ifndef DswebbrokerframeHPP
#define DswebbrokerframeHPP

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
#include <DSServerMethodsFrame.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dswebbrokerframe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSWebBrokerFrameC;
class PASCALIMPLEMENTATION TDSWebBrokerFrameC : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Extctrls::TPanel* Panel1;
	Dsservermethodsframe::TDSServerMethodsFrame* DSServerMethodsFrame1;
	Stdctrls::TCheckBox* cbAuthentication;
	Stdctrls::TLabel* Label1;
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSWebBrokerFrameC(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSWebBrokerFrameC(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSWebBrokerFrameC(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dswebbrokerframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dswebbrokerframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DswebbrokerframeHPP
