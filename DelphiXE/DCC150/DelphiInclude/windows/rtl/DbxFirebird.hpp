// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxFirebird.pas' rev: 22.00

#ifndef DbxfirebirdHPP
#define DbxfirebirdHPP

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
#include <DBXFirebirdReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXFirebirdMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxFirebird"

namespace Dbxfirebird
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXFirebirdProperties;
class PASCALIMPLEMENTATION TDBXFirebirdProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXFirebirdProperties_StrServerCharSet L"ServerCharSet"
	
	System::UnicodeString __fastcall GetDatabase(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	System::UnicodeString __fastcall GetServerCharSet(void);
	void __fastcall SetServerCharSet(const System::UnicodeString Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXFirebirdProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString ServerCharSet = {read=GetServerCharSet, write=SetServerCharSet};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXFirebirdProperties(void) { }
	
};


class DELPHICLASS TDBXFirebirdDriver;
class PASCALIMPLEMENTATION TDBXFirebirdDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXFirebirdDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXFirebirdDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxfirebird */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxfirebird;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxfirebirdHPP
