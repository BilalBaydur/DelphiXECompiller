// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataCommandFactory.pas' rev: 22.00

#ifndef DbxmetadatacommandfactoryHPP
#define DbxmetadatacommandfactoryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXSqlScanner.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatacommandfactory
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataCommandFactory;
class PASCALIMPLEMENTATION TDBXMetaDataCommandFactory : public Dbxcommon::TDBXCommandFactory
{
	typedef Dbxcommon::TDBXCommandFactory inherited;
	
public:
	static void __fastcall RegisterMetaDataCommandFactory(const System::TClass ObjectClass);
	static void __fastcall UnRegisterMetaDataCommandFactory(const System::TClass ObjectClass);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateCommand(Dbxcommon::TDBXContext* DbxContext, Dbxcommon::TDBXConnection* Connection, Dbxcommon::TDBXCommand* MorphicCommand);
	virtual Dbxmetadatareader::TDBXMetaDataReader* __fastcall CreateMetaDataReader(void) = 0 ;
	virtual System::UnicodeString __fastcall GetProductName(void);
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataCommandFactory(void) : Dbxcommon::TDBXCommandFactory() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCommandFactory(void) { }
	
};


class DELPHICLASS TDBXDataExpressProviderContext;
class PASCALIMPLEMENTATION TDBXDataExpressProviderContext : public Dbxmetadatareader::TDBXProviderContext
{
	typedef Dbxmetadatareader::TDBXProviderContext inherited;
	
protected:
	Dbxcommon::TDBXConnection* FConnection;
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
	System::UnicodeString FParameterMarker;
	bool FMarkerIncludedInParameterName;
	bool FUseAnsiStrings;
	bool FRemoveIsNull;
	
private:
	void __fastcall BindParametersByOrdinal(Dbxcommon::TDBXCommand* Command, Dbxplatform::TDBXStringArray ParameterNames, Dbxplatform::TDBXStringArray ParameterValues);
	int __fastcall FindParameterByName(const System::UnicodeString ParameterName, Dbxplatform::TDBXStringArray ParameterNames);
	
public:
	__fastcall TDBXDataExpressProviderContext(void);
	__fastcall virtual ~TDBXDataExpressProviderContext(void);
	virtual System::UnicodeString __fastcall GetPlatformTypeName(const int DataType, const bool IsUnsigned);
	virtual Dbxcommontable::TDBXTable* __fastcall ExecuteQuery(const System::UnicodeString Sql, const Dbxplatform::TDBXStringArray ParameterNames, const Dbxplatform::TDBXStringArray ParameterValues);
	virtual Dbxcommontable::TDBXTable* __fastcall CreateTableStorage(const System::UnicodeString CollectionName, const Dbxcommon::TDBXValueTypeArray Columns);
	virtual Dbxcommontable::TDBXTableRow* __fastcall CreateRowStorage(const System::UnicodeString CollectionName, const Dbxcommon::TDBXValueTypeArray Columns);
	virtual void __fastcall StartTransaction(void);
	virtual void __fastcall StartSerializedTransaction(void);
	virtual void __fastcall Commit(void);
	virtual void __fastcall Rollback(void);
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString name);
	
protected:
	System::UnicodeString __fastcall GetSqlParameterMarker(void);
	bool __fastcall GetMarkerIncludedInParameterName(void);
	
public:
	__property System::UnicodeString SqlParameterMarker = {read=FParameterMarker};
	__property bool IsMarkerIncludedInParameterName = {read=FMarkerIncludedInParameterName, nodefault};
	__property Dbxcommon::TDBXConnection* Connection = {write=FConnection};
	__property bool UseAnsiStrings = {read=FUseAnsiStrings, write=FUseAnsiStrings, nodefault};
	__property bool RemoveIsNull = {read=FRemoveIsNull, write=FRemoveIsNull, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
#define BlackfishSQLProduct L"BlackfishSQL"

}	/* namespace Dbxmetadatacommandfactory */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatacommandfactory;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatacommandfactoryHPP
