// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSybaseASEMetaDataReader.pas' rev: 22.00

#ifndef DbxsybaseasemetadatareaderHPP
#define DbxsybaseasemetadatareaderHPP

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

namespace Dbxsybaseasemetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASECustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXSybaseASECustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TDBXSybaseASEForeignKeyColumnsCursor;
	class PASCALIMPLEMENTATION TDBXSybaseASEForeignKeyColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXSybaseASEForeignKeyColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXSybaseASEForeignKeyColumnsCursor(const TDBXSybaseASECustomMetaDataReader* Provider, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor1, const Dbxcommontable::TDBXTable* Cursor2);
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		Dbxcommontable::TDBXTable* FCursor2;
		int FKeyIndex;
		int FKeyColumnCount;
		Dbxcommontable::TDBXSingleValueRow* FRow;
		static const System::ShortInt OrdinalKeyColumnCount = 0xa;
		
		static const System::ShortInt OrdinalFirstColumn = 0xb;
		
	};
	
	
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeyColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryCatalog, const System::UnicodeString PrimarySchema, const System::UnicodeString PrimaryTable, const System::UnicodeString PrimaryKeyName);
	
protected:
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumnsPart2(void) = 0 ;
	__property System::UnicodeString SqlForForeignKeyColumnsPart2 = {read=GetSqlForForeignKeyColumnsPart2};
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXSybaseASECustomMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASECustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXSybaseASEMetaDataReader;
class PASCALIMPLEMENTATION TDBXSybaseASEMetaDataReader : public TDBXSybaseASECustomMetaDataReader
{
	typedef TDBXSybaseASECustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSynonyms(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString SynonymName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual System::UnicodeString __fastcall GetViewType(void);
	virtual System::UnicodeString __fastcall GetSystemTableType(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void);
	virtual bool __fastcall IsNestedTransactionsSupported(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteChar(void);
	virtual System::UnicodeString __fastcall GetSqlProcedureQuoteChar(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual bool __fastcall IsSetRowSizeSupported(void);
	virtual bool __fastcall IsParameterMetadataSupported(void);
	virtual System::UnicodeString __fastcall GetSqlForSchemas(void);
	virtual System::UnicodeString __fastcall GetSqlForTables(void);
	virtual System::UnicodeString __fastcall GetSqlForViews(void);
	virtual System::UnicodeString __fastcall GetSqlForColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexes(void);
	virtual System::UnicodeString __fastcall GetSqlForIndexColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeys(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumns(void);
	virtual System::UnicodeString __fastcall GetSqlForForeignKeyColumnsPart2(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureSources(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXSybaseASEMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASEMetaDataReader(void) : TDBXSybaseASECustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasemetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasemetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasemetadatareaderHPP
