// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetadataCommon.pas' rev: 22.00

#ifndef DbxmetadatacommonHPP
#define DbxmetadatacommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatacommon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TInvocationMetadataDelegate;
class PASCALIMPLEMENTATION TInvocationMetadataDelegate : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static void __fastcall StoreMetadata(const Dbxjson::TJSONObject* MetaData);
	static void __fastcall WriteMetadata(const System::TObject* ConnectionHandler);
	static void __fastcall ClearMetadata(const System::TObject* ConnectionHandler);
public:
	/* TObject.Create */ inline __fastcall TInvocationMetadataDelegate(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TInvocationMetadataDelegate(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatacommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatacommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatacommonHPP
