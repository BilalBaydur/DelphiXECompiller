// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwclearbuttongroup.pas' rev: 22.00

#ifndef WwclearbuttongroupHPP
#define WwclearbuttongroupHPP

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
#include <CommCtrl.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwclearbuttongroup
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwCustomTransparentGroupBox;
class PASCALIMPLEMENTATION TwwCustomTransparentGroupBox : public Stdctrls::TCustomGroupBox
{
	typedef Stdctrls::TCustomGroupBox inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Messages::TWMMove &Message);
	
protected:
	bool FTransparent;
	bool FInEraseBkGnd;
	virtual void __fastcall CreateWnd(void);
	void __fastcall ClipChildren(bool Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual void __fastcall AlignControls(Controls::TControl* AControl, Types::TRect &Rect);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual bool __fastcall IsTransparent(void);
	
public:
	System::Variant BasePatch;
	__fastcall virtual TwwCustomTransparentGroupBox(Classes::TComponent* AOwner);
	virtual void __fastcall Invalidate(void);
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TwwCustomTransparentGroupBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomTransparentGroupBox(HWND ParentWindow) : Stdctrls::TCustomGroupBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwclearbuttongroup */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwclearbuttongroup;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwclearbuttongroupHPP
