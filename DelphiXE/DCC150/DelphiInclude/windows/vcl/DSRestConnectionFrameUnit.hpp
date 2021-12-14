// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSRestConnectionFrameUnit.pas' rev: 22.00

#ifndef DsrestconnectionframeunitHPP
#define DsrestconnectionframeunitHPP

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

//-- user supplied -----------------------------------------------------------

namespace Dsrestconnectionframeunit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRestConnectionFrame;
class PASCALIMPLEMENTATION TRestConnectionFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* Label4;
	Stdctrls::TLabel* Label5;
	Stdctrls::TEdit* EditPort;
	Stdctrls::TEdit* EditHost;
	Stdctrls::TEdit* EditUrlPath;
	Stdctrls::TEdit* EditUserName;
	Stdctrls::TEdit* EditPassword;
	Stdctrls::TLabel* Label6;
	Stdctrls::TEdit* EditContext;
	Stdctrls::TLabel* Label7;
	Stdctrls::TLabel* Label9;
	Stdctrls::TComboBox* ComboBoxProtocol;
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TRestConnectionFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TRestConnectionFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRestConnectionFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsrestconnectionframeunit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsrestconnectionframeunit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsrestconnectionframeunitHPP
