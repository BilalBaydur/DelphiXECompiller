// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyDelphi.pas' rev: 22.00

#ifndef DsproxydelphiHPP
#define DsproxydelphiHPP

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
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DSProxyDelphi"

namespace Dsproxydelphi
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


class DELPHICLASS TDSCustomExtendedProxyWriter;
class PASCALIMPLEMENTATION TDSCustomExtendedProxyWriter : public Dsproxywriter::TDSCustomProxyWriter
{
	typedef Dsproxywriter::TDSCustomProxyWriter inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetClassNameSuffix(void);
	
public:
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetProxyClassNames(void);
public:
	/* TDSCustomProxyWriter.Create */ inline __fastcall TDSCustomExtendedProxyWriter(void) : Dsproxywriter::TDSCustomProxyWriter() { }
	/* TDSCustomProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomExtendedProxyWriter(void) { }
	
};


class DELPHICLASS TDSCustomDelphiProxyWriter;
class PASCALIMPLEMENTATION TDSCustomDelphiProxyWriter : public TDSCustomExtendedProxyWriter
{
	typedef TDSCustomExtendedProxyWriter inherited;
	
public:
	__fastcall TDSCustomDelphiProxyWriter(void);
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
	void __fastcall WriteMethodSignature(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method, const bool IsInterface);
	void __fastcall WriteClassInterface(const Dscommonproxy::TDSProxyClass* ProxyClass);
	void __fastcall WriteMethodImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	void __fastcall WriteOutgoingParameter(const System::UnicodeString Lhs, const System::UnicodeString InRhs, const Dscommonproxy::TDSProxyParameter* Param, const System::UnicodeString CommandName, const System::UnicodeString ParamName);
	void __fastcall WriteClassImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass);
public:
	/* TDSCustomProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomDelphiProxyWriter(void) { }
	
};


class DELPHICLASS TDSDelphiProxyWriter;
class PASCALIMPLEMENTATION TDSDelphiProxyWriter : public TDSCustomDelphiProxyWriter
{
	typedef TDSCustomDelphiProxyWriter inherited;
	
private:
	Classes::TStreamWriter* FStreamWriter;
	
protected:
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line);
	virtual void __fastcall DerivedWriteLine(void);
	
public:
	__property Classes::TStreamWriter* StreamWriter = {read=FStreamWriter, write=FStreamWriter};
	__fastcall virtual ~TDSDelphiProxyWriter(void);
public:
	/* TDSCustomDelphiProxyWriter.Create */ inline __fastcall TDSDelphiProxyWriter(void) : TDSCustomDelphiProxyWriter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDelphiDBXProxyWriter L"Delphi DBX"

}	/* namespace Dsproxydelphi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxydelphi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxydelphiHPP
