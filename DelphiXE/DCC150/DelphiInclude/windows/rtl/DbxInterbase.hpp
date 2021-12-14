// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxInterbase.pas' rev: 22.00

#ifndef DbxinterbaseHPP
#define DbxinterbaseHPP

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
#include <DBXInterbaseReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXInterbaseMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxInterbase"

namespace Dbxinterbase
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXInterBaseProperties;
class PASCALIMPLEMENTATION TDBXInterBaseProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXInterBaseProperties_StrServerCharSet L"ServerCharSet"
	
	System::UnicodeString __fastcall GetDatabase(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	System::UnicodeString __fastcall GetServerCharSet(void);
	void __fastcall SetServerCharSet(const System::UnicodeString Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXInterBaseProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString ServerCharSet = {read=GetServerCharSet, write=SetServerCharSet};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXInterBaseProperties(void) { }
	
};


class DELPHICLASS TDBXInterBaseDriver;
class PASCALIMPLEMENTATION TDBXInterBaseDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXInterBaseDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXInterBaseDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxinterbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxinterbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxinterbaseHPP
