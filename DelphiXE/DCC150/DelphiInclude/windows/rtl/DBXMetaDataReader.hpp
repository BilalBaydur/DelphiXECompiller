// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataReader.pas' rev: 22.00

#ifndef DbxmetadatareaderHPP
#define DbxmetadatareaderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXSqlScanner.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDataTypeDescription;
typedef System::DynamicArray<TDBXDataTypeDescription*> TDBXDataTypeDescriptionArray;

class DELPHICLASS TDBXColumnsTableCursor;
class DELPHICLASS TDBXBaseMetaDataReader;
class PASCALIMPLEMENTATION TDBXColumnsTableCursor : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXColumnsTableCursor(const TDBXBaseMetaDataReader* Reader, const bool CheckBase, const Dbxcommontable::TDBXTable* Cursor);
	__fastcall virtual ~TDBXColumnsTableCursor(void);
	virtual bool __fastcall Next(void);
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	int FOrdinalOffset;
	int FOrdinalTypeName;
	TDBXBaseMetaDataReader* FReader;
	Dbxplatform::TDBXObjectStore* FDataTypeHash;
	TDBXDataTypeDescription* FDataType;
	bool FCheckBase;
	
private:
	Dbxcommontable::TDBXSingleValueRow* FDataTypesRow;
};


class DELPHICLASS TDBXCustomMetaDataTable;
class DELPHICLASS TDBXPlatformTypeNames;
class DELPHICLASS TDBXIndexColumnValue;
class PASCALIMPLEMENTATION TDBXCustomMetaDataTable : public Dbxcommontable::TDBXRowTable
{
	typedef Dbxcommontable::TDBXRowTable inherited;
	
public:
	__fastcall TDBXCustomMetaDataTable(const TDBXPlatformTypeNames* TypeNames, const System::UnicodeString MetaDataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
	__fastcall virtual ~TDBXCustomMetaDataTable(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual void __fastcall Close(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	
protected:
	virtual System::TObject* __fastcall GetCommand(void);
	virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
	virtual int __fastcall FindStringSize(const Dbxcommon::TDBXValueType* Column)/* overload */;
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual void __fastcall CheckColumn(const int Ordinal);
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	virtual int __fastcall GetInt32(const Dbxcommontable::TDBXTable* Cursor, const int Ordinal, const int DefaultValue);
	virtual __int64 __fastcall GetInt64(const Dbxcommontable::TDBXTable* Cursor, const int Ordinal, const __int64 DefaultValue);
	virtual System::UnicodeString __fastcall GetAsString(const Dbxcommontable::TDBXTable* Cursor, const int Ordinal, const System::UnicodeString DefaultValue);
	virtual bool __fastcall GetBoolean(const Dbxcommontable::TDBXTable* Cursor, const int Ordinal, const bool DefaultValue);
	
private:
	void __fastcall AdjustColumnSize(void);
	
protected:
	TDBXPlatformTypeNames* FTypeNames;
	System::UnicodeString FMetaDataCollectionName;
	Dbxcommontable::TDBXTable* FCursor;
	Dbxcommon::TDBXValueTypeArray FColumns;
	
private:
	bool FColumnsSizeAdjusted;
	TDBXIndexColumnValue* FIndexColumnValue;
	bool FHasIndexColumn;
};


class DELPHICLASS TDBXDataTypeCursor;
class PASCALIMPLEMENTATION TDBXDataTypeCursor : public Dbxcommontable::TDBXRowTable
{
	typedef Dbxcommontable::TDBXRowTable inherited;
	
public:
	__fastcall TDBXDataTypeCursor(const TDBXBaseMetaDataReader* Reader, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxplatform::TDBXArrayList* Types);
	__fastcall virtual ~TDBXDataTypeCursor(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name)/* overload */;
	virtual void __fastcall Close(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall Next(void);
	
protected:
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	TDBXBaseMetaDataReader* FReader;
	Dbxplatform::TDBXArrayList* FTypes;
	TDBXDataTypeDescription* FCurrent;
	int FRowIndex;
	
private:
	Dbxcommontable::TDBXSingleValueRow* FTypeRow;
};


class PASCALIMPLEMENTATION TDBXDataTypeDescription : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXDataTypeDescription(const System::UnicodeString TypeName, const int DataType, const __int64 ColumnSize, const System::UnicodeString CreateFormat, const System::UnicodeString CreateParams, const int MaxScale, const int MinScale, const System::UnicodeString LiteralPrefix, const System::UnicodeString LiteralSuffix, const System::UnicodeString MaxVersion, const System::UnicodeString MinVersion, const int Flags)/* overload */;
	__fastcall TDBXDataTypeDescription(const TDBXDataTypeDescription* Original)/* overload */;
	System::UnicodeString __fastcall GetDataType(const TDBXPlatformTypeNames* TypeNames);
	
protected:
	bool __fastcall IsAutoIncrementable(void);
	bool __fastcall IsBestMatch(void);
	bool __fastcall IsCaseSensitive(void);
	bool __fastcall IsFixedLength(void);
	bool __fastcall IsFixedPrecisionScale(void);
	bool __fastcall IsLong(void);
	bool __fastcall IsNullable(void);
	bool __fastcall IsSearchable(void);
	bool __fastcall IsSearchableWithLike(void);
	bool __fastcall IsUnsigned(void);
	bool __fastcall IsUnicode(void);
	bool __fastcall IsUnicodeOptionSupported(void);
	void __fastcall SetUnicodeOptionSupported(const bool Supported);
	bool __fastcall IsUnsignedOptionSupported(void);
	bool __fastcall IsStringOptionSupported(void);
	bool __fastcall IsLongOptionSupported(void);
	short __fastcall GetMaximumScale(void);
	short __fastcall GetMinimumScale(void);
	bool __fastcall IsConcurrencyType(void);
	bool __fastcall IsLiteralSupported(void);
	
private:
	bool __fastcall IsFlagSet(const int Flag);
	void __fastcall SetFlag(const bool On, const int Flag);
	System::UnicodeString FTypeName;
	int FDataType;
	__int64 FColumnSize;
	int FFlags;
	System::UnicodeString FMaxVersion;
	System::UnicodeString FMinVersion;
	System::UnicodeString FCreateFormat;
	System::UnicodeString FCreateParams;
	System::UnicodeString FLiteralPrefix;
	System::UnicodeString FLiteralSuffix;
	int FMaxScale;
	int FMinScale;
	
public:
	__property System::UnicodeString TypeName = {read=FTypeName};
	__property int DbxDataType = {read=FDataType, nodefault};
	__property __int64 ColumnSize = {read=FColumnSize};
	__property System::UnicodeString CreateFormat = {read=FCreateFormat};
	__property System::UnicodeString CreateParameters = {read=FCreateParams};
	__property bool AutoIncrementable = {read=IsAutoIncrementable, nodefault};
	__property bool BestMatch = {read=IsBestMatch, nodefault};
	__property bool CaseSensitive = {read=IsCaseSensitive, nodefault};
	__property bool FixedLength = {read=IsFixedLength, nodefault};
	__property bool FixedPrecisionScale = {read=IsFixedPrecisionScale, nodefault};
	__property bool Long = {read=IsLong, nodefault};
	__property bool Nullable = {read=IsNullable, nodefault};
	__property bool Searchable = {read=IsSearchable, nodefault};
	__property bool SearchableWithLike = {read=IsSearchableWithLike, nodefault};
	__property bool Unsigned = {read=IsUnsigned, nodefault};
	__property bool Unicode = {read=IsUnicode, nodefault};
	__property bool UnicodeOptionSupported = {read=IsUnicodeOptionSupported, write=SetUnicodeOptionSupported, nodefault};
	__property bool UnsignedOptionSupported = {read=IsUnsignedOptionSupported, nodefault};
	__property bool StringOptionSupported = {read=IsStringOptionSupported, nodefault};
	__property bool LongOptionSupported = {read=IsLongOptionSupported, nodefault};
	__property short MaximumScale = {read=GetMaximumScale, nodefault};
	__property short MinimumScale = {read=GetMinimumScale, nodefault};
	__property bool ConcurrencyType = {read=IsConcurrencyType, nodefault};
	__property System::UnicodeString MaximumVersion = {read=FMaxVersion};
	__property System::UnicodeString MinimumVersion = {read=FMinVersion};
	__property bool LiteralSupported = {read=IsLiteralSupported, nodefault};
	__property System::UnicodeString LiteralPrefix = {read=FLiteralPrefix};
	__property System::UnicodeString LiteralSuffix = {read=FLiteralSuffix};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataTypeDescription(void) { }
	
};


class DELPHICLASS TDBXEmptyTableCursor;
class PASCALIMPLEMENTATION TDBXEmptyTableCursor : public Dbxcommontable::TDBXTable
{
	typedef Dbxcommontable::TDBXTable inherited;
	
public:
	__fastcall TDBXEmptyTableCursor(const System::UnicodeString MetaDataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns);
	__fastcall virtual ~TDBXEmptyTableCursor(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	virtual bool __fastcall First(void);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall Next(void);
	virtual void __fastcall Close(void);
	
protected:
	virtual bool __fastcall IsUpdateable(void);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	
public:
	Dbxcommon::TDBXValueTypeArray FColumns;
	
private:
	System::UnicodeString FMetaDataCollectionName;
};


class DELPHICLASS TDBXFilterProps;
class PASCALIMPLEMENTATION TDBXFilterProps : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	static const __int64 FSerialVersionUID = -0x297bd397b94c735cLL;
	
public:
	/* TDBXProperties.Create */ inline __fastcall virtual TDBXFilterProps(Dbxcommon::TDBXContext* DBXContext)/* overload */ : Dbxcommon::TDBXProperties(DBXContext) { }
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXFilterProps(void) { }
	
};


class PASCALIMPLEMENTATION TDBXIndexColumnValue : public Dbxcommon::TDBXInt32Value
{
	typedef Dbxcommon::TDBXInt32Value inherited;
	
public:
	__fastcall TDBXIndexColumnValue(const Dbxcommon::TDBXWritableValue* Value);
	virtual int __fastcall GetInt32(void)/* overload */;
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetInt32(const int Value);
	
private:
	Dbxcommon::TDBXWritableValue* FValue;
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXIndexColumnValue(void) { }
	
/* Hoisted overloads: */
	
public:
	inline int __fastcall  GetInt32(int defaultValue){ return Dbxcommon::TDBXValue::GetInt32(defaultValue); }
	
};


class DELPHICLASS TDBXMetaDataCollectionColumns;
class PASCALIMPLEMENTATION TDBXMetaDataCollectionColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateDataTypesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateCatalogsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateSchemasColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateTablesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateViewsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateSynonymsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateColumnsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateColumnConstraintsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateIndexesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateIndexColumnsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateForeignKeysColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateForeignKeyColumnsColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateProceduresColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateProcedureSourcesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateProcedureParametersColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreatePackagesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreatePackageProceduresColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreatePackageProcedureParametersColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreatePackageSourcesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateUsersColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateRolesColumns();
	static Dbxcommon::TDBXValueTypeArray __fastcall CreateReservedWordsColumns();
	
private:
	static Dbxcommon::TDBXValueType* __fastcall CreateValueType(const System::UnicodeString ColumnName, const System::UnicodeString ColumnCaption, const int ColumnType)/* overload */;
	static Dbxcommon::TDBXValueType* __fastcall CreateValueType(const System::UnicodeString ColumnName, const System::UnicodeString ColumnCaption, const int ColumnType, const bool Hidden)/* overload */;
	static int __fastcall DefaultDataSize(const int ColumnType);
	static const System::Byte DefaultAnsiDataSize = 0x80;
	
	static const System::Word DefaultWideDataSize = 0x100;
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataCollectionColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCollectionColumns(void) { }
	
};


class DELPHICLASS TDBXMetaDataCommandParseResult;
class PASCALIMPLEMENTATION TDBXMetaDataCommandParseResult : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXMetaDataCommandParseResult(const int CommandToken, const Dbxplatform::TDBXStringArray Parameters);
	
private:
	int FCommandToken;
	Dbxplatform::TDBXStringArray FParameters;
	
public:
	__property int CommandToken = {read=FCommandToken, nodefault};
	__property Dbxplatform::TDBXStringArray Parameters = {read=FParameters};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCommandParseResult(void) { }
	
};


class DELPHICLASS TDBXMetaDataReader;
class DELPHICLASS TDBXProviderContext;
class PASCALIMPLEMENTATION TDBXMetaDataReader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCollection(const System::UnicodeString MetaDataCommand) = 0 ;
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCollectionWithStorage(const System::UnicodeString MetaDataCommand) = 0 ;
	
protected:
	virtual void __fastcall SetContext(const TDBXProviderContext* Context) = 0 ;
	virtual TDBXProviderContext* __fastcall GetContext(void) = 0 ;
	virtual System::UnicodeString __fastcall GetProductName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetVersion(void) = 0 ;
	virtual void __fastcall SetVersion(const System::UnicodeString Version) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void) = 0 ;
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void) = 0 ;
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void) = 0 ;
	virtual bool __fastcall IsQuotedIdentifiersSupported(void) = 0 ;
	virtual bool __fastcall IsDescendingIndexSupported(void) = 0 ;
	virtual bool __fastcall IsDescendingIndexColumnsSupported(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSqlProcedureQuoteChar(void) = 0 ;
	virtual bool __fastcall IsMultipleCommandsSupported(void) = 0 ;
	virtual bool __fastcall IsTransactionsSupported(void) = 0 ;
	virtual bool __fastcall IsNestedTransactionsSupported(void) = 0 ;
	virtual bool __fastcall IsSetRowSizeSupported(void) = 0 ;
	virtual bool __fastcall IsSPReturnCodeSupported(void) = 0 ;
	virtual bool __fastcall IsParameterMetadataSupported(void) = 0 ;
	
public:
	__property TDBXProviderContext* Context = {read=GetContext, write=SetContext};
	__property System::UnicodeString ProductName = {read=GetProductName};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property System::UnicodeString SqlIdentifierQuotePrefix = {read=GetSqlIdentifierQuotePrefix};
	__property System::UnicodeString SqlIdentifierQuoteSuffix = {read=GetSqlIdentifierQuoteSuffix};
	__property bool LowerCaseIdentifiersSupported = {read=IsLowerCaseIdentifiersSupported, nodefault};
	__property bool UpperCaseIdentifiersSupported = {read=IsUpperCaseIdentifiersSupported, nodefault};
	__property bool QuotedIdentifiersSupported = {read=IsQuotedIdentifiersSupported, nodefault};
	__property bool DescendingIndexSupported = {read=IsDescendingIndexSupported, nodefault};
	__property bool DescendingIndexColumnsSupported = {read=IsDescendingIndexColumnsSupported, nodefault};
	__property System::UnicodeString SqlIdentifierQuoteChar = {read=GetSqlIdentifierQuoteChar};
	__property System::UnicodeString SqlProcedureQuoteChar = {read=GetSqlProcedureQuoteChar};
	__property bool MultipleCommandsSupported = {read=IsMultipleCommandsSupported, nodefault};
	__property bool TransactionsSupported = {read=IsTransactionsSupported, nodefault};
	__property bool NestedTransactionsSupported = {read=IsNestedTransactionsSupported, nodefault};
	__property bool SetRowSizeSupported = {read=IsSetRowSizeSupported, nodefault};
	__property bool SPReturnCodeSupported = {read=IsSPReturnCodeSupported, nodefault};
	__property bool ParameterMetadataSupported = {read=IsParameterMetadataSupported, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataReader(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataReader(void) { }
	
};


class PASCALIMPLEMENTATION TDBXBaseMetaDataReader : public TDBXMetaDataReader
{
	typedef TDBXMetaDataReader inherited;
	
public:
	__fastcall virtual ~TDBXBaseMetaDataReader(void);
	virtual int __fastcall CompareVersion(const System::UnicodeString OtherVersion);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCollection(const System::UnicodeString MetaDataCommand);
	virtual Dbxcommontable::TDBXTable* __fastcall MakeStorage(const Dbxcommontable::TDBXTable* Cursor);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCollectionWithStorage(const System::UnicodeString MetaDataCommand);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchDataTypes(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSchemas(const System::UnicodeString Catalog);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchTables(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString TableName, const System::UnicodeString TableType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchViews(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString View);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexes(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString Index);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeys(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeyColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryCatalog, const System::UnicodeString PrimarySchema, const System::UnicodeString PrimaryTable, const System::UnicodeString PrimaryKeyName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSynonyms(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Synonym);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedures(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureSources(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchProcedureParameters(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Procedure, const System::UnicodeString Parameter);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchUsers(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchRoles(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchReservedWords(void);
	
protected:
	virtual void __fastcall SetContext(const TDBXProviderContext* Context);
	virtual TDBXProviderContext* __fastcall GetContext(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetVersion(void);
	virtual void __fastcall SetVersion(const System::UnicodeString Version);
	virtual System::UnicodeString __fastcall GetSqlDefaultParameterMarker(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual bool __fastcall IsQuotedIdentifiersSupported(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void);
	virtual bool __fastcall IsDescendingIndexSupported(void);
	virtual bool __fastcall IsDescendingIndexColumnsSupported(void);
	virtual bool __fastcall IsSPReturnCodeSupported(void);
	virtual bool __fastcall IsParameterMetadataSupported(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void);
	virtual System::UnicodeString __fastcall GetSqlProcedureQuoteChar(void);
	virtual bool __fastcall IsMultipleCommandsSupported(void);
	virtual bool __fastcall IsTransactionsSupported(void);
	virtual bool __fastcall IsNestedTransactionsSupported(void);
	virtual bool __fastcall IsSetRowSizeSupported(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual System::UnicodeString __fastcall GetViewType(void);
	virtual System::UnicodeString __fastcall GetSystemTableType(void);
	virtual System::UnicodeString __fastcall GetSystemViewType(void);
	virtual System::UnicodeString __fastcall GetSynonymType(void);
	System::UnicodeString __fastcall MakeTableTypeString(const int InTableTypeCode, const int Flags);
	Dbxplatform::TDBXObjectStore* __fastcall GetDataTypeHash(void);
	Dbxplatform::TDBXArrayList* __fastcall GetDataTypes(void);
	virtual void __fastcall PopulateDataTypes(const Dbxplatform::TDBXObjectStore* Hash, const Dbxplatform::TDBXArrayList* Types, const TDBXDataTypeDescriptionArray Descr);
	virtual TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
	virtual System::UnicodeString __fastcall GetSqlForDataTypes(void);
	virtual System::UnicodeString __fastcall GetSqlForCatalogs(void);
	virtual System::UnicodeString __fastcall GetSqlForSchemas(void);
	virtual System::UnicodeString __fastcall GetSqlForTables(void);
	virtual System::UnicodeString __fastcall GetSqlForViews(void);
	virtual System::UnicodeString __fastcall GetSqlForColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForColumnConstraints(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexes(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeys(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForSynonyms(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureSources(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForPackages(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageSources(void);
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual System::UnicodeString __fastcall GetSqlForReservedWords(void);
	
private:
	int __fastcall CountDigits(const System::UnicodeString Version, const int FromIndex);
	void __fastcall AppendVersionSection(const Dbxplatform::TDBXStringBuffer* Buffer, const System::UnicodeString Version, const int InStart, const int EndIndex, const int ExpectedLength, const bool AddDot);
	System::UnicodeString __fastcall MakeStandardVersionFormat(const System::UnicodeString Version);
	int __fastcall FindSourceLineColumn(const Dbxcommontable::TDBXTable* Cursor, const int ExpectedColumns);
	void __fastcall InitScanner(void);
	TDBXMetaDataCommandParseResult* __fastcall ParseMetaDataCommand(const System::UnicodeString MetaDataCommand);
	System::UnicodeString __fastcall ParseId(void);
	void __fastcall ParseSqlObjectName(const Dbxplatform::TDBXStringArray Parameters, const int MaxIds);
	TDBXMetaDataCommandParseResult* __fastcall ParseParameter(const int CommandToken, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseGetObjectName(const int CommandToken, const int MaxIds, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseGetTables(const int CommandToken, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseForeignKeyColumns(const int CommandToken, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseIndexColumns(const int CommandToken, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseProcedures(const int CommandToken, const int MaxIds, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseProcedureParameters(const int CommandToken, const int MaxIds, const System::UnicodeString Command);
	TDBXMetaDataCommandParseResult* __fastcall ParseDone(const int CommandToken, const System::UnicodeString Command, const Dbxplatform::TDBXStringArray Parameters);
	TDBXProviderContext* FContext;
	Dbxplatform::TDBXObjectStore* FDataTypeHash;
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
	System::UnicodeString FVersion;
	Dbxplatform::TDBXArrayList* FTypes;
	
public:
	__property System::UnicodeString SqlDefaultParameterMarker = {read=GetSqlDefaultParameterMarker};
	__property System::UnicodeString TableType = {read=GetTableType};
	__property System::UnicodeString ViewType = {read=GetViewType};
	__property System::UnicodeString SystemTableType = {read=GetSystemTableType};
	__property System::UnicodeString SystemViewType = {read=GetSystemViewType};
	__property System::UnicodeString SynonymType = {read=GetSynonymType};
	__property Dbxplatform::TDBXObjectStore* DataTypeHash = {read=GetDataTypeHash};
	__property Dbxplatform::TDBXArrayList* DataTypes = {read=GetDataTypes};
	
protected:
	__property TDBXDataTypeDescriptionArray DataTypeDescriptions = {read=GetDataTypeDescriptions};
	__property Dbxplatform::TDBXStringArray ReservedWords = {read=GetReservedWords};
	__property System::UnicodeString SqlForDataTypes = {read=GetSqlForDataTypes};
	__property System::UnicodeString SqlForCatalogs = {read=GetSqlForCatalogs};
	__property System::UnicodeString SqlForSchemas = {read=GetSqlForSchemas};
	__property System::UnicodeString SqlForTables = {read=GetSqlForTables};
	__property System::UnicodeString SqlForViews = {read=GetSqlForViews};
	__property System::UnicodeString SqlForColumns = {read=GetSqlForColumns};
	__property System::UnicodeString SqlForColumnConstraints = {read=GetSqlForColumnConstraints};
	__property System::UnicodeString SqlForIndexes = {read=GetSqlForIndexes};
	__property System::UnicodeString SqlForIndexColumns = {read=GetSqlForIndexColumns};
	__property System::UnicodeString SqlForForeignKeys = {read=GetSqlForForeignKeys};
	__property System::UnicodeString SqlForForeignKeyColumns = {read=GetSqlForForeignKeyColumns};
	__property System::UnicodeString SqlForSynonyms = {read=GetSqlForSynonyms};
	__property System::UnicodeString SqlForProcedures = {read=GetSqlForProcedures};
	__property System::UnicodeString SqlForProcedureSources = {read=GetSqlForProcedureSources};
	__property System::UnicodeString SqlForProcedureParameters = {read=GetSqlForProcedureParameters};
	__property System::UnicodeString SqlForPackages = {read=GetSqlForPackages};
	__property System::UnicodeString SqlForPackageProcedures = {read=GetSqlForPackageProcedures};
	__property System::UnicodeString SqlForPackageProcedureParameters = {read=GetSqlForPackageProcedureParameters};
	__property System::UnicodeString SqlForPackageSources = {read=GetSqlForPackageSources};
	__property System::UnicodeString SqlForUsers = {read=GetSqlForUsers};
	__property System::UnicodeString SqlForRoles = {read=GetSqlForRoles};
	__property System::UnicodeString SqlForReservedWords = {read=GetSqlForReservedWords};
	
private:
	#define TDBXBaseMetaDataReader_SourceLineNumber L"SOURCE_LINE_NUMBER"
	
	static const System::WideChar Colon = (System::WideChar)(0x3a);
	
	static const System::WideChar Dot = (System::WideChar)(0x2e);
	
	static const System::WideChar DoubleQuote = (System::WideChar)(0x22);
	
	static const System::Word TokenDatabase = 0x1f4;
	
	static const System::Word TokenTable = 0x1f5;
	
	static const System::Word TokenView = 0x1f6;
	
	static const System::Word TokenSystemTable = 0x1f7;
	
	static const System::Word TokenSystemView = 0x1f8;
	
	static const System::Word TokenSynonym = 0x1f9;
	
	static const System::Word TokenProcedureType = 0x1fa;
	
	static const System::Word TokenFunctionType = 0x1fb;
	
	static const System::Word TokenPrimaryKey = 0x1fc;
	
	static const System::Word TokenForeignKey = 0x1fd;
	
public:
	/* TObject.Create */ inline __fastcall TDBXBaseMetaDataReader(void) : TDBXMetaDataReader() { }
	
};


class DELPHICLASS TDBXParameterName;
class PASCALIMPLEMENTATION TDBXParameterName : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::WideChar DefaultMarker = (System::WideChar)(0x3a);
	
	#define TDBXParameterName_CatalogName L"CATALOG_NAME"
	
	#define TDBXParameterName_SchemaName L"SCHEMA_NAME"
	
	#define TDBXParameterName_TableName L"TABLE_NAME"
	
	#define TDBXParameterName_NewSchemaName L"NEW_SCHEMA_NAME"
	
	#define TDBXParameterName_NewTableName L"NEW_TABLE_NAME"
	
	#define TDBXParameterName_Tables L"TABLES"
	
	#define TDBXParameterName_Views L"VIEWS"
	
	#define TDBXParameterName_SystemTables L"SYSTEM_TABLES"
	
	#define TDBXParameterName_SystemViews L"SYSTEM_VIEWS"
	
	#define TDBXParameterName_Synonyms L"SYNONYMS"
	
	#define TDBXParameterName_ViewName L"VIEW_NAME"
	
	#define TDBXParameterName_IndexName L"INDEX_NAME"
	
	#define TDBXParameterName_ForeignKeyName L"FOREIGN_KEY_NAME"
	
	#define TDBXParameterName_PrimaryCatalogName L"PRIMARY_CATALOG_NAME"
	
	#define TDBXParameterName_PrimarySchemaName L"PRIMARY_SCHEMA_NAME"
	
	#define TDBXParameterName_PrimaryTableName L"PRIMARY_TABLE_NAME"
	
	#define TDBXParameterName_PrimaryKeyName L"PRIMARY_KEY_NAME"
	
	#define TDBXParameterName_SynonymName L"SYNONYM_NAME"
	
	#define TDBXParameterName_ProcedureType L"PROCEDURE_TYPE"
	
	#define TDBXParameterName_ProcedureName L"PROCEDURE_NAME"
	
	#define TDBXParameterName_PackageName L"PACKAGE_NAME"
	
	#define TDBXParameterName_ParameterName L"PARAMETER_NAME"
	
public:
	/* TObject.Create */ inline __fastcall TDBXParameterName(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXParameterName(void) { }
	
};


class PASCALIMPLEMENTATION TDBXPlatformTypeNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::UnicodeString __fastcall GetPlatformTypeName(const int DataType, const bool IsUnsigned) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXPlatformTypeNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPlatformTypeNames(void) { }
	
};


class DELPHICLASS TDBXProcedureType;
class PASCALIMPLEMENTATION TDBXProcedureType : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXProcedureType_ProcedureType L"PROCEDURE"
	
	#define TDBXProcedureType_FunctionType L"FUNCTION"
	
public:
	/* TObject.Create */ inline __fastcall TDBXProcedureType(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProcedureType(void) { }
	
};


class PASCALIMPLEMENTATION TDBXProviderContext : public TDBXPlatformTypeNames
{
	typedef TDBXPlatformTypeNames inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall ExecuteQuery(const System::UnicodeString Sql, const Dbxplatform::TDBXStringArray ParameterNames, const Dbxplatform::TDBXStringArray ParameterValues) = 0 ;
	virtual Dbxcommontable::TDBXTable* __fastcall CreateTableStorage(const System::UnicodeString MetaDataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns) = 0 ;
	virtual Dbxcommontable::TDBXTableRow* __fastcall CreateRowStorage(const System::UnicodeString MetaDataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns) = 0 ;
	virtual void __fastcall StartSerializedTransaction(void) = 0 ;
	virtual void __fastcall StartTransaction(void) = 0 ;
	virtual void __fastcall Commit(void) = 0 ;
	virtual void __fastcall Rollback(void) = 0 ;
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name) = 0 ;
	static bool __fastcall UseAnsiString(const System::UnicodeString ProductName);
public:
	/* TObject.Create */ inline __fastcall TDBXProviderContext(void) : TDBXPlatformTypeNames() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProviderContext(void) { }
	
};


class DELPHICLASS TDBXReservedWordsCursor;
class PASCALIMPLEMENTATION TDBXReservedWordsCursor : public Dbxcommontable::TDBXTable
{
	typedef Dbxcommontable::TDBXTable inherited;
	
public:
	__fastcall TDBXReservedWordsCursor(const TDBXPlatformTypeNames* TypeNames, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxplatform::TDBXStringArray Keywords);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name)/* overload */;
	__fastcall virtual ~TDBXReservedWordsCursor(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual void __fastcall Close(void);
	
protected:
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	TDBXPlatformTypeNames* FTypeNames;
	Dbxplatform::TDBXStringArray FKeywords;
	int FRowIndex;
	
private:
	Dbxcommontable::TDBXSingleValueRow* FReservedRow;
};


class DELPHICLASS TDBXSourceTableCursor;
class PASCALIMPLEMENTATION TDBXSourceTableCursor : public TDBXCustomMetaDataTable
{
	typedef TDBXCustomMetaDataTable inherited;
	
public:
	__fastcall TDBXSourceTableCursor(const TDBXProviderContext* Context, const System::UnicodeString MetaDataCollectionName, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor, const int OrdinalDefinition, const int OrdinalLineNumber);
	__fastcall virtual ~TDBXSourceTableCursor(void);
	virtual bool __fastcall Next(void);
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
private:
	Dbxcommontable::TDBXSingleValueRow* FRowStorage;
	Dbxplatform::TDBXStringBuffer* FBuffer;
	int FOrdinalLineNumber;
	int FOrdinalDefinition;
	bool FBeforeEnd;
	bool FBeforeFirst;
};


class DELPHICLASS TDBXTableType;
class PASCALIMPLEMENTATION TDBXTableType : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXTableType_Table L"TABLE"
	
	#define TDBXTableType_View L"VIEW"
	
	#define TDBXTableType_Synonym L"SYNONYM"
	
	#define TDBXTableType_SystemTable L"SYSTEM TABLE"
	
	#define TDBXTableType_SystemView L"SYSTEM VIEW"
	
public:
	/* TObject.Create */ inline __fastcall TDBXTableType(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTableType(void) { }
	
};


class DELPHICLASS TDBXTableTypeFlag;
class PASCALIMPLEMENTATION TDBXTableTypeFlag : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt Table = 0x1;
	
	static const System::ShortInt View = 0x2;
	
	static const System::ShortInt SystemTable = 0x4;
	
	static const System::ShortInt SystemView = 0x8;
	
	static const System::ShortInt Synonym = 0x10;
	
	static const System::ShortInt All = 0x1f;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTableTypeFlag(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTableTypeFlag(void) { }
	
};


class DELPHICLASS TDBXTableTypeParser;
class PASCALIMPLEMENTATION TDBXTableTypeParser : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static int __fastcall ParseTableTypes(const System::UnicodeString TableTypes);
public:
	/* TObject.Create */ inline __fastcall TDBXTableTypeParser(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTableTypeParser(void) { }
	
};


class DELPHICLASS TDBXTypeFlag;
class PASCALIMPLEMENTATION TDBXTypeFlag : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt AutoIncrementable = 0x1;
	
	static const System::ShortInt BestMatch = 0x2;
	
	static const System::ShortInt FixedLength = 0x4;
	
	static const System::ShortInt CaseSensitive = 0x8;
	
	static const System::ShortInt FixedPrecisionScale = 0x10;
	
	static const System::ShortInt Long = 0x20;
	
	static const System::ShortInt Nullable = 0x40;
	
	static const System::Byte Searchable = 0x80;
	
	static const System::Word SearchableWithLike = 0x100;
	
	static const System::Word Unsigned = 0x200;
	
	static const System::Word ConcurrencyType = 0x400;
	
	static const System::Word LiteralSupported = 0x800;
	
	static const System::Word Unicode = 0x1000;
	
	static const System::Word UnicodeOption = 0x2000;
	
	static const System::Word UnsignedOption = 0x4000;
	
	static const System::Word StringOption = 0x8000;
	
	static const int LongOption = 0x10000;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTypeFlag(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTypeFlag(void) { }
	
};


class DELPHICLASS TDBXVersion;
class PASCALIMPLEMENTATION TDBXVersion : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXVersion_FMySQL4_1 L"04.01.0000"
	
	#define TDBXVersion_FMySQL5 L"05.00.0000"
	
	#define TDBXVersion_FMySQL5_0_6 L"05.00.0006"
	
	#define TDBXVersion_FVersion10 L"10.00.0000"
	
public:
	/* TObject.Create */ inline __fastcall TDBXVersion(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXVersion(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatareaderHPP
