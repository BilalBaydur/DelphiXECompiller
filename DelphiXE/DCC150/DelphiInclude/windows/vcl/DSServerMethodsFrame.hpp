// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServerMethodsFrame.pas' rev: 22.00

#ifndef DsservermethodsframeHPP
#define DsservermethodsframeHPP

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
#include <DSCreators.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsservermethodsframe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSServerMethodsFrame;
class PASCALIMPLEMENTATION TDSServerMethodsFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* lblAncestor;
	Stdctrls::TCheckBox* cbServerMethodsModule;
	Stdctrls::TComboBox* cmbAncestor;
	Stdctrls::TCheckBox* cbIncludeSampleMethods;
	Actnlist::TActionList* ActionList1;
	Actnlist::TAction* Action1;
	void __fastcall Action1Execute(System::TObject* Sender);
	void __fastcall Action1Update(System::TObject* Sender);
	
private:
	void __fastcall EnableControls(void);
	
public:
	void __fastcall GetModuleDescription(Dscreators::TServerModuleDescription &AModuleDescription);
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSServerMethodsFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSServerMethodsFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSServerMethodsFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsservermethodsframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsservermethodsframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsservermethodsframeHPP
