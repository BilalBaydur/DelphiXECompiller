// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwchangelink.pas' rev: 22.00

#ifndef WwchangelinkHPP
#define WwchangelinkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwchangelink
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwChangeLink;
class PASCALIMPLEMENTATION TwwChangeLink : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnChanging;
	Classes::TNotifyEvent FOnLoaded;
	System::TObject* FSender;
	
public:
	virtual void __fastcall Change(void);
	virtual void __fastcall Changing(void);
	virtual void __fastcall Loaded(void);
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property Classes::TNotifyEvent OnLoaded = {read=FOnLoaded, write=FOnLoaded};
	__property System::TObject* Sender = {read=FSender, write=FSender};
public:
	/* TObject.Create */ inline __fastcall TwwChangeLink(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwChangeLink(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwchangelink */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwchangelink;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwchangelinkHPP
