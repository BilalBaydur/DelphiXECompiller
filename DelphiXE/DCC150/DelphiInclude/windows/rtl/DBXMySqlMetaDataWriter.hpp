// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMySqlMetaDataWriter.pas' rev: 22.00

#ifndef DbxmysqlmetadatawriterHPP
#define DbxmysqlmetadatawriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmysqlmetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMySqlCustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXMySqlCustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
protected:
	virtual void __fastcall MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxmetadatareader::TDBXDataTypeDescription* DataType, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides)/* overload */;
	virtual bool __fastcall CanCreateIndexAsKey(const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlCreateIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlDropIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
	virtual void __fastcall MakeSqlDropForeignKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* ForeignKey);
	virtual void __fastcall MakeSqlColumnTypeCast(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTable* Column);
	
private:
	bool __fastcall UnicodeSpecificationRequired(const Dbxcommontable::TDBXTableRow* ColumnRow);
	bool __fastcall HasAutoIncrementColumn(const Dbxcommontable::TDBXTableRow* Index);
	System::UnicodeString __fastcall FindCastType(const Dbxcommontable::TDBXTableRow* Column);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXMySqlCustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXMySqlCustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString TypeName, const Dbxcommontable::TDBXTableRow* ColumnRow){ Dbxmetadatawriter::TDBXBaseMetaDataWriter::MakeSqlDataType(Buffer, TypeName, ColumnRow); }
	
};


class DELPHICLASS TDBXMySqlMetaDataWriter;
class PASCALIMPLEMENTATION TDBXMySqlMetaDataWriter : public TDBXMySqlCustomMetaDataWriter
{
	typedef TDBXMySqlCustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXMySqlMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual int __fastcall GetAlterTableSupport(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXMySqlMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmysqlmetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmysqlmetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmysqlmetadatawriterHPP
