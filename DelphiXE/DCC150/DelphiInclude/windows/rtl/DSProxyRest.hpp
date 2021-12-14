// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyRest.pas' rev: 22.00

#ifndef DsproxyrestHPP
#define DsproxyrestHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DSClientRest.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsproxyrest
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSRestClient;
class PASCALIMPLEMENTATION TDSRestClient : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FInstanceOwner;
	Dsclientrest::TDSCustomRestConnection* FConnection;
	
public:
	__fastcall TDSRestClient(Dsclientrest::TDSCustomRestConnection* AConnection)/* overload */;
	__fastcall TDSRestClient(Dsclientrest::TDSCustomRestConnection* AConnection, bool AInstanceOwner)/* overload */;
	__property bool InstanceOwner = {read=FInstanceOwner, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSRestClient(void) { }
	
};


class DELPHICLASS TDSRestProxyMetaDataLoader;
class PASCALIMPLEMENTATION TDSRestProxyMetaDataLoader : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Dsclientrest::TDSCustomRestConnection* FConnection;
	void __fastcall Load(Dscommonproxy::TDSProxyMetadata* MetaData);
	void __fastcall LoadFromConnection(Dsclientrest::TDSCustomRestConnection* AConnection, Dscommonproxy::TDSProxyMetadata* AMetaData);
	
public:
	__fastcall TDSRestProxyMetaDataLoader(Dsclientrest::TDSCustomRestConnection* AConnection);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSRestProxyMetaDataLoader(void) { }
	
private:
	void *__IDSProxyMetaDataLoader;	/* Dscommonproxy::IDSProxyMetaDataLoader */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Dscommonproxy::_di_IDSProxyMetaDataLoader()
	{
		Dscommonproxy::_di_IDSProxyMetaDataLoader intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dscommonproxy::IDSProxyMetaDataLoader*(void) { return (Dscommonproxy::IDSProxyMetaDataLoader*)&__IDSProxyMetaDataLoader; }
	#endif
	
};


class DELPHICLASS TDSAdminRestClient;
class PASCALIMPLEMENTATION TDSAdminRestClient : public TDSRestClient
{
	typedef TDSRestClient inherited;
	
protected:
	Dsclientrest::TDSRestCommand* FDConnection;
	Dbxjsonreflect::TJSONMarshal* FMarshal;
	Dbxjsonreflect::TJSONUnMarshal* FUnMarshal;
	
private:
	Dsclientrest::TDSRestCommand* FGetPlatformNameCommand;
	Dsclientrest::TDSRestCommand* FClearResourcesCommand;
	Dsclientrest::TDSRestCommand* FFindPackagesCommand;
	Dsclientrest::TDSRestCommand* FFindClassesCommand;
	Dsclientrest::TDSRestCommand* FFindMethodsCommand;
	Dsclientrest::TDSRestCommand* FListClassesCommand;
	Dsclientrest::TDSRestCommand* FDescribeClassCommand;
	Dsclientrest::TDSRestCommand* FListMethodsCommand;
	Dsclientrest::TDSRestCommand* FDescribeMethodCommand;
	Dsclientrest::TDSRestCommand* FGetServerMethodsCommand;
	Dsclientrest::TDSRestCommand* FGetServerMethodParametersCommand;
	Dsclientrest::TDSRestCommand* FGetDatabaseConnectionPropertiesCommand;
	Dsclientrest::TDSRestCommand* FConsumeClientChannelCommand;
	Dsclientrest::TDSRestCommand* FConsumeClientChannelTimeoutCommand;
	Dsclientrest::TDSRestCommand* FCloseClientChannelCommand;
	Dsclientrest::TDSRestCommand* FRegisterClientCallbackServerCommand;
	Dsclientrest::TDSRestCommand* FUnregisterClientCallbackCommand;
	Dsclientrest::TDSRestCommand* FBroadcastToChannelCommand;
	Dsclientrest::TDSRestCommand* FBroadcastObjectToChannelCommand;
	Dsclientrest::TDSRestCommand* FNotifyCallbackCommand;
	Dsclientrest::TDSRestCommand* FNotifyObjectCommand;
	Dsclientrest::TDSRestCommand* FClearSessionCommand;
	
public:
	__fastcall TDSAdminRestClient(Dsclientrest::TDSCustomRestConnection* AConnection)/* overload */;
	__fastcall TDSAdminRestClient(Dsclientrest::TDSCustomRestConnection* AConnection, bool AInstanceOwner)/* overload */;
	__fastcall virtual ~TDSAdminRestClient(void);
	System::UnicodeString __fastcall GetPlatformName(void);
	bool __fastcall ClearResources(void);
	Dbxcommon::TDBXReader* __fastcall FindPackages(void);
	Dbxcommon::TDBXReader* __fastcall FindClasses(System::UnicodeString PackageName, System::UnicodeString ClassPattern);
	Dbxcommon::TDBXReader* __fastcall FindMethods(System::UnicodeString PackageName, System::UnicodeString ClassPattern, System::UnicodeString MethodPattern);
	Dbxjson::TJSONArray* __fastcall ListClasses(void);
	Dbxjson::TJSONObject* __fastcall DescribeClass(System::UnicodeString ClassName);
	Dbxjson::TJSONArray* __fastcall ListMethods(System::UnicodeString ClassName);
	Dbxjson::TJSONObject* __fastcall DescribeMethod(System::UnicodeString ServerMethodName);
	Dbxcommon::TDBXReader* __fastcall GetServerMethods(void);
	Dbxcommon::TDBXReader* __fastcall GetServerMethodParameters(void);
	Dbxcommon::TDBXReader* __fastcall GetDatabaseConnectionProperties(void);
	Dbxjson::TJSONValue* __fastcall ConsumeClientChannel(System::UnicodeString ChannelName, System::UnicodeString ClientManagerId, System::UnicodeString CallbackId, Dbxjson::TJSONValue* ResponseData);
	Dbxjson::TJSONValue* __fastcall ConsumeClientChannelTimeout(System::UnicodeString ChannelName, System::UnicodeString ClientManagerId, System::UnicodeString CallbackId, int Timeout, Dbxjson::TJSONValue* ResponseData);
	bool __fastcall CloseClientChannel(System::UnicodeString ChannelName, System::UnicodeString ChannelId);
	bool __fastcall RegisterClientCallbackServer(System::UnicodeString ChannelName, System::UnicodeString ChannelId, System::UnicodeString CallbackId);
	bool __fastcall UnregisterClientCallback(System::UnicodeString ChannelName, System::UnicodeString ChannelId, System::UnicodeString CallbackId);
	bool __fastcall BroadcastToChannel(System::UnicodeString ChannelName, Dbxjson::TJSONValue* Msg);
	bool __fastcall BroadcastObjectToChannel(System::UnicodeString ChannelName, System::TObject* Msg);
	bool __fastcall NotifyCallback(System::UnicodeString ChannelName, System::UnicodeString ClientId, System::UnicodeString CallbackId, Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &Response);
	bool __fastcall NotifyObject(System::UnicodeString ChannelName, System::UnicodeString ClientId, System::UnicodeString CallbackId, System::TObject* Msg, /* out */ System::TObject* &Response);
	void __fastcall ClearSession(void);
};


typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__4;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__5;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__6;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 3> Dsproxyrest__7;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 4> Dsproxyrest__8;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__9;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 2> Dsproxyrest__01;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 2> Dsproxyrest__11;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 2> Dsproxyrest__21;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__31;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__41;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__51;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 1> Dsproxyrest__61;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 5> Dsproxyrest__71;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 6> Dsproxyrest__81;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 3> Dsproxyrest__91;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 4> Dsproxyrest__02;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 4> Dsproxyrest__12;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 3> Dsproxyrest__22;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 3> Dsproxyrest__32;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 6> Dsproxyrest__42;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 6> Dsproxyrest__52;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 6> Dsproxyrest__62;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 7> Dsproxyrest__72;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 4> Dsproxyrest__82;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 5> Dsproxyrest__92;

typedef System::StaticArray<Dsclientrest::TDSRestParameterMetaData, 5> Dsproxyrest__03;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::UnicodeString GDSProxyRestSecurityToken;
extern PACKAGE Dsproxyrest__4 DSAdmin_GetPlatformName;
extern PACKAGE Dsproxyrest__5 DSAdmin_ClearResources;
extern PACKAGE Dsproxyrest__6 DSAdmin_FindPackages;
extern PACKAGE Dsproxyrest__7 DSAdmin_FindClasses;
extern PACKAGE Dsproxyrest__8 DSAdmin_FindMethods;
extern PACKAGE Dsproxyrest__9 DSAdmin_ListClasses;
extern PACKAGE Dsproxyrest__01 DSAdmin_DescribeClass;
extern PACKAGE Dsproxyrest__11 DSAdmin_ListMethods;
extern PACKAGE Dsproxyrest__21 DSAdmin_DescribeMethod;
extern PACKAGE Dsproxyrest__31 DSAdmin_GetServerMethods;
extern PACKAGE Dsproxyrest__41 DSAdmin_GetServerMethodParameters;
extern PACKAGE Dsproxyrest__51 DSAdmin_GetDatabaseConnectionProperties;
extern PACKAGE Dsproxyrest__61 DSAdmin_GetDSServerName;
extern PACKAGE Dsproxyrest__71 DSAdmin_ConsumeClientChannel;
extern PACKAGE Dsproxyrest__81 DSAdmin_ConsumeClientChannelTimeout;
extern PACKAGE Dsproxyrest__91 DSAdmin_CloseClientChannel;
extern PACKAGE Dsproxyrest__02 DSAdmin_RegisterClientCallbackServer;
extern PACKAGE Dsproxyrest__12 DSAdmin_UnregisterClientCallback;
extern PACKAGE Dsproxyrest__22 DSAdmin_BroadcastToChannel;
extern PACKAGE Dsproxyrest__32 DSAdmin_BroadcastObjectToChannel;
extern PACKAGE Dsproxyrest__42 DSAdmin_NotifyCallback;
extern PACKAGE Dsproxyrest__52 DSAdmin_NotifyObject;
extern PACKAGE Dsproxyrest__62 DSAdmin_ConsumeClientChannelSecure;
extern PACKAGE Dsproxyrest__72 DSAdmin_ConsumeClientChannelTimeoutSecure;
extern PACKAGE Dsproxyrest__82 DSAdmin_CloseClientChannelSecure;
extern PACKAGE Dsproxyrest__92 DSAdmin_RegisterClientCallbackServerSecure;
extern PACKAGE Dsproxyrest__03 DSAdmin_UnregisterClientCallbackSecure;

}	/* namespace Dsproxyrest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxyrest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxyrestHPP
