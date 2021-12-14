// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSybaseASEReadOnlyMetaData.pas' rev: 22.00

#ifndef DbxsybaseasereadonlymetadataHPP
#define DbxsybaseasereadonlymetadataHPP

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
#pragma link "DBXSybaseASEReadOnlyMetaData"

namespace Dbxsybaseasereadonlymetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASEMetaDataCommandFactory;
class PASCALIMPLEMENTATION TDBXSybaseASEMetaDataCommandFactory : public Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory
{
	typedef Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory inherited;
	
public:
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall CreateMetaDataReader(void);
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASEMetaDataCommandFactory(void) : Dbxmetadatacommandfactory::TDBXMetaDataCommandFactory() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSybaseASEMetaDataCommandFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasereadonlymetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasereadonlymetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasereadonlymetadataHPP
