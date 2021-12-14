// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxSybaseASA.pas' rev: 22.00

#ifndef DbxsybaseasaHPP
#define DbxsybaseasaHPP

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
#include <DBXSybaseASAReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXSybaseASAMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxSybaseASA"

namespace Dbxsybaseasa
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASAProperties;
class PASCALIMPLEMENTATION TDBXSybaseASAProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXSybaseASAProperties_StrASATransIsolation L"ASA TransIsolation"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetSybaseASATransIsolation(void);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetSybaseASATransIsolation(const System::UnicodeString Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXSybaseASAProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString SybaseASATransIsolation = {read=GetSybaseASATransIsolation, write=SetSybaseASATransIsolation};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXSybaseASAProperties(void) { }
	
};


class DELPHICLASS TDBXSybaseASADriver;
class PASCALIMPLEMENTATION TDBXSybaseASADriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXSybaseASADriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXSybaseASADriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasa */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasa;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasaHPP
