// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwmenuitem.pas' rev: 22.00

#ifndef WwmenuitemHPP
#define WwmenuitemHPP

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
#include <ToolWin.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwmenuitem
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwMenuItem;
class PASCALIMPLEMENTATION TwwMenuItem : public Menus::TMenuItem
{
	typedef Menus::TMenuItem inherited;
	
protected:
	virtual void __fastcall AdvancedDrawItem(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State, bool TopLevel);
public:
	/* TMenuItem.Create */ inline __fastcall virtual TwwMenuItem(Classes::TComponent* AOwner) : Menus::TMenuItem(AOwner) { }
	/* TMenuItem.Destroy */ inline __fastcall virtual ~TwwMenuItem(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwmenuitem */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwmenuitem;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwmenuitemHPP
