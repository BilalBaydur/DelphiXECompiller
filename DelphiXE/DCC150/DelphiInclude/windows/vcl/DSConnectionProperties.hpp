// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnectionProperties.pas' rev: 22.00

#ifndef DsconnectionpropertiesHPP
#define DsconnectionpropertiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DSClientModuleForm.hpp>	// Pascal unit
#include <DSClientSource.hpp>	// Pascal unit
#include <DSRestConnectionFrameUnit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsconnectionproperties
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRestConnectionComponentProperties;
class PASCALIMPLEMENTATION TRestConnectionComponentProperties : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FPort;
	System::UnicodeString FHost;
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	System::UnicodeString FUrlPath;
	System::UnicodeString FContext;
	System::UnicodeString FProtocol;
	int __fastcall GetPort(void);
	System::UnicodeString __fastcall GetHost(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	System::UnicodeString __fastcall GetUrlPath(void);
	System::UnicodeString __fastcall GetContext(void);
	System::UnicodeString __fastcall GetProtocol(void);
	
public:
	__fastcall TRestConnectionComponentProperties(int APort, const System::UnicodeString AHost, const System::UnicodeString AUserName, const System::UnicodeString APassword, const System::UnicodeString AUrlPath, const System::UnicodeString AContext, const System::UnicodeString AProtocol);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRestConnectionComponentProperties(void) { }
	
private:
	void *__IRestConnectionComponentProperties;	/* Dsclientsource::IRestConnectionComponentProperties */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Dsclientsource::_di_IRestConnectionComponentProperties()
	{
		Dsclientsource::_di_IRestConnectionComponentProperties intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dsclientsource::IRestConnectionComponentProperties*(void) { return (Dsclientsource::IRestConnectionComponentProperties*)&__IRestConnectionComponentProperties; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Dsclientsource::_di_IConnectionComponentProperties()
	{
		Dsclientsource::_di_IConnectionComponentProperties intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dsclientsource::IConnectionComponentProperties*(void) { return (Dsclientsource::IConnectionComponentProperties*)&__IRestConnectionComponentProperties; }
	#endif
	
};


class DELPHICLASS TSQLConnectionComponentProperties;
class PASCALIMPLEMENTATION TSQLConnectionComponentProperties : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FPort;
	System::UnicodeString FHostName;
	System::UnicodeString FDSAuthUser;
	System::UnicodeString FDSAuthPassword;
	System::UnicodeString FUrlPath;
	System::UnicodeString FDataSnapContext;
	System::UnicodeString FCommunicationProtocol;
	int __fastcall GetPort(void);
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetDSAuthPassword(void);
	System::UnicodeString __fastcall GetDSAuthUser(void);
	System::UnicodeString __fastcall GetUrlPath(void);
	System::UnicodeString __fastcall GetCommunicationProtocol(void);
	System::UnicodeString __fastcall GetDataSnapContext(void);
	
public:
	__fastcall TSQLConnectionComponentProperties(const System::UnicodeString ACommunicationProtocol, int APort, const System::UnicodeString AHost, const System::UnicodeString AUserName, const System::UnicodeString APassword, const System::UnicodeString AUrlPath, const System::UnicodeString ADataSnapContext);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSQLConnectionComponentProperties(void) { }
	
private:
	void *__ISQLConnectionComponentProperties;	/* Dsclientsource::ISQLConnectionComponentProperties */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Dsclientsource::_di_ISQLConnectionComponentProperties()
	{
		Dsclientsource::_di_ISQLConnectionComponentProperties intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dsclientsource::ISQLConnectionComponentProperties*(void) { return (Dsclientsource::ISQLConnectionComponentProperties*)&__ISQLConnectionComponentProperties; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Dsclientsource::_di_IConnectionComponentProperties()
	{
		Dsclientsource::_di_IConnectionComponentProperties intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dsclientsource::IConnectionComponentProperties*(void) { return (Dsclientsource::IConnectionComponentProperties*)&__ISQLConnectionComponentProperties; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsconnectionproperties */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnectionproperties;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnectionpropertiesHPP
