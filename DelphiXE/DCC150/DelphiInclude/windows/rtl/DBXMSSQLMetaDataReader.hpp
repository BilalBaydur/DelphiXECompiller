// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMsSqlMetaDataReader.pas' rev: 22.00

#ifndef DbxmssqlmetadatareaderHPP
#define DbxmssqlmetadatareaderHPP

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

namespace Dbxmssqlmetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMsSqlCustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXMsSqlCustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TDBXMsSqlSynonymTableCursor;
	class PASCALIMPLEMENTATION TDBXMsSqlSynonymTableCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall TDBXMsSqlSynonymTableCursor(const Dbxmetadatareader::TDBXProviderContext* Context, const Dbxsqlscanner::TDBXSqlScanner* Scanner, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		__fastcall virtual ~TDBXMsSqlSynonymTableCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		virtual int __fastcall FindStringSize(const int Ordinal, const Dbxcommon::TDBXValueTypeArray SourceColumns)/* overload */;
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		void __fastcall ParseBaseObject(void);
		Dbxsqlscanner::TDBXSqlScanner* FScanner;
		System::UnicodeString FCatalog;
		System::UnicodeString FSchema;
		System::UnicodeString FTable;
		Dbxcommontable::TDBXSingleValueRow* FRow;
/* Hoisted overloads: */
		
protected:
		inline int __fastcall  FindStringSize(const Dbxcommon::TDBXValueType* Column){ return Dbxmetadatareader::TDBXCustomMetaDataTable::FindStringSize(Column); }
		
	};
	
	
	
public:
	__fastcall virtual ~TDBXMsSqlCustomMetaDataReader(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchSynonyms(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Synonym);
	
protected:
	virtual bool __fastcall IsSPReturnCodeSupported(void);
	
private:
	Dbxsqlscanner::TDBXSqlScanner* __fastcall CreateScanner(void);
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
public:
	/* TObject.Create */ inline __fastcall TDBXMsSqlCustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXMsSqlMetaDataReader;
class PASCALIMPLEMENTATION TDBXMsSqlMetaDataReader : public TDBXMsSqlCustomMetaDataReader
{
	typedef TDBXMsSqlCustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuotePrefix(void);
	virtual System::UnicodeString __fastcall GetSqlIdentifierQuoteSuffix(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual System::UnicodeString __fastcall GetViewType(void);
	virtual System::UnicodeString __fastcall GetSystemTableType(void);
	virtual System::UnicodeString __fastcall GetSystemViewType(void);
	virtual System::UnicodeString __fastcall GetSynonymType(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsParameterMetadataSupported(void);
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
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXMsSqlCustomMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXMsSqlMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXMsSqlMetaDataReader(void) : TDBXMsSqlCustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmssqlmetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmssqlmetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmssqlmetadatareaderHPP
