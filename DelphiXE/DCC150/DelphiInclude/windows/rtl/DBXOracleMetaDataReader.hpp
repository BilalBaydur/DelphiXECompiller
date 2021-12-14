// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXOracleMetaDataReader.pas' rev: 22.00

#ifndef DbxoraclemetadatareaderHPP
#define DbxoraclemetadatareaderHPP

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

namespace Dbxoraclemetadatareader
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXOracleCustomMetaDataReader;
class PASCALIMPLEMENTATION TDBXOracleCustomMetaDataReader : public Dbxmetadatareader::TDBXBaseMetaDataReader
{
	typedef Dbxmetadatareader::TDBXBaseMetaDataReader inherited;
	
public:
	class DELPHICLASS TDBXOracleColumnsCursor;
	class PASCALIMPLEMENTATION TDBXOracleColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXOracleColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXOracleColumnsCursor(const TDBXOracleCustomMetaDataReader* Provider, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
public:
		Dbxcommon::TDBXWritableValue* FDefaultValue;
	};
	
	
	class DELPHICLASS TDBXOracleIndexColumnsCursor;
	class PASCALIMPLEMENTATION TDBXOracleIndexColumnsCursor : public Dbxmetadatareader::TDBXCustomMetaDataTable
	{
		typedef Dbxmetadatareader::TDBXCustomMetaDataTable inherited;
		
public:
		__fastcall virtual ~TDBXOracleIndexColumnsCursor(void);
		virtual bool __fastcall Next(void);
		
protected:
		__fastcall TDBXOracleIndexColumnsCursor(const TDBXOracleCustomMetaDataReader* Provider, const Dbxcommon::TDBXValueTypeArray Columns, const Dbxcommontable::TDBXTable* Cursor);
		virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
		
private:
		System::UnicodeString __fastcall ComputeColumnName(void);
		Dbxcommon::TDBXWritableValue* FNameValue;
		static const System::ShortInt ColumnExpressionOrdinal = 0x7;
		
		static const System::ShortInt ColumnExpressionNullOrdinal = 0x8;
		
	};
	
	
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchIndexColumns(const System::UnicodeString Catalog, const System::UnicodeString Schema, const System::UnicodeString Table, const System::UnicodeString Index);
	
protected:
	virtual void __fastcall PopulateDataTypes(const Dbxplatform::TDBXObjectStore* Hash, const Dbxplatform::TDBXArrayList* Types, const Dbxmetadatareader::TDBXDataTypeDescriptionArray Descr);
	virtual Dbxmetadatareader::TDBXDataTypeDescriptionArray __fastcall GetDataTypeDescriptions(void);
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXOracleCustomMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXOracleCustomMetaDataReader(void) : Dbxmetadatareader::TDBXBaseMetaDataReader() { }
	
};


class DELPHICLASS TDBXOracleMetaDataReader;
class PASCALIMPLEMENTATION TDBXOracleMetaDataReader : public TDBXOracleCustomMetaDataReader
{
	typedef TDBXOracleCustomMetaDataReader inherited;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall FetchCatalogs(void);
	virtual Dbxcommontable::TDBXTable* __fastcall FetchColumnConstraints(const System::UnicodeString CatalogName, const System::UnicodeString SchemaName, const System::UnicodeString TableName);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual bool __fastcall IsNestedTransactionsSupported(void);
	virtual bool __fastcall IsSetRowSizeSupported(void);
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
	virtual System::UnicodeString __fastcall GetSqlForPackages(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageSources(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageProcedures(void);
	virtual System::UnicodeString __fastcall GetSqlForPackageProcedureParameters(void);
	virtual System::UnicodeString __fastcall GetSqlForUsers(void);
	virtual System::UnicodeString __fastcall GetSqlForRoles(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetReservedWords(void);
public:
	/* TDBXBaseMetaDataReader.Destroy */ inline __fastcall virtual ~TDBXOracleMetaDataReader(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXOracleMetaDataReader(void) : TDBXOracleCustomMetaDataReader() { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxoraclemetadatareader */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxoraclemetadatareader;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxoraclemetadatareaderHPP
