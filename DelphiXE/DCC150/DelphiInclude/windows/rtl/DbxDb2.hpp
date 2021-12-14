// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxDb2.pas' rev: 22.00

#ifndef Dbxdb2HPP
#define Dbxdb2HPP

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
#include <DBXDb2ReadOnlyMetaData.hpp>	// Pascal unit
#include <DBXDb2MetaData.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxDb2"

namespace Dbxdb2
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDb2Properties;
class PASCALIMPLEMENTATION TDBXDb2Properties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXDb2Properties_StrDb2TransIsolation L"Db2 TransIsolation"
	
	#define TDBXDb2Properties_StrDecimalSeparator L"Decimal Separator"
	
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetBlobSize(void);
	System::UnicodeString __fastcall GetDatabase(void);
	System::UnicodeString __fastcall GetDB2TransIsolation(void);
	System::UnicodeString __fastcall GetDecimalSeparator(void);
	void __fastcall SetBlobSize(const int Value);
	void __fastcall SetDatabase(const System::UnicodeString Value);
	void __fastcall SetDB2TransIsolation(const System::UnicodeString Value);
	void __fastcall SetDecimalSeparator(const System::UnicodeString Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDBXDb2Properties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString Database = {read=GetDatabase, write=SetDatabase};
	__property int BlobSize = {read=GetBlobSize, write=SetBlobSize, nodefault};
	__property System::UnicodeString DB2TransIsolation = {read=GetDB2TransIsolation, write=SetDB2TransIsolation};
	__property System::UnicodeString DecimalSeparator = {read=GetDecimalSeparator, write=SetDecimalSeparator};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXDb2Properties(void) { }
	
};


class DELPHICLASS TDBXDb2Driver;
class PASCALIMPLEMENTATION TDBXDb2Driver : public Dbxdynalinknative::TDBXDynalinkDriverNative
{
	typedef Dbxdynalinknative::TDBXDynalinkDriverNative inherited;
	
public:
	__fastcall virtual TDBXDb2Driver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXDb2Driver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdb2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdb2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dbxdb2HPP
