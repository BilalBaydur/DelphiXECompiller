// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataUtil.pas' rev: 22.00

#ifndef DbxmetadatautilHPP
#define DbxmetadatautilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatautil
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataUtil;
class PASCALIMPLEMENTATION TDBXMetaDataUtil : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static System::UnicodeString __fastcall QuoteIdentifier(const System::UnicodeString UnquotedIdentifier, const System::UnicodeString QuoteChar, const System::UnicodeString QuotePrefix, const System::UnicodeString QuoteSuffix);
	static System::UnicodeString __fastcall UnquotedIdentifier(const System::UnicodeString QuotedIdentifier, const System::UnicodeString QuoteChar, const System::UnicodeString QuotePrefix, const System::UnicodeString QuoteSuffix);
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataUtil(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataUtil(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatautil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatautil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatautilHPP
