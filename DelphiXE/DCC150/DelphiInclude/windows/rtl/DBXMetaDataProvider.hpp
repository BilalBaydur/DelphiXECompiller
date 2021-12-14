// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataProvider.pas' rev: 22.00

#ifndef DbxmetadataproviderHPP
#define DbxmetadataproviderHPP

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
#include <DBXTypedTableStorage.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadataprovider
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataColumn;
typedef System::DynamicArray<TDBXMetaDataColumn*> TDBXMetaDataColumnArray;

class PASCALIMPLEMENTATION TDBXMetaDataColumn : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataColumn(void)/* overload */;
	__fastcall TDBXMetaDataColumn(const TDBXMetaDataColumn* Column)/* overload */;
	void __fastcall CopyColumnToTableStorage(const Dbxtypedtablestorage::TDBXColumnsTableStorage* Columns);
	
private:
	System::UnicodeString FColumnName;
	System::UnicodeString FDefaultValue;
	int FDataType;
	int FPrecision;
	int FScale;
	int FMaxInline;
	bool FUnsigned;
	bool FAutoIncrement;
	bool FNullable;
	bool FFixedLength;
	bool FUnicodeString;
	bool FBlob;
	
public:
	__property bool AutoIncrement = {read=FAutoIncrement, write=FAutoIncrement, nodefault};
	__property System::UnicodeString ColumnName = {read=FColumnName, write=FColumnName};
	__property System::UnicodeString DefaultValue = {read=FDefaultValue, write=FDefaultValue};
	__property bool FixedLength = {read=FFixedLength, write=FFixedLength, nodefault};
	__property int MaxInline = {read=FMaxInline, write=FMaxInline, nodefault};
	__property bool Nullable = {read=FNullable, write=FNullable, nodefault};
	__property bool Long = {read=FBlob, write=FBlob, nodefault};
	__property int Precision = {read=FPrecision, write=FPrecision, nodefault};
	__property int Scale = {read=FScale, write=FScale, nodefault};
	__property int DataType = {read=FDataType, write=FDataType, nodefault};
	__property bool UnicodeString = {read=FUnicodeString, nodefault};
	__property bool UnicodeChar = {write=FUnicodeString, nodefault};
	__property bool Unsigned = {read=FUnsigned, write=FUnsigned, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataColumn(void) { }
	
};


class DELPHICLASS TDBXInt8Column;
class PASCALIMPLEMENTATION TDBXInt8Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXInt8Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXInt8Column(void) { }
	
};


class DELPHICLASS TDBXInt64Column;
class PASCALIMPLEMENTATION TDBXInt64Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXInt64Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXInt64Column(void) { }
	
};


class DELPHICLASS TDBXInt32Column;
class PASCALIMPLEMENTATION TDBXInt32Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXInt32Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXInt32Column(void) { }
	
};


class DELPHICLASS TDBXInt16Column;
class PASCALIMPLEMENTATION TDBXInt16Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXInt16Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXInt16Column(void) { }
	
};


class DELPHICLASS TDBXDoubleColumn;
class PASCALIMPLEMENTATION TDBXDoubleColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXDoubleColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDoubleColumn(void) { }
	
};


class DELPHICLASS TDBXDecimalColumn;
class PASCALIMPLEMENTATION TDBXDecimalColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXDecimalColumn(const System::UnicodeString InName, const int InPrecision, const int InScale);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDecimalColumn(void) { }
	
};


class DELPHICLASS TDBXDateColumn;
class PASCALIMPLEMENTATION TDBXDateColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXDateColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDateColumn(void) { }
	
};


class DELPHICLASS TDBXBooleanColumn;
class PASCALIMPLEMENTATION TDBXBooleanColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXBooleanColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXBooleanColumn(void) { }
	
};


class DELPHICLASS TDBXBinaryLongColumn;
class PASCALIMPLEMENTATION TDBXBinaryLongColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXBinaryLongColumn(const System::UnicodeString Name);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXBinaryLongColumn(void) { }
	
};


class DELPHICLASS TDBXBinaryColumn;
class PASCALIMPLEMENTATION TDBXBinaryColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXBinaryColumn(const System::UnicodeString InName, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXBinaryColumn(void) { }
	
};


class DELPHICLASS TDBXAnsiVarCharColumn;
class PASCALIMPLEMENTATION TDBXAnsiVarCharColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXAnsiVarCharColumn(const System::UnicodeString Name, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXAnsiVarCharColumn(void) { }
	
};


class DELPHICLASS TDBXAnsiLongColumn;
class PASCALIMPLEMENTATION TDBXAnsiLongColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXAnsiLongColumn(const System::UnicodeString Name);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXAnsiLongColumn(void) { }
	
};


class DELPHICLASS TDBXAnsiCharColumn;
class PASCALIMPLEMENTATION TDBXAnsiCharColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXAnsiCharColumn(const System::UnicodeString Name, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXAnsiCharColumn(void) { }
	
};


class DELPHICLASS TDBXMetaDataForeignKey;
class PASCALIMPLEMENTATION TDBXMetaDataForeignKey : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataForeignKey(void)/* overload */;
	__fastcall virtual ~TDBXMetaDataForeignKey(void);
	__fastcall TDBXMetaDataForeignKey(const System::UnicodeString InForeignTableName, const System::UnicodeString InPrimaryTableName, const System::UnicodeString InForeignKeyName, System::UnicodeString *References, const int References_Size)/* overload */;
	void __fastcall AddReference(const System::UnicodeString ColumnName, const System::UnicodeString ColumnNameInPrimaryTable);
	
protected:
	Dbxtypedtablestorage::TDBXForeignKeyColumnsTableStorage* __fastcall GetForeignKeyColumnsStorage(void);
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString CatalogName);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString SchemaName);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString TableName);
	System::UnicodeString __fastcall GetForeignKeyName(void);
	void __fastcall SetForeignKeyName(const System::UnicodeString ForeignKeyName);
	
private:
	Dbxtypedtablestorage::TDBXForeignKeysTableStorage* FForeignkey;
	Dbxtypedtablestorage::TDBXForeignKeyColumnsTableStorage* FColumns;
	System::UnicodeString FPrimaryCatalogName;
	System::UnicodeString FPrimarySchemaName;
	System::UnicodeString FPrimaryTableName;
	int FColumnCount;
	
public:
	__property Dbxtypedtablestorage::TDBXForeignKeysTableStorage* ForeignKeysStorage = {read=FForeignkey};
	__property Dbxtypedtablestorage::TDBXForeignKeyColumnsTableStorage* ForeignKeyColumnsStorage = {read=GetForeignKeyColumnsStorage};
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString ForeignKeyName = {read=GetForeignKeyName, write=SetForeignKeyName};
	__property System::UnicodeString PrimaryCatalogName = {read=FPrimaryCatalogName, write=FPrimaryCatalogName};
	__property System::UnicodeString PrimarySchemaName = {read=FPrimarySchemaName, write=FPrimarySchemaName};
	__property System::UnicodeString PrimaryTableName = {read=FPrimaryTableName, write=FPrimaryTableName};
};


class DELPHICLASS TDBXMetaDataIndex;
class PASCALIMPLEMENTATION TDBXMetaDataIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataIndex(void)/* overload */;
	__fastcall virtual ~TDBXMetaDataIndex(void);
	__fastcall TDBXMetaDataIndex(const System::UnicodeString InTableName, const System::UnicodeString InIndexName, System::UnicodeString *Columns, const int Columns_Size)/* overload */;
	void __fastcall AddColumn(const System::UnicodeString ColumnName)/* overload */;
	void __fastcall AddColumn(const System::UnicodeString ColumnName, const bool Ascending)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString CatalogName);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString SchemaName);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString TableName);
	System::UnicodeString __fastcall GetIndexName(void);
	void __fastcall SetIndexName(const System::UnicodeString IndexName);
	bool __fastcall IsUnique(void);
	void __fastcall SetUnique(const bool Unique);
	
private:
	Dbxtypedtablestorage::TDBXIndexesTableStorage* FIndexes;
	Dbxtypedtablestorage::TDBXIndexColumnsTableStorage* FColumns;
	int FColumnCount;
	
public:
	__property Dbxtypedtablestorage::TDBXIndexesTableStorage* IndexesStorage = {read=FIndexes};
	__property Dbxtypedtablestorage::TDBXIndexColumnsTableStorage* IndexColumnsStorage = {read=FColumns};
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString IndexName = {read=GetIndexName, write=SetIndexName};
	__property bool Unique = {read=IsUnique, write=SetUnique, nodefault};
};


class DELPHICLASS TDBXMetaDataProvider;
class DELPHICLASS TDBXMetaDataTable;
class DELPHICLASS TDBXSqlExecution;
class PASCALIMPLEMENTATION TDBXMetaDataProvider : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataProvider(void);
	__fastcall virtual ~TDBXMetaDataProvider(void);
	bool __fastcall CheckColumnSupported(const TDBXMetaDataColumn* Column);
	void __fastcall Execute(const System::UnicodeString Sql);
	void __fastcall CreateTable(const TDBXMetaDataTable* Table);
	bool __fastcall DropTable(const System::UnicodeString SchemaName, const System::UnicodeString TableName)/* overload */;
	bool __fastcall DropTable(const System::UnicodeString TableName)/* overload */;
	void __fastcall CreatePrimaryKey(const TDBXMetaDataIndex* Index);
	void __fastcall CreateUniqueIndex(const TDBXMetaDataIndex* Index);
	void __fastcall CreateIndex(const TDBXMetaDataIndex* Index);
	bool __fastcall DropIndex(const System::UnicodeString TableName, const System::UnicodeString IndexName)/* overload */;
	bool __fastcall DropIndex(const System::UnicodeString SchemaName, const System::UnicodeString TableName, const System::UnicodeString IndexName)/* overload */;
	void __fastcall CreateForeignKey(const TDBXMetaDataForeignKey* Foreignkey);
	bool __fastcall DropForeignKey(const System::UnicodeString TableName, const System::UnicodeString ForeignKey)/* overload */;
	bool __fastcall DropForeignKey(const System::UnicodeString SchemaName, const System::UnicodeString TableName, const System::UnicodeString ForeignKey)/* overload */;
	System::UnicodeString __fastcall QuoteIdentifierIfNeeded(const System::UnicodeString Identifier);
	Dbxcommontable::TDBXTable* __fastcall GetCollection(const System::UnicodeString MetaDataCommand);
	void __fastcall ToMemoryStorage(const Dbxcommontable::TDBXDelegateTable* Table);
	System::UnicodeString __fastcall MakeCreateTableSql(const Dbxtypedtablestorage::TDBXTablesTableStorage* Table, const Dbxtypedtablestorage::TDBXColumnsTableStorage* Columns);
	System::UnicodeString __fastcall MakeAlterTableSql(const Dbxtypedtablestorage::TDBXTablesTableStorage* Table, const Dbxtypedtablestorage::TDBXColumnsTableStorage* Columns)/* overload */;
	System::UnicodeString __fastcall MakeDropTableSql(const Dbxtypedtablestorage::TDBXTablesTableStorage* Table);
	System::UnicodeString __fastcall MakeCreateIndexSql(const Dbxtypedtablestorage::TDBXIndexesTableStorage* Indexes, const Dbxtypedtablestorage::TDBXIndexColumnsTableStorage* Columns);
	System::UnicodeString __fastcall MakeDropIndexSql(const Dbxtypedtablestorage::TDBXIndexesTableStorage* Indexes);
	System::UnicodeString __fastcall MakeCreateForeignKeySql(const Dbxtypedtablestorage::TDBXForeignKeysTableStorage* ForeignKeys, const Dbxtypedtablestorage::TDBXForeignKeyColumnsTableStorage* Columns);
	System::UnicodeString __fastcall MakeDropForeignKeySql(const Dbxtypedtablestorage::TDBXForeignKeysTableStorage* ForeignKey);
	System::UnicodeString __fastcall MakeAlterTableSql(const Dbxtypedtablestorage::TDBXIndexesTableStorage* Indexes, const Dbxtypedtablestorage::TDBXIndexColumnsTableStorage* Columns)/* overload */;
	bool __fastcall IsCatalogsSupported(void);
	bool __fastcall IsSchemasSupported(void);
	bool __fastcall IsMultipleStatementsSupported(void);
	bool __fastcall IsDescendingIndexSupported(void);
	bool __fastcall IsDescendingIndexColumnsSupported(void);
	bool __fastcall IsMixedDDLAndDMLSupported(void);
	bool __fastcall IsDDLTransactionsSupported(void);
	
protected:
	virtual void __fastcall SetWriter(const Dbxmetadatawriter::TDBXMetaDataWriter* Writer);
	virtual Dbxmetadatawriter::TDBXMetaDataWriter* __fastcall GetWriter(void);
	System::UnicodeString __fastcall GetVendor(void);
	System::UnicodeString __fastcall GetDatabaseProduct(void);
	System::UnicodeString __fastcall GetDatabaseVersion(void);
	System::UnicodeString __fastcall GetIdentifierQuotePrefix(void);
	System::UnicodeString __fastcall GetIdentifierQuoteSuffix(void);
	
private:
	Dbxmetadatawriter::TDBXMetaDataWriter* FWriter;
	TDBXSqlExecution* FExecuter;
	
public:
	__property System::UnicodeString Vendor = {read=GetVendor};
	__property System::UnicodeString DatabaseProduct = {read=GetDatabaseProduct};
	__property System::UnicodeString DatabaseVersion = {read=GetDatabaseVersion};
	__property System::UnicodeString IdentifierQuotePrefix = {read=GetIdentifierQuotePrefix};
	__property System::UnicodeString IdentifierQuoteSuffix = {read=GetIdentifierQuoteSuffix};
	
protected:
	__property Dbxmetadatawriter::TDBXMetaDataWriter* Writer = {read=GetWriter, write=SetWriter};
};


class PASCALIMPLEMENTATION TDBXMetaDataTable : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataTable(void);
	__fastcall virtual ~TDBXMetaDataTable(void);
	void __fastcall AddColumn(const TDBXMetaDataColumn* Column);
	TDBXMetaDataColumn* __fastcall GetColumn(const int Ordinal);
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString CatalogName);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString SchemaName);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString TableName);
	
private:
	Dbxtypedtablestorage::TDBXTablesTableStorage* FTable;
	Dbxtypedtablestorage::TDBXColumnsTableStorage* FColumns;
	int FColumnCount;
	TDBXMetaDataColumnArray FMetaDataColumns;
	
public:
	__property Dbxtypedtablestorage::TDBXTablesTableStorage* TableStorage = {read=FTable};
	__property Dbxtypedtablestorage::TDBXColumnsTableStorage* ColumnsStorage = {read=FColumns};
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
};


class DELPHICLASS TDBXObjectColumn;
class PASCALIMPLEMENTATION TDBXObjectColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXObjectColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXObjectColumn(void) { }
	
};


class DELPHICLASS TDBXProductNames;
class PASCALIMPLEMENTATION TDBXProductNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXProductNames_InterbaseProduct L"InterBase"
	
	#define TDBXProductNames_FirebirdProduct L"Firebird"
	
	#define TDBXProductNames_OracleProduct L"Oracle"
	
	#define TDBXProductNames_SybaseAseProduct L"Sybase SQL Server"
	
	#define TDBXProductNames_SybaseAsaProduct L"Adaptive Server Anywhere"
	
	#define TDBXProductNames_Db2_Product L"Db2"
	
	#define TDBXProductNames_InformixProduct L"Informix Dynamic Server"
	
public:
	/* TObject.Create */ inline __fastcall TDBXProductNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProductNames(void) { }
	
};


class DELPHICLASS TDBXSingleColumn;
class PASCALIMPLEMENTATION TDBXSingleColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXSingleColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSingleColumn(void) { }
	
};


class PASCALIMPLEMENTATION TDBXSqlExecution : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXSqlExecution(const Dbxmetadatawriter::TDBXMetaDataWriter* Writer);
	virtual void __fastcall Execute(const System::UnicodeString Sql);
	
private:
	Dbxmetadatareader::TDBXProviderContext* FContext;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSqlExecution(void) { }
	
};


class DELPHICLASS TDBXTimeColumn;
class PASCALIMPLEMENTATION TDBXTimeColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXTimeColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTimeColumn(void) { }
	
};


class DELPHICLASS TDBXTimestampColumn;
class PASCALIMPLEMENTATION TDBXTimestampColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXTimestampColumn(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTimestampColumn(void) { }
	
};


class DELPHICLASS TDBXUInt16Column;
class PASCALIMPLEMENTATION TDBXUInt16Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUInt16Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUInt16Column(void) { }
	
};


class DELPHICLASS TDBXUInt32Column;
class PASCALIMPLEMENTATION TDBXUInt32Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUInt32Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUInt32Column(void) { }
	
};


class DELPHICLASS TDBXUInt64Column;
class PASCALIMPLEMENTATION TDBXUInt64Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUInt64Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUInt64Column(void) { }
	
};


class DELPHICLASS TDBXUInt8Column;
class PASCALIMPLEMENTATION TDBXUInt8Column : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUInt8Column(const System::UnicodeString InName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUInt8Column(void) { }
	
};


class DELPHICLASS TDBXUnicodeCharColumn;
class PASCALIMPLEMENTATION TDBXUnicodeCharColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUnicodeCharColumn(const System::UnicodeString Name, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUnicodeCharColumn(void) { }
	
};


class DELPHICLASS TDBXUnicodeLongColumn;
class PASCALIMPLEMENTATION TDBXUnicodeLongColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUnicodeLongColumn(const System::UnicodeString Name);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUnicodeLongColumn(void) { }
	
};


class DELPHICLASS TDBXUnicodeVarCharColumn;
class PASCALIMPLEMENTATION TDBXUnicodeVarCharColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXUnicodeVarCharColumn(const System::UnicodeString InName, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUnicodeVarCharColumn(void) { }
	
};


class DELPHICLASS TDBXVarBinaryColumn;
class PASCALIMPLEMENTATION TDBXVarBinaryColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXVarBinaryColumn(const System::UnicodeString InName, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXVarBinaryColumn(void) { }
	
};


class DELPHICLASS TDBXWideVarCharColumn;
class PASCALIMPLEMENTATION TDBXWideVarCharColumn : public TDBXMetaDataColumn
{
	typedef TDBXMetaDataColumn inherited;
	
public:
	__fastcall TDBXWideVarCharColumn(const System::UnicodeString Name, const int InPrecision);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXWideVarCharColumn(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadataprovider */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadataprovider;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadataproviderHPP
