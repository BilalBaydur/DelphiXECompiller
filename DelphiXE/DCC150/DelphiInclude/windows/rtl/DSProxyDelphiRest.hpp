// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyDelphiRest.pas' rev: 22.00

#ifndef DsproxydelphirestHPP
#define DsproxydelphirestHPP

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
#include <DSProxyDelphi.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DSProxyDelphiRest"

namespace Dsproxydelphirest
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClientProxyWriterDelphi;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSClientProxyWriterDelphi : public Dsproxywriter::TDSProxyWriter
{
	typedef Dsproxywriter::TDSProxyWriter inherited;
	
public:
	virtual Dsproxywriter::TDSCustomProxyWriter* __fastcall CreateProxyWriter(void);
	virtual Dsproxywriter::TDSProxyWriterProperties __fastcall Properties(void);
	virtual Dsproxywriter::TDSProxyFileDescriptions __fastcall FileDescriptions(void);
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDSClientProxyWriterDelphi(void) : Dsproxywriter::TDSProxyWriter() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSClientProxyWriterDelphi(void) { }
	
};


#pragma option push -b-
enum TNativeRestProxyWriterOption { optCacheParameters };
#pragma option pop

typedef System::Set<TNativeRestProxyWriterOption, TNativeRestProxyWriterOption::optCacheParameters, TNativeRestProxyWriterOption::optCacheParameters>  TNativeRestProxyWriterOptions;

class DELPHICLASS TDSCustomNativeRestProxyWriter;
class PASCALIMPLEMENTATION TDSCustomNativeRestProxyWriter : public Dsproxydelphi::TDSCustomExtendedProxyWriter
{
	typedef Dsproxydelphi::TDSCustomExtendedProxyWriter inherited;
	
private:
	Generics_collections::TList__1<int>* FSupportedTypes;
	bool __fastcall ExtendedIncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	Generics_collections::TList__1<int>* __fastcall GetSupportedTypes(void);
	bool __fastcall ExtendedIncludeCacheMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	
protected:
	virtual bool __fastcall CanMarshal(void);
	System::UnicodeString __fastcall GetAncestor(const Dscommonproxy::TDSProxyClass* ProxyClass);
	virtual bool __fastcall IncludeClass(const Dscommonproxy::TDSProxyClass* ProxyClass);
	virtual bool __fastcall IncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	bool __fastcall IncludeCacheMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	bool __fastcall SupportsRequestFilter(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	bool __fastcall IsCachableParameter(const Dscommonproxy::TDSProxyParameter* ProxyParameter, /* out */ System::UnicodeString &ACachedValueClassName)/* overload */;
	bool __fastcall IsCachableParameter(const Dscommonproxy::TDSProxyParameter* ProxyParameter, /* out */ System::UnicodeString &ACachedValueClassName, /* out */ bool &AIsCustomType)/* overload */;
	__property Generics_collections::TList__1<int>* SupportedTypes = {read=GetSupportedTypes};
	bool __fastcall EnumClasses(System::DelphiInterface<Sysutils::TFunc__2<Dscommonproxy::TDSProxyClass*,bool> >  ACallback);
	bool __fastcall EnumMethods(Dscommonproxy::TDSProxyClass* AClass, System::DelphiInterface<Sysutils::TFunc__2<Dscommonproxy::TDSProxyMethod*,bool> >  ACallback);
	bool __fastcall EnumParams(Dscommonproxy::TDSProxyMethod* AMethod, System::DelphiInterface<Sysutils::TFunc__2<Dscommonproxy::TDSProxyParameter*,bool> >  ACallback);
	
public:
	__fastcall virtual ~TDSCustomNativeRestProxyWriter(void);
public:
	/* TDSCustomProxyWriter.Create */ inline __fastcall TDSCustomNativeRestProxyWriter(void) : Dsproxydelphi::TDSCustomExtendedProxyWriter() { }
	
};


class DELPHICLASS TDSCustomDelphiRestProxyWriter;
class PASCALIMPLEMENTATION TDSCustomDelphiRestProxyWriter : public TDSCustomNativeRestProxyWriter
{
	typedef TDSCustomNativeRestProxyWriter inherited;
	
public:
	__fastcall TDSCustomDelphiRestProxyWriter(void);
	virtual void __fastcall WriteProxy(void);
	
protected:
	System::UnicodeString FUnitName;
	virtual void __fastcall WriteInterface(void);
	virtual void __fastcall WriteImplementation(void);
	virtual System::UnicodeString __fastcall GetAssignmentString(void);
	virtual System::UnicodeString __fastcall GetCreateDataSetReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual System::UnicodeString __fastcall GetCreateParamsReader(const Dscommonproxy::TDSProxyParameter* Param);
	
private:
	void __fastcall WriteInterfaceUses(void);
	void __fastcall WriteMethodSignature(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method, const bool IsInterface, TNativeRestProxyWriterOptions AOptions);
	void __fastcall WriteClassInterface(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod, TNativeRestProxyWriterOptions AOptions = TNativeRestProxyWriterOptions() );
	void __fastcall WriteOutgoingParameter(const System::UnicodeString Lhs, const System::UnicodeString InRhs, const Dscommonproxy::TDSProxyParameter* Param, const System::UnicodeString CommandName, const System::UnicodeString ParamName);
	void __fastcall WriteClassImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteTDSRestParameterMetaData(void);
	void __fastcall WriteClassTDSRestParameterMetaData(Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodTDSRestParameterMetaData(Dscommonproxy::TDSProxyClass* ProxyClass, Dscommonproxy::TDSProxyMethod* Method, TNativeRestProxyWriterOptions AOptions = TNativeRestProxyWriterOptions() );
	System::UnicodeString __fastcall MakeTDSRestParameterMetaDataTypeName(Dscommonproxy::TDSProxyClass* ProxyClass, Dscommonproxy::TDSProxyMethod* Method, TNativeRestProxyWriterOptions AOptions = TNativeRestProxyWriterOptions() );
	void __fastcall GetHTTPMethodAndPrefix(Dscommonproxy::TDSProxyMethod* Method, /* out */ System::UnicodeString &AServerMethodPrefix, /* out */ System::UnicodeString &AHTTPMethodName);
	Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* __fastcall GetCachedObjectTypes(void);
	void __fastcall WriteCachedObjectTypes(Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* List, const bool Forwards);
public:
	/* TDSCustomNativeRestProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomDelphiRestProxyWriter(void) { }
	
};


class DELPHICLASS TDSDelphiRestProxyWriter;
class PASCALIMPLEMENTATION TDSDelphiRestProxyWriter : public TDSCustomDelphiRestProxyWriter
{
	typedef TDSCustomDelphiRestProxyWriter inherited;
	
private:
	Classes::TStreamWriter* FStreamWriter;
	
protected:
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line);
	virtual void __fastcall DerivedWriteLine(void);
	
public:
	__property Classes::TStreamWriter* StreamWriter = {read=FStreamWriter, write=FStreamWriter};
	__fastcall virtual ~TDSDelphiRestProxyWriter(void);
public:
	/* TDSCustomDelphiRestProxyWriter.Create */ inline __fastcall TDSDelphiRestProxyWriter(void) : TDSCustomDelphiRestProxyWriter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDelphiRestProxyWriter L"Delphi REST"
#define sDSRestCached L"DSRestCached"

}	/* namespace Dsproxydelphirest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxydelphirest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxydelphirestHPP
