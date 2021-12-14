// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMsSqlMetaDataWriter.pas' rev: 22.00

#ifndef DbxmssqlmetadatawriterHPP
#define DbxmssqlmetadatawriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmssqlmetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMsSqlCustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXMsSqlCustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
protected:
	virtual void __fastcall MakeSqlDropSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXMsSqlCustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXMsSqlCustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
};


class DELPHICLASS TDBXMsSqlMetaDataWriter;
class PASCALIMPLEMENTATION TDBXMsSqlMetaDataWriter : public TDBXMsSqlCustomMetaDataWriter
{
	typedef TDBXMsSqlCustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXMsSqlMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementInserts(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXMsSqlMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmssqlmetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmssqlmetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmssqlmetadatawriterHPP
