// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSHTTP.pas' rev: 22.00

#ifndef DshttpHPP
#define DshttpHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <IdTCPServer.hpp>	// Pascal unit
#include <IdHTTP.hpp>	// Pascal unit
#include <IdHTTPServer.hpp>	// Pascal unit
#include <IdAssignedNumbers.hpp>	// Pascal unit
#include <IdContext.hpp>	// Pascal unit
#include <IdCustomHTTPServer.hpp>	// Pascal unit
#include <IdAuthentication.hpp>	// Pascal unit
#include <IdSSLOpenSSL.hpp>	// Pascal unit
#include <DbxDatasnap.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DSService.hpp>	// Pascal unit
#include <DSServer.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DBXCommonIndy.hpp>	// Pascal unit
#include <DSTransport.hpp>	// Pascal unit
#include <DSHTTPCommon.hpp>	// Pascal unit
#include <Contnrs.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <WebFileDispatcher.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit
#include <IdTCPClient.hpp>	// Pascal unit
#include <IdTCPConnection.hpp>	// Pascal unit
#include <IdComponent.hpp>	// Pascal unit
#include <IdBaseComponent.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dshttp
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSHTTPService;
class DELPHICLASS TDSHTTPServiceComponent;
class PASCALIMPLEMENTATION TDSHTTPService : public Dshttpcommon::TDSHTTPServerTransport
{
	typedef Dshttpcommon::TDSHTTPServerTransport inherited;
	
private:
	Contnrs::TComponentList* FComponentList;
	HIDESBASE void __fastcall RemoveComponent(const TDSHTTPServiceComponent* AComponent);
	void __fastcall AddComponent(const TDSHTTPServiceComponent* AComponent);
	
protected:
	virtual Dshttpcommon::TDSHTTPServer* __fastcall CreateHttpServer(void);
	virtual void __fastcall HTTPOtherContext(Dshttpcommon::TDSHTTPContext* AContext, Dshttpcommon::TDSHTTPRequest* ARequestInfo, Dshttpcommon::TDSHTTPResponse* AResponseInfo, const System::UnicodeString ARequest, bool &AHandled);
	
public:
	__fastcall virtual TDSHTTPService(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSHTTPService(void);
	virtual System::Word __fastcall GetHttpPort(void);
	virtual System::UnicodeString __fastcall GetServerSoftware(void);
	virtual bool __fastcall IsActive(void);
	virtual void __fastcall SetActive(bool Status);
	virtual void __fastcall SetHttpPort(const System::Word Port);
	virtual void __fastcall Start(void);
	virtual void __fastcall Stop(void);
	
__published:
	__property System::Word HttpPort = {read=GetHttpPort, write=SetHttpPort, default=80};
	__property bool Active = {read=IsActive, write=SetActive, nodefault};
	__property Trace;
	__property System::UnicodeString ServerSoftware = {read=GetServerSoftware};
	__property Server;
	__property DSHostname;
	__property DSPort;
};


class PASCALIMPLEMENTATION TDSHTTPServiceComponent : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	TDSHTTPService* FService;
	void __fastcall SetService(const TDSHTTPService* AValue);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	virtual void __fastcall DoCommand(Dshttpcommon::TDSHTTPContext* AContext, Dshttpcommon::TDSHTTPRequest* ARequestInfo, Dshttpcommon::TDSHTTPResponse* AResponseInfo, const System::UnicodeString ARequest, bool &AHandled) = 0 ;
	
__published:
	__property TDSHTTPService* Service = {read=FService, write=SetService};
public:
	/* TComponent.Create */ inline __fastcall virtual TDSHTTPServiceComponent(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSHTTPServiceComponent(void) { }
	
};


typedef void __fastcall (__closure *TDispatchFileEvent)(System::TObject* Sender, const System::UnicodeString AFileName, Dshttpcommon::TDSHTTPContext* AContext, Dshttpcommon::TDSHTTPRequest* Request, Dshttpcommon::TDSHTTPResponse* Response, bool &Handled);

class DELPHICLASS TDSHTTPServiceFileDispatcher;
class PASCALIMPLEMENTATION TDSHTTPServiceFileDispatcher : public TDSHTTPServiceComponent
{
	typedef TDSHTTPServiceComponent inherited;
	
private:
	Webfiledispatcher::TWebFileDispatcherProperties* FFileDispatcherProperties;
	TDispatchFileEvent FBeforeDispatch;
	TDispatchFileEvent FAfterDispatch;
	void __fastcall SetWebFileExtensions(const Webfiledispatcher::TWebFileExtensions* Value);
	Webfiledispatcher::TWebFileExtensions* __fastcall GetWebFileExtensions(void);
	void __fastcall SetWebDirectories(const Webfiledispatcher::TWebDirectories* Value);
	Webfiledispatcher::TWebDirectories* __fastcall GetWebDirectories(void);
	System::UnicodeString __fastcall GetRootDirectory(void);
	void __fastcall SetRootDirectory(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDSHTTPServiceFileDispatcher(Classes::TComponent* AOwner);
	virtual void __fastcall DoCommand(Dshttpcommon::TDSHTTPContext* AContext, Dshttpcommon::TDSHTTPRequest* ARequestInfo, Dshttpcommon::TDSHTTPResponse* AResponseInfo, const System::UnicodeString ARequest, bool &AHandled);
	
__published:
	__property TDispatchFileEvent BeforeDispatch = {read=FBeforeDispatch, write=FBeforeDispatch};
	__property TDispatchFileEvent AfterDispatch = {read=FAfterDispatch, write=FAfterDispatch};
	__property Webfiledispatcher::TWebFileExtensions* WebFileExtensions = {read=GetWebFileExtensions, write=SetWebFileExtensions};
	__property Webfiledispatcher::TWebDirectories* WebDirectories = {read=GetWebDirectories, write=SetWebDirectories};
	__property System::UnicodeString RootDirectory = {read=GetRootDirectory, write=SetRootDirectory};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSHTTPServiceFileDispatcher(void) { }
	
};


typedef TMetaClass* TDSHTTPClass;

class DELPHICLASS TDSHTTP;
class PASCALIMPLEMENTATION TDSHTTP : public Idhttp::TIdHTTP
{
	typedef Idhttp::TIdHTTP inherited;
	
private:
	Dbxcommon::TValidateCertificate FOnValidateCertificate;
	Idauthentication::TIdAuthentication* FAuthentication;
	System::UnicodeString FProtocol;
	static Generics_collections::TDictionary__2<System::UnicodeString,TDSHTTPClass>* FProtocols;
	
protected:
	virtual void __fastcall InitComponent(void);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__fastcall TDSHTTP(void)/* overload */;
	__classmethod virtual bool __fastcall HasPeerCertificate();
	__classmethod void __fastcall RegisterProtocol(const System::UnicodeString AName, TDSHTTPClass AClass);
	__classmethod void __fastcall UnregisterProtocol(const System::UnicodeString AName);
	static System::DynamicArray<System::UnicodeString> __fastcall RegisteredProtocolList();
	static TDSHTTPClass __fastcall ProtocolClass(const System::UnicodeString AName);
	HIDESBASE System::UnicodeString __fastcall Delete(System::UnicodeString AURL)/* overload */;
	HIDESBASE System::UnicodeString __fastcall Delete(System::UnicodeString AURL, Classes::TStream* AResponseStream)/* overload */;
	void __fastcall Merge(System::UnicodeString AURL, Classes::TStream* RequestStream);
	HIDESBASE void __fastcall Head(System::UnicodeString AURL);
	HIDESBASE System::UnicodeString __fastcall Put(System::UnicodeString AURL)/* overload */;
	void __fastcall SetBasicAuthentication(const System::UnicodeString user, const System::UnicodeString password);
	void __fastcall SetAuthentication(Idauthentication::TIdAuthentication* auth);
	__property System::UnicodeString Protocol = {read=FProtocol, write=FProtocol};
	__property Dbxcommon::TValidateCertificate OnValidatePeerCertificate = {read=FOnValidateCertificate, write=FOnValidateCertificate};
public:
	/* TIdCustomHTTP.Destroy */ inline __fastcall virtual ~TDSHTTP(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Put(System::UnicodeString AURL, Classes::TStream* ASource){ return Idhttp::TIdCustomHTTP::Put(AURL, ASource); }
	inline void __fastcall  Put(System::UnicodeString AURL, Classes::TStream* ASource, Classes::TStream* AResponseContent){ Idhttp::TIdCustomHTTP::Put(AURL, ASource, AResponseContent); }
	
};


class DELPHICLASS TDSHTTPS;
class PASCALIMPLEMENTATION TDSHTTPS : public TDSHTTP
{
	typedef TDSHTTP inherited;
	
protected:
	virtual void __fastcall InitComponent(void);
	
private:
	bool __fastcall IdValidateCertificate(Idsslopenssl::TIdX509* Certificate, bool AOk, int ADepth);
	
public:
	__classmethod virtual bool __fastcall HasPeerCertificate();
public:
	/* TDSHTTP.Create */ inline __fastcall TDSHTTPS(void)/* overload */ : TDSHTTP() { }
	
public:
	/* TIdCustomHTTP.Destroy */ inline __fastcall virtual ~TDSHTTPS(void) { }
	
};


class DELPHICLASS TDSHTTPContextIndy;
class PASCALIMPLEMENTATION TDSHTTPContextIndy : public Dshttpcommon::TDSHTTPContext
{
	typedef Dshttpcommon::TDSHTTPContext inherited;
	
private:
	Idcontext::TIdContext* FContext;
	
public:
	__fastcall TDSHTTPContextIndy(Idcontext::TIdContext* AContext);
	virtual bool __fastcall Connected(void);
	__property Idcontext::TIdContext* Context = {read=FContext};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPContextIndy(void) { }
	
};


class DELPHICLASS TDSHTTPRequestIndy;
class PASCALIMPLEMENTATION TDSHTTPRequestIndy : public Dshttpcommon::TDSHTTPRequest
{
	typedef Dshttpcommon::TDSHTTPRequest inherited;
	
private:
	Idcustomhttpserver::TIdHTTPRequestInfo* FRequestInfo;
	System::UnicodeString FDocument;
	
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
	__fastcall TDSHTTPRequestIndy(Idcustomhttpserver::TIdHTTPRequestInfo* ARequestInfo);
	__property Idcustomhttpserver::TIdHTTPRequestInfo* RequestInfo = {read=FRequestInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPRequestIndy(void) { }
	
};


class DELPHICLASS TDSHTTPResponseIndy;
class PASCALIMPLEMENTATION TDSHTTPResponseIndy : public Dshttpcommon::TDSHTTPResponse
{
	typedef Dshttpcommon::TDSHTTPResponse inherited;
	
private:
	Idcustomhttpserver::TIdHTTPResponseInfo* FResponseInfo;
	
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
	__fastcall TDSHTTPResponseIndy(Idcustomhttpserver::TIdHTTPResponseInfo* AResponseInfo);
	virtual void __fastcall SetHeaderAuthentication(const System::UnicodeString Value, const System::UnicodeString Realm);
	__property Idcustomhttpserver::TIdHTTPResponseInfo* ResponseInfo = {read=FResponseInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPResponseIndy(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dshttp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dshttp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DshttpHPP
