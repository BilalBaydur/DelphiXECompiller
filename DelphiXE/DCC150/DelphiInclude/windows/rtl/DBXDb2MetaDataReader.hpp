// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDb2MetaDataReader.pas' rev: 22.00

#ifndef Dbxdb2metadatareaderHPP
#define Dbxdb2metadatareaderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdb2metadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDb2MetaDataReader;
class PASCALIMPLEMENTATION TDBXDb2MetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackages(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedures(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ProcedureType);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageProcedureParameters(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName, const System::UnicodeString ProcedureName, const System::UnicodeString ParameterName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchPackageSources(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString PackageName);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchUsers(void);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetTableType(void);
	virtual System::UnicodeString __fastcall GetViewType(void);
	virtual System::UnicodeString __fastcall GetSystemTableType(void);
	virtual System::UnicodeString __fastcall GetSqlProcedureQuoteChar(void);
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
	virtual System::UnicodeString __fastcall GetSqlForSynonyms(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureSources(void);
	virtual System::UnicodeString __fastcall GetSqlForProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual System::UnicodeString __fastcall GetVersion(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXDb2MetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXDb2MetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdb2metadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdb2metadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dbxdb2metadatareaderHPP
