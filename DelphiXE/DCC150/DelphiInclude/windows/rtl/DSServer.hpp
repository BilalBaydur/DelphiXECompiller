// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServer.pas' rev: 22.00

#ifndef DsserverHPP
#define DsserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit
#include <DSReflect.hpp>	// Pascal unit
#include <DataBkr.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXDBReaders.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit
#include <Provider.hpp>	// Pascal unit
#include <DSUtil.hpp>	// Pascal unit
#include <DSNames.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit
#include <DSPlatform.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit
#include <SyncObjs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsserver
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSServerClass;
typedef void __fastcall (__closure *TDSGetClassEvent)(TDSServerClass* DSServerClass, Classes::TPersistentClass &PersistentClass);

typedef void __fastcall (__closure *TDSCreateInstanceEvent)(Dscommonserver::TDSCreateInstanceEventObject* DSCreateInstanceEventObject);

typedef void __fastcall (__closure *TDSDestroyInstanceEvent)(Dscommonserver::TDSDestroyInstanceEventObject* DSDestroyInstanceEventObject);

typedef void __fastcall (__closure *TDSPrepareEvent)(Dscommonserver::TDSPrepareEventObject* DSPrepareEventObject);

typedef void __fastcall (__closure *TDSConnectEvent)(Dscommonserver::TDSConnectEventObject* DSConnectEventObject);

typedef void __fastcall (__closure *TDSErrorEvent)(Dscommonserver::TDSErrorEventObject* DSErrorEventObject);

typedef Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TConverterEvent*>  TConverterEventDictionary;
typedef void __fastcall (__closure *TDSSetupConverterEvent)(TConverterEventDictionary* RegisteredConverters);

typedef Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TReverterEvent*>  TReverterEventDictionary;
typedef void __fastcall (__closure *TDSSetupReverterEvent)(TReverterEventDictionary* RegisteredReverters);

class DELPHICLASS TDSCallbackTunnelBufferItem;
class PASCALIMPLEMENTATION TDSCallbackTunnelBufferItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCallbackId;
	Dbxjson::TJSONValue* FMsg;
	bool FIsBroadcast;
	bool FInstanceOwner;
	Dbxjson::TJSONValue* FResponse;
	int FArgType;
	bool FError;
	
public:
	__fastcall TDSCallbackTunnelBufferItem(const System::UnicodeString CallbackId, const bool IsBroadcast, const Dbxjson::TJSONValue* Msg, const int MsgType, const bool InstanceOwner);
	__fastcall virtual ~TDSCallbackTunnelBufferItem(void);
	__property System::UnicodeString CallbackId = {read=FCallbackId};
	__property bool IsBroadcast = {read=FIsBroadcast, nodefault};
	__property Dbxjson::TJSONValue* Msg = {read=FMsg};
	__property int ArgType = {read=FArgType, nodefault};
	__property bool InstanceOwner = {read=FInstanceOwner, write=FInstanceOwner, nodefault};
	__property Dbxjson::TJSONValue* Response = {read=FResponse, write=FResponse};
	__property bool IsError = {read=FError, write=FError, nodefault};
};


class DELPHICLASS TDSCallbackTunnel;
class PASCALIMPLEMENTATION TDSCallbackTunnel : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Generics_collections::TList__1<System::UnicodeString>* FIdList;
	System::UnicodeString FClientId;
	Generics_collections::TThreadedQueue__1<TDSCallbackTunnelBufferItem*>* FQueue;
	TDSCallbackTunnelBufferItem* FThinPop;
	System::UnicodeString FSecurityToken;
	
protected:
	void __fastcall Lock(void);
	void __fastcall UnLock(void);
	
public:
	__fastcall virtual TDSCallbackTunnel(const System::UnicodeString ClientId, const System::UnicodeString SecurityToken, const int QueueSize)/* overload */;
	__fastcall virtual ~TDSCallbackTunnel(void);
	bool __fastcall BroadcastMessage(const Dbxjson::TJSONValue* Msg, const unsigned Timeout = (unsigned)(0x1388), const int ArgType = 0x1)/* overload */;
	bool __fastcall BroadcastMessage(const System::UnicodeString CallbackId, const Dbxjson::TJSONValue* Msg, const unsigned Timeout = (unsigned)(0x1388), const int ArgType = 0x1)/* overload */;
	bool __fastcall SendMessage(const System::UnicodeString Id, const Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &RespMsg, const unsigned Timeout = (unsigned)(0x0), const int ArgType = 0x1);
	bool __fastcall HasId(const System::UnicodeString Id);
	void __fastcall AddAllIds(Generics_collections::TList__1<System::UnicodeString>* container);
	bool __fastcall AddId(const System::UnicodeString Id);
	bool __fastcall RemoveId(const System::UnicodeString Id);
	__property System::UnicodeString ClientId = {read=FClientId};
	__property Generics_collections::TThreadedQueue__1<TDSCallbackTunnelBufferItem*>* Queue = {read=FQueue};
	__property TDSCallbackTunnelBufferItem* ThinPop = {read=FThinPop, write=FThinPop};
	__property System::UnicodeString SecurityToken = {read=FSecurityToken, write=FSecurityToken};
};


class DELPHICLASS TDSServer;
class PASCALIMPLEMENTATION TDSServer : public Dscommonserver::TDSCustomServer
{
	typedef Dscommonserver::TDSCustomServer inherited;
	
private:
	bool FAutoStart;
	TDSConnectEvent FConnectEvent;
	TDSPrepareEvent FPrepareEvent;
	TDSConnectEvent FDisconnectEvent;
	TDSErrorEvent FErrorEvent;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Generics_collections::TObjectList__1<TDSCallbackTunnel*>*>* FCallbackRepository;
	TDSSetupConverterEvent FSetupConverterEvent;
	TDSSetupReverterEvent FSetupReverterEvent;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TConverterEvent*>* FRegConverters;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Dbxjsonreflect::TReverterEvent*>* FRegReverters;
	int FChannelQueueSize;
	static Dbxplatform::TDBXArrayList* FServerList;
	static void __fastcall AddServer(Dscommonserver::TDSCustomServer* Server);
	static void __fastcall RemoveServer(Dscommonserver::TDSCustomServer* Server);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Connecting(const Dscommonserver::TDSConnectEventObject* ConnectEventObject);
	virtual void __fastcall Preparing(const Dscommonserver::TDSPrepareEventObject* PrepareEventObject);
	virtual void __fastcall Disconnecting(const Dscommonserver::TDSConnectEventObject* ConnectEventObject);
	virtual void __fastcall Error(const Dscommonserver::TDSErrorEventObject* ErrorEventObject);
	virtual Dbxcommon::TDBXTraceEvent __fastcall GetTraceInfoEvent(void);
	virtual void __fastcall SetTraceInfoEvent(const Dbxcommon::TDBXTraceEvent TraceInfoEvent);
	
public:
	__fastcall virtual TDSServer(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSServer(void);
	static Dscommonserver::TDSCustomServer* __fastcall FindServer(System::UnicodeString Name);
	virtual Dbxcommon::TDBXConnection* __fastcall GetServerConnection(const Dbxcommon::TDBXProperties* Properties)/* overload */;
	virtual void __fastcall Start(void);
	virtual void __fastcall Stop(void);
	TDSCallbackTunnel* __fastcall CreateChannelTunnel(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken);
	bool __fastcall RegisterChannelCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken);
	TDSCallbackTunnel* __fastcall GetCallbackTunnel(const System::UnicodeString ChannelName, const System::UnicodeString ClientManagerId);
	TDSCallbackTunnel* __fastcall CallbackTunnelOf(const System::UnicodeString ChannelName, const System::UnicodeString ClientManagerId);
	bool __fastcall HasChannelCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId)/* overload */;
	bool __fastcall HasChannelCallback(const System::UnicodeString ChannelName)/* overload */;
	void __fastcall UnregisterChannelCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString SecurityToken, bool Owner = false)/* overload */;
	void __fastcall UnregisterChannelCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken)/* overload */;
	void __fastcall UnregisterChannelCallback(const System::UnicodeString ChannelName, TDSCallbackTunnel* Tunnel, bool DoBroadcast = true)/* overload */;
	bool __fastcall BroadcastMessage(const System::UnicodeString ChannelName, const Dbxjson::TJSONValue* Msg, const int ArgType = 0x1)/* overload */;
	bool __fastcall BroadcastObject(const System::UnicodeString ChannelName, const System::TObject* Msg)/* overload */;
	bool __fastcall BroadcastMessage(const System::UnicodeString ChannelName, const System::UnicodeString CallbackId, const Dbxjson::TJSONValue* Msg, const int ArgType = 0x1)/* overload */;
	bool __fastcall BroadcastObject(const System::UnicodeString ChannelName, const System::UnicodeString CallbackId, const System::TObject* Msg)/* overload */;
	bool __fastcall NotifyCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &Response, unsigned Timeout = (unsigned)(0xffffffff), const int ArgType = 0x1)/* overload */;
	bool __fastcall NotifyObject(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const System::TObject* Msg, /* out */ System::TObject* &Response, unsigned Timeout = (unsigned)(0xffffffff))/* overload */;
	Generics_collections::TList__1<System::UnicodeString>* __fastcall GetAllChannelCallbackId(const System::UnicodeString ChannelName);
	Generics_collections::TList__1<System::UnicodeString>* __fastcall GetAllChannelClientId(const System::UnicodeString ChannelName);
	Dbxjsonreflect::TJSONMarshal* __fastcall GetJSONMarshaler(void);
	Dbxjsonreflect::TJSONUnMarshal* __fastcall GetJSONUnMarshaler(void);
	Dbxjson::TJSONValue* __fastcall MarshalData(System::TObject* Data);
	System::TObject* __fastcall UnMarshalJSON(Dbxjson::TJSONValue* Data);
	
__published:
	__property TDSPrepareEvent OnPrepare = {read=FPrepareEvent, write=FPrepareEvent};
	__property TDSConnectEvent OnConnect = {read=FConnectEvent, write=FConnectEvent};
	__property TDSConnectEvent OnDisconnect = {read=FDisconnectEvent, write=FDisconnectEvent};
	__property TDSErrorEvent OnError = {read=FErrorEvent, write=FErrorEvent};
	__property bool AutoStart = {read=FAutoStart, write=FAutoStart, nodefault};
	__property HideDSAdmin;
	__property Dbxcommon::TDBXTraceEvent OnTrace = {read=GetTraceInfoEvent, write=SetTraceInfoEvent};
	__property int ChannelQueueSize = {read=FChannelQueueSize, write=FChannelQueueSize, default=100};
};


class DELPHICLASS TDSServerDriver;
class PASCALIMPLEMENTATION TDSServerDriver : public Dbxcommon::TDBXDriver
{
	typedef Dbxcommon::TDBXDriver inherited;
	
private:
	Dbxcommon::TDBXCommand* __fastcall CreateServerCommand(Dbxcommon::TDBXContext* DbxContext, Dbxcommon::TDBXConnection* Connection, Dbxcommon::TDBXCommand* MorphicCommand);
	
protected:
	virtual void __fastcall Close(void);
	virtual Dbxcommon::TDBXConnection* __fastcall CreateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	
public:
	__fastcall virtual TDSServerDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef)/* overload */;
	__fastcall virtual ~TDSServerDriver(void);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
};


class PASCALIMPLEMENTATION TDSServerClass : public Dscommonserver::TDSCustomServerClass
{
	typedef Dscommonserver::TDSCustomServerClass inherited;
	
private:
	TDSGetClassEvent FGetClassEvent;
	TDSCreateInstanceEvent FCreateInstanceEvent;
	TDSDestroyInstanceEvent FDestroyInstanceEvent;
	TDSPrepareEvent FPrepareEvent;
	
protected:
	virtual void __fastcall SetServer(const Dscommonserver::TDSCustomServer* AServer);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall CreateInstance(const Dscommonserver::TDSCreateInstanceEventObject* CreateInstanceEventObject);
	virtual void __fastcall DestroyInstance(const Dscommonserver::TDSDestroyInstanceEventObject* DestroyInstanceEventObject);
	virtual void __fastcall Preparing(const Dscommonserver::TDSPrepareEventObject* PrepareEventObject);
	virtual Dsreflect::TDSClass* __fastcall GetDSClass(void);
	
public:
	__fastcall virtual TDSServerClass(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSServerClass(void);
	virtual void __fastcall Start(void);
	virtual void __fastcall Stop(void);
	
__published:
	__property TDSGetClassEvent OnGetClass = {read=FGetClassEvent, write=FGetClassEvent};
	__property TDSCreateInstanceEvent OnCreateInstance = {read=FCreateInstanceEvent, write=FCreateInstanceEvent};
	__property TDSDestroyInstanceEvent OnDestroyInstance = {read=FDestroyInstanceEvent, write=FDestroyInstanceEvent};
	__property TDSPrepareEvent OnPrepare = {read=FPrepareEvent, write=FPrepareEvent};
	__property Server;
	__property LifeCycle;
};


class DELPHICLASS TDSProviderDataModuleAdapter;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSProviderDataModuleAdapter : public Dsreflect::TDSAdapterClass
{
	typedef Dsreflect::TDSAdapterClass inherited;
	
private:
	Databkr::TProviderDataModule* FProviderDataModule;
	
public:
	__fastcall virtual TDSProviderDataModuleAdapter(System::TObject* AdapteeInstance);
	__fastcall virtual ~TDSProviderDataModuleAdapter(void);
	System::OleVariant __fastcall AS_ApplyUpdates(const System::WideString ProviderName, const System::OleVariant &DeltaStream, int MaxErrors, /* out */ int &ErrorCount, Dbxcommon::TDBXStreamValue* OwnerDataStream);
	System::OleVariant __fastcall AS_GetRecords(const System::WideString ProviderName, int Count, /* out */ int &RecsOut, int Options, const System::WideString CommandText, Dbxcommon::TDBXStreamValue* ParamReader, Dbxcommon::TDBXStreamValue* OwnerDataStream);
	System::OleVariant __fastcall AS_DataRequest(const System::WideString ProviderName, const System::OleVariant &DataStream);
	System::UnicodeString __fastcall AS_GetProviderNames(void);
	System::OleVariant __fastcall AS_GetParams(const System::WideString ProviderName, Dbxcommon::TDBXStreamValue* OwnerDataStream);
	System::OleVariant __fastcall AS_RowRequest(const System::WideString ProviderName, const System::OleVariant &RowStream, int RequestType, Dbxcommon::TDBXStreamValue* OwnerDataStream);
	void __fastcall AS_Execute(const System::WideString ProviderName, const System::WideString CommandText, Dbxcommon::TDBXStreamValue* ParamReader, Dbxcommon::TDBXStreamValue* OwnerDataStream);
};


class DELPHICLASS TDSServerModuleBase;
class PASCALIMPLEMENTATION TDSServerModuleBase : public Databkr::TProviderDataModule
{
	typedef Databkr::TProviderDataModule inherited;
	
public:
	virtual void __fastcall BeforeDestruction(void);
	__fastcall virtual ~TDSServerModuleBase(void);
public:
	/* TProviderDataModule.Create */ inline __fastcall virtual TDSServerModuleBase(Classes::TComponent* AOwner) : Databkr::TProviderDataModule(AOwner) { }
	
public:
	/* TDataModule.CreateNew */ inline __fastcall virtual TDSServerModuleBase(Classes::TComponent* AOwner, int Dummy) : Databkr::TProviderDataModule(AOwner, Dummy) { }
	
};


class DELPHICLASS TDSServerModule;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSServerModule : public TDSServerModuleBase
{
	typedef TDSServerModuleBase inherited;
	
public:
	/* TDSServerModuleBase.Destroy */ inline __fastcall virtual ~TDSServerModule(void) { }
	
public:
	/* TProviderDataModule.Create */ inline __fastcall virtual TDSServerModule(Classes::TComponent* AOwner) : TDSServerModuleBase(AOwner) { }
	
public:
	/* TDataModule.CreateNew */ inline __fastcall virtual TDSServerModule(Classes::TComponent* AOwner, int Dummy) : TDSServerModuleBase(AOwner, Dummy) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CALLBACK_TIMEOUT = 0x1388;
extern PACKAGE void __fastcall InternalRemoveCallbackTunnel(TDSServer* AServer, const System::UnicodeString ChannelName, TDSCallbackTunnel* ATunnel);

}	/* namespace Dsserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsserverHPP
