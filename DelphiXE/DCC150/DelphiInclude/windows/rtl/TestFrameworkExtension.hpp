// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TestFrameworkExtension.pas' rev: 22.00

#ifndef TestframeworkextensionHPP
#define TestframeworkextensionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <TestFramework.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <StrUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Testframeworkextension
{
//-- type declarations -------------------------------------------------------
__interface ITestExtension;
typedef System::DelphiInterface<ITestExtension> _di_ITestExtension;
__interface  INTERFACE_UUID("{8FADE3D2-D3E6-4141-A3DE-6C348069EF96}") ITestExtension  : public Testframework::ITest 
{
	
public:
	virtual void __fastcall SetProperties(Classes::TStrings* props) = 0 ;
	virtual Classes::TStrings* __fastcall GetProperties(void) = 0 ;
	virtual void __fastcall ApplyFilter(System::UnicodeString FilterString) = 0 ;
};

class DELPHICLASS TTestSuiteExtension;
class PASCALIMPLEMENTATION TTestSuiteExtension : public Testframework::TTestSuite
{
	typedef Testframework::TTestSuite inherited;
	
public:
	System::UnicodeString __fastcall GetRunPattern(System::UnicodeString CMD);
	virtual void __fastcall FilterTests(void);
	virtual void __fastcall AddTests(Testframework::TTestCaseClass testClass);
public:
	/* TTestSuite.Create */ inline __fastcall TTestSuiteExtension(void)/* overload */ : Testframework::TTestSuite() { }
	
public:
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TTestSuiteExtension(void) { }
	
};


class DELPHICLASS TTestCaseExtension;
class PASCALIMPLEMENTATION TTestCaseExtension : public Testframework::TTestCase
{
	typedef Testframework::TTestCase inherited;
	
protected:
	Classes::TStrings* FProperties;
	System::UnicodeString FContext;
	System::UnicodeString FLogFileName;
	int FTimeoutValue;
	virtual System::WideString __fastcall GetUserToken(void);
	virtual System::WideString __fastcall GetHostName(void);
	virtual void __fastcall Invoke(Testframework::TTestMethod AMethod);
	
public:
	__fastcall virtual TTestCaseExtension(System::UnicodeString MethodName);
	__fastcall virtual ~TTestCaseExtension(void);
	void __fastcall SetProperties(Classes::TStrings* props);
	Classes::TStrings* __fastcall GetProperties(void);
	virtual System::UnicodeString __fastcall GetMethodName(void);
	void __fastcall ApplyFilter(System::UnicodeString FilterString);
	__property Classes::TStrings* Properties = {read=GetProperties};
	__property int TimeOutValue = {read=FTimeoutValue, write=FTimeoutValue, nodefault};
	__classmethod virtual Testframework::_di_ITestSuite __fastcall Suite();
private:
	void *__ITestExtension;	/* ITestExtension */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_ITestExtension()
	{
		_di_ITestExtension intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestExtension*(void) { return (ITestExtension*)&__ITestExtension; }
	#endif
	
};


class DELPHICLASS TTestCaseThread;
class PASCALIMPLEMENTATION TTestCaseThread : public Classes::TThread
{
	typedef Classes::TThread inherited;
	
private:
	Testframework::TTestMethod FTestMethod;
	void *FExceptionObj;
	
protected:
	virtual void __fastcall Execute(void);
public:
	/* TThread.Create */ inline __fastcall TTestCaseThread(void)/* overload */ : Classes::TThread() { }
	/* TThread.Destroy */ inline __fastcall virtual ~TTestCaseThread(void) { }
	
};


class DELPHICLASS TInterval;
class PASCALIMPLEMENTATION TInterval : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TDateTime FStart;
	System::TDateTime FStop;
	__int64 __fastcall GetTotalSeconds(void);
	__int64 __fastcall GetTotalMinuets(void);
	__int64 __fastcall GetTotalHours(void);
	System::TDateTime __fastcall GetTimeSpan(void);
	
public:
	__fastcall TInterval(void);
	void __fastcall Start(void);
	void __fastcall Stop(void);
	void __fastcall Clear(void);
	__property System::TDateTime TimeSpan = {read=GetTimeSpan};
	__property __int64 TotalSeconds = {read=GetTotalSeconds};
	__property __int64 TotalMinuets = {read=GetTotalMinuets};
	__property __int64 TotalHours = {read=GetTotalHours};
	HIDESBASE System::UnicodeString __fastcall ToString(void)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterval(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define SelectSwitch L"-S:"
#define DisableTimeoutSwitch L"-DisableTimeout"
extern PACKAGE bool __fastcall UseTestTimeout(void);
extern PACKAGE Classes::TStrings* __fastcall GetAppProperties(void);
extern PACKAGE System::UnicodeString __fastcall GetPropertyValue(System::UnicodeString Key);
extern PACKAGE void __fastcall SetPropertyValue(System::UnicodeString Key, System::UnicodeString Value);
extern PACKAGE void __fastcall CopyAppProperties(Classes::TStrings* Destination);

}	/* namespace Testframeworkextension */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Testframeworkextension;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TestframeworkextensionHPP
