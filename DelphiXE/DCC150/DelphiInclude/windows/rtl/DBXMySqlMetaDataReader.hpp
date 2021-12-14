// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMySqlMetaDataReader.pas' rev: 22.00

#ifndef DbxmysqlmetadatareaderHPP
#define DbxmysqlmetadatareaderHPP

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
#include <DBXSqlScanner.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmysqlmetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMySqlCustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXMySqlCustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TMySqlColumnType;
	class PASCALIMPLEMENTATION TMySqlColumnType : public System::TObject
	{
		typedef System::TObject inherited;
		
public:
		System::UnicodeString FDataType;
		int FPrecision;
		int FScale;
		bool FUnsigned;
		bool FUnicode;
		bool FNotnull;
public:
		/* TObject.Create */ inline __fastcall TMySqlColumnType(void) : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TMySqlColumnType(void) { }
		
	};
	
	
	class DELPHICLASS TMySqlParameter;
	class PASCALIMPLEMENTATION TMySqlParameter : public TDBXMySqlCustomMetaDataReader::TMySqlColumnType
	{
		typedef TDBXMySqlCustomMetaDataReader::TMySqlColumnType inherited;
		
public:
		System::UnicodeString FName;
		System::UnicodeString FMode;
		int FOrdinal;
public:
		/* TObject.Create */ inline __fastcall TMySqlParameter(void) : TDBXMySqlCustomMetaDataReader::TMySqlColumnType() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TMySqlParameter(void) { }
		
	};
	
	
	class DELPHICLASS TMySqlForeignKey;
	class PASCALIMPLEMENTATION TMySqlForeignKey : public System::TObject
	{
		typedef System::TObject inherited;
		
public:
		__fastcall TMySqlForeignKey(void);
		__fastcall virtual ~TMySqlForeignKey(void);
		virtual void __fastcall Reset(void);
		System::UnicodeString FConstraintName;
		Classes::TStringList* FKeyColumns;
		System::UnicodeString FReferencedTableName;
		Classes::TStringList* FReferencedColumns;
	};
	
	
	class DELPHICLASS TDBXMySql4TablesCursor;
	class PASCALIMPLEMENTATION TDBXMySql4TablesCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4TablesCursor(void);
		
protected:
		__fastcall TDBXMySql4TablesCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
public:
		Dbxcommon::TDBXWritableValue* FTableValue;
		Dbxcommon::TDBXWritableValue* FNullValue;
		
private:
		static const System::ShortInt ShowTablesTableNameOrdinal = 0x0;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySqlColumnsTableCursor;
	class PASCALIMPLEMENTATION TDBXMySqlColumnsTableCursor : public Dbxmetadatareader::TDBXColumnsTableCursor
	{
		typedef Dbxmetadatareader::TDBXColumnsTableCursor inherited;
		
public:
		__fastcall TDBXMySqlColumnsTableCursor(const TDBXMySqlCustomMetaDataReader* Reader, const bool Version5, const Dbxcommontable::TDBXTable* Original, const Dbxcommontable::TDBXTable* Sanitized);
		__fastcall virtual ~TDBXMySqlColumnsTableCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
public:
		Dbxcommontable::TDBXSingleValueRow* FRow;
		
private:
		Dbxcommontable::TDBXTable* FOriginal;
		bool FVersion5;
		static const System::ShortInt MysqlIsUnicode = 0xc;
		
		static const System::ShortInt MysqlIsUnsigned = 0xd;
		
	};
	
	
	class DELPHICLASS TDBXMySql4ColumnsCursor;
	class PASCALIMPLEMENTATION TDBXMySql4ColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4ColumnsCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySql4ColumnsCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString TableName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		System::UnicodeString __fastcall ComputeDefaultValue(void);
		bool __fastcall ComputeAutoIncrement(void);
		bool __fastcall ComputeNullable(void);
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FTables;
		int FTableIndex;
		System::UnicodeString FSql;
		System::UnicodeString FTableName;
		int FColumnNumber;
		TDBXMySqlCustomMetaDataReader::TMySqlColumnType* FColumnType;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowColumnsFieldOrdinal = 0x0;
		
		static const System::ShortInt ShowColumnsTypeOrdinal = 0x1;
		
		static const System::ShortInt ShowColumnsNullOrdinal = 0x2;
		
		static const System::ShortInt ShowColumnsKeyOrdinal = 0x3;
		
		static const System::ShortInt ShowColumnsDefaultOrdinal = 0x4;
		
		static const System::ShortInt ShowColumnsExtraOrdinal = 0x5;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySql4IndexesCursor;
	class PASCALIMPLEMENTATION TDBXMySql4IndexesCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4IndexesCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySql4IndexesCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString TableName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		System::UnicodeString __fastcall ComputeConstraintName(void);
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FTables;
		int FTableIndex;
		System::UnicodeString FSql;
		System::UnicodeString FTableName;
		bool FUniqueIndex;
		System::UnicodeString FIndexName;
		System::UnicodeString FPrevIndexName;
		System::UnicodeString FPrevTableName;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowIndexTableOrdinal = 0x0;
		
		static const System::ShortInt ShowIndexNonUniqueOrdinal = 0x1;
		
		static const System::ShortInt ShowIndexKeyNameOrdinal = 0x2;
		
		static const System::ShortInt ShowIndexSeqInIndexOrdinal = 0x3;
		
		static const System::ShortInt ShowIndexColumnNameOrdinal = 0x4;
		
		static const System::ShortInt ShowIndexCollationOrdinal = 0x5;
		
		static const System::ShortInt ShowIndexCardinalityOrdinal = 0x6;
		
		static const System::ShortInt ShowIndexSubPartOrdinal = 0x7;
		
		static const System::ShortInt ShowIndexPackedOrdinal = 0x8;
		
		static const System::ShortInt ShowIndexNullOrdinal = 0x9;
		
		static const System::ShortInt ShowIndexIndexTypeOrdinal = 0xa;
		
		static const System::ShortInt ShowIndexCommentOrdinal = 0xb;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySql4IndexColumnsCursor;
	class PASCALIMPLEMENTATION TDBXMySql4IndexColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4IndexColumnsCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySql4IndexColumnsCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString TableName, const System::UnicodeString IndexName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FTables;
		int FTableIndex;
		System::UnicodeString FSql;
		System::UnicodeString FWantedIndexName;
		System::UnicodeString FTableName;
		System::UnicodeString FIndexName;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowIndexTableOrdinal = 0x0;
		
		static const System::ShortInt ShowIndexNonUniqueOrdinal = 0x1;
		
		static const System::ShortInt ShowIndexKeyNameOrdinal = 0x2;
		
		static const System::ShortInt ShowIndexSeqInIndexOrdinal = 0x3;
		
		static const System::ShortInt ShowIndexColumnNameOrdinal = 0x4;
		
		static const System::ShortInt ShowIndexCollationOrdinal = 0x5;
		
		static const System::ShortInt ShowIndexCardinalityOrdinal = 0x6;
		
		static const System::ShortInt ShowIndexSubPartOrdinal = 0x7;
		
		static const System::ShortInt ShowIndexPackedOrdinal = 0x8;
		
		static const System::ShortInt ShowIndexNullOrdinal = 0x9;
		
		static const System::ShortInt ShowIndexIndexTypeOrdinal = 0xa;
		
		static const System::ShortInt ShowIndexCommentOrdinal = 0xb;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySql4ForeignKeyCursor;
	class PASCALIMPLEMENTATION TDBXMySql4ForeignKeyCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4ForeignKeyCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySql4ForeignKeyCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString TableName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		
public:
		TDBXMySqlCustomMetaDataReader::TMySqlForeignKey* FKey;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		
private:
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FTables;
		int FTableIndex;
		System::UnicodeString FSql;
		System::UnicodeString FTableName;
		System::UnicodeString FSqlCreateTable;
		int FParseIndex;
		static const System::ShortInt ShowCreateTableSqlOrdinal = 0x1;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySql4ForeignKeyColumnsCursor;
	class PASCALIMPLEMENTATION TDBXMySql4ForeignKeyColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySql4ForeignKeyColumnsCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySql4ForeignKeyColumnsCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString TableName, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryTableName, const System::UnicodeString PrimaryKeyName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		HIDESBASE void __fastcall SetValues(void);
		
public:
		TDBXMySqlCustomMetaDataReader::TMySqlForeignKey* FKey;
		
private:
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FTables;
		int FTableIndex;
		System::UnicodeString FSql;
		System::UnicodeString FTableName;
		System::UnicodeString FForeignKeyName;
		System::UnicodeString FPrimaryTableName;
		System::UnicodeString FPrimaryKeyName;
		System::UnicodeString FSqlCreateTable;
		int FParseIndex;
		int FKeyIndex;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowCreateTableSqlOrdinal = 0x1;
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySqlProcedureSourcesCursor;
	class PASCALIMPLEMENTATION TDBXMySqlProcedureSourcesCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySqlProcedureSourcesCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySqlProcedureSourcesCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString SchemaName, const System::UnicodeString ProcedureName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		System::UnicodeString __fastcall ComputeDefinition(void);
		System::UnicodeString __fastcall ComputeDefiner(void);
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FProcedures;
		Classes::TStringList* FProcedureTypes;
		int FProcedureIndex;
		System::UnicodeString FSql;
		System::UnicodeString FProcedureName;
		System::UnicodeString FProcedureType;
		System::UnicodeString FDefiner;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowCreateProcedureSqlOrdinal = 0x2;
		
		#define TDBXMySqlCustomMetaDataReader_TDBXMySqlProcedureSourcesCursor_DefinerString L"DEFINER="
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	class DELPHICLASS TDBXMySqlProcedureParametersCursor;
	class PASCALIMPLEMENTATION TDBXMySqlProcedureParametersCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXMySqlProcedureParametersCursor(void);
		virtual void __fastcall Close(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXMySqlProcedureParametersCursor(const TDBXMySqlCustomMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const System::UnicodeString Sql, const System::UnicodeString SchemaName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		bool __fastcall InitNextCursor(void);
		HIDESBASE void __fastcall SetValues(void);
		void __fastcall ComputeParams(void);
		TDBXMySqlCustomMetaDataReader* FReader;
		Classes::TStringList* FProcedures;
		Classes::TStringList* FProcedureTypes;
		int FProcedureIndex;
		int FParameterIndex;
		System::UnicodeString FSql;
		System::UnicodeString FProcedureName;
		System::UnicodeString FParameterName;
		System::UnicodeString FProcedureType;
		System::UnicodeString FDefiner;
		Dbxplatform::TDBXArrayList* FParams;
		TDBXMySqlCustomMetaDataReader::TMySqlParameter* FParameter;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt ShowCreateProcedureSqlOrdinal = 0x2;
		
		#define TDBXMySqlCustomMetaDataReader_TDBXMySqlProcedureParametersCursor_DefinerString L"DEFINER="
		
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	
public:
	__fastcall virtual ~TDBXMySqlCustomMetaDataReader(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSchemas(const System::UnicodeString Catalog);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchTables(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString TableName, const System::UnicodeString TableType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchViews(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString View);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexes(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString Index);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeys(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeyColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryCatalog, const System::UnicodeString PrimarySchema, const System::UnicodeString PrimaryTable, const System::UnicodeString PrimaryKeyName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedures(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString ProcedureName, const System::UnicodeString ProcType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureSources(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureParameters(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure, const System::UnicodeString Parameter);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchUsers(void);
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context);
	virtual bool __fastcall IsDefaultCharSetUnicode(void);
	virtual void __fastcall PopulateDataTypes(const Dbxplatform::TDBXObjectStore* Hash, const Dbxplatform::TDBXArrayList* Types, const Dbxmetadatareader::TDBXDataTypeDescriptionArray Descr);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	Classes::TStringList* __fastcall GetTables(void);
	virtual int __fastcall FindDataType(const System::UnicodeString TypeName);
	
private:
	HIDESBASE void __fastcall InitScanner(void);
	void __fastcall GetProcedures(const System::UnicodeString SchemaName, const System::UnicodeString ProcedureName, const Classes::TStringList* Procedures, const Classes::TStringList* ProcedureTypes);
	System::UnicodeString __fastcall ParseProcedureDefiner(const System::UnicodeString Definition);
	void __fastcall ParseProcedure(const System::UnicodeString Definition, const System::UnicodeString Type, const Dbxplatform::TDBXArrayList* Params);
	int __fastcall ParseType(const System::UnicodeString Definition, const TMySqlColumnType* Type);
	System::UnicodeString __fastcall ReplaceIdentifier(const System::UnicodeString Sql, const System::UnicodeString ParameterName, const System::UnicodeString ActualValue, const bool MakeQuotes);
	int __fastcall ToInt(const System::UnicodeString Value);
	bool __fastcall ParseIdList(const Dbxsqlscanner::TDBXSqlScanner* Scanner, const Classes::TStringList* List);
	bool __fastcall ParseForeignKey(const Dbxsqlscanner::TDBXSqlScanner* Scanner, const TMySqlForeignKey* ForeignKey);
	int __fastcall ParseCreateTableForNextForeignKey(const System::UnicodeString Sql, const int InStartIndex, const TMySqlForeignKey* Key);
	
protected:
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
	
private:
	bool FDefaultCharSetIsUnicode;
	
public:
	__property bool DefaultCharSetUnicode = {read=IsDefaultCharSetUnicode, nodefault};
	
private:
	__property Classes::TStringList* Tables = {read=GetTables};
	#define TDBXMySqlCustomMetaDataReader_DefaultCharsetIsUnicode L"UnicodeEncoding"
	
	static const System::WideChar YForYes = (System::WideChar)(0x59);
	
	static const System::WideChar AForAscending = (System::WideChar)(0x41);
	
	#define TDBXMySqlCustomMetaDataReader_FAuto_increment L"auto_increment"
	
	#define TDBXMySqlCustomMetaDataReader_IntegerType L"integer"
	
	#define TDBXMySqlCustomMetaDataReader_IntType L"int"
	
	#define TDBXMySqlCustomMetaDataReader_DecimalType L"decimal"
	
	#define TDBXMySqlCustomMetaDataReader_DecType L"dec"
	
	#define TDBXMySqlCustomMetaDataReader_Table L"TABLE"
	
	#define TDBXMySqlCustomMetaDataReader_Constraint L"CONSTRAINT"
	
	#define TDBXMySqlCustomMetaDataReader_Foreign L"FOREIGN"
	
	#define TDBXMySqlCustomMetaDataReader_Key L"KEY"
	
	#define TDBXMySqlCustomMetaDataReader_References L"REFERENCES"
	
	static const System::WideChar Quote = (System::WideChar)(0x27);
	
	#define TDBXMySqlCustomMetaDataReader_FYear L"year"
	
	#define TDBXMySqlCustomMetaDataReader_CurrentTimestamp L"CURRENT_TIMESTAMP"
	
	#define TDBXMySqlCustomMetaDataReader_Primary L"PRIMARY"
	
	#define TDBXMySqlCustomMetaDataReader_Procedure L"PROCEDURE"
	
	#define TDBXMySqlCustomMetaDataReader_Function L"FUNCTION"
	
	#define TDBXMySqlCustomMetaDataReader_Begin L"BEGIN"
	
	#define TDBXMySqlCustomMetaDataReader_Definer L"DEFINER"
	
	#define TDBXMySqlCustomMetaDataReader_Returns L"RETURNS"
	
	#define TDBXMySqlCustomMetaDataReader_Character L"CHARACTER"
	
	#define TDBXMySqlCustomMetaDataReader_Set L"SET"
	
	#define TDBXMySqlCustomMetaDataReader_Utf8 L"utf8"
	
	#define TDBXMySqlCustomMetaDataReader_In L"IN"
	
	#define TDBXMySqlCustomMetaDataReader_Out L"OUT"
	
	#define TDBXMySqlCustomMetaDataReader_Inout L"INOUT"
	
	#define TDBXMySqlCustomMetaDataReader_Unsigned L"UNSIGNED"
	
	#define TDBXMySqlCustomMetaDataReader_Not L"NOT"
	
	#define TDBXMySqlCustomMetaDataReader_NullSpec L"NULL"
	
	#define TDBXMySqlCustomMetaDataReader_Binary L"BINARY"
	
	#define TDBXMySqlCustomMetaDataReader_Varbinary L"VARBINARY"
	
	static const System::Byte DefaultVarcharPrecision = 0x80;
	
	static const System::ShortInt TokenProcedure = 0x1;
	
	static const System::ShortInt TokenFunction = 0x2;
	
	static const System::ShortInt TokenReturns = 0x3;
	
	static const System::ShortInt TokenBegin = 0x4;
	
	static const System::ShortInt TokenIn = 0x5;
	
	static const System::ShortInt TokenOut = 0x6;
	
	static const System::ShortInt TokenInout = 0x7;
	
	static const System::ShortInt TokenCharacter = 0x8;
	
	static const System::ShortInt TokenSet = 0x9;
	
	static const System::ShortInt TokenUtf8 = 0xa;
	
	static const System::ShortInt TokenUnsigned = 0xb;
	
	static const System::ShortInt TokenCreate = 0xc;
	
	static const System::ShortInt TokenDefiner = 0xd;
	
	static const System::ShortInt TokenNot = 0xe;
	
	static const System::ShortInt TokenNull = 0xf;
	
	static const System::ShortInt TokenBinary = 0x10;
	
public:
	/* TObject.Create */ inline __fastcall TDBXMySqlCustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXMySqlMetaDataReader;
class PASCALIMPLEMENTATION TDBXMySqlMetaDataReader : public TDBXMySqlCustomMetaDataReader
{
	typedef TDBXMySqlCustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSchemas(const System::UnicodeString CatalogName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSynonyms(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString SynonymName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchRoles(void);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual bool __fastcall IsDescendingIndexColumnsSupported(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void);
	virtual bool __fastcall IsMultipleCommandsSupported(void);
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
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXMySqlCustomMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXMySqlMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXMySqlMetaDataReader(void) : TDBXMySqlCustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmysqlmetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmysqlmetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmysqlmetadatareaderHPP
