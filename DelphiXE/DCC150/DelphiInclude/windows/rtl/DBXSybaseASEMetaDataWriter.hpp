// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSybaseASEMetaDataWriter.pas' rev: 22.00

#ifndef DbxsybaseasemetadatawriterHPP
#define DbxsybaseasemetadatawriterHPP

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

namespace Dbxsybaseasemetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASECustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXSybaseASECustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
public:
	virtual void __fastcall MakeSqlCreate(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts);
	virtual void __fastcall MakeSqlAlter(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts);
	virtual void __fastcall MakeSqlDrop(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item);
	
protected:
	virtual void __fastcall MakeSqlColumnTypeCast(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTable* Column);
	virtual void __fastcall MakeSqlDropSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
	
private:
	#define TDBXSybaseASECustomMetaDataWriter_SetQuotedIdentifiersOn L"SET QUOTED_IDENTIFIER ON;\n"
	
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXSybaseASECustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASECustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
};


class DELPHICLASS TDBXSybaseASEMetaDataWriter;
class PASCALIMPLEMENTATION TDBXSybaseASEMetaDataWriter : public TDBXSybaseASECustomMetaDataWriter
{
	typedef TDBXSybaseASECustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXSybaseASEMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementInserts(void);
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsSerializedIsolationSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
	virtual bool __fastcall IsDDLTransactionsSupported(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXSybaseASEMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasemetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasemetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasemetadatawriterHPP
