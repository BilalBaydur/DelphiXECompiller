// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDynalinkNative.pas' rev: 22.00

#ifndef DbxdynalinknativeHPP
#define DbxdynalinknativeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXDynalink.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdynalinknative
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDynalinkDriverLoader;
class PASCALIMPLEMENTATION TDBXDynalinkDriverLoader : public Dbxdynalink::TDBXDynalinkDriverCommonLoader
{
	typedef Dbxdynalink::TDBXDynalinkDriverCommonLoader inherited;
	
protected:
	virtual Dbxdynalink::TDBXMethodTable* __fastcall CreateMethodTable(void);
	virtual Dbxdynalink::TDBXDynalinkDriver* __fastcall CreateDynalinkDriver(void);
public:
	/* TDBXDynalinkDriverCommonLoader.Create */ inline __fastcall virtual TDBXDynalinkDriverLoader(void) : Dbxdynalink::TDBXDynalinkDriverCommonLoader() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDynalinkDriverLoader(void) { }
	
};


typedef int __stdcall (*TGetDriverFunc)(System::WideChar * SVendorLib, System::WideChar * SResourceFile, /* out */ void *Obj);

class DELPHICLASS TDBXDynalinkDriverNative;
class PASCALIMPLEMENTATION TDBXDynalinkDriverNative : public Dbxdynalink::TDBXDynalinkDriver
{
	typedef Dbxdynalink::TDBXDynalinkDriver inherited;
	
protected:
	virtual Dbxcommon::TDBXConnection* __fastcall CreateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	
public:
	__fastcall TDBXDynalinkDriverNative(Dbxcommon::TDBXDriver* DriverClone, void * DriverHandle, Dbxdynalink::TDBXMethodTable* MethodTable)/* overload */;
	__fastcall TDBXDynalinkDriverNative(const Dbxcommon::TDBXDriverDef &DBXDriverDef, Dbxdynalink::TDBXDynalinkDriverCommonLoaderClass DBXDriverLoader)/* overload */;
	__fastcall TDBXDynalinkDriverNative(const Dbxcommon::TDBXDriverDef &DBXDriverDef, Dbxdynalink::TDBXDynalinkDriverCommonLoaderClass DBXDriverLoader, Dbxcommon::TDBXProperties* DriverProps)/* overload */;
public:
	/* TDBXDynalinkDriver.Destroy */ inline __fastcall virtual ~TDBXDynalinkDriverNative(void) { }
	
};


class DELPHICLASS TDBXNativeMethodTable;
class PASCALIMPLEMENTATION TDBXNativeMethodTable : public Dbxdynalink::TDBXMethodTable
{
	typedef Dbxdynalink::TDBXMethodTable inherited;
	
private:
	unsigned FLibraryHandle;
	
public:
	__fastcall TDBXNativeMethodTable(unsigned LibraryHandle);
	__fastcall virtual ~TDBXNativeMethodTable(void);
	virtual void __fastcall LoadMethods(void);
	virtual void * __fastcall LoadMethod(System::UnicodeString MethodName);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdynalinknative */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdynalinknative;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdynalinknativeHPP
