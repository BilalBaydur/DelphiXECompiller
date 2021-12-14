// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXInformixMetaDataReader.pas' rev: 22.00

#ifndef DbxinformixmetadatareaderHPP
#define DbxinformixmetadatareaderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXSqlScanner.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxinformixmetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXInformixCustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXInformixCustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TDBXInformixColumnsCursor;
	class PASCALIMPLEMENTATION TDBXInformixColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXInformixColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXInformixColumnsCursor(const TDBXInformixCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		void __fastcall ReadTypeInformation(void);
		System::UnicodeString __fastcall ComputeTypeName(void);
		int __fastcall ComputePrecision(void);
		bool __fastcall HasScale(void);
		int __fastcall ComputeScale(void);
		bool __fastcall ComputeNullable(void);
		bool __fastcall ComputeAutoIncrement(void);
		System::UnicodeString __fastcall ComputeDefaultValue(void);
		System::UnicodeString __fastcall ComputeTypeQualifier(void);
		System::UnicodeString __fastcall GetQualifier(const int FieldQualifier);
		System::UnicodeString __fastcall ComputeLiteralValue(void);
		TDBXInformixCustomMetaDataReader* FReader;
		short FColType;
		short FColLength;
		System::UnicodeString FDefaultType;
		System::UnicodeString FDefaultValue;
		System::UnicodeString FExtendedName;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ColumnsCatalogName = 0x0;
		
		static const System::ShortInt ColumnsSchemaName = 0x1;
		
		static const System::ShortInt ColumnsTableName = 0x2;
		
		static const System::ShortInt ColumnsColumnName = 0x3;
		
		static const System::ShortInt ColumnsColtype = 0x4;
		
		static const System::ShortInt ColumnsXname = 0x5;
		
		static const System::ShortInt ColumnsCollength = 0x6;
		
		static const System::ShortInt ColumnsOrdinal = 0x7;
		
		static const System::ShortInt ColumnsDefaultType = 0x8;
		
		static const System::ShortInt ColumnsDefaultValue = 0x9;
		
	};
	
	
	class DELPHICLASS TDBXInformixIndexColumnsCursor;
	class PASCALIMPLEMENTATION TDBXInformixIndexColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXInformixIndexColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXInformixIndexColumnsCursor(const TDBXInformixCustomMetaDataReader* Provider, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		int __fastcall IndexOfColumnName(const int KeyIndex);
		int FKeyIndex;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt KeyCount = 0x10;
		
		static const System::Word DefaultColumnSize = 0x100;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXInformixForeignKeyColumnsCursor;
	class PASCALIMPLEMENTATION TDBXInformixForeignKeyColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXInformixForeignKeyColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXInformixForeignKeyColumnsCursor(const TDBXInformixCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		int __fastcall IndexOfForeignKeyColumnName(const int KeyIndex);
		int __fastcall IndexOfPrimaryKeyColumnName(const int KeyIndex);
		
public:
		Dbxcommontable::TDBXSingleValueRow* FRow;
		
private:
		int FKeyIndex;
		static const System::ShortInt KeyCount = 0x10;
		
		static const System::Word DefaultColumnSize = 0x100;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TInformixParameter;
	class PASCALIMPLEMENTATION TInformixParameter : public System::TObject
	{
		typedef System::TObject inherited;
		
public:
		System::UnicodeString FName;
		System::UnicodeString FTypeName;
		System::UnicodeString FMode;
		Dbxmetadatareader::TDBXDataTypeDescription* FDataType;
		int FOrdinal;
		int FPrecision;
		int FScale;
		bool FPrecisionParsed;
public:
		/* TObject.Create */ inline __fastcall TInformixParameter(void) : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TInformixParameter(void) { }
		
	};
	
	
	class DELPHICLASS TDBXInformixProcedureParametersCursor;
	class PASCALIMPLEMENTATION TDBXInformixProcedureParametersCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall TDBXInformixProcedureParametersCursor(const TDBXInformixCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Parameter, const Dbxcommontable::TDBXTable* Cursor);
		__fastcall virtual ~TDBXInformixProcedureParametersCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		HIDESBASE void __fastcall SetValues(void);
		void __fastcall ComputeParams(void);
		TDBXInformixCustomMetaDataReader* FReader;
		System::UnicodeString FParameterName;
		int FParameterIndex;
		Dbxplatform::TDBXArrayList* FParams;
		TDBXInformixCustomMetaDataReader::TInformixParameter* FParameter;
		Dbxcommontable::TDBXTable* FCursor;
		Dbxplatform::TDBXStringBuffer* FBuffer;
		bool FBeforeEnd;
		bool FBeforeFirst;
		System::UnicodeString FProcedureType;
		bool FIsCatalogNameNull;
		bool FIsSchemaNameNull;
		bool FIsProcedureNameNull;
		System::UnicodeString FCatalogName;
		System::UnicodeString FSchemaName;
		System::UnicodeString FProcedureName;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt LineNumberOrdinal = 0x6;
		
	};
	
	
	
public:
	__fastcall virtual ~TDBXInformixCustomMetaDataReader(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString Index);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeyColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryCatalog, const System::UnicodeString PrimarySchema, const System::UnicodeString PrimaryTable, const System::UnicodeString PrimaryKeyName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureParameters(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure, const System::UnicodeString Parameter);
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetAllDataTypes(void);
	
private:
	HIDESBASE void __fastcall InitScanner(void);
	void __fastcall ParseProcedure(const System::UnicodeString Definition, const System::UnicodeString Type, const Dbxplatform::TDBXArrayList* Params);
	int __fastcall ParseType(const int InToken, const TInformixParameter* Param);
	int __fastcall ParsePrecision(const TInformixParameter* Param);
	int __fastcall ToInt(const System::UnicodeString Value);
	
protected:
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
	
private:
	Dbxmetadatareader::TDBXDataTypeDescriptionArray FAlltypes;
	System::UnicodeString FQuoteChar;
	__property Dbxmetadatareader::TDBXDataTypeDescriptionArray AllDataTypes = {read=GetAllDataTypes};
	static const System::ShortInt CharType = 0x0;
	
	static const System::ShortInt SmallintType = 0x1;
	
	static const System::ShortInt IntegerType = 0x2;
	
	static const System::ShortInt FloatType = 0x3;
	
	static const System::ShortInt SmallfloatType = 0x4;
	
	static const System::ShortInt DecimalType = 0x5;
	
	static const System::ShortInt SerialType = 0x6;
	
	static const System::ShortInt DateType = 0x7;
	
	static const System::ShortInt MoneyType = 0x8;
	
	static const System::ShortInt DatetimeType = 0xa;
	
	static const System::ShortInt ByteType = 0xb;
	
	static const System::ShortInt TextType = 0xc;
	
	static const System::ShortInt VarcharType = 0xd;
	
	static const System::ShortInt IntervalType = 0xe;
	
	static const System::ShortInt NcharType = 0xf;
	
	static const System::ShortInt NvarcharType = 0x10;
	
	static const System::ShortInt Int8_Type = 0x11;
	
	static const System::ShortInt Serial8_Type = 0x12;
	
	static const System::ShortInt LvarcharType = 0x13;
	
	static const System::ShortInt BooleanType = 0x14;
	
	static const System::ShortInt TypesCount = 0x15;
	
	static const System::ShortInt NullType = 0x9;
	
	static const System::ShortInt SetType = 0x13;
	
	static const System::ShortInt MultisetType = 0x14;
	
	static const System::ShortInt ListType = 0x15;
	
	static const System::ShortInt UnnamedRowType = 0x16;
	
	static const System::ShortInt VarOpaqueType = 0x28;
	
	static const System::ShortInt FixedOpaqueType = 0x29;
	
	static const System::Word NullTypeFlag = 0x100;
	
	#define TDBXInformixCustomMetaDataReader_CharTypename L"CHAR"
	
	#define TDBXInformixCustomMetaDataReader_VarcharTypename L"VARCHAR"
	
	#define TDBXInformixCustomMetaDataReader_LvarcharTypename L"LVARCHAR"
	
	#define TDBXInformixCustomMetaDataReader_NcharTypename L"NCHAR"
	
	#define TDBXInformixCustomMetaDataReader_NvarcharTypename L"NVARCHAR"
	
	#define TDBXInformixCustomMetaDataReader_SmallintTypename L"SMALLINT"
	
	#define TDBXInformixCustomMetaDataReader_IntegerTypename L"INTEGER"
	
	#define TDBXInformixCustomMetaDataReader_Int8_Typename L"INT8"
	
	#define TDBXInformixCustomMetaDataReader_FloatTypename L"FLOAT"
	
	#define TDBXInformixCustomMetaDataReader_SmallfloatTypename L"SMALLFLOAT"
	
	#define TDBXInformixCustomMetaDataReader_DecimalTypename L"DECIMAL"
	
	#define TDBXInformixCustomMetaDataReader_SerialTypename L"SERIAL"
	
	#define TDBXInformixCustomMetaDataReader_Serial8_Typename L"SERIAL8"
	
	#define TDBXInformixCustomMetaDataReader_DateTypename L"DATE"
	
	#define TDBXInformixCustomMetaDataReader_DatetimeTypename L"DATETIME"
	
	#define TDBXInformixCustomMetaDataReader_IntervalTypename L"INTERVAL"
	
	#define TDBXInformixCustomMetaDataReader_MoneyTypename L"MONEY"
	
	#define TDBXInformixCustomMetaDataReader_ByteTypename L"BYTE"
	
	#define TDBXInformixCustomMetaDataReader_TextTypename L"TEXT"
	
	#define TDBXInformixCustomMetaDataReader_BooleanTypename L"BOOLEAN"
	
	#define TDBXInformixCustomMetaDataReader_Returning L"RETURNING"
	
	#define TDBXInformixCustomMetaDataReader_In L"IN"
	
	#define TDBXInformixCustomMetaDataReader_Out L"OUT"
	
	#define TDBXInformixCustomMetaDataReader_Inout L"INOUT"
	
	#define TDBXInformixCustomMetaDataReader_Like L"LIKE"
	
	#define TDBXInformixCustomMetaDataReader_References L"REFERENCES"
	
	#define TDBXInformixCustomMetaDataReader_IntType L"INT"
	
	#define TDBXInformixCustomMetaDataReader_DecType L"DEC"
	
	#define TDBXInformixCustomMetaDataReader_BigintType L"BIGINT"
	
	#define TDBXInformixCustomMetaDataReader_Character L"CHARACTER"
	
	#define TDBXInformixCustomMetaDataReader_Varying L"VARYING"
	
	#define TDBXInformixCustomMetaDataReader_RealType L"REAL"
	
	#define TDBXInformixCustomMetaDataReader_DoubleType L"DOUBLE"
	
	#define TDBXInformixCustomMetaDataReader_Precision L"PRECISION"
	
	#define TDBXInformixCustomMetaDataReader_Numeric L"NUMERIC"
	
	#define TDBXInformixCustomMetaDataReader_Default L"DEFAULT"
	
	#define TDBXInformixCustomMetaDataReader_QuoteCharacterEnabled L"QuoteCharEnabled"
	
	static const System::ShortInt TokenCreate = 0x33;
	
	static const System::ShortInt TokenProcedure = 0x34;
	
	static const System::ShortInt TokenFunction = 0x35;
	
	static const System::ShortInt TokenReturning = 0x36;
	
	static const System::ShortInt TokenOut = 0x37;
	
	static const System::ShortInt TokenInout = 0x38;
	
	static const System::ShortInt TokenLike = 0x39;
	
	static const System::ShortInt TokenReferences = 0x3a;
	
	static const System::ShortInt TokenInt = 0x3b;
	
	static const System::ShortInt TokenDec = 0x3c;
	
	static const System::ShortInt TokenBigint = 0x3d;
	
	static const System::ShortInt TokenCharacter = 0x3e;
	
	static const System::ShortInt TokenVarying = 0x3f;
	
	static const System::ShortInt TokenReal = 0x40;
	
	static const System::ShortInt TokenDouble = 0x41;
	
	static const System::ShortInt TokenPrecision = 0x42;
	
	static const System::ShortInt TokenNumeric = 0x43;
	
	static const System::ShortInt TokenDefault = 0x44;
	
public:
	/* TObject.Create */ inline __fastcall TDBXInformixCustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXInformixMetaDataReader;
class PASCALIMPLEMENTATION TDBXInformixMetaDataReader : public TDBXInformixCustomMetaDataReader
{
	typedef TDBXInformixCustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual System::UnicodeString __fastcall GetViewType(void);
	virtual System::UnicodeString __fastcall GetSystemTableType(void);
	virtual System::UnicodeString __fastcall GetSynonymType(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void);
	virtual System::UnicodeString __fastcall GetSqlForSchemas(void);
	virtual System::UnicodeString __fastcall GetSqlForTables(void);
	virtual System::UnicodeString __fastcall GetSqlForViews(void);
	virtual System::UnicodeString __fastcall GetSqlForColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexes(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeys(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForSynonyms(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureSources(void);
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXInformixCustomMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXInformixMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXInformixMetaDataReader(void) : TDBXInformixCustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxinformixmetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxinformixmetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxinformixmetadatareaderHPP
