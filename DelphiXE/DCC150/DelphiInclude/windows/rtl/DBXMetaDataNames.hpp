// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataNames.pas' rev: 22.00

#ifndef DbxmetadatanamesHPP
#define DbxmetadatanamesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatanames
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXCatalogsColumns;
class PASCALIMPLEMENTATION TDBXCatalogsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXCatalogsColumns_CatalogName L"CatalogName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXCatalogsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCatalogsColumns(void) { }
	
};


class DELPHICLASS TDBXCatalogsIndex;
class PASCALIMPLEMENTATION TDBXCatalogsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt Last = 0x0;
	
public:
	/* TObject.Create */ inline __fastcall TDBXCatalogsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCatalogsIndex(void) { }
	
};


class DELPHICLASS TDBXColumnConstraintsColumns;
class PASCALIMPLEMENTATION TDBXColumnConstraintsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXColumnConstraintsColumns_CatalogName L"CatalogName"
	
	#define TDBXColumnConstraintsColumns_SchemaName L"SchemaName"
	
	#define TDBXColumnConstraintsColumns_TableName L"TableName"
	
	#define TDBXColumnConstraintsColumns_ConstraintName L"ConstraintName"
	
	#define TDBXColumnConstraintsColumns_ColumnName L"ColumnName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXColumnConstraintsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXColumnConstraintsColumns(void) { }
	
};


class DELPHICLASS TDBXColumnConstraintsIndex;
class PASCALIMPLEMENTATION TDBXColumnConstraintsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt ConstraintName = 0x3;
	
	static const System::ShortInt ColumnName = 0x4;
	
	static const System::ShortInt Last = 0x4;
	
public:
	/* TObject.Create */ inline __fastcall TDBXColumnConstraintsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXColumnConstraintsIndex(void) { }
	
};


class DELPHICLASS TDBXColumnsColumns;
class PASCALIMPLEMENTATION TDBXColumnsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXColumnsColumns_CatalogName L"CatalogName"
	
	#define TDBXColumnsColumns_SchemaName L"SchemaName"
	
	#define TDBXColumnsColumns_TableName L"TableName"
	
	#define TDBXColumnsColumns_ColumnName L"ColumnName"
	
	#define TDBXColumnsColumns_TypeName L"TypeName"
	
	#define TDBXColumnsColumns_Precision L"Precision"
	
	#define TDBXColumnsColumns_Scale L"Scale"
	
	#define TDBXColumnsColumns_Ordinal L"Ordinal"
	
	#define TDBXColumnsColumns_DefaultValue L"DefaultValue"
	
	#define TDBXColumnsColumns_IsNullable L"IsNullable"
	
	#define TDBXColumnsColumns_IsAutoIncrement L"IsAutoIncrement"
	
	#define TDBXColumnsColumns_MaxInline L"MaxInline"
	
	#define TDBXColumnsColumns_DbxDataType L"DbxDataType"
	
	#define TDBXColumnsColumns_IsFixedLength L"IsFixedLength"
	
	#define TDBXColumnsColumns_IsUnicode L"IsUnicode"
	
	#define TDBXColumnsColumns_IsLong L"IsLong"
	
	#define TDBXColumnsColumns_IsUnsigned L"IsUnsigned"
	
public:
	/* TObject.Create */ inline __fastcall TDBXColumnsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXColumnsColumns(void) { }
	
};


class DELPHICLASS TDBXColumnsIndex;
class PASCALIMPLEMENTATION TDBXColumnsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt ColumnName = 0x3;
	
	static const System::ShortInt TypeName = 0x4;
	
	static const System::ShortInt Precision = 0x5;
	
	static const System::ShortInt Scale = 0x6;
	
	static const System::ShortInt Ordinal = 0x7;
	
	static const System::ShortInt DefaultValue = 0x8;
	
	static const System::ShortInt IsNullable = 0x9;
	
	static const System::ShortInt IsAutoIncrement = 0xa;
	
	static const System::ShortInt MaxInline = 0xb;
	
	static const System::ShortInt DbxDataType = 0xc;
	
	static const System::ShortInt IsFixedLength = 0xd;
	
	static const System::ShortInt IsUnicode = 0xe;
	
	static const System::ShortInt IsLong = 0xf;
	
	static const System::ShortInt IsUnsigned = 0x10;
	
	static const System::ShortInt Last = 0x10;
	
public:
	/* TObject.Create */ inline __fastcall TDBXColumnsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXColumnsIndex(void) { }
	
};


class DELPHICLASS TDBXDataTypesColumns;
class PASCALIMPLEMENTATION TDBXDataTypesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXDataTypesColumns_TypeName L"TypeName"
	
	#define TDBXDataTypesColumns_DbxDataType L"DbxDataType"
	
	#define TDBXDataTypesColumns_ColumnSize L"ColumnSize"
	
	#define TDBXDataTypesColumns_CreateFormat L"CreateFormat"
	
	#define TDBXDataTypesColumns_CreateParameters L"CreateParameters"
	
	#define TDBXDataTypesColumns_DataType L"DataType"
	
	#define TDBXDataTypesColumns_IsAutoIncrementable L"IsAutoIncrementable"
	
	#define TDBXDataTypesColumns_IsBestMatch L"IsBestMatch"
	
	#define TDBXDataTypesColumns_IsCaseSensitive L"IsCaseSensitive"
	
	#define TDBXDataTypesColumns_IsFixedLength L"IsFixedLength"
	
	#define TDBXDataTypesColumns_IsFixedPrecisionScale L"IsFixedPrecisionScale"
	
	#define TDBXDataTypesColumns_IsLong L"IsLong"
	
	#define TDBXDataTypesColumns_IsNullable L"IsNullable"
	
	#define TDBXDataTypesColumns_IsSearchable L"IsSearchable"
	
	#define TDBXDataTypesColumns_IsSearchableWithLike L"IsSearchableWithLike"
	
	#define TDBXDataTypesColumns_IsUnsigned L"IsUnsigned"
	
	#define TDBXDataTypesColumns_MaximumScale L"MaximumScale"
	
	#define TDBXDataTypesColumns_MinimumScale L"MinimumScale"
	
	#define TDBXDataTypesColumns_IsConcurrencyType L"IsConcurrencyType"
	
	#define TDBXDataTypesColumns_MaximumVersion L"MaximumVersion"
	
	#define TDBXDataTypesColumns_MinimumVersion L"MinimumVersion"
	
	#define TDBXDataTypesColumns_IsLiteralSupported L"IsLiteralSupported"
	
	#define TDBXDataTypesColumns_LiteralPrefix L"LiteralPrefix"
	
	#define TDBXDataTypesColumns_LiteralSuffix L"LiteralSuffix"
	
	#define TDBXDataTypesColumns_IsUnicode L"IsUnicode"
	
	#define TDBXDataTypesColumns_ProviderDbType L"ProviderDbType"
	
public:
	/* TObject.Create */ inline __fastcall TDBXDataTypesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataTypesColumns(void) { }
	
};


class DELPHICLASS TDBXDataTypesIndex;
class PASCALIMPLEMENTATION TDBXDataTypesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt TypeName = 0x0;
	
	static const System::ShortInt DbxDataType = 0x1;
	
	static const System::ShortInt ColumnSize = 0x2;
	
	static const System::ShortInt CreateFormat = 0x3;
	
	static const System::ShortInt CreateParameters = 0x4;
	
	static const System::ShortInt DataType = 0x5;
	
	static const System::ShortInt IsAutoIncrementable = 0x6;
	
	static const System::ShortInt IsBestMatch = 0x7;
	
	static const System::ShortInt IsCaseSensitive = 0x8;
	
	static const System::ShortInt IsFixedLength = 0x9;
	
	static const System::ShortInt IsFixedPrecisionScale = 0xa;
	
	static const System::ShortInt IsLong = 0xb;
	
	static const System::ShortInt IsNullable = 0xc;
	
	static const System::ShortInt IsSearchable = 0xd;
	
	static const System::ShortInt IsSearchableWithLike = 0xe;
	
	static const System::ShortInt IsUnsigned = 0xf;
	
	static const System::ShortInt MaximumScale = 0x10;
	
	static const System::ShortInt MinimumScale = 0x11;
	
	static const System::ShortInt IsConcurrencyType = 0x12;
	
	static const System::ShortInt MaximumVersion = 0x13;
	
	static const System::ShortInt MinimumVersion = 0x14;
	
	static const System::ShortInt IsLiteralSupported = 0x15;
	
	static const System::ShortInt LiteralPrefix = 0x16;
	
	static const System::ShortInt LiteralSuffix = 0x17;
	
	static const System::ShortInt IsUnicode = 0x18;
	
	static const System::ShortInt ProviderDbType = 0x19;
	
	static const System::ShortInt Last = 0x19;
	
public:
	/* TObject.Create */ inline __fastcall TDBXDataTypesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataTypesIndex(void) { }
	
};


class DELPHICLASS TDBXForeignKeyColumnsColumns;
class PASCALIMPLEMENTATION TDBXForeignKeyColumnsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXForeignKeyColumnsColumns_CatalogName L"CatalogName"
	
	#define TDBXForeignKeyColumnsColumns_SchemaName L"SchemaName"
	
	#define TDBXForeignKeyColumnsColumns_TableName L"TableName"
	
	#define TDBXForeignKeyColumnsColumns_ForeignKeyName L"ForeignKeyName"
	
	#define TDBXForeignKeyColumnsColumns_ColumnName L"ColumnName"
	
	#define TDBXForeignKeyColumnsColumns_PrimaryCatalogName L"PrimaryCatalogName"
	
	#define TDBXForeignKeyColumnsColumns_PrimarySchemaName L"PrimarySchemaName"
	
	#define TDBXForeignKeyColumnsColumns_PrimaryTableName L"PrimaryTableName"
	
	#define TDBXForeignKeyColumnsColumns_PrimaryKeyName L"PrimaryKeyName"
	
	#define TDBXForeignKeyColumnsColumns_PrimaryColumnName L"PrimaryColumnName"
	
	#define TDBXForeignKeyColumnsColumns_Ordinal L"Ordinal"
	
public:
	/* TObject.Create */ inline __fastcall TDBXForeignKeyColumnsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXForeignKeyColumnsColumns(void) { }
	
};


class DELPHICLASS TDBXForeignKeyColumnsIndex;
class PASCALIMPLEMENTATION TDBXForeignKeyColumnsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt ForeignKeyName = 0x3;
	
	static const System::ShortInt ColumnName = 0x4;
	
	static const System::ShortInt PrimaryCatalogName = 0x5;
	
	static const System::ShortInt PrimarySchemaName = 0x6;
	
	static const System::ShortInt PrimaryTableName = 0x7;
	
	static const System::ShortInt PrimaryKeyName = 0x8;
	
	static const System::ShortInt PrimaryColumnName = 0x9;
	
	static const System::ShortInt Ordinal = 0xa;
	
	static const System::ShortInt Last = 0xa;
	
public:
	/* TObject.Create */ inline __fastcall TDBXForeignKeyColumnsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXForeignKeyColumnsIndex(void) { }
	
};


class DELPHICLASS TDBXForeignKeysColumns;
class PASCALIMPLEMENTATION TDBXForeignKeysColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXForeignKeysColumns_CatalogName L"CatalogName"
	
	#define TDBXForeignKeysColumns_SchemaName L"SchemaName"
	
	#define TDBXForeignKeysColumns_TableName L"TableName"
	
	#define TDBXForeignKeysColumns_ForeignKeyName L"ForeignKeyName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXForeignKeysColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXForeignKeysColumns(void) { }
	
};


class DELPHICLASS TDBXForeignKeysIndex;
class PASCALIMPLEMENTATION TDBXForeignKeysIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt ForeignKeyName = 0x3;
	
	static const System::ShortInt Last = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXForeignKeysIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXForeignKeysIndex(void) { }
	
};


class DELPHICLASS TDBXIndexColumnsColumns;
class PASCALIMPLEMENTATION TDBXIndexColumnsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXIndexColumnsColumns_CatalogName L"CatalogName"
	
	#define TDBXIndexColumnsColumns_SchemaName L"SchemaName"
	
	#define TDBXIndexColumnsColumns_TableName L"TableName"
	
	#define TDBXIndexColumnsColumns_IndexName L"IndexName"
	
	#define TDBXIndexColumnsColumns_ColumnName L"ColumnName"
	
	#define TDBXIndexColumnsColumns_Ordinal L"Ordinal"
	
	#define TDBXIndexColumnsColumns_IsAscending L"IsAscending"
	
public:
	/* TObject.Create */ inline __fastcall TDBXIndexColumnsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXIndexColumnsColumns(void) { }
	
};


class DELPHICLASS TDBXIndexColumnsIndex;
class PASCALIMPLEMENTATION TDBXIndexColumnsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt IndexName = 0x3;
	
	static const System::ShortInt ColumnName = 0x4;
	
	static const System::ShortInt Ordinal = 0x5;
	
	static const System::ShortInt IsAscending = 0x6;
	
	static const System::ShortInt Last = 0x6;
	
public:
	/* TObject.Create */ inline __fastcall TDBXIndexColumnsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXIndexColumnsIndex(void) { }
	
};


class DELPHICLASS TDBXIndexesColumns;
class PASCALIMPLEMENTATION TDBXIndexesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXIndexesColumns_CatalogName L"CatalogName"
	
	#define TDBXIndexesColumns_SchemaName L"SchemaName"
	
	#define TDBXIndexesColumns_TableName L"TableName"
	
	#define TDBXIndexesColumns_IndexName L"IndexName"
	
	#define TDBXIndexesColumns_ConstraintName L"ConstraintName"
	
	#define TDBXIndexesColumns_IsPrimary L"IsPrimary"
	
	#define TDBXIndexesColumns_IsUnique L"IsUnique"
	
	#define TDBXIndexesColumns_IsAscending L"IsAscending"
	
public:
	/* TObject.Create */ inline __fastcall TDBXIndexesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXIndexesColumns(void) { }
	
};


class DELPHICLASS TDBXIndexesIndex;
class PASCALIMPLEMENTATION TDBXIndexesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt IndexName = 0x3;
	
	static const System::ShortInt ConstraintName = 0x4;
	
	static const System::ShortInt IsPrimary = 0x5;
	
	static const System::ShortInt IsUnique = 0x6;
	
	static const System::ShortInt IsAscending = 0x7;
	
	static const System::ShortInt Last = 0x7;
	
public:
	/* TObject.Create */ inline __fastcall TDBXIndexesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXIndexesIndex(void) { }
	
};


class DELPHICLASS TDBXMetaDataCollectionIndex;
class PASCALIMPLEMENTATION TDBXMetaDataCollectionIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt DataTypes = 0x1;
	
	static const System::ShortInt Catalogs = 0x2;
	
	static const System::ShortInt Schemas = 0x3;
	
	static const System::ShortInt Tables = 0x4;
	
	static const System::ShortInt Views = 0x5;
	
	static const System::ShortInt Synonyms = 0x6;
	
	static const System::ShortInt Columns = 0x7;
	
	static const System::ShortInt ColumnConstraints = 0x8;
	
	static const System::ShortInt Indexes = 0x9;
	
	static const System::ShortInt IndexColumns = 0xa;
	
	static const System::ShortInt ForeignKeys = 0xb;
	
	static const System::ShortInt ForeignKeyColumns = 0xc;
	
	static const System::ShortInt Procedures = 0xd;
	
	static const System::ShortInt ProcedureSources = 0xe;
	
	static const System::ShortInt ProcedureParameters = 0xf;
	
	static const System::ShortInt Packages = 0x10;
	
	static const System::ShortInt PackageProcedures = 0x11;
	
	static const System::ShortInt PackageProcedureParameters = 0x12;
	
	static const System::ShortInt PackageSources = 0x13;
	
	static const System::ShortInt Users = 0x14;
	
	static const System::ShortInt Roles = 0x15;
	
	static const System::ShortInt ReservedWords = 0x16;
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataCollectionIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCollectionIndex(void) { }
	
};


class DELPHICLASS TDBXMetaDataCollectionName;
class PASCALIMPLEMENTATION TDBXMetaDataCollectionName : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDataCollectionName_DataTypes L"DataTypes"
	
	#define TDBXMetaDataCollectionName_Catalogs L"Catalogs"
	
	#define TDBXMetaDataCollectionName_Schemas L"Schemas"
	
	#define TDBXMetaDataCollectionName_Tables L"Tables"
	
	#define TDBXMetaDataCollectionName_Views L"Views"
	
	#define TDBXMetaDataCollectionName_Synonyms L"Synonyms"
	
	#define TDBXMetaDataCollectionName_Columns L"Columns"
	
	#define TDBXMetaDataCollectionName_ColumnConstraints L"ColumnConstraints"
	
	#define TDBXMetaDataCollectionName_Indexes L"Indexes"
	
	#define TDBXMetaDataCollectionName_IndexColumns L"IndexColumns"
	
	#define TDBXMetaDataCollectionName_ForeignKeys L"ForeignKeys"
	
	#define TDBXMetaDataCollectionName_ForeignKeyColumns L"ForeignKeyColumns"
	
	#define TDBXMetaDataCollectionName_Procedures L"Procedures"
	
	#define TDBXMetaDataCollectionName_ProcedureSources L"ProcedureSources"
	
	#define TDBXMetaDataCollectionName_ProcedureParameters L"ProcedureParameters"
	
	#define TDBXMetaDataCollectionName_Packages L"Packages"
	
	#define TDBXMetaDataCollectionName_PackageProcedures L"PackageProcedures"
	
	#define TDBXMetaDataCollectionName_PackageProcedureParameters L"PackageProcedureParameters"
	
	#define TDBXMetaDataCollectionName_PackageSources L"PackageSources"
	
	#define TDBXMetaDataCollectionName_Users L"Users"
	
	#define TDBXMetaDataCollectionName_Roles L"Roles"
	
	#define TDBXMetaDataCollectionName_ReservedWords L"ReservedWords"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataCollectionName(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCollectionName(void) { }
	
};


class DELPHICLASS TDBXPackageProcedureParametersColumns;
class PASCALIMPLEMENTATION TDBXPackageProcedureParametersColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPackageProcedureParametersColumns_CatalogName L"CatalogName"
	
	#define TDBXPackageProcedureParametersColumns_SchemaName L"SchemaName"
	
	#define TDBXPackageProcedureParametersColumns_PackageName L"PackageName"
	
	#define TDBXPackageProcedureParametersColumns_ProcedureName L"ProcedureName"
	
	#define TDBXPackageProcedureParametersColumns_ParameterName L"ParameterName"
	
	#define TDBXPackageProcedureParametersColumns_ParameterMode L"ParameterMode"
	
	#define TDBXPackageProcedureParametersColumns_TypeName L"TypeName"
	
	#define TDBXPackageProcedureParametersColumns_Precision L"Precision"
	
	#define TDBXPackageProcedureParametersColumns_Scale L"Scale"
	
	#define TDBXPackageProcedureParametersColumns_Ordinal L"Ordinal"
	
	#define TDBXPackageProcedureParametersColumns_IsNullable L"IsNullable"
	
	#define TDBXPackageProcedureParametersColumns_DbxDataType L"DbxDataType"
	
	#define TDBXPackageProcedureParametersColumns_IsFixedLength L"IsFixedLength"
	
	#define TDBXPackageProcedureParametersColumns_IsUnicode L"IsUnicode"
	
	#define TDBXPackageProcedureParametersColumns_IsLong L"IsLong"
	
	#define TDBXPackageProcedureParametersColumns_IsUnsigned L"IsUnsigned"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageProcedureParametersColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageProcedureParametersColumns(void) { }
	
};


class DELPHICLASS TDBXPackageProcedureParametersIndex;
class PASCALIMPLEMENTATION TDBXPackageProcedureParametersIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt PackageName = 0x2;
	
	static const System::ShortInt ProcedureName = 0x3;
	
	static const System::ShortInt ParameterName = 0x4;
	
	static const System::ShortInt ParameterMode = 0x5;
	
	static const System::ShortInt TypeName = 0x6;
	
	static const System::ShortInt Precision = 0x7;
	
	static const System::ShortInt Scale = 0x8;
	
	static const System::ShortInt Ordinal = 0x9;
	
	static const System::ShortInt IsNullable = 0xa;
	
	static const System::ShortInt DbxDataType = 0xb;
	
	static const System::ShortInt IsFixedLength = 0xc;
	
	static const System::ShortInt IsUnicode = 0xd;
	
	static const System::ShortInt IsLong = 0xe;
	
	static const System::ShortInt IsUnsigned = 0xf;
	
	static const System::ShortInt Last = 0xf;
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageProcedureParametersIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageProcedureParametersIndex(void) { }
	
};


class DELPHICLASS TDBXPackageProceduresColumns;
class PASCALIMPLEMENTATION TDBXPackageProceduresColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPackageProceduresColumns_CatalogName L"CatalogName"
	
	#define TDBXPackageProceduresColumns_SchemaName L"SchemaName"
	
	#define TDBXPackageProceduresColumns_PackageName L"PackageName"
	
	#define TDBXPackageProceduresColumns_ProcedureName L"ProcedureName"
	
	#define TDBXPackageProceduresColumns_ProcedureType L"ProcedureType"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageProceduresColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageProceduresColumns(void) { }
	
};


class DELPHICLASS TDBXPackageProceduresIndex;
class PASCALIMPLEMENTATION TDBXPackageProceduresIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt PackageName = 0x2;
	
	static const System::ShortInt ProcedureName = 0x3;
	
	static const System::ShortInt ProcedureType = 0x4;
	
	static const System::ShortInt Last = 0x4;
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageProceduresIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageProceduresIndex(void) { }
	
};


class DELPHICLASS TDBXPackagesColumns;
class PASCALIMPLEMENTATION TDBXPackagesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPackagesColumns_CatalogName L"CatalogName"
	
	#define TDBXPackagesColumns_SchemaName L"SchemaName"
	
	#define TDBXPackagesColumns_PackageName L"PackageName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackagesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackagesColumns(void) { }
	
};


class DELPHICLASS TDBXPackagesIndex;
class PASCALIMPLEMENTATION TDBXPackagesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt PackageName = 0x2;
	
	static const System::ShortInt Last = 0x2;
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackagesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackagesIndex(void) { }
	
};


class DELPHICLASS TDBXPackageSourcesColumns;
class PASCALIMPLEMENTATION TDBXPackageSourcesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPackageSourcesColumns_CatalogName L"CatalogName"
	
	#define TDBXPackageSourcesColumns_SchemaName L"SchemaName"
	
	#define TDBXPackageSourcesColumns_PackageName L"PackageName"
	
	#define TDBXPackageSourcesColumns_Definition L"Definition"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageSourcesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageSourcesColumns(void) { }
	
};


class DELPHICLASS TDBXPackageSourcesIndex;
class PASCALIMPLEMENTATION TDBXPackageSourcesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt PackageName = 0x2;
	
	static const System::ShortInt Definition = 0x3;
	
	static const System::ShortInt Last = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXPackageSourcesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPackageSourcesIndex(void) { }
	
};


class DELPHICLASS TDBXProcedureParametersColumns;
class PASCALIMPLEMENTATION TDBXProcedureParametersColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXProcedureParametersColumns_CatalogName L"CatalogName"
	
	#define TDBXProcedureParametersColumns_SchemaName L"SchemaName"
	
	#define TDBXProcedureParametersColumns_ProcedureName L"ProcedureName"
	
	#define TDBXProcedureParametersColumns_ParameterName L"ParameterName"
	
	#define TDBXProcedureParametersColumns_ParameterMode L"ParameterMode"
	
	#define TDBXProcedureParametersColumns_TypeName L"TypeName"
	
	#define TDBXProcedureParametersColumns_Precision L"Precision"
	
	#define TDBXProcedureParametersColumns_Scale L"Scale"
	
	#define TDBXProcedureParametersColumns_Ordinal L"Ordinal"
	
	#define TDBXProcedureParametersColumns_IsNullable L"IsNullable"
	
	#define TDBXProcedureParametersColumns_DbxDataType L"DbxDataType"
	
	#define TDBXProcedureParametersColumns_IsFixedLength L"IsFixedLength"
	
	#define TDBXProcedureParametersColumns_IsUnicode L"IsUnicode"
	
	#define TDBXProcedureParametersColumns_IsLong L"IsLong"
	
	#define TDBXProcedureParametersColumns_IsUnsigned L"IsUnsigned"
	
public:
	/* TObject.Create */ inline __fastcall TDBXProcedureParametersColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProcedureParametersColumns(void) { }
	
};


class DELPHICLASS TDBXProcedureParametersIndex;
class PASCALIMPLEMENTATION TDBXProcedureParametersIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt ProcedureName = 0x2;
	
	static const System::ShortInt ParameterName = 0x3;
	
	static const System::ShortInt ParameterMode = 0x4;
	
	static const System::ShortInt TypeName = 0x5;
	
	static const System::ShortInt Precision = 0x6;
	
	static const System::ShortInt Scale = 0x7;
	
	static const System::ShortInt Ordinal = 0x8;
	
	static const System::ShortInt IsNullable = 0x9;
	
	static const System::ShortInt DbxDataType = 0xa;
	
	static const System::ShortInt IsFixedLength = 0xb;
	
	static const System::ShortInt IsUnicode = 0xc;
	
	static const System::ShortInt IsLong = 0xd;
	
	static const System::ShortInt IsUnsigned = 0xe;
	
	static const System::ShortInt Last = 0xe;
	
public:
	/* TObject.Create */ inline __fastcall TDBXProcedureParametersIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProcedureParametersIndex(void) { }
	
};


class DELPHICLASS TDBXProceduresColumns;
class PASCALIMPLEMENTATION TDBXProceduresColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXProceduresColumns_CatalogName L"CatalogName"
	
	#define TDBXProceduresColumns_SchemaName L"SchemaName"
	
	#define TDBXProceduresColumns_ProcedureName L"ProcedureName"
	
	#define TDBXProceduresColumns_ProcedureType L"ProcedureType"
	
public:
	/* TObject.Create */ inline __fastcall TDBXProceduresColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProceduresColumns(void) { }
	
};


class DELPHICLASS TDBXProceduresIndex;
class PASCALIMPLEMENTATION TDBXProceduresIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt ProcedureName = 0x2;
	
	static const System::ShortInt ProcedureType = 0x3;
	
	static const System::ShortInt Last = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXProceduresIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProceduresIndex(void) { }
	
};


class DELPHICLASS TDBXProcedureSourcesColumns;
class PASCALIMPLEMENTATION TDBXProcedureSourcesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXProcedureSourcesColumns_CatalogName L"CatalogName"
	
	#define TDBXProcedureSourcesColumns_SchemaName L"SchemaName"
	
	#define TDBXProcedureSourcesColumns_ProcedureName L"ProcedureName"
	
	#define TDBXProcedureSourcesColumns_ProcedureType L"ProcedureType"
	
	#define TDBXProcedureSourcesColumns_Definition L"Definition"
	
	#define TDBXProcedureSourcesColumns_ExternalDefinition L"ExternalDefinition"
	
public:
	/* TObject.Create */ inline __fastcall TDBXProcedureSourcesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProcedureSourcesColumns(void) { }
	
};


class DELPHICLASS TDBXProcedureSourcesIndex;
class PASCALIMPLEMENTATION TDBXProcedureSourcesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt ProcedureName = 0x2;
	
	static const System::ShortInt ProcedureType = 0x3;
	
	static const System::ShortInt Definition = 0x4;
	
	static const System::ShortInt ExternalDefinition = 0x5;
	
	static const System::ShortInt Last = 0x5;
	
public:
	/* TObject.Create */ inline __fastcall TDBXProcedureSourcesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProcedureSourcesIndex(void) { }
	
};


class DELPHICLASS TDBXReservedWordsColumns;
class PASCALIMPLEMENTATION TDBXReservedWordsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXReservedWordsColumns_ReservedWord L"ReservedWord"
	
public:
	/* TObject.Create */ inline __fastcall TDBXReservedWordsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXReservedWordsColumns(void) { }
	
};


class DELPHICLASS TDBXReservedWordsIndex;
class PASCALIMPLEMENTATION TDBXReservedWordsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt ReservedWord = 0x0;
	
	static const System::ShortInt Last = 0x0;
	
public:
	/* TObject.Create */ inline __fastcall TDBXReservedWordsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXReservedWordsIndex(void) { }
	
};


class DELPHICLASS TDBXRolesColumns;
class PASCALIMPLEMENTATION TDBXRolesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXRolesColumns_RoleName L"RoleName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXRolesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXRolesColumns(void) { }
	
};


class DELPHICLASS TDBXRolesIndex;
class PASCALIMPLEMENTATION TDBXRolesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt RoleName = 0x0;
	
	static const System::ShortInt Last = 0x0;
	
public:
	/* TObject.Create */ inline __fastcall TDBXRolesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXRolesIndex(void) { }
	
};


class DELPHICLASS TDBXSchemasColumns;
class PASCALIMPLEMENTATION TDBXSchemasColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXSchemasColumns_CatalogName L"CatalogName"
	
	#define TDBXSchemasColumns_SchemaName L"SchemaName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXSchemasColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSchemasColumns(void) { }
	
};


class DELPHICLASS TDBXSchemasIndex;
class PASCALIMPLEMENTATION TDBXSchemasIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt Last = 0x1;
	
public:
	/* TObject.Create */ inline __fastcall TDBXSchemasIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSchemasIndex(void) { }
	
};


class DELPHICLASS TDBXSynonymsColumns;
class PASCALIMPLEMENTATION TDBXSynonymsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXSynonymsColumns_CatalogName L"CatalogName"
	
	#define TDBXSynonymsColumns_SchemaName L"SchemaName"
	
	#define TDBXSynonymsColumns_SynonymName L"SynonymName"
	
	#define TDBXSynonymsColumns_TableCatalogName L"TableCatalogName"
	
	#define TDBXSynonymsColumns_TableSchemaName L"TableSchemaName"
	
	#define TDBXSynonymsColumns_TableName L"TableName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXSynonymsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSynonymsColumns(void) { }
	
};


class DELPHICLASS TDBXSynonymsIndex;
class PASCALIMPLEMENTATION TDBXSynonymsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt SynonymName = 0x2;
	
	static const System::ShortInt TableCatalogName = 0x3;
	
	static const System::ShortInt TableSchemaName = 0x4;
	
	static const System::ShortInt TableName = 0x5;
	
	static const System::ShortInt Last = 0x5;
	
public:
	/* TObject.Create */ inline __fastcall TDBXSynonymsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSynonymsIndex(void) { }
	
};


class DELPHICLASS TDBXTablesColumns;
class PASCALIMPLEMENTATION TDBXTablesColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXTablesColumns_CatalogName L"CatalogName"
	
	#define TDBXTablesColumns_SchemaName L"SchemaName"
	
	#define TDBXTablesColumns_TableName L"TableName"
	
	#define TDBXTablesColumns_TableType L"TableType"
	
public:
	/* TObject.Create */ inline __fastcall TDBXTablesColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTablesColumns(void) { }
	
};


class DELPHICLASS TDBXTablesIndex;
class PASCALIMPLEMENTATION TDBXTablesIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt TableName = 0x2;
	
	static const System::ShortInt TableType = 0x3;
	
	static const System::ShortInt Last = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTablesIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTablesIndex(void) { }
	
};


class DELPHICLASS TDBXUsersColumns;
class PASCALIMPLEMENTATION TDBXUsersColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXUsersColumns_UserName L"UserName"
	
public:
	/* TObject.Create */ inline __fastcall TDBXUsersColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUsersColumns(void) { }
	
};


class DELPHICLASS TDBXUsersIndex;
class PASCALIMPLEMENTATION TDBXUsersIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt UserName = 0x0;
	
	static const System::ShortInt Last = 0x0;
	
public:
	/* TObject.Create */ inline __fastcall TDBXUsersIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXUsersIndex(void) { }
	
};


class DELPHICLASS TDBXViewsColumns;
class PASCALIMPLEMENTATION TDBXViewsColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXViewsColumns_CatalogName L"CatalogName"
	
	#define TDBXViewsColumns_SchemaName L"SchemaName"
	
	#define TDBXViewsColumns_ViewName L"ViewName"
	
	#define TDBXViewsColumns_Definition L"Definition"
	
public:
	/* TObject.Create */ inline __fastcall TDBXViewsColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXViewsColumns(void) { }
	
};


class DELPHICLASS TDBXViewsIndex;
class PASCALIMPLEMENTATION TDBXViewsIndex : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt CatalogName = 0x0;
	
	static const System::ShortInt SchemaName = 0x1;
	
	static const System::ShortInt ViewName = 0x2;
	
	static const System::ShortInt Definition = 0x3;
	
	static const System::ShortInt Last = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXViewsIndex(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXViewsIndex(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatanames */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatanames;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatanamesHPP
