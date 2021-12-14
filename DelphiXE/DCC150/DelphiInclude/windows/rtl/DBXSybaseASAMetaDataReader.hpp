// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSybaseASAMetaDataReader.pas' rev: 22.00

#ifndef DbxsybaseasametadatareaderHPP
#define DbxsybaseasametadatareaderHPP

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

namespace Dbxsybaseasametadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASACustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXSybaseASACustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TDBXSybaseASAForeignKeyColumnsCursor;
	class PASCALIMPLEMENTATION TDBXSybaseASAForeignKeyColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXSybaseASAForeignKeyColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXSybaseASAForeignKeyColumnsCursor(const TDBXSybaseASACustomMetaDataReader* Provider, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		System::UnicodeString FSchemaName;
		System::UnicodeString FPrevSchemaName;
		System::UnicodeString FTableName;
		System::UnicodeString FPrevTableName;
		__int64 FIndexId;
		__int64 FPrevIndexId;
		int FRunningOrdinal;
		Dbxcommon::TDBXWritableValue* FOrdinalValue;
		static const System::ShortInt ForeignkeyColumnIndexIndicator = 0xb;
		
		static const System::ShortInt NullIndexId = -1;
		
	};
	
	
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchForeignKeyColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString ForeignKeyName, const System::UnicodeString PrimaryCatalog, const System::UnicodeString PrimarySchema, const System::UnicodeString PrimaryTable, const System::UnicodeString PrimaryKeyName);
	
protected:
	virtual void __fastcall SetContext(const Dbxmetadatareader::TDBXProviderContext* Context);
	
private:
	System::UnicodeString FVendorLibPath;
	bool FSupportsNLSDataType;
	bool FIsServerCharsetUTF8;
	bool FIsCharUnicode;
	
public:
	__property System::UnicodeString VendorLibPath = {read=FVendorLibPath};
	__property bool SupportsNLSDataType = {read=FSupportsNLSDataType, nodefault};
	__property bool IsServerCharsetUTF8 = {read=FIsServerCharsetUTF8, nodefault};
	__property bool IsCharUnicode = {read=FIsCharUnicode, nodefault};
	__property bool DefaultCharSetUnicode = {read=FIsServerCharsetUTF8, nodefault};
	
private:
	#define TDBXSybaseASACustomMetaDataReader_VendorLibPathPropertyName L"VendorLibPath"
	
	#define TDBXSybaseASACustomMetaDataReader_SupportsNLSDataTypePropertyName L"SupportsNLSDataType"
	
	#define TDBXSybaseASACustomMetaDataReader_IsServerCharsetUTF8PropertyName L"IsServerCharsetUTF8"
	
	#define TDBXSybaseASACustomMetaDataReader_IsCharUnicodePropertyName L"IsCharUnicode"
	
	#define TDBXSybaseASACustomMetaDataReader_UnicodeEncodingPropertyName L"UnicodeEncoding"
	
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXSybaseASACustomMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASACustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXSybaseASAMetaDataReader;
class PASCALIMPLEMENTATION TDBXSybaseASAMetaDataReader : public TDBXSybaseASACustomMetaDataReader
{
	typedef TDBXSybaseASACustomMetaDataReader inherited;
	
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
	virtual System::UnicodeString __fastcall GetSystemViewType(void);
	virtual bool __fastcall IsLowerCaseIdentifiersSupported(void);
	virtual bool __fastcall IsSetRowSizeSupported(void);
	virtual bool __fastcall IsUpperCaseIdentifiersSupported(void);
	virtual System::UnicodeString __fastcall GetSqlForSchemas(void);
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
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXSybaseASAMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASAMetaDataReader(void) : TDBXSybaseASACustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasametadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasametadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasametadatareaderHPP
