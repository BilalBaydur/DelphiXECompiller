// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwStacks.pas' rev: 22.00

#ifndef WwstacksHPP
#define WwstacksHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwstacks
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TStackStr;
class PASCALIMPLEMENTATION TStackStr : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TStringList* list;
	
public:
	void __fastcall push(System::UnicodeString s);
	System::UnicodeString __fastcall pop(void);
	__fastcall TStackStr(void);
	__fastcall virtual ~TStackStr(void);
	int __fastcall count(void);
};


class DELPHICLASS TStackPtr;
class PASCALIMPLEMENTATION TStackPtr : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TList* list;
	
public:
	void __fastcall push(void * s);
	void * __fastcall pop(void);
	__fastcall TStackPtr(void);
	__fastcall virtual ~TStackPtr(void);
	int __fastcall count(void);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwstacks */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwstacks;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwstacksHPP
