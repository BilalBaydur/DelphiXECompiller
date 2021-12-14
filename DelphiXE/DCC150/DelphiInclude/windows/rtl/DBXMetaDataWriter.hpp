// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataWriter.pas' rev: 22.00

#ifndef DbxmetadatawriterHPP
#define DbxmetadatawriterHPP

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
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXAlterTableOperation;
class PASCALIMPLEMENTATION TDBXAlterTableOperation : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt NoSupport = 0x0;
	
	static const System::ShortInt RenameTable = 0x1;
	
	static const System::ShortInt RenameTableTo = 0x2;
	
	static const System::ShortInt DropColumn = 0x4;
	
	static const System::ShortInt AddColumn = 0x8;
	
	static const System::ShortInt AddColumnWithPosition = 0x10;
	
	static const System::ShortInt ChangeDefaultValue = 0x20;
	
	static const System::ShortInt DropDefaultValue = 0x40;
	
	static const System::Byte SetNullable = 0x80;
	
	static const System::Word DropNullable = 0x100;
	
	static const System::Word ChangeColumnType = 0x200;
	
	static const System::Word AddAutoincrement = 0x400;
	
	static const System::Word DropAutoincrement = 0x800;
	
	static const System::Word ChangeColumnPosition = 0x1000;
	
	static const System::Word RenameColumn = 0x2000;
	
	static const System::Word FullAlterSupport = 0x3fff;
	
public:
	/* TObject.Create */ inline __fastcall TDBXAlterTableOperation(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXAlterTableOperation(void) { }
	
};


class DELPHICLASS TDBXMetaDataWriter;
class PASCALIMPLEMENTATION TDBXMetaDataWriter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Open(void) = 0 ;
	virtual void __fastcall MakeSqlCreate(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts) = 0 ;
	virtual void __fastcall MakeSqlAlter(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts) = 0 ;
	virtual void __fastcall MakeSqlDrop(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item) = 0 ;
	virtual void __fastcall MakeSqlIdentifier(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString Identifier) = 0 ;
	virtual bool __fastcall CheckColumnSupported(const Dbxcommontable::TDBXTableRow* Column) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlQuotedIdentifier(const System::UnicodeString UnquotedIdentifier) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlUnQuotedIdentifier(const System::UnicodeString QuotedIdentifier) = 0 ;
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context) = 0 ;
	virtual Dbxmetadatareader::TDBXProviderContext* __fastcall GetContext(void) = 0 ;
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall GetMetaDataReader(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementInserts(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlKeyGeneratedIndexName(void) = 0 ;
	virtual int __fastcall GetAlterTableSupport(void) = 0 ;
	virtual bool __fastcall IsCatalogsSupported(void) = 0 ;
	virtual bool __fastcall IsSchemasSupported(void) = 0 ;
	virtual bool __fastcall IsMultipleStatementsSupported(void) = 0 ;
	virtual bool __fastcall IsIndexNamesGlobal(void) = 0 ;
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void) = 0 ;
	virtual bool __fastcall IsSerializedIsolationSupported(void) = 0 ;
	virtual bool __fastcall IsDDLTransactionsSupported(void) = 0 ;
	virtual bool __fastcall IsMixed_DDL_DML_Supported(void) = 0 ;
	
public:
	__property Dbxmetadatareader::TDBXProviderContext* Context = {read=GetContext, write=SetContext};
	__property Dbxmetadatareader::TDBXMetaDataReader* MetaDataReader = {read=GetMetaDataReader};
	__property System::UnicodeString SqlRenameTable = {read=GetSqlRenameTable};
	__property System::UnicodeString SqlAutoIncrementInserts = {read=GetSqlAutoIncrementInserts};
	__property System::UnicodeString SqlAutoIncrementKeyword = {read=GetSqlAutoIncrementKeyword};
	__property System::UnicodeString SqlKeyGeneratedIndexName = {read=GetSqlKeyGeneratedIndexName};
	__property int AlterTableSupport = {read=GetAlterTableSupport, nodefault};
	__property bool CatalogsSupported = {read=IsCatalogsSupported, nodefault};
	__property bool SchemasSupported = {read=IsSchemasSupported, nodefault};
	__property bool MultipleStatementsSupported = {read=IsMultipleStatementsSupported, nodefault};
	__property bool IndexNamesGlobal = {read=IsIndexNamesGlobal, nodefault};
	__property bool DescendingIndexConstraintsSupported = {read=IsDescendingIndexConstraintsSupported, nodefault};
	__property bool SerializedIsolationSupported = {read=IsSerializedIsolationSupported, nodefault};
	__property bool DDLTransactionsSupported = {read=IsDDLTransactionsSupported, nodefault};
	__property bool Mixed_DDL_DML_Supported = {read=IsMixed_DDL_DML_Supported, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataWriter(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataWriter(void) { }
	
};


class DELPHICLASS TDBXBaseMetaDataWriter;
class PASCALIMPLEMENTATION TDBXBaseMetaDataWriter : public TDBXMetaDataWriter
{
	typedef TDBXMetaDataWriter inherited;
	
public:
	virtual void __fastcall Open(void);
	__fastcall virtual ~TDBXBaseMetaDataWriter(void);
	virtual void __fastcall MakeSqlCreate(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts);
	virtual void __fastcall MakeSqlAlter(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item, const Dbxcommontable::TDBXTable* Parts);
	virtual void __fastcall MakeSqlDrop(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item);
	virtual bool __fastcall CheckColumnSupported(const Dbxcommontable::TDBXTableRow* Column);
	virtual System::UnicodeString __fastcall GetSqlQuotedIdentifier(const System::UnicodeString UnquotedIdentifier);
	virtual System::UnicodeString __fastcall GetSqlUnQuotedIdentifier(const System::UnicodeString QuotedIdentifier);
	virtual void __fastcall MakeSqlIdentifier(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString Identifier);
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context);
	virtual Dbxmetadatareader::TDBXProviderContext* __fastcall GetContext(void);
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall GetMetaDataReader(void);
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
	virtual bool __fastcall IsIndexNamesGlobal(void);
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void);
	virtual bool __fastcall IsSerializedIsolationSupported(void);
	virtual bool __fastcall IsDDLTransactionsSupported(void);
	virtual bool __fastcall IsMixed_DDL_DML_Supported(void);
	virtual int __fastcall GetAlterTableSupport(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual System::UnicodeString __fastcall GetSqlKeyGeneratedIndexName(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementInserts(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
	virtual void __fastcall MakeSqlObjectName(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString ObjectName);
	virtual void __fastcall MakeSqlNullable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Column);
	virtual void __fastcall MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString TypeName, const Dbxcommontable::TDBXTableRow* ColumnRow)/* overload */;
	virtual void __fastcall MakeSqlDataType(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxmetadatareader::TDBXDataTypeDescription* DataType, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides)/* overload */;
	virtual Dbxmetadatareader::TDBXDataTypeDescription* __fastcall FindDataType(const System::UnicodeString InTypeName, const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides);
	virtual System::UnicodeString __fastcall FindTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindSimpleColumnTypeMatch(const Dbxcommontable::TDBXTableRow* ColumnRow, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindBooleanTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindStringOrBinaryTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindIntegerTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindDecimalTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindFloatTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const Dbxplatform::TDBXInt32s Overrides, const bool FailIfNotFound);
	virtual System::UnicodeString __fastcall FindDateTimeTypeName(const Dbxcommontable::TDBXTableRow* ColumnRow, const bool FailIfNotFound);
	virtual void __fastcall MakeSqlColumnTypeCast(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTable* Column);
	virtual bool __fastcall CanCreateIndexAsKey(const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlCreateIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlDropIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
	virtual void __fastcall MakeSqlCreateKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	void __fastcall MakeSqlConstraintName(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Constraint);
	virtual void __fastcall MakeSqlAlterTablePrefix(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Item);
	virtual void __fastcall MakeSqlCreateIndexColumnList(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlDropSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
	void __fastcall MakeSqlForeignKeySyntax(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* ForeignKey, const Dbxcommontable::TDBXTable* ForeignKeyColumns);
	virtual void __fastcall MakeSqlCreateForeignKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* ForeignKey, const Dbxcommontable::TDBXTable* ForeignKeyColumns);
	virtual void __fastcall MakeSqlDropForeignKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* ForeignKey);
	
private:
	void __fastcall MakeSqlCreateTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns);
	void __fastcall MakeSqlAlterTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns);
	bool __fastcall SupportedTableAlteration(const int Operation);
	bool __fastcall MakeSqlFullAlterTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns);
	bool __fastcall MakeSqlTableRename(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName, const System::UnicodeString OldCatalogName, const System::UnicodeString OldSchemaName, const System::UnicodeString OldTableName)/* overload */;
	bool __fastcall MakeSqlColumnRename(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString ColumnName, const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName, const System::UnicodeString OldColumnName);
	void __fastcall MakeSqlColumnDefinition(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Column);
	void __fastcall MakeSqlDefaultValue(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString DefaultValue, const System::UnicodeString TypeName);
	System::UnicodeString __fastcall RemoveMarkersForNullValues(const System::UnicodeString InFormat, const Dbxplatform::TDBXStringArray Values);
	Sysutils::Exception* __fastcall ErrorTypeNameNotFound(const Dbxcommontable::TDBXTableRow* ColumnRow);
	int __fastcall CalcPrecisionColumnType(const int ColumnType, const bool UnsignedOption);
	int __fastcall CalcDecimalPrecision(const int ColumnType);
	int __fastcall CalcBinaryPrecision(const int ColumnType);
	bool __fastcall IsSignedInteger(const int ColumnType);
	int __fastcall GetDefaultFloatPrecision(const int ColumnType);
	Dbxplatform::TDBXStringBuffer* __fastcall AddToExternalStatements(const Dbxplatform::TDBXStringBuffer* InExternalStatements, const Dbxplatform::TDBXStringBuffer* Buffer, const int StartPosition);
	bool __fastcall IsValidSqlIdentifier(const System::UnicodeString Identifier);
	bool __fastcall IsReservedWord(const System::UnicodeString Identifier);
	bool __fastcall IsLetter(const System::WideChar Ch, const bool UpperOK, const bool LowerOK);
	bool __fastcall IsDigit(const System::WideChar Ch);
	void __fastcall MakeSqlTableReplacement(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns);
	Dbxcommontable::TDBXTable* __fastcall CopyColumns(const Dbxcommontable::TDBXTable* ColumnTable);
	Dbxcommontable::TDBXTable* __fastcall CopyTable(const Dbxcommontable::TDBXTableRow* Table, const System::UnicodeString TempTableName);
	Dbxcommon::TDBXProperties* __fastcall ComputeColumnMap(const Dbxcommontable::TDBXTable* Columns);
	Dbxcommontable::TDBXTable* __fastcall GetDefaults(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	Dbxcommontable::TDBXTable* __fastcall GetIndexes(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	Dbxcommontable::TDBXTable* __fastcall GetIndexColumns(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	Dbxcommontable::TDBXTable* __fastcall GetForeignKeyColumns(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	void __fastcall RemoveForeignKeyGeneratedIndexes(const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Indexes, const Dbxcommontable::TDBXTable* IndexColumns, const Dbxcommontable::TDBXTable* ForeignKeyColumns);
	void __fastcall DropAllConstraints(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTable* Defaults, const Dbxcommontable::TDBXTable* Indexes, const Dbxcommontable::TDBXTable* ForeignKeys);
	void __fastcall CreateTempOutputTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns, const System::UnicodeString TempTableName);
	void __fastcall SetIdentityInsert(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName, const bool On);
	bool __fastcall CheckForAutoIncrement(const Dbxcommontable::TDBXTable* Columns);
	void __fastcall InsertValuesFromOldTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Columns, const System::UnicodeString TempTableName);
	void __fastcall MakeSqlDropTable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table);
	void __fastcall ReplaceParameter(const Dbxplatform::TDBXStringBuffer* Buffer, const int Start, const System::UnicodeString InParameter, const System::UnicodeString Replacement);
	void __fastcall MakeSqlTableRename(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName, const System::UnicodeString NewTableName)/* overload */;
	void __fastcall CopyRow(const Dbxcommontable::TDBXTableRow* Source, const Dbxcommontable::TDBXTable* Target, const int Columns);
	bool __fastcall Compare(const Dbxcommontable::TDBXTable* Table, const int InStart, const Dbxcommontable::TDBXTableRow* Row, const int InRowStart, const int Columns);
	bool __fastcall SameConstraint(const Dbxcommontable::TDBXTable* Table, const Dbxcommontable::TDBXTableRow* Row, const int Columns);
	void __fastcall MapTable(const Dbxcommontable::TDBXTable* Item, const Dbxcommontable::TDBXTableRow* Table);
	System::UnicodeString __fastcall MapColumn(const Dbxcommontable::TDBXTable* Parts, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommon::TDBXProperties* ColumnMap, const int ColIndex, const int IdColumns, const System::UnicodeString DroppedColumn);
	void __fastcall CreateConstraints(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Constraints, const Dbxcommontable::TDBXTable* ConstraintColumns, const System::UnicodeString CollectionName, const int IdColumns, const int ItemColumns, const int PartColumns, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommon::TDBXProperties* ColumnMap, const int ColIndex1, const int ColIndex2);
	void __fastcall CreateIndices(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* Indexes, const Dbxcommontable::TDBXTable* IndexColumns, const Dbxcommon::TDBXProperties* ColumnMap);
	void __fastcall CreateForeignKeys(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Table, const Dbxcommontable::TDBXTable* ForeignKeyColumns, const Dbxcommon::TDBXProperties* ColumnMap);
	void __fastcall MakeSqlCreateSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	void __fastcall MakeSqlCreateConstraint(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Constraint);
	void __fastcall MakeSqlDropConstraint(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Constraint);
	void __fastcall MakeSqlCreateView(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* View, const Dbxcommontable::TDBXTable* Columns);
	void __fastcall MakeSqlAlterView(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* View, const Dbxcommontable::TDBXTable* Columns);
	void __fastcall MakeSqlDropView(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* View);
	void __fastcall MakeSqlCreateSynonym(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Synonym, const Dbxcommontable::TDBXTable* Columns);
	void __fastcall MakeSqlAlterSynonym(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Synonym, const Dbxcommontable::TDBXTable* Columns);
	void __fastcall MakeSqlDropSynonym(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Synonym);
	
protected:
	Dbxmetadatareader::TDBXProviderContext* FContext;
	Dbxmetadatareader::TDBXBaseMetaDataReader* FReader;
	Dbxcommontable::TDBXTable* FReservedWords;
	
private:
	static const System::Word Requirement = 0x3e8;
	
	static const System::ShortInt Desireable = 0x64;
	
	static const System::ShortInt TieBreaker1 = 0x1;
	
	static const System::ShortInt TieBreaker2 = 0x2;
	
	static const System::ShortInt TieBreaker3 = 0x4;
	
	static const System::ShortInt TieBreaker4 = 0x8;
	
	static const System::ShortInt TieBreaker5 = 0x10;
	
	static const System::ShortInt TieBreaker6 = 0x20;
	
public:
	/* TObject.Create */ inline __fastcall TDBXBaseMetaDataWriter(void) : TDBXMetaDataWriter() { }
	
};


class DELPHICLASS TDBXSQL;
class PASCALIMPLEMENTATION TDBXSQL : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXSQL_Add L"ADD"
	
	#define TDBXSQL_Alter L"ALTER"
	
	#define TDBXSQL_As L"AS"
	
	#define TDBXSQL_Binary L"BINARY"
	
	#define TDBXSQL_Cast L"CAST"
	
	#define TDBXSQL_Char L"CHAR"
	
	static const System::WideChar CloseBrace = (System::WideChar)(0x7d);
	
	static const System::WideChar CloseParen = (System::WideChar)(0x29);
	
	static const System::WideChar Colon = (System::WideChar)(0x3a);
	
	#define TDBXSQL_Column L"COLUMN"
	
	static const System::WideChar Comma = (System::WideChar)(0x2c);
	
	#define TDBXSQL_Constraint L"CONSTRAINT"
	
	#define TDBXSQL_Convert L"CONVERT"
	
	#define TDBXSQL_CurrentTimestamp L"CURRENT_TIMESTAMP"
	
	#define TDBXSQL_Date L"DATE"
	
	#define TDBXSQL_Datetime L"DATETIME"
	
	#define TDBXSQL_Decimal L"DECIMAL"
	
	#define TDBXSQL_Default L"DEFAULT"
	
	#define TDBXSQL_Descending L"DESC"
	
	static const System::WideChar Dot = (System::WideChar)(0x2e);
	
	static const System::WideChar DoubleQuote = (System::WideChar)(0x22);
	
	#define TDBXSQL_Drop L"DROP"
	
	#define TDBXSQL_Empty L""
	
	#define TDBXSQL_For L"FOR"
	
	#define TDBXSQL_Foreign L"FOREIGN"
	
	#define TDBXSQL_From L"FROM"
	
	#define TDBXSQL_Function L"FUNCTION"
	
	#define TDBXSQL_Index L"INDEX"
	
	#define TDBXSQL_Insert L"INSERT"
	
	#define TDBXSQL_Into L"INTO"
	
	#define TDBXSQL_Key L"KEY"
	
	#define TDBXSQL_LineComment L"//"
	
	#define TDBXSQL_Makedate L"MAKEDATE"
	
	static const System::WideChar Nl = (System::WideChar)(0xa);
	
	#define TDBXSQL_Not L"NOT"
	
	#define TDBXSQL_Nullable L"NULL"
	
	#define TDBXSQL_Off L"OFF"
	
	#define TDBXSQL_On L"ON"
	
	static const System::WideChar OpenBrace = (System::WideChar)(0x7b);
	
	static const System::WideChar OpenParen = (System::WideChar)(0x28);
	
	#define TDBXSQL_Position L"POSITION"
	
	#define TDBXSQL_Primary L"PRIMARY"
	
	#define TDBXSQL_Procedure L"PROCEDURE"
	
	static const System::WideChar Quote = (System::WideChar)(0x27);
	
	#define TDBXSQL_References L"REFERENCES"
	
	#define TDBXSQL_Rename L"RENAME"
	
	#define TDBXSQL_Result L"RESULT"
	
	#define TDBXSQL_Returns L"RETURNS"
	
	#define TDBXSQL_Select L"SELECT"
	
	static const System::WideChar Semicolon = (System::WideChar)(0x3b);
	
	#define TDBXSQL_Set L"SET"
	
	#define TDBXSQL_Signed L"SIGNED"
	
	static const System::WideChar Space = (System::WideChar)(0x20);
	
	#define TDBXSQL_Spacing L"  "
	
	#define TDBXSQL_Synonym L"SYNONYM"
	
	#define TDBXSQL_Table L"TABLE"
	
	#define TDBXSQL_Temp L"TEMP_"
	
	#define TDBXSQL_Time L"TIME"
	
	#define TDBXSQL_To L"TO"
	
	#define TDBXSQL_Type L"TYPE"
	
	#define TDBXSQL_FYear L"year"
	
	#define TDBXSQL_Unique L"UNIQUE"
	
	#define TDBXSQL_View L"VIEW"
	
public:
	/* TObject.Create */ inline __fastcall TDBXSQL(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSQL(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatawriterHPP
