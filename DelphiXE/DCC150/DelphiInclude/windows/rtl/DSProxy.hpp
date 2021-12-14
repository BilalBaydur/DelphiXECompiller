// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxy.pas' rev: 22.00

#ifndef DsproxyHPP
#define DsproxyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsproxy
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSAdminClient;
class PASCALIMPLEMENTATION TDSAdminClient : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Dbxcommon::TDBXConnection* FDBXConnection;
	bool FInstanceOwner;
	Dbxjsonreflect::TJSONMarshal* FMarshal;
	Dbxjsonreflect::TJSONUnMarshal* FUnMarshal;
	
private:
	Dbxcommon::TDBXCommand* FGetPlatformNameCommand;
	Dbxcommon::TDBXCommand* FClearResourcesCommand;
	Dbxcommon::TDBXCommand* FFindPackagesCommand;
	Dbxcommon::TDBXCommand* FFindClassesCommand;
	Dbxcommon::TDBXCommand* FFindMethodsCommand;
	Dbxcommon::TDBXCommand* FGetServerMethodsCommand;
	Dbxcommon::TDBXCommand* FGetServerMethodParametersCommand;
	Dbxcommon::TDBXCommand* FGetDatabaseConnectionPropertiesCommand;
	Dbxcommon::TDBXCommand* FBroadcastToChannelCommand;
	Dbxcommon::TDBXCommand* FBroadcastObjectToChannelCommand;
	Dbxcommon::TDBXCommand* FNotifyCallbackCommand;
	Dbxcommon::TDBXCommand* FNotifyObjectCommand;
	Dbxcommon::TDBXCommand* FListClassesCommand;
	Dbxcommon::TDBXCommand* FDescribeClassCommand;
	Dbxcommon::TDBXCommand* FListMethodsCommand;
	Dbxcommon::TDBXCommand* FDescribeMethodCommand;
	
public:
	__fastcall TDSAdminClient(Dbxcommon::TDBXConnection* ADBXConnection)/* overload */;
	__fastcall TDSAdminClient(Dbxcommon::TDBXConnection* ADBXConnection, bool AInstanceOwner)/* overload */;
	__fastcall virtual ~TDSAdminClient(void);
	System::UnicodeString __fastcall GetPlatformName(void);
	bool __fastcall ClearResources(void);
	Dbxcommon::TDBXReader* __fastcall FindPackages(void);
	Dbxcommon::TDBXReader* __fastcall FindClasses(System::UnicodeString PackageName, System::UnicodeString ClassPattern);
	Dbxcommon::TDBXReader* __fastcall FindMethods(System::UnicodeString PackageName, System::UnicodeString ClassPattern, System::UnicodeString MethodPattern);
	Dbxcommon::TDBXReader* __fastcall GetServerMethods(void);
	Dbxcommon::TDBXReader* __fastcall GetServerMethodParameters(void);
	Dbxcommon::TDBXReader* __fastcall GetDatabaseConnectionProperties(void);
	bool __fastcall BroadcastToChannel(System::UnicodeString ChannelName, Dbxjson::TJSONValue* Msg);
	bool __fastcall BroadcastObjectToChannel(System::UnicodeString ChannelName, System::TObject* Msg);
	bool __fastcall NotifyCallback(System::UnicodeString ChannelName, System::UnicodeString ClientId, System::UnicodeString CallbackId, Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &Response);
	bool __fastcall NotifyObject(System::UnicodeString ChannelName, System::UnicodeString ClientId, System::UnicodeString CallbackId, System::TObject* Msg, /* out */ System::TObject* &Response);
	Dbxjson::TJSONArray* __fastcall ListClasses(void);
	Dbxjson::TJSONObject* __fastcall DescribeClass(System::UnicodeString ClassName);
	Dbxjson::TJSONArray* __fastcall ListMethods(System::UnicodeString ClassName);
	Dbxjson::TJSONObject* __fastcall DescribeMethod(System::UnicodeString ServerMethodName);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsproxy */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxy;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxyHPP
