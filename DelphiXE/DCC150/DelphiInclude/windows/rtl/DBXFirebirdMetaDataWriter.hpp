// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXFirebirdMetaDataWriter.pas' rev: 22.00

#ifndef DbxfirebirdmetadatawriterHPP
#define DbxfirebirdmetadatawriterHPP

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

namespace Dbxfirebirdmetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXFirebirdCustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXFirebirdCustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
protected:
	virtual void __fastcall MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxmetadatareader::TDBXDataTypeDescription* DataType, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides)/* overload */;
	
private:
	void __fastcall FormatStringType(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxmetadatareader::TDBXDataTypeDescription* DataType, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides);
	void __fastcall FormatBlobType(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxmetadatareader::TDBXDataTypeDescription* DataType, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides);
	bool __fastcall UnicodeSpecificationRequired(const Dbxcommontable::TDBXTableRow* ColumnRow);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXFirebirdCustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXFirebirdCustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString TypeName, const Dbxcommontable::TDBXTableRow* ColumnRow){ Dbxmetadatawriter::TDBXBaseMetaDataWriter::MakeSqlDataType(Buffer, TypeName, ColumnRow); }
	
};


class DELPHICLASS TDBXFirebirdMetaDataWriter;
class PASCALIMPLEMENTATION TDBXFirebirdMetaDataWriter : public TDBXFirebirdCustomMetaDataWriter
{
	typedef TDBXFirebirdCustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXFirebirdMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual bool __fastcall IsIndexNamesGlobal(void);
	virtual bool __fastcall IsSerializedIsolationSupported(void);
	virtual bool __fastcall IsMixed_DDL_DML_Supported(void);
	virtual int __fastcall GetAlterTableSupport(void);
	virtual System::UnicodeString __fastcall GetSqlKeyGeneratedIndexName(void);
	virtual bool __fastcall IsSchemasSupported(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXFirebirdMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxfirebirdmetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxfirebirdmetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxfirebirdmetadatawriterHPP
