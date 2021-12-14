// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSHTTPCommon.pas' rev: 22.00

#ifndef DshttpcommonHPP
#define DshttpcommonHPP

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
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DSService.hpp>	// Pascal unit
#include <DSServer.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DSTransport.hpp>	// Pascal unit
#include <DbxDatasnap.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DSAuth.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dshttpcommon
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSHTTPCommandType { hcUnknown, hcGET, hcPOST, hcDELETE, hcPUT, hcOther };
#pragma option pop

class DELPHICLASS TDSHTTPContext;
class PASCALIMPLEMENTATION TDSHTTPContext : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual bool __fastcall Connected(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDSHTTPContext(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPContext(void) { }
	
};


class DELPHICLASS TDSHTTPRequest;
class PASCALIMPLEMENTATION TDSHTTPRequest : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetCommand(void) = 0 ;
	virtual TDSHTTPCommandType __fastcall GetCommandType(void) = 0 ;
	virtual System::UnicodeString __fastcall GetDocument(void) = 0 ;
	virtual Classes::TStrings* __fastcall GetParams(void) = 0 ;
	virtual Classes::TStream* __fastcall GetPostStream(void) = 0 ;
	virtual System::UnicodeString __fastcall GetAuthUserName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetAuthPassword(void) = 0 ;
	virtual System::UnicodeString __fastcall GetURI(void) = 0 ;
	virtual System::UnicodeString __fastcall GetPragma(void) = 0 ;
	virtual System::UnicodeString __fastcall GetAccept(void) = 0 ;
	virtual System::UnicodeString __fastcall GetRemoteIP(void) = 0 ;
	
public:
	__property TDSHTTPCommandType CommandType = {read=GetCommandType, nodefault};
	__property System::UnicodeString Document = {read=GetDocument};
	__property Classes::TStrings* Params = {read=GetParams};
	__property Classes::TStream* PostStream = {read=GetPostStream};
	__property System::UnicodeString AuthUserName = {read=GetAuthUserName};
	__property System::UnicodeString AuthPassword = {read=GetAuthPassword};
	__property System::UnicodeString Command = {read=GetCommand};
	__property System::UnicodeString URI = {read=GetURI};
	__property System::UnicodeString Pragma = {read=GetPragma};
	__property System::UnicodeString Accept = {read=GetAccept};
	__property System::UnicodeString RemoteIP = {read=GetRemoteIP};
public:
	/* TObject.Create */ inline __fastcall TDSHTTPRequest(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPRequest(void) { }
	
};


class DELPHICLASS TDSHTTPResponse;
class PASCALIMPLEMENTATION TDSHTTPResponse : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual Classes::TStream* __fastcall GetContentStream(void) = 0 ;
	virtual int __fastcall GetResponseNo(void) = 0 ;
	virtual System::UnicodeString __fastcall GetResponseText(void) = 0 ;
	virtual void __fastcall SetContentStream(const Classes::TStream* Value) = 0 ;
	virtual void __fastcall SetResponseNo(const int Value) = 0 ;
	virtual void __fastcall SetResponseText(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetContentText(void) = 0 ;
	virtual void __fastcall SetContentText(const System::UnicodeString Value) = 0 ;
	virtual __int64 __fastcall GetContentLength(void) = 0 ;
	virtual void __fastcall SetContentLength(const __int64 Value) = 0 ;
	virtual bool __fastcall GetCloseConnection(void) = 0 ;
	virtual void __fastcall SetCloseConnection(const bool Value) = 0 ;
	virtual System::UnicodeString __fastcall GetPragma(void) = 0 ;
	virtual void __fastcall SetPragma(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetContentType(void) = 0 ;
	virtual void __fastcall SetContentType(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall GetFreeContentStream(void) = 0 ;
	virtual void __fastcall SetFreeContentStream(const bool Value) = 0 ;
	
public:
	virtual void __fastcall SetHeaderAuthentication(const System::UnicodeString Value, const System::UnicodeString Realm) = 0 ;
	__property bool FreeContentStream = {read=GetFreeContentStream, write=SetFreeContentStream, nodefault};
	__property int ResponseNo = {read=GetResponseNo, write=SetResponseNo, nodefault};
	__property System::UnicodeString ResponseText = {read=GetResponseText, write=SetResponseText};
	__property System::UnicodeString ContentType = {read=GetContentType, write=SetContentType};
	__property Classes::TStream* ContentStream = {read=GetContentStream, write=SetContentStream};
	__property System::UnicodeString ContentText = {read=GetContentText, write=SetContentText};
	__property __int64 ContentLength = {read=GetContentLength, write=SetContentLength};
	__property bool CloseConnection = {read=GetCloseConnection, write=SetCloseConnection, nodefault};
	__property System::UnicodeString Pragma = {read=GetPragma, write=SetPragma};
public:
	/* TObject.Create */ inline __fastcall TDSHTTPResponse(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPResponse(void) { }
	
};


typedef void __fastcall (__closure *TDSHTTPServiceTraceEvent)(System::TObject* Sender, TDSHTTPContext* AContext, TDSHTTPRequest* ARequest, TDSHTTPResponse* AResponse);

class DELPHICLASS TDSHTTPCacheContextService;
class PASCALIMPLEMENTATION TDSHTTPCacheContextService : public Dsservice::TDSRequestFilterManager
{
	typedef Dsservice::TDSRequestFilterManager inherited;
	
private:
	Dsservice::TDSSession* FSession;
	bool FLocalConnection;
	bool __fastcall ParseRequst(System::UnicodeString Request, /* out */ int &CacheId, /* out */ int &CommandIndex, /* out */ int &ParameterIndex);
	void __fastcall InvalidRequest(TDSHTTPResponse* Response, System::UnicodeString Request);
	void __fastcall GetCacheContents(/* out */ Dbxjson::TJSONValue* &Value);
	void __fastcall GetCacheItemContents(const int CacheId, /* out */ Dbxjson::TJSONValue* &Value);
	void __fastcall GetCommandContents(const int CacheId, const int CommandIndex, /* out */ Dbxjson::TJSONValue* &Value);
	void __fastcall GetParameterValue(const TDSHTTPRequest* RequestInfo, const int CacheId, const int CommandIndex, const int ParameterIndex, /* out */ Dbxjson::TJSONValue* &Response, /* out */ Classes::TStream* &ResponseStream, /* out */ bool &IsError);
	int __fastcall GetOriginalParamIndex(const Dbxcommon::TDBXCommand* Command, const Dbxcommon::TDBXParameter* Parameter);
	bool __fastcall StreamsAsJSON(const TDSHTTPRequest* RequestInfo);
	System::DynamicArray<System::Byte> __fastcall ByteContent(Dbxjson::TJSONValue* JsonValue);
	
public:
	__fastcall virtual TDSHTTPCacheContextService(Dsservice::TDSSession* Session, bool LocalConnection);
	void __fastcall ProcessGETRequest(const TDSHTTPRequest* RequestInfo, TDSHTTPResponse* Response, System::UnicodeString Request);
	void __fastcall ProcessDELETERequest(const TDSHTTPRequest* RequestInfo, TDSHTTPResponse* Response, System::UnicodeString Request);
public:
	/* TDSRequestFilterManager.Destroy */ inline __fastcall virtual ~TDSHTTPCacheContextService(void) { }
	
};


class DELPHICLASS TDSExecutionResponse;
class PASCALIMPLEMENTATION TDSExecutionResponse : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Dbxcommon::TDBXCommand* FCommand;
	Dbxcommon::TDBXConnection* FDBXConnection;
	System::UnicodeString FErrorMessage;
	bool FLocalConnection;
	
public:
	__fastcall virtual TDSExecutionResponse(Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXConnection* DBXConnection, bool LocalConnection)/* overload */;
	__fastcall virtual TDSExecutionResponse(System::UnicodeString ErrorMessage)/* overload */;
	__fastcall virtual ~TDSExecutionResponse(void);
	__property Dbxcommon::TDBXCommand* Command = {read=FCommand};
	__property System::UnicodeString ErrorMessage = {read=FErrorMessage};
};


class DELPHICLASS TDSServiceResponseHandler;
class PASCALIMPLEMENTATION TDSServiceResponseHandler : public Dbxcommon::TRequestCommandHandler
{
	typedef Dbxcommon::TRequestCommandHandler inherited;
	
protected:
	TDSHTTPCommandType FCommandType;
	Generics_collections::TList__1<TDSExecutionResponse*>* FCommandList;
	bool FLocalConnection;
	bool FForceResultArray;
	virtual System::DynamicArray<System::Byte> __fastcall ByteContent(Dbxjson::TJSONValue* JsonValue);
	virtual int __fastcall GetResultCount(void);
	virtual int __fastcall GetOKStatus(void);
	
public:
	__fastcall virtual TDSServiceResponseHandler(TDSHTTPCommandType CommandType, bool LocalConnection)/* overload */;
	__fastcall virtual ~TDSServiceResponseHandler(void);
	virtual void __fastcall AddCommandError(System::UnicodeString ErrorMessage);
	virtual void __fastcall AddCommand(Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXConnection* DBXConnection);
	virtual void __fastcall ClearCommands(void);
	virtual void __fastcall GetResponse(/* out */ Dbxjson::TJSONValue* &Response, /* out */ Classes::TStream* &ResponseStream, /* out */ bool &ContainsErrors) = 0 ;
	virtual void __fastcall PopulateResponse(TDSHTTPResponse* AResponseInfo, Dbxplatform::TDSInvocationMetadata* InvokeMetadata) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
	__property bool ForceResultArray = {read=FForceResultArray, write=FForceResultArray, nodefault};
};


class DELPHICLASS TDSHTTPServer;
class PASCALIMPLEMENTATION TDSHTTPServer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FDSServerName;
	System::UnicodeString FDSHostname;
	int FDSPort;
	Dbxtransport::TTransportFilterCollection* FFilters;
	bool FCredentialsPassThrough;
	System::UnicodeString FDSAuthUser;
	System::UnicodeString FDSAuthPassword;
	int FSessionTimeout;
	Dstransport::TDSJSONProtocolHandlerFactory* FProtocolHandlerFactory;
	Dsauth::TDSCustomAuthenticationManager* FDSHTTPAuthenticationManager;
	
private:
	System::UnicodeString FRESTContext;
	System::UnicodeString FDSContext;
	System::UnicodeString FCacheContext;
	Dsservice::TDSTunnelService* FTunnelService;
	TDSHTTPServiceTraceEvent FTrace;
	Dsservice::TDSMethodMapEvent FMethodNameGETRESTEvent;
	Dsservice::TDSMethodMapEvent FMethodNamePUTRESTEvent;
	Dsservice::TDSMethodMapEvent FMethodNamePOSTRESTEvent;
	Dsservice::TDSMethodMapEvent FMethodNameDELETERESTEvent;
	System::UnicodeString __fastcall GetRestContext(void);
	System::UnicodeString __fastcall GetDsContext(void);
	System::UnicodeString __fastcall GetCacheContext(void);
	void __fastcall SetRestContext(const System::UnicodeString ctx);
	void __fastcall SetDsContext(const System::UnicodeString ctx);
	void __fastcall SetCacheContext(const System::UnicodeString ctx);
	bool __fastcall Consume(const System::UnicodeString Prefix, const System::UnicodeString Context, /* out */ System::UnicodeString &Unused);
	System::DynamicArray<System::Byte> __fastcall ByteContent(Classes::TStream* DataStream)/* overload */;
	System::DynamicArray<System::Byte> __fastcall ByteContent(Dbxjson::TJSONValue* JsonValue)/* overload */;
	__property System::UnicodeString RESTContext = {read=GetRestContext, write=SetRestContext};
	__property System::UnicodeString DSContext = {read=GetDsContext, write=SetDsContext};
	__property System::UnicodeString CacheContext = {read=GetCacheContext, write=SetCacheContext};
	void __fastcall SetDSHostname(System::UnicodeString AHostname);
	void __fastcall SetDSPort(int APort);
	void __fastcall SetDSServerName(System::UnicodeString AName);
	void __fastcall SetFilters(Dbxtransport::TTransportFilterCollection* AFilterCollection);
	void __fastcall SetAuthenticationManager(Dsauth::TDSCustomAuthenticationManager* AuthenticationManager);
	Dsservice::TDSTunnelService* __fastcall GetTunnelService(void);
	void __fastcall CloseAllTunnelSessions(void);
	System::UnicodeString __fastcall GetRequestSessionId(const TDSHTTPRequest* ARequestInfo, const bool CheckURLParams = true);
	bool __fastcall LoadSession(const System::UnicodeString SessionId, const System::UnicodeString UserName, /* out */ bool &IsNewSession);
	bool __fastcall IsClosingSession(System::UnicodeString Request);
	bool __fastcall IsOpeningClientChannel(System::UnicodeString Request);
	bool __fastcall IsClosingClientChannel(System::UnicodeString Request);
	bool __fastcall GetClientChannelInfo(System::UnicodeString Request, /* out */ System::UnicodeString &ChannelName, /* out */ System::UnicodeString &ClientChannelId, /* out */ System::UnicodeString &SecurityToken);
	void __fastcall UpdateSessionTunnelHook(System::UnicodeString Request, Dsservice::TDSSession* Session, TDSHTTPRequest* RequestInfo);
	void __fastcall CloseSessionTunnel(Dsservice::TDSSession* Session);
	void __fastcall CloseRESTSession(Dsservice::TDSSession* Session, TDSHTTPResponse* ResponseInfo);
	Dsservice::TDSRESTService* __fastcall CreateRESTService(const System::UnicodeString AuthUserName, const System::UnicodeString AuthPassword);
	
protected:
	void __fastcall DoDSRESTCommand(TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo, System::UnicodeString Request);
	void __fastcall DoDSCacheCommand(TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo, System::UnicodeString Request, bool LocalConnection);
	void __fastcall DoJSONCommand(TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo, System::UnicodeString Request);
	void __fastcall DoTunnelCommand(TDSHTTPContext* AContext, TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo);
	void __fastcall DoCommand(TDSHTTPContext* AContext, TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo);
	virtual void __fastcall DoCommandOtherContext(TDSHTTPContext* AContext, TDSHTTPRequest* ARequestInfo, TDSHTTPResponse* AResponseInfo, const System::UnicodeString ARequest);
	
protected:
	virtual System::UnicodeString __fastcall Decode(System::UnicodeString Data) = 0 ;
	
public:
	__fastcall TDSHTTPServer(void);
	__fastcall virtual ~TDSHTTPServer(void);
	void __fastcall CreateProtocolHandlerFactory(Dscommonserver::TDSServerTransport* ATransport);
	void __fastcall ClearProtocolHandlerFactory(void);
	__property Dsservice::TDSTunnelService* TunnelService = {read=GetTunnelService};
	__property System::UnicodeString DSHostname = {read=FDSHostname, write=SetDSHostname};
	__property int DSPort = {read=FDSPort, write=SetDSPort, nodefault};
	__property System::UnicodeString DSServerName = {read=FDSServerName, write=SetDSServerName};
	__property Dbxtransport::TTransportFilterCollection* Filters = {read=FFilters, write=SetFilters};
	__property Dsauth::TDSCustomAuthenticationManager* DSAuthenticationManager = {read=FDSHTTPAuthenticationManager, write=SetAuthenticationManager};
	__property bool CredentialsPassThrough = {read=FCredentialsPassThrough, write=FCredentialsPassThrough, nodefault};
	__property int SessionTimeout = {read=FSessionTimeout, write=FSessionTimeout, nodefault};
	__property System::UnicodeString DSAuthUser = {read=FDSAuthUser, write=FDSAuthUser};
	__property System::UnicodeString DSAuthPassword = {read=FDSAuthPassword, write=FDSAuthPassword};
};


class DELPHICLASS TDSHTTPServerTransport;
class PASCALIMPLEMENTATION TDSHTTPServerTransport : public Dscommonserver::TDSServerTransport
{
	typedef Dscommonserver::TDSServerTransport inherited;
	
private:
	TDSHTTPServer* FHttpServer;
	
protected:
	virtual TDSHTTPServer* __fastcall CreateHttpServer(void) = 0 ;
	void __fastcall SetRESTContext(const System::UnicodeString Ctx);
	void __fastcall SetDSContext(const System::UnicodeString Ctx);
	void __fastcall SetCacheContext(const System::UnicodeString Ctx);
	void __fastcall SetRESTMethodNameMapGET(Dsservice::TDSMethodMapEvent Event);
	void __fastcall SetRESTMethodNameMapPUT(Dsservice::TDSMethodMapEvent Event);
	void __fastcall SetRESTMethodNameMapPOST(Dsservice::TDSMethodMapEvent Event);
	void __fastcall SetRESTMethodNameMapDELETE(Dsservice::TDSMethodMapEvent Event);
	void __fastcall SetTraceEvent(TDSHTTPServiceTraceEvent Event);
	void __fastcall SetDSHostname(System::UnicodeString Host);
	void __fastcall SetDSPort(int Port);
	virtual void __fastcall SetServer(const Dscommonserver::TDSCustomServer* AServer);
	void __fastcall SetAuthenticationManager(const Dsauth::TDSCustomAuthenticationManager* AuthenticationManager);
	System::UnicodeString __fastcall GetRESTContext(void);
	System::UnicodeString __fastcall GetDSContext(void);
	System::UnicodeString __fastcall GetCacheContext(void);
	Dsservice::TDSMethodMapEvent __fastcall GetRESTMethodNameMapGET(void);
	Dsservice::TDSMethodMapEvent __fastcall GetRESTMethodNameMapPUT(void);
	Dsservice::TDSMethodMapEvent __fastcall GetRESTMethodNameMapPOST(void);
	Dsservice::TDSMethodMapEvent __fastcall GetRESTMethodNameMapDELETE(void);
	TDSHTTPServiceTraceEvent __fastcall GetTraceEvent(void);
	System::UnicodeString __fastcall GetDSHostname(void);
	int __fastcall GetDSPort(void);
	Dsauth::TDSCustomAuthenticationManager* __fastcall GetAuthenticationManager(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall SetFilters(const Dbxtransport::TTransportFilterCollection* Value);
	void __fastcall ServerCloseAllTunnelSessions(void);
	virtual void __fastcall SetCredentialsPassThrough(const bool AFlag);
	virtual void __fastcall SetDSAuthUser(const System::UnicodeString UserName);
	virtual void __fastcall SetDSAuthPassword(const System::UnicodeString UserPassword);
	bool __fastcall GetCredentialsPassThrough(void);
	virtual System::UnicodeString __fastcall GetDSAuthUser(void);
	virtual System::UnicodeString __fastcall GetDSAuthPassword(void);
	virtual int __fastcall GetSessionTimeout(void);
	virtual void __fastcall SetSessionTimeout(const int Milliseconds);
	
public:
	__fastcall virtual TDSHTTPServerTransport(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSHTTPServerTransport(void);
	__property TDSHTTPServer* HttpServer = {read=FHttpServer};
	
__published:
	__property System::UnicodeString DSContext = {read=GetDSContext, write=SetDSContext};
	__property System::UnicodeString RESTContext = {read=GetRESTContext, write=SetRESTContext};
	__property System::UnicodeString CacheContext = {read=GetCacheContext, write=SetCacheContext};
	__property Dsservice::TDSMethodMapEvent RESTMethodNameMapGET = {read=GetRESTMethodNameMapGET, write=SetRESTMethodNameMapGET};
	__property Dsservice::TDSMethodMapEvent RESTMethodNameMapPUT = {read=GetRESTMethodNameMapPUT, write=SetRESTMethodNameMapPUT};
	__property Dsservice::TDSMethodMapEvent RESTMethodNameMapPOST = {read=GetRESTMethodNameMapPOST, write=SetRESTMethodNameMapPOST};
	__property Dsservice::TDSMethodMapEvent RESTMethodNameMapDELETE = {read=GetRESTMethodNameMapDELETE, write=SetRESTMethodNameMapDELETE};
	__property TDSHTTPServiceTraceEvent Trace = {read=GetTraceEvent, write=SetTraceEvent};
	__property Server;
	__property System::UnicodeString DSHostname = {read=GetDSHostname, write=SetDSHostname};
	__property int DSPort = {read=GetDSPort, write=SetDSPort, nodefault};
	__property Filters;
	__property Dsauth::TDSCustomAuthenticationManager* AuthenticationManager = {read=GetAuthenticationManager, write=SetAuthenticationManager};
	__property bool CredentialsPassThrough = {read=GetCredentialsPassThrough, write=SetCredentialsPassThrough, nodefault};
	__property System::UnicodeString DSAuthUser = {read=GetDSAuthUser, write=SetDSAuthUser};
	__property System::UnicodeString DSAuthPassword = {read=GetDSAuthPassword, write=SetDSAuthPassword};
	__property int SessionTimeout = {read=GetSessionTimeout, write=SetSessionTimeout, nodefault};
};


typedef void __fastcall (__closure *TDSCallbackChannelEvent)(System::TObject* Sender);

class DELPHICLASS TDSClientCallbackChannelManager;
class PASCALIMPLEMENTATION TDSClientCallbackChannelManager : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
protected:
	typedef void __fastcall (__closure *TDSChannelInvokeEvent)(const System::UnicodeString Id, Dbxjson::TJSONValue* Data, /* out */ Dbxjson::TJSONValue* &Response);
	
	typedef void __fastcall (__closure *TDSChannelBroadcastEvent)(Dbxjson::TJSONValue* Data);
	
	__interface TParamSetup;
	typedef System::DelphiInterface<TParamSetup> _di_TParamSetup;
	__interface TParamSetup  : public System::IInterface 
	{
		
public:
		virtual void __fastcall Invoke(Dbxcommon::TDBXParameterList* Params) = 0 ;
	};
	
	__interface TDSWorker;
	typedef System::DelphiInterface<TDSWorker> _di_TDSWorker;
	__interface TDSWorker  : public System::IInterface 
	{
		
public:
		virtual void __fastcall Invoke(void) = 0 ;
	};
	
	class DELPHICLASS TDSChannelCallback;
	class PASCALIMPLEMENTATION TDSChannelCallback : public Dbxjson::TDBXCallback
	{
		typedef Dbxjson::TDBXCallback inherited;
		
private:
		TDSClientCallbackChannelManager::TDSChannelInvokeEvent FInvokeEvent;
		TDSClientCallbackChannelManager::TDSChannelInvokeEvent FInvokeObjectEvent;
		TDSClientCallbackChannelManager::TDSChannelBroadcastEvent FBroadcastEvent;
		TDSClientCallbackChannelManager::TDSChannelBroadcastEvent FBroadcastObjectEvent;
		
public:
		__fastcall TDSChannelCallback(const TDSClientCallbackChannelManager::TDSChannelInvokeEvent InvokeEvent, const TDSClientCallbackChannelManager::TDSChannelInvokeEvent InvokeObjectEvent, const TDSClientCallbackChannelManager::TDSChannelBroadcastEvent BroadcastEvent, const TDSClientCallbackChannelManager::TDSChannelBroadcastEvent BroadcastObjectEvent)/* overload */;
		__fastcall virtual ~TDSChannelCallback(void);
		virtual Dbxjson::TJSONValue* __fastcall Execute(const Dbxjson::TJSONValue* Arg)/* overload */;
/* Hoisted overloads: */
		
public:
		inline System::TObject* __fastcall  Execute(System::TObject* Arg){ return Dbxjson::TDBXCallback::Execute(Arg); }
		
	};
	
	
	class DELPHICLASS TDSChannelThread;
	class PASCALIMPLEMENTATION TDSChannelThread : public Classes::TThread
	{
		typedef Classes::TThread inherited;
		
private:
		TDSClientCallbackChannelManager::_di_TDSWorker FWorker;
		
protected:
		virtual void __fastcall Execute(void);
		
public:
		__fastcall TDSChannelThread(TDSClientCallbackChannelManager::_di_TDSWorker Worker);
		__fastcall virtual ~TDSChannelThread(void);
	};
	
	
	class DELPHICLASS TDSExecuteThread;
	class PASCALIMPLEMENTATION TDSExecuteThread : public Classes::TThread
	{
		typedef Classes::TThread inherited;
		
protected:
		Dbxjson::TDBXCallback* FCallback;
		Dbxjson::TJSONValue* FData;
		Dbxjson::TJSONValue* FResponse;
		virtual void __fastcall Execute(void);
		
public:
		__fastcall TDSExecuteThread(Dbxjson::TDBXCallback* Callback, Dbxjson::TJSONValue* Data);
		__fastcall virtual ~TDSExecuteThread(void);
		__property Dbxjson::TJSONValue* Response = {read=FResponse};
	};
	
	
	
private:
	System::UnicodeString FSecurityToken;
	System::UnicodeString FDSHostname;
	System::UnicodeString FDSPort;
	System::UnicodeString FDSPath;
	System::UnicodeString FCommunicationProtocol;
	System::UnicodeString FChannelName;
	System::UnicodeString FManagerId;
	System::UnicodeString FConnectionTimeout;
	System::UnicodeString FCommunicationTimeout;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjson::TDBXCallback*>* FLocalCallbackRepo;
	TDSChannelCallback* FChannelCallback;
	TDSCallbackChannelEvent FOnServerConnectionError;
	TDSCallbackChannelEvent FOnServerConnectionTerminate;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TConverterEvent*>* FRegConverters;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TReverterEvent*>* FRegReverters;
	
protected:
	Dbxdatasnap::TDBXDatasnapProperties* __fastcall DBXConnectionProperties(bool NoTimeout = false);
	void __fastcall ExecuteRemote(const System::UnicodeString AClassName, const System::UnicodeString AMethodName, _di_TParamSetup ParamSetup, _di_TParamSetup ParamCheckup, bool NoTimeout = false);
	void __fastcall Broadcast(Dbxjson::TJSONValue* Data);
	void __fastcall BroadcastObject(Dbxjson::TJSONValue* Data);
	HIDESBASE void __fastcall Invoke(const System::UnicodeString Id, Dbxjson::TJSONValue* Data, /* out */ Dbxjson::TJSONValue* &Response);
	void __fastcall InvokeObject(const System::UnicodeString Id, Dbxjson::TJSONValue* Data, /* out */ Dbxjson::TJSONValue* &Response);
	
public:
	__fastcall virtual TDSClientCallbackChannelManager(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSClientCallbackChannelManager(void);
	bool __fastcall RegisterCallback(const System::UnicodeString CallbackId, const Dbxjson::TDBXCallback* Callback)/* overload */;
	bool __fastcall RegisterCallback(const Dbxjson::TDBXNamedCallback* Callback)/* overload */;
	bool __fastcall UnregisterCallback(const System::UnicodeString CallbackId);
	bool __fastcall CloseClientChannel(void);
	bool __fastcall BroadcastToChannel(const Dbxjson::TJSONValue* Msg);
	bool __fastcall BroadcastObjectToChannel(const System::TObject* Msg);
	bool __fastcall NotifyCallback(const System::UnicodeString CallbackId, const System::UnicodeString ManagerId, const Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &Response);
	bool __fastcall NotifyObjectCallback(const System::UnicodeString CallbackId, const System::UnicodeString ManagerId, const System::TObject* Msg, /* out */ System::TObject* &Response);
	Dbxjsonreflect::TJSONMarshal* __fastcall GetJSONMarshaler(void);
	Dbxjsonreflect::TJSONUnMarshal* __fastcall GetJSONUnMarshaler(void);
	void __fastcall AddConverter(Dbxjsonreflect::TConverterEvent* event);
	void __fastcall AddReverter(Dbxjsonreflect::TReverterEvent* event);
	Dbxjson::TJSONValue* __fastcall MarshalData(System::TObject* Data);
	System::TObject* __fastcall UnMarshalJSON(Dbxjson::TJSONValue* Data);
	
__published:
	__property System::UnicodeString DSHostname = {read=FDSHostname, write=FDSHostname};
	__property System::UnicodeString DSPort = {read=FDSPort, write=FDSPort};
	__property System::UnicodeString DSPath = {read=FDSPath, write=FDSPath};
	__property System::UnicodeString CommunicationProtocol = {read=FCommunicationProtocol, write=FCommunicationProtocol};
	__property System::UnicodeString ChannelName = {read=FChannelName, write=FChannelName};
	__property System::UnicodeString ManagerId = {read=FManagerId, write=FManagerId};
	__property TDSCallbackChannelEvent OnServerConnectionError = {read=FOnServerConnectionError, write=FOnServerConnectionError};
	__property TDSCallbackChannelEvent OnServerConnectionTerminate = {read=FOnServerConnectionTerminate, write=FOnServerConnectionTerminate};
	__property System::UnicodeString ConnectionTimeout = {read=FConnectionTimeout, write=FConnectionTimeout};
	__property System::UnicodeString CommunicationTimeout = {read=FCommunicationTimeout, write=FCommunicationTimeout};
};


class DELPHICLASS TDSJsonResponseHandler;
class PASCALIMPLEMENTATION TDSJsonResponseHandler : public TDSServiceResponseHandler
{
	typedef TDSServiceResponseHandler inherited;
	
protected:
	Dsservice::TDSService* FDSService;
	bool FServiceInstanceOwner;
	bool FAllowStream;
	void __fastcall GetCommandResponse(Dbxcommon::TDBXCommand* Command, /* out */ Dbxjson::TJSONValue* &Response, /* out */ Classes::TStream* &ResponseStream);
	virtual bool __fastcall HandleParameter(const Dbxcommon::TDBXCommand* Command, const Dbxcommon::TDBXParameter* Parameter, /* out */ Dbxjson::TJSONValue* &Response, Classes::TStream* &ResponseStream) = 0 ;
	virtual void __fastcall PopulateContent(TDSHTTPResponse* ResponseInfo, Dbxjson::TJSONValue* Response, Classes::TStream* ResponseStream) = 0 ;
	virtual void __fastcall ProcessResultObject(Dbxjson::TJSONObject* &ResultObj, Dbxcommon::TDBXCommand* Command);
	
public:
	__fastcall virtual TDSJsonResponseHandler(TDSHTTPCommandType CommandType, Dsservice::TDSService* DSService, bool ServiceInstanceOwner)/* overload */;
	__fastcall virtual ~TDSJsonResponseHandler(void);
	virtual void __fastcall GetResponse(/* out */ Dbxjson::TJSONValue* &Response, /* out */ Classes::TStream* &ResponseStream, /* out */ bool &ContainsErrors);
	virtual void __fastcall PopulateResponse(TDSHTTPResponse* ResponseInfo, Dbxplatform::TDSInvocationMetadata* InvokeMetadata);
};


class DELPHICLASS TDSDefaultResponseHandler;
class PASCALIMPLEMENTATION TDSDefaultResponseHandler : public TDSJsonResponseHandler
{
	typedef TDSJsonResponseHandler inherited;
	
private:
	bool FStoreHandler;
	
protected:
	virtual bool __fastcall HandleParameter(const Dbxcommon::TDBXCommand* Command, const Dbxcommon::TDBXParameter* Parameter, /* out */ Dbxjson::TJSONValue* &Response, Classes::TStream* &ResponseStream);
	virtual void __fastcall PopulateContent(TDSHTTPResponse* ResponseInfo, Dbxjson::TJSONValue* Response, Classes::TStream* ResponseStream);
	
public:
	__fastcall TDSDefaultResponseHandler(bool AllowBinaryStream, Dsservice::TDSService* DSService, TDSHTTPCommandType CommandType, bool ServiceInstanceOwner);
	__fastcall virtual ~TDSDefaultResponseHandler(void);
	virtual void __fastcall Close(void);
};


class DELPHICLASS TDSCommandComplexParams;
class PASCALIMPLEMENTATION TDSCommandComplexParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dbxcommon::TDBXCommand* FCommand;
	Generics_collections::TList__1<Dbxcommon::TDBXParameter*>* FParameters;
	
public:
	__fastcall virtual TDSCommandComplexParams(Dbxcommon::TDBXCommand* Command);
	__fastcall virtual ~TDSCommandComplexParams(void);
	int __fastcall GetParameterCount(void);
	Dbxcommon::TDBXParameter* __fastcall GetParameter(int Index);
	int __fastcall AddParameter(Dbxcommon::TDBXParameter* Parameter);
	__property Dbxcommon::TDBXCommand* Command = {read=FCommand};
};


class DELPHICLASS TDSCacheResultCommandHandler;
class PASCALIMPLEMENTATION TDSCacheResultCommandHandler : public Dbxcommon::TResultCommandHandler
{
	typedef Dbxcommon::TResultCommandHandler inherited;
	
protected:
	Dbxcommon::TRequestCommandHandler* FCommandWrapper;
	Generics_collections::TList__1<TDSCommandComplexParams*>* FCacheCommands;
	
public:
	__fastcall virtual TDSCacheResultCommandHandler(Dbxcommon::TRequestCommandHandler* CommandWrapper);
	__fastcall virtual ~TDSCacheResultCommandHandler(void);
	virtual int __fastcall GetCommandCount(void);
	virtual int __fastcall GetParameterCount(int Index);
	virtual Dbxcommon::TDBXCommand* __fastcall GetCommand(int Index);
	virtual Dbxcommon::TDBXParameter* __fastcall GetCommandParameter(int CommandIndex, int ParameterIndex)/* overload */;
	virtual Dbxcommon::TDBXParameter* __fastcall GetCommandParameter(Dbxcommon::TDBXCommand* Command, int Index)/* overload */;
	__property Generics_collections::TList__1<TDSCommandComplexParams*>* CacheCommands = {read=FCacheCommands, write=FCacheCommands};
};


class DELPHICLASS TDSNullResponseHandler;
class PASCALIMPLEMENTATION TDSNullResponseHandler : public TDSJsonResponseHandler
{
	typedef TDSJsonResponseHandler inherited;
	
protected:
	virtual bool __fastcall HandleParameter(const Dbxcommon::TDBXCommand* Command, const Dbxcommon::TDBXParameter* Parameter, /* out */ Dbxjson::TJSONValue* &Response, Classes::TStream* &ResponseStream);
	virtual void __fastcall PopulateContent(TDSHTTPResponse* ResponseInfo, Dbxjson::TJSONValue* Response, Classes::TStream* ResponseStream);
	
public:
	__fastcall TDSNullResponseHandler(Dsservice::TDSService* DSService, TDSHTTPCommandType CommandType, bool ServiceInstanceOwner);
	virtual void __fastcall Close(void);
public:
	/* TDSJsonResponseHandler.Destroy */ inline __fastcall virtual ~TDSNullResponseHandler(void) { }
	
};


class DELPHICLASS TDSCacheResponseHandler;
class PASCALIMPLEMENTATION TDSCacheResponseHandler : public TDSJsonResponseHandler
{
	typedef TDSJsonResponseHandler inherited;
	
protected:
	TDSCacheResultCommandHandler* FResultHandler;
	int FCacheId;
	TDSCacheResultCommandHandler* __fastcall GetCacheObject(void);
	virtual bool __fastcall HandleParameter(const Dbxcommon::TDBXCommand* Command, const Dbxcommon::TDBXParameter* Parameter, /* out */ Dbxjson::TJSONValue* &Response, Classes::TStream* &ResponseStream);
	virtual void __fastcall PopulateContent(TDSHTTPResponse* ResponseInfo, Dbxjson::TJSONValue* Response, Classes::TStream* ResponseStream);
	TDSCommandComplexParams* __fastcall GetComplexParams(Dbxcommon::TDBXCommand* Command, /* out */ int &Index, bool AddIfNotFound = true);
	virtual void __fastcall ProcessResultObject(Dbxjson::TJSONObject* &ResultObj, Dbxcommon::TDBXCommand* Command);
	
public:
	__fastcall TDSCacheResponseHandler(Dsservice::TDSService* DSService, TDSHTTPCommandType CommandType, bool ServiceInstanceOwner);
	__fastcall virtual ~TDSCacheResponseHandler(void);
	virtual void __fastcall Close(void);
};


class DELPHICLASS TDSResponseHandlerFactory;
class PASCALIMPLEMENTATION TDSResponseHandlerFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod TDSServiceResponseHandler* __fastcall CreateResponseHandler(Dsservice::TDSService* DSService, TDSHTTPRequest* RequestInfo, TDSHTTPCommandType CommandType = (TDSHTTPCommandType)(0x0));
public:
	/* TObject.Create */ inline __fastcall TDSResponseHandlerFactory(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSResponseHandlerFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dshttpcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dshttpcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DshttpcommonHPP
