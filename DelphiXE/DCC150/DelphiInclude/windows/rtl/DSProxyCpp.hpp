// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyCpp.pas' rev: 22.00

#ifndef DsproxycppHPP
#define DsproxycppHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DSProxyWriter.hpp>	// Pascal unit
#include <DSProxyDelphi.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DSProxyCpp"

namespace Dsproxycpp
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClientProxyWriterCpp;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSClientProxyWriterCpp : public Dsproxywriter::TDSProxyWriter
{
	typedef Dsproxywriter::TDSProxyWriter inherited;
	
public:
	virtual Dsproxywriter::TDSCustomProxyWriter* __fastcall CreateProxyWriter(void);
	virtual Dsproxywriter::TDSProxyWriterProperties __fastcall Properties(void);
	virtual Dsproxywriter::TDSProxyFileDescriptions __fastcall FileDescriptions(void);
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDSClientProxyWriterCpp(void) : Dsproxywriter::TDSProxyWriter() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSClientProxyWriterCpp(void) { }
	
};


class DELPHICLASS TDSCustomCppProxyWriter;
class PASCALIMPLEMENTATION TDSCustomCppProxyWriter : public Dsproxydelphi::TDSCustomExtendedProxyWriter
{
	typedef Dsproxydelphi::TDSCustomExtendedProxyWriter inherited;
	
public:
	__fastcall TDSCustomCppProxyWriter(void);
	virtual void __fastcall WriteProxy(void);
	
protected:
	System::UnicodeString FUnitName;
	virtual void __fastcall StartCppHeader(void) = 0 ;
	virtual void __fastcall EndCppHeader(void) = 0 ;
	virtual void __fastcall WriteFileHeader(void);
	virtual System::UnicodeString __fastcall GetDelphiTypeName(const Dscommonproxy::TDSProxyParameter* Param);
	virtual void __fastcall WriteInterface(void);
	virtual void __fastcall WriteImplementation(void);
	virtual System::UnicodeString __fastcall GetAssignmentString(void);
	virtual System::UnicodeString __fastcall GetCreateDataSetReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual System::UnicodeString __fastcall GetCreateParamsReader(const Dscommonproxy::TDSProxyParameter* Param);
	
private:
	void __fastcall WriteHeaderUses(void);
	void __fastcall WriteMethodSignature(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method, const bool IsInterface);
	void __fastcall WriteClassInterface(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	void __fastcall WriteOutgoingParameter(const System::UnicodeString Lhs, const System::UnicodeString InRhs, const Dscommonproxy::TDSProxyParameter* Param, const System::UnicodeString CommandName, const System::UnicodeString ParamName);
	void __fastcall WriteClassImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass);
public:
	/* TDSCustomProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomCppProxyWriter(void) { }
	
};


class DELPHICLASS TDSCppProxyWriter;
class PASCALIMPLEMENTATION TDSCppProxyWriter : public TDSCustomCppProxyWriter
{
	typedef TDSCustomCppProxyWriter inherited;
	
private:
	Classes::TStreamWriter* FStreamWriter;
	Classes::TStreamWriter* FHeaderStreamWriter;
	bool FWritingHeader;
	
protected:
	virtual bool __fastcall IncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line);
	virtual void __fastcall DerivedWriteLine(void);
	virtual void __fastcall StartCppHeader(void);
	virtual void __fastcall EndCppHeader(void);
	
public:
	__property Classes::TStreamWriter* StreamWriter = {read=FStreamWriter, write=FStreamWriter};
	__property Classes::TStreamWriter* HeaderStreamWriter = {read=FHeaderStreamWriter, write=FHeaderStreamWriter};
	__fastcall virtual ~TDSCppProxyWriter(void);
public:
	/* TDSCustomCppProxyWriter.Create */ inline __fastcall TDSCppProxyWriter(void) : TDSCustomCppProxyWriter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sCPlusPlusBuilderDBXProxyWriter L"C++Builder DBX"

}	/* namespace Dsproxycpp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxycpp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxycppHPP
