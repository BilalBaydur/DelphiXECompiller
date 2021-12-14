// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSPlatform.pas' rev: 22.00

#ifndef DsplatformHPP
#define DsplatformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DSCommonTable.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsplatform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXServerComponent;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXServerComponent : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	bool HasTunnelSessionEvent;
	bool __fastcall ConsumeAllClientChannel(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TDBXCallback* ChannelCallback, unsigned Timeout);
	Dbxjson::TJSONValue* __fastcall ConsumeOneClientChannel(const System::UnicodeString ChannelName, const System::UnicodeString ClientManagerId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TJSONValue* ResponseData, unsigned Timeout);
	
protected:
	virtual System::UnicodeString __fastcall GetDSServerName(void) = 0 ;
	
public:
	__fastcall virtual TDBXServerComponent(Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual TDBXServerComponent(void)/* overload */;
	Dbxjson::TJSONValue* __fastcall ConsumeClientChannel(const System::UnicodeString ChannelName, const System::UnicodeString ClientManagerId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TJSONValue* ResponseData);
	Dbxjson::TJSONValue* __fastcall ConsumeClientChannelTimeout(const System::UnicodeString ChannelName, const System::UnicodeString ClientManagerId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, int Timeout, Dbxjson::TJSONValue* ResponseData);
	bool __fastcall ConnectClientChannel(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TDBXCallback* ChannelCallback);
	bool __fastcall ConnectClientChannelTimeout(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TDBXCallback* ChannelCallback, int Timeout);
	bool __fastcall CloseClientChannel(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString SecurityToken);
	bool __fastcall RegisterClientCallback(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken, Dbxjson::TDBXCallback* ChannelCallback);
	bool __fastcall RegisterClientCallbackServer(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken);
	bool __fastcall UnregisterClientCallback(const System::UnicodeString ChannelName, const System::UnicodeString ChannelId, const System::UnicodeString CallbackId, const System::UnicodeString SecurityToken);
	bool __fastcall BroadcastToChannel(const System::UnicodeString ChannelName, const Dbxjson::TJSONValue* Msg);
	bool __fastcall BroadcastObjectToChannel(const System::UnicodeString ChannelName, const System::TObject* Msg);
	bool __fastcall NotifyCallback(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const Dbxjson::TJSONValue* Msg, /* out */ Dbxjson::TJSONValue* &Response);
	bool __fastcall NotifyObject(const System::UnicodeString ChannelName, const System::UnicodeString ClientId, const System::UnicodeString CallbackId, const System::TObject* Msg, /* out */ System::TObject* &Response);
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDBXServerComponent(void) { }
	
};


class DELPHICLASS TDSPlatform;
class PASCALIMPLEMENTATION TDSPlatform : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static System::WideString __fastcall DefaultPackageName();
	static System::WideString __fastcall DataSnapAdminClassName();
	static System::UnicodeString __fastcall DataSnapAdminUnitName();
	static System::WideString __fastcall MetadataClassName();
	static System::UnicodeString __fastcall MetadataUnitName();
	static System::WideString __fastcall PlatformName();
	static Dbxcommon::TDBXConnection* __fastcall GetDatabaseConnection(Dbxcommon::TDBXContext* DBXContext, System::UnicodeString ServerConnectionName, Dbxcommon::TDBXProperties* ConProperties);
	static void __fastcall GetConnectionProperties(Dscommontable::TDSConnectionEntity* Connections);
public:
	/* TObject.Create */ inline __fastcall TDSPlatform(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSPlatform(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsplatform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsplatform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsplatformHPP
