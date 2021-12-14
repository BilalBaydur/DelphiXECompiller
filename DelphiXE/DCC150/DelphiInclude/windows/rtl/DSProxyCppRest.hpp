// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyCppRest.pas' rev: 22.00

#ifndef DsproxycpprestHPP
#define DsproxycpprestHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DSProxyWriter.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DSProxyDelphiRest.hpp>	// Pascal unit
#include <DSProxyDelphi.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DSProxyCppRest"

namespace Dsproxycpprest
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClientProxyWriterCppRest;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSClientProxyWriterCppRest : public Dsproxywriter::TDSProxyWriter
{
	typedef Dsproxywriter::TDSProxyWriter inherited;
	
public:
	virtual Dsproxywriter::TDSCustomProxyWriter* __fastcall CreateProxyWriter(void);
	virtual Dsproxywriter::TDSProxyWriterProperties __fastcall Properties(void);
	virtual Dsproxywriter::TDSProxyFileDescriptions __fastcall FileDescriptions(void);
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDSClientProxyWriterCppRest(void) : Dsproxywriter::TDSProxyWriter() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSClientProxyWriterCppRest(void) { }
	
};


class DELPHICLASS TDSCustomCppRestProxyWriter;
class PASCALIMPLEMENTATION TDSCustomCppRestProxyWriter : public Dsproxydelphirest::TDSCustomNativeRestProxyWriter
{
	typedef Dsproxydelphirest::TDSCustomNativeRestProxyWriter inherited;
	
public:
	__fastcall TDSCustomCppRestProxyWriter(void);
	virtual void __fastcall WriteProxy(void);
	
protected:
	System::UnicodeString FUnitName;
	virtual bool __fastcall CanMarshal(void);
	virtual void __fastcall StartCppHeader(void) = 0 ;
	virtual void __fastcall EndCppHeader(void) = 0 ;
	virtual void __fastcall WriteFileHeader(void);
	virtual System::UnicodeString __fastcall GetDelphiTypeName(const Dscommonproxy::TDSProxyParameter* Param);
	virtual void __fastcall WriteInterface(void);
	virtual void __fastcall WriteImplementation(void);
	virtual System::UnicodeString __fastcall GetAssignmentString(void);
	virtual System::UnicodeString __fastcall GetCreateDataSetReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual System::UnicodeString __fastcall GetCreateParamsReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual bool __fastcall IncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	
private:
	void __fastcall WriteHeaderUses(void);
	void __fastcall WriteMethodSignature(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method, const bool IsInterface, Dsproxydelphirest::TNativeRestProxyWriterOptions AOptions);
	void __fastcall WriteClassInterface(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod, Dsproxydelphirest::TNativeRestProxyWriterOptions AOptions = Dsproxydelphirest::TNativeRestProxyWriterOptions() );
	void __fastcall WriteOutgoingParameter(const System::UnicodeString Lhs, const System::UnicodeString InRhs, const Dscommonproxy::TDSProxyParameter* Param, const System::UnicodeString CommandName, const System::UnicodeString ParamName);
	void __fastcall WriteClassImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteTDSRestParameterMetaData(void);
	void __fastcall WriteClassTDSRestParameterMetaData(Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodTDSRestParameterMetaData(Dscommonproxy::TDSProxyClass* ProxyClass, Dscommonproxy::TDSProxyMethod* Method, Dsproxydelphirest::TNativeRestProxyWriterOptions AOptions = Dsproxydelphirest::TNativeRestProxyWriterOptions() );
	System::UnicodeString __fastcall MakeTDSRestParameterMetaDataTypeName(Dscommonproxy::TDSProxyClass* ProxyClass, Dscommonproxy::TDSProxyMethod* Method, Dsproxydelphirest::TNativeRestProxyWriterOptions AOptions = Dsproxydelphirest::TNativeRestProxyWriterOptions() );
	void __fastcall GetHTTPMethodAndPrefix(Dscommonproxy::TDSProxyMethod* Method, /* out */ System::UnicodeString &AServerMethodPrefix, /* out */ System::UnicodeString &AHTTPMethodName);
	System::UnicodeString __fastcall GetCacheValueInterfaceTypeName(const System::UnicodeString ACachedValueClassName);
public:
	/* TDSCustomNativeRestProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomCppRestProxyWriter(void) { }
	
};


class DELPHICLASS TDSCppRestProxyWriter;
class PASCALIMPLEMENTATION TDSCppRestProxyWriter : public TDSCustomCppRestProxyWriter
{
	typedef TDSCustomCppRestProxyWriter inherited;
	
private:
	Classes::TStreamWriter* FStreamWriter;
	Classes::TStreamWriter* FHeaderStreamWriter;
	bool FWritingHeader;
	
protected:
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line);
	virtual void __fastcall DerivedWriteLine(void);
	virtual void __fastcall StartCppHeader(void);
	virtual void __fastcall EndCppHeader(void);
	
public:
	__property Classes::TStreamWriter* StreamWriter = {read=FStreamWriter, write=FStreamWriter};
	__property Classes::TStreamWriter* HeaderStreamWriter = {read=FHeaderStreamWriter, write=FHeaderStreamWriter};
	__fastcall virtual ~TDSCppRestProxyWriter(void);
public:
	/* TDSCustomCppRestProxyWriter.Create */ inline __fastcall TDSCppRestProxyWriter(void) : TDSCustomCppRestProxyWriter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sCPlusPlusBuilderRestProxyWriter L"C++Builder REST"

}	/* namespace Dsproxycpprest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxycpprest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxycpprestHPP
