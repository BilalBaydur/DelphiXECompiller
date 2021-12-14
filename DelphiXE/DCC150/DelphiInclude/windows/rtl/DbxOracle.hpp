// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxOracle.pas' rev: 22.00

#ifndef DbxoracleHPP
#define DbxoracleHPP

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
#include <DBXOracleReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXOracleMetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxOracle"

namespace Dbxoracle
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXOracleProperties;
class PASCALIMPLEMENTATION TDBXOracleProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXOracleProperties_StrOSAuthentication L"OS Authentication"
	
	#define TDBXOracleProperties_StrOracleTransIsolation L"Oracle TransIsolation"
	
	#define TDBXOracleProperties_StrDecimalSeparator L"Decimal Separator"
	
	#define TDBXOracleProperties_StrTrimChar L"Trim Char"
	
	#define TDBXOracleProperties_StrMultipleTransaction L"Multiple Transaction"
	
	#define TDBXOracleProperties_StrRowsetSize L"RowsetSize"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetDatabase(void);
	System::UnicodeString __fastcall GetOracleTransIsolation(void);
	System::UnicodeString __fastcall GetDecimalSeparator(void);
	bool __fastcall GetTrimChar(void);
	int __fastcall GetRowsetSize(void);
	bool __fastcall GetOSAuthentication(void);
	bool __fastcall GetMultipleTransaction(void);
	void __fastcall SetMultipleTransaction(const bool Value);
	void __fastcall SetOSAuthentication(const bool Value);
	void __fastcall SetRowsetSize(const int Value);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetOracleTransIsolation(const System::UnicodeString Value);
	void __fastcall SetDecimalSeparator(const System::UnicodeString Value);
	void __fastcall SetTrimChar(const bool Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXOracleProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString OracleTransIsolation = {read=GetOracleTransIsolation, write=SetOracleTransIsolation};
	__property System::UnicodeString DecimalSeparator = {read=GetDecimalSeparator, write=SetDecimalSeparator};
	__property bool OSAuthentication = {read=GetOSAuthentication, write=SetOSAuthentication, nodefault};
	__property bool TrimChar = {read=GetTrimChar, write=SetTrimChar, nodefault};
	__property int RowsetSize = {read=GetRowsetSize, write=SetRowsetSize, nodefault};
	__property bool MultipleTransaction = {read=GetMultipleTransaction, write=SetMultipleTransaction, nodefault};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXOracleProperties(void) { }
	
};


class DELPHICLASS TDBXOracleDriver;
class PASCALIMPLEMENTATION TDBXOracleDriver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXOracleDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXOracleDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxoracle */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxoracle;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxoracleHPP
