// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXTypedTableStorage.pas' rev: 22.00

#ifndef DbxtypedtablestorageHPP
#define DbxtypedtablestorageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxtypedtablestorage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXCatalogsTableStorage;
class PASCALIMPLEMENTATION TDBXCatalogsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXCatalogsTableStorage(void)/* overload */;
	__fastcall TDBXCatalogsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXCatalogsTableStorage(void) { }
	
};


class DELPHICLASS TDBXColumnConstraintsTableStorage;
class PASCALIMPLEMENTATION TDBXColumnConstraintsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXColumnConstraintsTableStorage(void)/* overload */;
	__fastcall TDBXColumnConstraintsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetConstraintName(void);
	void __fastcall SetConstraintName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetColumnName(void);
	void __fastcall SetColumnName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString ConstraintName = {read=GetConstraintName, write=SetConstraintName};
	__property System::UnicodeString ColumnName = {read=GetColumnName, write=SetColumnName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXColumnConstraintsTableStorage(void) { }
	
};


class DELPHICLASS TDBXColumnsTableStorage;
class PASCALIMPLEMENTATION TDBXColumnsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXColumnsTableStorage(void)/* overload */;
	__fastcall TDBXColumnsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetColumnName(void);
	void __fastcall SetColumnName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTypeName(void);
	void __fastcall SetTypeName(const System::UnicodeString Value);
	int __fastcall GetPrecision(void);
	void __fastcall SetPrecision(const int Value);
	int __fastcall GetScale(void);
	void __fastcall SetScale(const int Value);
	int __fastcall GetColumnOrdinal(void);
	void __fastcall SetColumnOrdinal(const int Value);
	System::UnicodeString __fastcall GetDefaultValue(void);
	void __fastcall SetDefaultValue(const System::UnicodeString Value);
	bool __fastcall IsNullable(void);
	void __fastcall SetNullable(const bool Value);
	bool __fastcall IsAutoIncrement(void);
	void __fastcall SetAutoIncrement(const bool Value);
	int __fastcall GetMaxInline(void);
	void __fastcall SetMaxInline(const int Value);
	int __fastcall GetDbxDataType(void);
	void __fastcall SetDbxDataType(const int Value);
	bool __fastcall IsFixedLength(void);
	void __fastcall SetFixedLength(const bool Value);
	bool __fastcall IsUnicode(void);
	void __fastcall SetUnicode(const bool Value);
	bool __fastcall IsLong(void);
	void __fastcall SetLong(const bool Value);
	bool __fastcall IsUnsigned(void);
	void __fastcall SetUnsigned(const bool Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString ColumnName = {read=GetColumnName, write=SetColumnName};
	__property System::UnicodeString TypeName = {read=GetTypeName, write=SetTypeName};
	__property int Precision = {read=GetPrecision, write=SetPrecision, nodefault};
	__property int Scale = {read=GetScale, write=SetScale, nodefault};
	__property int ColumnOrdinal = {read=GetColumnOrdinal, write=SetColumnOrdinal, nodefault};
	__property System::UnicodeString DefaultValue = {read=GetDefaultValue, write=SetDefaultValue};
	__property bool Nullable = {read=IsNullable, write=SetNullable, nodefault};
	__property bool AutoIncrement = {read=IsAutoIncrement, write=SetAutoIncrement, nodefault};
	__property int MaxInline = {read=GetMaxInline, write=SetMaxInline, nodefault};
	__property int DbxDataType = {read=GetDbxDataType, write=SetDbxDataType, nodefault};
	__property bool FixedLength = {read=IsFixedLength, write=SetFixedLength, nodefault};
	__property bool Unicode = {read=IsUnicode, write=SetUnicode, nodefault};
	__property bool Long = {read=IsLong, write=SetLong, nodefault};
	__property bool Unsigned = {read=IsUnsigned, write=SetUnsigned, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXColumnsTableStorage(void) { }
	
};


class DELPHICLASS TDBXDataTypesTableStorage;
class PASCALIMPLEMENTATION TDBXDataTypesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXDataTypesTableStorage(void)/* overload */;
	__fastcall TDBXDataTypesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetTypeName(void);
	void __fastcall SetTypeName(const System::UnicodeString Value);
	int __fastcall GetDbxDataType(void);
	void __fastcall SetDbxDataType(const int Value);
	__int64 __fastcall GetColumnSize(void);
	void __fastcall SetColumnSize(const __int64 Value);
	System::UnicodeString __fastcall GetCreateFormat(void);
	void __fastcall SetCreateFormat(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetCreateParameters(void);
	void __fastcall SetCreateParameters(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDataType(void);
	void __fastcall SetDataType(const System::UnicodeString Value);
	bool __fastcall IsAutoIncrementable(void);
	void __fastcall SetAutoIncrementable(const bool Value);
	bool __fastcall IsBestMatch(void);
	void __fastcall SetBestMatch(const bool Value);
	bool __fastcall IsCaseSensitive(void);
	void __fastcall SetCaseSensitive(const bool Value);
	bool __fastcall IsFixedLength(void);
	void __fastcall SetFixedLength(const bool Value);
	bool __fastcall IsFixedPrecisionScale(void);
	void __fastcall SetFixedPrecisionScale(const bool Value);
	bool __fastcall IsLong(void);
	void __fastcall SetLong(const bool Value);
	bool __fastcall IsNullable(void);
	void __fastcall SetNullable(const bool Value);
	bool __fastcall IsSearchable(void);
	void __fastcall SetSearchable(const bool Value);
	bool __fastcall IsSearchableWithLike(void);
	void __fastcall SetSearchableWithLike(const bool Value);
	bool __fastcall IsUnsigned(void);
	void __fastcall SetUnsigned(const bool Value);
	short __fastcall GetMaximumScale(void);
	void __fastcall SetMaximumScale(const short Value);
	short __fastcall GetMinimumScale(void);
	void __fastcall SetMinimumScale(const short Value);
	bool __fastcall IsConcurrencyType(void);
	void __fastcall SetConcurrencyType(const bool Value);
	System::UnicodeString __fastcall GetMaximumVersion(void);
	void __fastcall SetMaximumVersion(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetMinimumVersion(void);
	void __fastcall SetMinimumVersion(const System::UnicodeString Value);
	bool __fastcall IsLiteralSupported(void);
	void __fastcall SetLiteralSupported(const bool Value);
	System::UnicodeString __fastcall GetLiteralPrefix(void);
	void __fastcall SetLiteralPrefix(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetLiteralSuffix(void);
	void __fastcall SetLiteralSuffix(const System::UnicodeString Value);
	bool __fastcall IsUnicode(void);
	void __fastcall SetUnicode(const bool Value);
	int __fastcall GetProviderDbType(void);
	void __fastcall SetProviderDbType(const int Value);
	
public:
	__property System::UnicodeString TypeName = {read=GetTypeName, write=SetTypeName};
	__property int DbxDataType = {read=GetDbxDataType, write=SetDbxDataType, nodefault};
	__property __int64 ColumnSize = {read=GetColumnSize, write=SetColumnSize};
	__property System::UnicodeString CreateFormat = {read=GetCreateFormat, write=SetCreateFormat};
	__property System::UnicodeString CreateParameters = {read=GetCreateParameters, write=SetCreateParameters};
	__property System::UnicodeString DataType = {read=GetDataType, write=SetDataType};
	__property bool AutoIncrementable = {read=IsAutoIncrementable, write=SetAutoIncrementable, nodefault};
	__property bool BestMatch = {read=IsBestMatch, write=SetBestMatch, nodefault};
	__property bool CaseSensitive = {read=IsCaseSensitive, write=SetCaseSensitive, nodefault};
	__property bool FixedLength = {read=IsFixedLength, write=SetFixedLength, nodefault};
	__property bool FixedPrecisionScale = {read=IsFixedPrecisionScale, write=SetFixedPrecisionScale, nodefault};
	__property bool Long = {read=IsLong, write=SetLong, nodefault};
	__property bool Nullable = {read=IsNullable, write=SetNullable, nodefault};
	__property bool Searchable = {read=IsSearchable, write=SetSearchable, nodefault};
	__property bool SearchableWithLike = {read=IsSearchableWithLike, write=SetSearchableWithLike, nodefault};
	__property bool Unsigned = {read=IsUnsigned, write=SetUnsigned, nodefault};
	__property short MaximumScale = {read=GetMaximumScale, write=SetMaximumScale, nodefault};
	__property short MinimumScale = {read=GetMinimumScale, write=SetMinimumScale, nodefault};
	__property bool ConcurrencyType = {read=IsConcurrencyType, write=SetConcurrencyType, nodefault};
	__property System::UnicodeString MaximumVersion = {read=GetMaximumVersion, write=SetMaximumVersion};
	__property System::UnicodeString MinimumVersion = {read=GetMinimumVersion, write=SetMinimumVersion};
	__property bool LiteralSupported = {read=IsLiteralSupported, write=SetLiteralSupported, nodefault};
	__property System::UnicodeString LiteralPrefix = {read=GetLiteralPrefix, write=SetLiteralPrefix};
	__property System::UnicodeString LiteralSuffix = {read=GetLiteralSuffix, write=SetLiteralSuffix};
	__property bool Unicode = {read=IsUnicode, write=SetUnicode, nodefault};
	__property int ProviderDbType = {read=GetProviderDbType, write=SetProviderDbType, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXDataTypesTableStorage(void) { }
	
};


class DELPHICLASS TDBXForeignKeyColumnsTableStorage;
class PASCALIMPLEMENTATION TDBXForeignKeyColumnsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXForeignKeyColumnsTableStorage(void)/* overload */;
	__fastcall TDBXForeignKeyColumnsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetForeignKeyName(void);
	void __fastcall SetForeignKeyName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetColumnName(void);
	void __fastcall SetColumnName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPrimaryCatalogName(void);
	void __fastcall SetPrimaryCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPrimarySchemaName(void);
	void __fastcall SetPrimarySchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPrimaryTableName(void);
	void __fastcall SetPrimaryTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPrimaryKeyName(void);
	void __fastcall SetPrimaryKeyName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPrimaryColumnName(void);
	void __fastcall SetPrimaryColumnName(const System::UnicodeString Value);
	int __fastcall GetColumnOrdinal(void);
	void __fastcall SetColumnOrdinal(const int Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString ForeignKeyName = {read=GetForeignKeyName, write=SetForeignKeyName};
	__property System::UnicodeString ColumnName = {read=GetColumnName, write=SetColumnName};
	__property System::UnicodeString PrimaryCatalogName = {read=GetPrimaryCatalogName, write=SetPrimaryCatalogName};
	__property System::UnicodeString PrimarySchemaName = {read=GetPrimarySchemaName, write=SetPrimarySchemaName};
	__property System::UnicodeString PrimaryTableName = {read=GetPrimaryTableName, write=SetPrimaryTableName};
	__property System::UnicodeString PrimaryKeyName = {read=GetPrimaryKeyName, write=SetPrimaryKeyName};
	__property System::UnicodeString PrimaryColumnName = {read=GetPrimaryColumnName, write=SetPrimaryColumnName};
	__property int ColumnOrdinal = {read=GetColumnOrdinal, write=SetColumnOrdinal, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXForeignKeyColumnsTableStorage(void) { }
	
};


class DELPHICLASS TDBXForeignKeysTableStorage;
class PASCALIMPLEMENTATION TDBXForeignKeysTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXForeignKeysTableStorage(void)/* overload */;
	__fastcall TDBXForeignKeysTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetForeignKeyName(void);
	void __fastcall SetForeignKeyName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString ForeignKeyName = {read=GetForeignKeyName, write=SetForeignKeyName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXForeignKeysTableStorage(void) { }
	
};


class DELPHICLASS TDBXIndexColumnsTableStorage;
class PASCALIMPLEMENTATION TDBXIndexColumnsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXIndexColumnsTableStorage(void)/* overload */;
	__fastcall TDBXIndexColumnsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetIndexName(void);
	void __fastcall SetIndexName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetColumnName(void);
	void __fastcall SetColumnName(const System::UnicodeString Value);
	int __fastcall GetColumnOrdinal(void);
	void __fastcall SetColumnOrdinal(const int Value);
	bool __fastcall IsAscending(void);
	void __fastcall SetAscending(const bool Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString IndexName = {read=GetIndexName, write=SetIndexName};
	__property System::UnicodeString ColumnName = {read=GetColumnName, write=SetColumnName};
	__property int ColumnOrdinal = {read=GetColumnOrdinal, write=SetColumnOrdinal, nodefault};
	__property bool Ascending = {read=IsAscending, write=SetAscending, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXIndexColumnsTableStorage(void) { }
	
};


class DELPHICLASS TDBXIndexesTableStorage;
class PASCALIMPLEMENTATION TDBXIndexesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXIndexesTableStorage(void)/* overload */;
	__fastcall TDBXIndexesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetIndexName(void);
	void __fastcall SetIndexName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetConstraintName(void);
	void __fastcall SetConstraintName(const System::UnicodeString Value);
	bool __fastcall IsPrimary(void);
	void __fastcall SetPrimary(const bool Value);
	bool __fastcall IsUnique(void);
	void __fastcall SetUnique(const bool Value);
	bool __fastcall IsAscending(void);
	void __fastcall SetAscending(const bool Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString IndexName = {read=GetIndexName, write=SetIndexName};
	__property System::UnicodeString ConstraintName = {read=GetConstraintName, write=SetConstraintName};
	__property bool Primary = {read=IsPrimary, write=SetPrimary, nodefault};
	__property bool Unique = {read=IsUnique, write=SetUnique, nodefault};
	__property bool Ascending = {read=IsAscending, write=SetAscending, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXIndexesTableStorage(void) { }
	
};


class DELPHICLASS TDBXPackageProcedureParametersTableStorage;
class PASCALIMPLEMENTATION TDBXPackageProcedureParametersTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXPackageProcedureParametersTableStorage(void)/* overload */;
	__fastcall TDBXPackageProcedureParametersTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetParameterName(void);
	void __fastcall SetParameterName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetParameterMode(void);
	void __fastcall SetParameterMode(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTypeName(void);
	void __fastcall SetTypeName(const System::UnicodeString Value);
	int __fastcall GetPrecision(void);
	void __fastcall SetPrecision(const int Value);
	int __fastcall GetScale(void);
	void __fastcall SetScale(const int Value);
	int __fastcall GetColumnOrdinal(void);
	void __fastcall SetColumnOrdinal(const int Value);
	bool __fastcall IsNullable(void);
	void __fastcall SetNullable(const bool Value);
	int __fastcall GetDbxDataType(void);
	void __fastcall SetDbxDataType(const int Value);
	bool __fastcall IsFixedLength(void);
	void __fastcall SetFixedLength(const bool Value);
	bool __fastcall IsUnicode(void);
	void __fastcall SetUnicode(const bool Value);
	bool __fastcall IsLong(void);
	void __fastcall SetLong(const bool Value);
	bool __fastcall IsUnsigned(void);
	void __fastcall SetUnsigned(const bool Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ParameterName = {read=GetParameterName, write=SetParameterName};
	__property System::UnicodeString ParameterMode = {read=GetParameterMode, write=SetParameterMode};
	__property System::UnicodeString TypeName = {read=GetTypeName, write=SetTypeName};
	__property int Precision = {read=GetPrecision, write=SetPrecision, nodefault};
	__property int Scale = {read=GetScale, write=SetScale, nodefault};
	__property int ColumnOrdinal = {read=GetColumnOrdinal, write=SetColumnOrdinal, nodefault};
	__property bool Nullable = {read=IsNullable, write=SetNullable, nodefault};
	__property int DbxDataType = {read=GetDbxDataType, write=SetDbxDataType, nodefault};
	__property bool FixedLength = {read=IsFixedLength, write=SetFixedLength, nodefault};
	__property bool Unicode = {read=IsUnicode, write=SetUnicode, nodefault};
	__property bool Long = {read=IsLong, write=SetLong, nodefault};
	__property bool Unsigned = {read=IsUnsigned, write=SetUnsigned, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXPackageProcedureParametersTableStorage(void) { }
	
};


class DELPHICLASS TDBXPackageProceduresTableStorage;
class PASCALIMPLEMENTATION TDBXPackageProceduresTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXPackageProceduresTableStorage(void)/* overload */;
	__fastcall TDBXPackageProceduresTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureType(void);
	void __fastcall SetProcedureType(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ProcedureType = {read=GetProcedureType, write=SetProcedureType};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXPackageProceduresTableStorage(void) { }
	
};


class DELPHICLASS TDBXPackageSourcesTableStorage;
class PASCALIMPLEMENTATION TDBXPackageSourcesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXPackageSourcesTableStorage(void)/* overload */;
	__fastcall TDBXPackageSourcesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDefinition(void);
	void __fastcall SetDefinition(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString Definition = {read=GetDefinition, write=SetDefinition};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXPackageSourcesTableStorage(void) { }
	
};


class DELPHICLASS TDBXPackagesTableStorage;
class PASCALIMPLEMENTATION TDBXPackagesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXPackagesTableStorage(void)/* overload */;
	__fastcall TDBXPackagesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXPackagesTableStorage(void) { }
	
};


class DELPHICLASS TDBXProcedureParametersTableStorage;
class PASCALIMPLEMENTATION TDBXProcedureParametersTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXProcedureParametersTableStorage(void)/* overload */;
	__fastcall TDBXProcedureParametersTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetParameterName(void);
	void __fastcall SetParameterName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetParameterMode(void);
	void __fastcall SetParameterMode(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTypeName(void);
	void __fastcall SetTypeName(const System::UnicodeString Value);
	int __fastcall GetPrecision(void);
	void __fastcall SetPrecision(const int Value);
	int __fastcall GetScale(void);
	void __fastcall SetScale(const int Value);
	int __fastcall GetColumnOrdinal(void);
	void __fastcall SetColumnOrdinal(const int Value);
	bool __fastcall IsNullable(void);
	void __fastcall SetNullable(const bool Value);
	int __fastcall GetDbxDataType(void);
	void __fastcall SetDbxDataType(const int Value);
	bool __fastcall IsFixedLength(void);
	void __fastcall SetFixedLength(const bool Value);
	bool __fastcall IsUnicode(void);
	void __fastcall SetUnicode(const bool Value);
	bool __fastcall IsLong(void);
	void __fastcall SetLong(const bool Value);
	bool __fastcall IsUnsigned(void);
	void __fastcall SetUnsigned(const bool Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ParameterName = {read=GetParameterName, write=SetParameterName};
	__property System::UnicodeString ParameterMode = {read=GetParameterMode, write=SetParameterMode};
	__property System::UnicodeString TypeName = {read=GetTypeName, write=SetTypeName};
	__property int Precision = {read=GetPrecision, write=SetPrecision, nodefault};
	__property int Scale = {read=GetScale, write=SetScale, nodefault};
	__property int ColumnOrdinal = {read=GetColumnOrdinal, write=SetColumnOrdinal, nodefault};
	__property bool Nullable = {read=IsNullable, write=SetNullable, nodefault};
	__property int DbxDataType = {read=GetDbxDataType, write=SetDbxDataType, nodefault};
	__property bool FixedLength = {read=IsFixedLength, write=SetFixedLength, nodefault};
	__property bool Unicode = {read=IsUnicode, write=SetUnicode, nodefault};
	__property bool Long = {read=IsLong, write=SetLong, nodefault};
	__property bool Unsigned = {read=IsUnsigned, write=SetUnsigned, nodefault};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXProcedureParametersTableStorage(void) { }
	
};


class DELPHICLASS TDBXProcedureSourcesTableStorage;
class PASCALIMPLEMENTATION TDBXProcedureSourcesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXProcedureSourcesTableStorage(void)/* overload */;
	__fastcall TDBXProcedureSourcesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureType(void);
	void __fastcall SetProcedureType(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDefinition(void);
	void __fastcall SetDefinition(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetExternalDefinition(void);
	void __fastcall SetExternalDefinition(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ProcedureType = {read=GetProcedureType, write=SetProcedureType};
	__property System::UnicodeString Definition = {read=GetDefinition, write=SetDefinition};
	__property System::UnicodeString ExternalDefinition = {read=GetExternalDefinition, write=SetExternalDefinition};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXProcedureSourcesTableStorage(void) { }
	
};


class DELPHICLASS TDBXProceduresTableStorage;
class PASCALIMPLEMENTATION TDBXProceduresTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXProceduresTableStorage(void)/* overload */;
	__fastcall TDBXProceduresTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetProcedureType(void);
	void __fastcall SetProcedureType(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ProcedureType = {read=GetProcedureType, write=SetProcedureType};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXProceduresTableStorage(void) { }
	
};


class DELPHICLASS TDBXReservedWordsTableStorage;
class PASCALIMPLEMENTATION TDBXReservedWordsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXReservedWordsTableStorage(void)/* overload */;
	__fastcall TDBXReservedWordsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetReservedWord(void);
	void __fastcall SetReservedWord(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString ReservedWord = {read=GetReservedWord, write=SetReservedWord};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXReservedWordsTableStorage(void) { }
	
};


class DELPHICLASS TDBXRolesTableStorage;
class PASCALIMPLEMENTATION TDBXRolesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXRolesTableStorage(void)/* overload */;
	__fastcall TDBXRolesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetRoleName(void);
	void __fastcall SetRoleName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString RoleName = {read=GetRoleName, write=SetRoleName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXRolesTableStorage(void) { }
	
};


class DELPHICLASS TDBXSchemasTableStorage;
class PASCALIMPLEMENTATION TDBXSchemasTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXSchemasTableStorage(void)/* overload */;
	__fastcall TDBXSchemasTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXSchemasTableStorage(void) { }
	
};


class DELPHICLASS TDBXSynonymsTableStorage;
class PASCALIMPLEMENTATION TDBXSynonymsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXSynonymsTableStorage(void)/* overload */;
	__fastcall TDBXSynonymsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSynonymName(void);
	void __fastcall SetSynonymName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableCatalogName(void);
	void __fastcall SetTableCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableSchemaName(void);
	void __fastcall SetTableSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString SynonymName = {read=GetSynonymName, write=SetSynonymName};
	__property System::UnicodeString TableCatalogName = {read=GetTableCatalogName, write=SetTableCatalogName};
	__property System::UnicodeString TableSchemaName = {read=GetTableSchemaName, write=SetTableSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXSynonymsTableStorage(void) { }
	
};


class DELPHICLASS TDBXTablesTableStorage;
class PASCALIMPLEMENTATION TDBXTablesTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXTablesTableStorage(void)/* overload */;
	__fastcall TDBXTablesTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableName(void);
	void __fastcall SetTableName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTableType(void);
	void __fastcall SetTableType(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property System::UnicodeString TableType = {read=GetTableType, write=SetTableType};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXTablesTableStorage(void) { }
	
};


class DELPHICLASS TDBXUsersTableStorage;
class PASCALIMPLEMENTATION TDBXUsersTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXUsersTableStorage(void)/* overload */;
	__fastcall TDBXUsersTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetUserName(void);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXUsersTableStorage(void) { }
	
};


class DELPHICLASS TDBXViewsTableStorage;
class PASCALIMPLEMENTATION TDBXViewsTableStorage : public Dbxcommontable::TDBXDelegateTable
{
	typedef Dbxcommontable::TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXViewsTableStorage(void)/* overload */;
	__fastcall TDBXViewsTableStorage(const Dbxcommontable::TDBXTable* TableStore)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetViewName(void);
	void __fastcall SetViewName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDefinition(void);
	void __fastcall SetDefinition(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ViewName = {read=GetViewName, write=SetViewName};
	__property System::UnicodeString Definition = {read=GetDefinition, write=SetDefinition};
public:
	/* TDBXDelegateTable.Destroy */ inline __fastcall virtual ~TDBXViewsTableStorage(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxtypedtablestorage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtypedtablestorage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtypedtablestorageHPP
