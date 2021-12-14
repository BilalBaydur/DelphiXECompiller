// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXFirebirdMetaDataReader.pas' rev: 22.00

#ifndef DbxfirebirdmetadatareaderHPP
#define DbxfirebirdmetadatareaderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataNames.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxfirebirdmetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXFirebirdCustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXFirebirdCustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	__fastcall virtual ~TDBXFirebirdCustomMetaDataReader(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureParameters(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure, const System::UnicodeString Parameter);
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context);
	virtual bool __fastcall IsDefaultCharSetUnicode(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetAllDataTypes(void);
	
public:
	bool FDefaultCharSetIsUnicode;
	
private:
	Dbxmetadatareader::TDBXDataTypeDescriptionArray FAlltypes;
	System::UnicodeString FQuoteChar;
	
public:
	__property bool DefaultCharSetUnicode = {read=IsDefaultCharSetUnicode, nodefault};
	__property Dbxmetadatareader::TDBXDataTypeDescriptionArray AllDataTypes = {read=GetAllDataTypes};
	static const System::ShortInt CharType = 0x0;
	
	static const System::ShortInt VarcharType = 0x1;
	
	static const System::ShortInt IntegerType = 0x2;
	
	static const System::ShortInt SmallintType = 0x3;
	
	static const System::ShortInt FloatType = 0x4;
	
	static const System::ShortInt DoubleType = 0x5;
	
	static const System::ShortInt NumericType = 0x6;
	
	static const System::ShortInt DecimalType = 0x7;
	
	static const System::ShortInt DateType = 0x8;
	
	static const System::ShortInt TimeType = 0x9;
	
	static const System::ShortInt TimestampType = 0xa;
	
	static const System::ShortInt BlobType = 0xb;
	
	static const System::ShortInt BigintType = 0xc;
	
	static const System::ShortInt DefaultCharset = 0x0;
	
	static const System::ShortInt CharsetUnicodeFss = 0x3;
	
	static const System::ShortInt CharsetSjis208 = 0x5;
	
	static const System::ShortInt CharsetEucj208 = 0x6;
	
	
private:
	static const System::ShortInt TypesCount = 0xd;
	
	#define TDBXFirebirdCustomMetaDataReader_DefaultStringStart L"DEFAULT "
	
	#define TDBXFirebirdCustomMetaDataReader_DefaultCharsetIsUnicode L"UnicodeEncoding"
	
	#define TDBXFirebirdCustomMetaDataReader_QuoteCharacterEnabled L"QuoteCharEnabled"
	
	static const System::ShortInt ColumnsFieldType = 0x4;
	
	static const System::ShortInt ColumnsSubtype = 0xc;
	
	static const System::ShortInt ParametersFieldType = 0x5;
	
	static const System::ShortInt ParametersSubtype = 0xa;
	
public:
	/* TObject.Create */ inline __fastcall TDBXFirebirdCustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXFirebirdMetaDataReader;
class PASCALIMPLEMENTATION TDBXFirebirdMetaDataReader : public TDBXFirebirdCustomMetaDataReader
{
	typedef TDBXFirebirdCustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSchemas(const System::UnicodeString CatalogName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSynonyms(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString SynonymName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual bool __fastcall IsDescendingIndexSupported(void);
	virtual bool __fastcall IsDescendingIndexColumnsSupported(void);
	virtual bool __fastcall IsNestedTransactionsSupported(void);
	virtual bool __fastcall IsParameterMetadataSupported(void);
	virtual System::UnicodeString __fastcall GetSqlForTables(void);
	virtual System::UnicodeString __fastcall GetSqlForViews(void);
	virtual System::UnicodeString __fastcall GetSqlForColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexes(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeys(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureSources(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXFirebirdCustomMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXFirebirdMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXFirebirdMetaDataReader(void) : TDBXFirebirdCustomMetaDataReader() { }
	
};


class DELPHICLASS TDBXFirebirdTypeFilterCursor;
class PASCALIMPLEMENTATION TDBXFirebirdTypeFilterCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
{
	typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
	
public:
	class DELPHICLASS Tibase_const;
	class PASCALIMPLEMENTATION Tibase_const : public System::TObject
	{
		typedef System::TObject inherited;
		
public:
		static const System::ShortInt FBlr_text = 0xe;
		
		static const System::ShortInt FBlr_text2 = 0xf;
		
		static const System::ShortInt FBlr_short = 0x7;
		
		static const System::ShortInt FBlr_long = 0x8;
		
		static const System::ShortInt FBlr_quad = 0x9;
		
		static const System::ShortInt FBlr_int64 = 0x10;
		
		static const System::ShortInt FBlr_float = 0xa;
		
		static const System::ShortInt FBlr_double = 0x1b;
		
		static const System::ShortInt FBlr_d_float = 0xb;
		
		static const System::ShortInt FBlr_timestamp = 0x23;
		
		static const System::ShortInt FBlr_varying = 0x25;
		
		static const System::ShortInt FBlr_varying2 = 0x26;
		
		static const System::Word FBlr_blob = 0x105;
		
		static const System::ShortInt FBlr_cstring = 0x28;
		
		static const System::ShortInt FBlr_cstring2 = 0x29;
		
		static const System::ShortInt FBlr_blob_id = 0x2d;
		
		static const System::ShortInt FBlr_sql_date = 0xc;
		
		static const System::ShortInt FBlr_sql_time = 0xd;
		
public:
		/* TObject.Create */ inline __fastcall Tibase_const(void) : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~Tibase_const(void) { }
		
	};
	
	
	
public:
	__fastcall virtual ~TDBXFirebirdTypeFilterCursor(void);
	virtual bool __fastcall Next(void);
	
protected:
	__fastcall TDBXFirebirdTypeFilterCursor(const TDBXFirebirdCustomMetaDataReader* Provider, const System::UnicodeString MetadataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor, const int OrdinalTypeName, const int OrdinalFieldType, const int OrdinalSubType, const int OrdinalScale, const int OrdinalDefaultValue);
	virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
private:
	void __fastcall ComputeDataType(void);
	System::UnicodeString __fastcall ComputeTypeName(void);
	bool __fastcall ComputeUnicode(void);
	System::UnicodeString __fastcall ComputeDefaultValue(void);
	int __fastcall GetIBType(const short FieldType, const short FieldSubType, const short FieldScale);
	TDBXFirebirdCustomMetaDataReader* FCustomProvider;
	int FOrdinalTypeName;
	int FOrdinalFieldType;
	int FOrdinalSubType;
	int FOrdinalCharSet;
	int FOrdinalScale;
	int FOrdinalDefaultValue;
	Dbxmetadatareader::TDBXDataTypeDescription* FDataType;
	Dbxcommontable::TDBXSingleValueRow* FRow;
	#define TDBXFirebirdTypeFilterCursor_DefaultStringStart L"DEFAULT "
	
/* Hoisted overloads: */
	
protected:
	inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxfirebirdmetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxfirebirdmetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxfirebirdmetadatareaderHPP
