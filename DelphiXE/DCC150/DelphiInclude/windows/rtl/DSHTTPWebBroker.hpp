// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSHTTPWebBroker.pas' rev: 22.00

#ifndef DshttpwebbrokerHPP
#define DshttpwebbrokerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DSHTTPCommon.hpp>	// Pascal unit
#include <HTTPApp.hpp>	// Pascal unit
#include <AutoDisp.hpp>	// Pascal unit
#include <Masks.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dshttpwebbroker
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSHTTPWebDispatcher;
class PASCALIMPLEMENTATION TDSHTTPWebDispatcher : public Dshttpcommon::TDSHTTPServerTransport
{
	typedef Dshttpcommon::TDSHTTPServerTransport inherited;
	
private:
	Autodisp::TWebDispatch* FWebDispatch;
	void __fastcall SetWebDispatch(const Autodisp::TWebDispatch* Value);
	
protected:
	virtual Dshttpcommon::TDSHTTPServer* __fastcall CreateHttpServer(void);
	bool __fastcall DispatchEnabled(void);
	Masks::TMask* __fastcall DispatchMask(void);
	Httpapp::TMethodType __fastcall DispatchMethodType(void);
	bool __fastcall DispatchRequest(System::TObject* Sender, Httpapp::TWebRequest* Request, Httpapp::TWebResponse* Response);
	
public:
	__fastcall virtual TDSHTTPWebDispatcher(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSHTTPWebDispatcher(void);
	virtual void __fastcall Start(void);
	virtual void __fastcall Stop(void);
	
__published:
	__property Autodisp::TWebDispatch* WebDispatch = {read=FWebDispatch, write=SetWebDispatch};
private:
	void *__IWebDispatch;	/* Httpapp::IWebDispatch */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Httpapp::_di_IWebDispatch()
	{
		Httpapp::_di_IWebDispatch intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Httpapp::IWebDispatch*(void) { return (Httpapp::IWebDispatch*)&__IWebDispatch; }
	#endif
	
};


class DELPHICLASS TDSHTTPContextWebBroker;
class PASCALIMPLEMENTATION TDSHTTPContextWebBroker : public Dshttpcommon::TDSHTTPContext
{
	typedef Dshttpcommon::TDSHTTPContext inherited;
	
public:
	virtual bool __fastcall Connected(void);
public:
	/* TObject.Create */ inline __fastcall TDSHTTPContextWebBroker(void) : Dshttpcommon::TDSHTTPContext() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPContextWebBroker(void) { }
	
};


class DELPHICLASS TDSHTTPRequestWebBroker;
class PASCALIMPLEMENTATION TDSHTTPRequestWebBroker : public Dshttpcommon::TDSHTTPRequest
{
	typedef Dshttpcommon::TDSHTTPRequest inherited;
	
private:
	Httpapp::TWebRequest* FRequestInfo;
	Classes::TMemoryStream* FPostStream;
	Classes::TStrings* FParams;
	System::AnsiString FAuthUserName;
	System::AnsiString FAuthPassword;
	bool FHaveAuth;
	void __fastcall UpdateAuthStrings(void);
	
protected:
	virtual System::UnicodeString __fastcall GetCommand(void);
	virtual Dshttpcommon::TDSHTTPCommandType __fastcall GetCommandType(void);
	virtual System::UnicodeString __fastcall GetDocument(void);
	virtual Classes::TStrings* __fastcall GetParams(void);
	virtual Classes::TStream* __fastcall GetPostStream(void);
	virtual System::UnicodeString __fastcall GetAuthUserName(void);
	virtual System::UnicodeString __fastcall GetAuthPassword(void);
	virtual System::UnicodeString __fastcall GetURI(void);
	virtual System::UnicodeString __fastcall GetPragma(void);
	virtual System::UnicodeString __fastcall GetAccept(void);
	virtual System::UnicodeString __fastcall GetRemoteIP(void);
	
public:
	__fastcall TDSHTTPRequestWebBroker(Httpapp::TWebRequest* ARequestInfo);
	__fastcall virtual ~TDSHTTPRequestWebBroker(void);
	__property Httpapp::TWebRequest* WebRequest = {read=FRequestInfo};
};


class DELPHICLASS TDSHTTPResponseWebBroker;
class PASCALIMPLEMENTATION TDSHTTPResponseWebBroker : public Dshttpcommon::TDSHTTPResponse
{
	typedef Dshttpcommon::TDSHTTPResponse inherited;
	
private:
	Httpapp::TWebResponse* FResponseInfo;
	bool FCloseConnection;
	
protected:
	virtual Classes::TStream* __fastcall GetContentStream(void);
	virtual int __fastcall GetResponseNo(void);
	virtual System::UnicodeString __fastcall GetResponseText(void);
	virtual void __fastcall SetContentStream(const Classes::TStream* Value);
	virtual void __fastcall SetResponseNo(const int Value);
	virtual void __fastcall SetResponseText(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetContentText(void);
	virtual void __fastcall SetContentText(const System::UnicodeString Value);
	virtual __int64 __fastcall GetContentLength(void);
	virtual void __fastcall SetContentLength(const __int64 Value);
	virtual bool __fastcall GetCloseConnection(void);
	virtual void __fastcall SetCloseConnection(const bool Value);
	virtual System::UnicodeString __fastcall GetPragma(void);
	virtual void __fastcall SetPragma(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetContentType(void);
	virtual void __fastcall SetContentType(const System::UnicodeString Value);
	virtual bool __fastcall GetFreeContentStream(void);
	virtual void __fastcall SetFreeContentStream(const bool Value);
	
public:
	__fastcall TDSHTTPResponseWebBroker(Httpapp::TWebResponse* AResponseInfo);
	virtual void __fastcall SetHeaderAuthentication(const System::UnicodeString Value, const System::UnicodeString Realm);
	__property Httpapp::TWebResponse* WebResponse = {read=FResponseInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPResponseWebBroker(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Httpapp::TWebModule* __fastcall GetDataSnapWebModule(void);

}	/* namespace Dshttpwebbroker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dshttpwebbroker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DshttpwebbrokerHPP
