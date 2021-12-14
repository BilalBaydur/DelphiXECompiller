// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxMsSql.pas' rev: 22.00

#ifndef DbxmssqlHPP
#define DbxmssqlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXDynalink.hpp>	// Pascal unit
#include <DBXDynalinkNative.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXMsSqlReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXMsSqlMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxMsSql"

namespace Dbxmssql
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMSSQLProperties;
class PASCALIMPLEMENTATION TDBXMSSQLProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXMSSQLProperties_StrOSAuthentication L"OS Authentication"
	
	#define TDBXMSSQLProperties_StrPrepareSQL L"Prepare SQL"
	
	#define TDBXMSSQLProperties_StrMSSQLTransIsolation L"MSSQL TransIsolation"
	
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetMSSQLTransIsolation(void);
	bool __fastcall GetOSAuthentication(void);
	bool __fastcall GetPrepareSql(void);
	System::UnicodeString __fastcall GetSchemaOverride(void);
	System::UnicodeString __fastcall GetDatabase(void);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetMSSQLTransIsolation(const System::UnicodeString Value);
	void __fastcall SetOSAuthentication(const bool Value);
	void __fastcall SetPrepareSql(const bool Value);
	void __fastcall SetSchemaOverride(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXMSSQLProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString SchemaOverride = {read=GetSchemaOverride, write=SetSchemaOverride};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString MSSQLTransIsolation = {read=GetMSSQLTransIsolation, write=SetMSSQLTransIsolation};
	__property bool OSAuthentication = {read=GetOSAuthentication, write=SetOSAuthentication, nodefault};
	__property bool PrepareSQL = {read=GetPrepareSql, write=SetPrepareSql, nodefault};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXMSSQLProperties(void) { }
	
};


class DELPHICLASS TDBXMSSQLDriver;
class PASCALIMPLEMENTATION TDBXMSSQLDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXMSSQLDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXMSSQLDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmssql */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmssql;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmssqlHPP
