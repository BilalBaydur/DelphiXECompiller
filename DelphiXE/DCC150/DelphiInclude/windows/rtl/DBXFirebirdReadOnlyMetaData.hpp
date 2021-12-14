// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXFirebirdReadOnlyMetaData.pas' rev: 22.00

#ifndef DbxfirebirdreadonlymetadataHPP
#define DbxfirebirdreadonlymetadataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit
#include <DBXMetaDataCommandFactory.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DBXFirebirdReadOnlyMetaData"

namespace Dbxfirebirdreadonlymetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXFirebirdMetaDataCommandFactory;
class PASCALIMPLEMENTATION TDBXFirebirdMetaDataCommandFactory : public Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory
{
	typedef Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory inherited;
	
public:
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall CreateMetaDataReader(void);
public:
	/* TObject.Create */ inline __fastcall TDBXFirebirdMetaDataCommandFactory(void) : Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXFirebirdMetaDataCommandFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxfirebirdreadonlymetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxfirebirdreadonlymetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxfirebirdreadonlymetadataHPP
