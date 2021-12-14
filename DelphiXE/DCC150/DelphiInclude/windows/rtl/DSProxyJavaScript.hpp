// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyJavaScript.pas' rev: 22.00

#ifndef DsproxyjavascriptHPP
#define DsproxyjavascriptHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DSProxyWriter.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DSProxyJavaScript"

namespace Dsproxyjavascript
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClientProxyWriterJavaScript;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSClientProxyWriterJavaScript : public Dsproxywriter::TDSProxyWriter
{
	typedef Dsproxywriter::TDSProxyWriter inherited;
	
public:
	virtual Dsproxywriter::TDSCustomProxyWriter* __fastcall CreateProxyWriter(void);
	virtual Dsproxywriter::TDSProxyWriterProperties __fastcall Properties(void);
	virtual Dsproxywriter::TDSProxyFileDescriptions __fastcall FileDescriptions(void);
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDSClientProxyWriterJavaScript(void) : Dsproxywriter::TDSProxyWriter() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSClientProxyWriterJavaScript(void) { }
	
};


class DELPHICLASS TDSCustomJavaScriptProxyWriter;
class PASCALIMPLEMENTATION TDSCustomJavaScriptProxyWriter : public Dsproxywriter::TDSCustomProxyWriter
{
	typedef Dsproxywriter::TDSCustomProxyWriter inherited;
	
public:
	__fastcall TDSCustomJavaScriptProxyWriter(void);
	
protected:
	bool __fastcall IsPrimitiveJSONType(System::UnicodeString ClassName);
	virtual Dbxplatform::TDBXInt32s __fastcall GetSupportedTypes(void);
	virtual Dbxplatform::TDBXInt32s __fastcall GetNonURLTypes(void);
	virtual System::UnicodeString __fastcall GetAssignmentString(void);
	virtual System::UnicodeString __fastcall GetCreateDataSetReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual System::UnicodeString __fastcall GetCreateParamsReader(const Dscommonproxy::TDSProxyParameter* Param);
	virtual void __fastcall WriteInterface(void);
	virtual void __fastcall WriteJSLine(const System::UnicodeString Line)/* overload */;
	virtual void __fastcall WriteJSLine(void)/* overload */;
	virtual bool __fastcall ExtendedIncludeClass(const Dscommonproxy::TDSProxyClass* ProxyClass);
	virtual bool __fastcall Contains(const Dbxplatform::TDBXInt32s Arr, const int Value);
	virtual bool __fastcall ExtendedIncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	virtual Dscommonproxy::TDSProxyClass* __fastcall GetFirstClass(void);
	virtual void __fastcall WriteImplementation(void);
	virtual void __fastcall WriteProxyClassList(const Classes::TStringList* ProxyClassNameList);
	virtual void __fastcall WriteClassImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Classes::TStringList* ProxyClassNameList);
	virtual System::UnicodeString __fastcall GetMethodRequestType(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method);
	virtual System::UnicodeString __fastcall GetMethodRequestName(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* Method);
	virtual void __fastcall WriteMethodComment(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	virtual void __fastcall WriteMethodImplementation(const Dscommonproxy::TDSProxyClass* ProxyClass, const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	
private:
	bool __fastcall HasOnlyURLParams(const Dscommonproxy::TDSProxyMethod* Method);
	
protected:
	Dbxplatform::TDBXInt32s FSupportedTypes;
	Dbxplatform::TDBXInt32s FNonURLTypes;
	System::UnicodeString Get;
	System::UnicodeString Post;
	System::UnicodeString Put;
	System::UnicodeString Delete;
	System::UnicodeString FPostPrefix;
	System::UnicodeString FPutPrefix;
	System::UnicodeString FDeletePrefix;
	bool FGenerateURLFunctions;
	
public:
	__property bool GenerateURLFunctions = {read=FGenerateURLFunctions, write=FGenerateURLFunctions, nodefault};
	
protected:
	__property Dbxplatform::TDBXInt32s SupportedTypes = {read=GetSupportedTypes};
	__property Dbxplatform::TDBXInt32s NonURLTypes = {read=GetNonURLTypes};
	__property Dscommonproxy::TDSProxyClass* FirstClass = {read=GetFirstClass};
public:
	/* TDSCustomProxyWriter.Destroy */ inline __fastcall virtual ~TDSCustomJavaScriptProxyWriter(void) { }
	
};


class DELPHICLASS TDSJavaScriptProxyWriter;
class PASCALIMPLEMENTATION TDSJavaScriptProxyWriter : public TDSCustomJavaScriptProxyWriter
{
	typedef TDSCustomJavaScriptProxyWriter inherited;
	
private:
	Classes::TStreamWriter* FStreamWriter;
	System::UnicodeString FTargetUnitName;
	Dbxplatform::TDBXStringArray FIncludeClasses;
	Dbxplatform::TDBXStringArray FExcludeClasses;
	Dbxplatform::TDBXStringArray FIncludeMethods;
	Dbxplatform::TDBXStringArray FExcludeMethods;
	System::UnicodeString __fastcall GetFileName(System::UnicodeString OutputFile);
	
protected:
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line);
	virtual void __fastcall DerivedWriteLine(void);
	
public:
	__property Classes::TStreamWriter* StreamWriter = {read=FStreamWriter, write=FStreamWriter};
	__property System::UnicodeString TargetUnitName = {read=FTargetUnitName, write=FTargetUnitName};
	__property Dbxplatform::TDBXStringArray IncludeClasses = {read=FIncludeClasses, write=FIncludeClasses};
	__property Dbxplatform::TDBXStringArray ExcludeClasses = {read=FExcludeClasses, write=FExcludeClasses};
	__property Dbxplatform::TDBXStringArray IncludeMethods = {read=FIncludeMethods, write=FIncludeMethods};
	__property Dbxplatform::TDBXStringArray ExcludeMethods = {read=FExcludeMethods, write=FExcludeMethods};
	void __fastcall generateJS(Dbxcommon::TDBXConnection* AConnection, Classes::TStream* AStream);
	void __fastcall UpdateJSProxyFile(Dbxcommon::TDBXConnection* AConnection, const System::UnicodeString AFileName);
	__fastcall virtual ~TDSJavaScriptProxyWriter(void);
public:
	/* TDSCustomJavaScriptProxyWriter.Create */ inline __fastcall TDSJavaScriptProxyWriter(void) : TDSCustomJavaScriptProxyWriter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sJavaScriptRESTProxyWriter L"Java Script REST"

}	/* namespace Dsproxyjavascript */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxyjavascript;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxyjavascriptHPP
