// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSSQLConnectionFrameUnit.pas' rev: 22.00

#ifndef DssqlconnectionframeunitHPP
#define DssqlconnectionframeunitHPP

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

namespace Dssqlconnectionframeunit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSQLConnectionFrame;
class PASCALIMPLEMENTATION TSQLConnectionFrame : public Forms::TFrame
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
	Stdctrls::TLabel* Label7;
	Stdctrls::TComboBox* ComboBoxProtocol;
	Stdctrls::TEdit* EditContext;
	Stdctrls::TLabel* Label8;
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TSQLConnectionFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TSQLConnectionFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSQLConnectionFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dssqlconnectionframeunit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dssqlconnectionframeunit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DssqlconnectionframeunitHPP
