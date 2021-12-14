// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXOracleMetaDataWriter.pas' rev: 22.00

#ifndef DbxoraclemetadatawriterHPP
#define DbxoraclemetadatawriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxoraclemetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXOracleMetaDataWriter;
class PASCALIMPLEMENTATION TDBXOracleMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
public:
	__fastcall TDBXOracleMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void);
	virtual bool __fastcall IsIndexNamesGlobal(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXOracleMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxoraclemetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxoraclemetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxoraclemetadatawriterHPP
