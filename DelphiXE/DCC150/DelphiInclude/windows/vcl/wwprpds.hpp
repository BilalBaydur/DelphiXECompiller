// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwprpds.pas' rev: 22.00

#ifndef WwprpdsHPP
#define WwprpdsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprpds
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDataSetProperty;
class PASCALIMPLEMENTATION TwwDataSetProperty : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
public:
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
	void __fastcall wwGetStrProc(const System::UnicodeString s);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwDataSetProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwDataSetProperty(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwprpds */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprpds;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwprpdsHPP
