// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSPortFrame.pas' rev: 22.00

#ifndef DsportframeHPP
#define DsportframeHPP

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
#include <IdContext.hpp>	// Pascal unit
#include <IdSocketHandle.hpp>	// Pascal unit
#include <IdStack.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsportframe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSPortFram;
class PASCALIMPLEMENTATION TDSPortFram : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* LabelPort;
	Stdctrls::TEdit* EditPort;
	Stdctrls::TButton* ButtonTest;
	Stdctrls::TButton* ButtonNextAvailable;
	void __fastcall ButtonTestClick(System::TObject* Sender);
	void __fastcall ButtonNextAvailableClick(System::TObject* Sender);
	
private:
	int __fastcall GetPort(void);
	void __fastcall SetPort(const int Value);
	void __fastcall OnExecute(Idcontext::TIdContext* AContext);
	
public:
	__property int Port = {read=GetPort, write=SetPort, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSPortFram(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSPortFram(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSPortFram(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsportframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsportframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsportframeHPP
