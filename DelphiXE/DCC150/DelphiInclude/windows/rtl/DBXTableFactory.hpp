// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXTableFactory.pas' rev: 22.00

#ifndef DbxtablefactoryHPP
#define DbxtablefactoryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxtablefactory
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXTableFactory;
class PASCALIMPLEMENTATION TDBXTableFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static Dbxcommontable::TDBXTable* __fastcall CreateDBXTable();
public:
	/* TObject.Create */ inline __fastcall TDBXTableFactory(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTableFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxtablefactory */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtablefactory;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtablefactoryHPP
