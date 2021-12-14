// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxMySql.pas' rev: 22.00

#ifndef DbxmysqlHPP
#define DbxmysqlHPP

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
#include <DBXMySqlReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXMySqlMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxMySql"

namespace Dbxmysql
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMySQLProperties;
class PASCALIMPLEMENTATION TDBXMySQLProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXMySQLProperties_StrServerCharSet L"ServerCharSet"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetDatabase(void);
	bool __fastcall GetCompressed(void);
	bool __fastcall GetEncrypted(void);
	System::UnicodeString __fastcall GetServerCharSet(void);
	void __fastcall SetServerCharSet(const System::UnicodeString Value);
	void __fastcall SetCompressed(const bool Value);
	void __fastcall SetEncrypted(const bool Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	void __fastcall SetBlobSize(const int Value);
	
public:
	__fastcall virtual TDBXMySQLProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property bool Compressed = {read=GetCompressed, write=SetCompressed, nodefault};
	__property bool Encrypted = {read=GetEncrypted, write=SetEncrypted, nodefault};
	__property System::UnicodeString ServerCharSet = {read=GetServerCharSet, write=SetServerCharSet};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXMySQLProperties(void) { }
	
};


class DELPHICLASS TDBXMySQLDriver;
class PASCALIMPLEMENTATION TDBXMySQLDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXMySQLDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXMySQLDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmysql */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmysql;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmysqlHPP
