// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxSybaseASE.pas' rev: 22.00

#ifndef DbxsybaseaseHPP
#define DbxsybaseaseHPP

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
#include <DBXSybaseASEReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXSybaseASEMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxSybaseASE"

namespace Dbxsybasease
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASEProperties;
class PASCALIMPLEMENTATION TDBXSybaseASEProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXSybaseASEProperties_StrASETransIsolation L"ASE TransIsolation"
	
	#define TDBXSybaseASEProperties_StrTDSPacketSize L"TDS Packet Size"
	
	#define TDBXSybaseASEProperties_StrClientHostName L"Client HostName"
	
	#define TDBXSybaseASEProperties_StrClientAppName L"Client AppName"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetDatabase(void);
	int __fastcall GetTDSPacketSize(void);
	System::UnicodeString __fastcall GetSybaseASETransIsolation(void);
	System::UnicodeString __fastcall GetClientAppName(void);
	System::UnicodeString __fastcall GetClientHostName(void);
	void __fastcall SetClientAppName(const System::UnicodeString Value);
	void __fastcall SetClientHostName(const System::UnicodeString Value);
	void __fastcall SetTDSPacketSize(const int Value);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetSybaseASETransIsolation(const System::UnicodeString Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXSybaseASEProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString SybaseASETransIsolation = {read=GetSybaseASETransIsolation, write=SetSybaseASETransIsolation};
	__property int TDSPacketSize = {read=GetTDSPacketSize, write=SetTDSPacketSize, nodefault};
	__property System::UnicodeString ClientHostName = {read=GetClientHostName, write=SetClientHostName};
	__property System::UnicodeString ClientAppName = {read=GetClientAppName, write=SetClientAppName};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXSybaseASEProperties(void) { }
	
};


class DELPHICLASS TDBXSybaseASEDriver;
class PASCALIMPLEMENTATION TDBXSybaseASEDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXSybaseASEDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXSybaseASEDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybasease */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybasease;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseaseHPP
