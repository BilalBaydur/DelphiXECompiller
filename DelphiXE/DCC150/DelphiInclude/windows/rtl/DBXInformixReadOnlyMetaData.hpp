// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXInformixReadOnlyMetaData.pas' rev: 22.00

#ifndef DbxinformixreadonlymetadataHPP
#define DbxinformixreadonlymetadataHPP

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
#pragma link "DBXInformixReadOnlyMetaData"

namespace Dbxinformixreadonlymetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXInformixMetaDataCommandFactory;
class PASCALIMPLEMENTATION TDBXInformixMetaDataCommandFactory : public Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory
{
	typedef Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory inherited;
	
public:
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall CreateMetaDataReader(void);
public:
	/* TObject.Create */ inline __fastcall TDBXInformixMetaDataCommandFactory(void) : Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXInformixMetaDataCommandFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxinformixreadonlymetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxinformixreadonlymetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxinformixreadonlymetadataHPP
