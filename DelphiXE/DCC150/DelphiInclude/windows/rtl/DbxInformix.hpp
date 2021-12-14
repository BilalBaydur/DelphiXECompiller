// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxInformix.pas' rev: 22.00

#ifndef DbxinformixHPP
#define DbxinformixHPP

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
#include <DBXInformixReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXInformixMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxInformix"

namespace Dbxinformix
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXInformixProperties;
class PASCALIMPLEMENTATION TDBXInformixProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXInformixProperties_StrInformixTransIsolation L"Informix TransIsolation"
	
	#define TDBXInformixProperties_StrTrimChar L"Trim Char"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetDatabase(void);
	System::UnicodeString __fastcall GetInformixTransIsolation(void);
	bool __fastcall GetTrimChar(void);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetInformixTransIsolation(const System::UnicodeString Value);
	void __fastcall SetTrimChar(const bool Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXInformixProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString InformixTransIsolation = {read=GetInformixTransIsolation, write=SetInformixTransIsolation};
	__property bool TrimChar = {read=GetTrimChar, write=SetTrimChar, nodefault};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXInformixProperties(void) { }
	
};


class DELPHICLASS TDBXInformixDriver;
class PASCALIMPLEMENTATION TDBXInformixDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXInformixDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXInformixDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxinformix */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxinformix;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxinformixHPP
