// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwclearpanel.pas' rev: 22.00

#ifndef WwclearpanelHPP
#define WwclearpanelHPP

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

//-- user supplied -----------------------------------------------------------

namespace Wwclearpanel
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwCustomTransparentPanel;
class PASCALIMPLEMENTATION TwwCustomTransparentPanel : public Extctrls::TCustomPanel
{
	typedef Extctrls::TCustomPanel inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Messages::TWMMove &Message);
	
protected:
	bool FTransparent;
	bool FInEraseBkGnd;
	void __fastcall ClipChildren(bool Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual void __fastcall AlignControls(Controls::TControl* AControl, Types::TRect &Rect);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual bool __fastcall IsTransparent(void);
	
public:
	System::Variant BasePatch;
	__fastcall virtual TwwCustomTransparentPanel(Classes::TComponent* AOwner);
	virtual void __fastcall Invalidate(void);
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TwwCustomTransparentPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomTransparentPanel(HWND ParentWindow) : Extctrls::TCustomPanel(ParentWindow) { }
	
};


class DELPHICLASS TfcTransparentPanel;
class PASCALIMPLEMENTATION TfcTransparentPanel : public TwwCustomTransparentPanel
{
	typedef TwwCustomTransparentPanel inherited;
	
__published:
	__property Align = {default=0};
	__property BevelInner = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BorderStyle = {default=0};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777201};
	__property Transparent = {default=0};
public:
	/* TwwCustomTransparentPanel.Create */ inline __fastcall virtual TfcTransparentPanel(Classes::TComponent* AOwner) : TwwCustomTransparentPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TfcTransparentPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfcTransparentPanel(HWND ParentWindow) : TwwCustomTransparentPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwclearpanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwclearpanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwclearpanelHPP
