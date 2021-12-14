// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxDatasnap.pas' rev: 22.00

#ifndef DbxdatasnapHPP
#define DbxdatasnapHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXClient.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxDatasnap"

namespace Dbxdatasnap
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDatasnapProperties;
class PASCALIMPLEMENTATION TDBXDatasnapProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	Dbxtransport::TTransportFilterCollection* FFilters;
	Classes::TNotifyEvent FEvent;
	System::UnicodeString __fastcall GetHostName(void);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	int __fastcall GetPort(void);
	int __fastcall GetBufferKBSize(void);
	System::UnicodeString __fastcall GetServerConnection(void);
	System::UnicodeString __fastcall GetCommunicationProtocol(void);
	System::UnicodeString __fastcall GetURLPath(void);
	System::UnicodeString __fastcall GetDSAuthenticationUser(void);
	System::UnicodeString __fastcall GetDSAuthenticationPassword(void);
	System::UnicodeString __fastcall GetConnectTimeout(void);
	System::UnicodeString __fastcall GetCommunicationTimeout(void);
	Dbxtransport::TTransportFilterCollection* __fastcall GetFilters(void);
	System::UnicodeString __fastcall GetDatasnapContext(void);
	System::UnicodeString __fastcall GetDSAuthenticationScheme(void);
	void __fastcall SetPort(const int Value);
	void __fastcall SetHostName(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	void __fastcall SetBufferKBSize(const int Value);
	void __fastcall SetServerConnection(const System::UnicodeString Value);
	void __fastcall SetCommunicationProtocol(const System::UnicodeString Value);
	void __fastcall SetURLPath(const System::UnicodeString Value);
	void __fastcall SetDSAuthenticationUser(const System::UnicodeString Value);
	void __fastcall SetDSAuthenticationPassword(const System::UnicodeString Value);
	void __fastcall SetConnectTimeout(const System::UnicodeString Value);
	void __fastcall SetCommunicationTimeout(const System::UnicodeString Value);
	void __fastcall SetFilters(const Dbxtransport::TTransportFilterCollection* Value);
	void __fastcall SetDatasnapContext(const System::UnicodeString Value);
	void __fastcall SetDSAuthenticationScheme(const System::UnicodeString Value);
	void __fastcall OnFiltersChange(System::TObject* source);
	
protected:
	virtual void __fastcall Init(void);
	
public:
	__fastcall virtual TDBXDatasnapProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	__fastcall virtual TDBXDatasnapProperties(void)/* overload */;
	__fastcall virtual ~TDBXDatasnapProperties(void);
	
__published:
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property int Port = {read=GetPort, write=SetPort, default=211};
	__property int BufferKBSize = {read=GetBufferKBSize, write=SetBufferKBSize, default=32};
	__property System::UnicodeString ServerConnection = {read=GetServerConnection, write=SetServerConnection};
	__property System::UnicodeString CommunicationProtocol = {read=GetCommunicationProtocol, write=SetCommunicationProtocol};
	__property System::UnicodeString URLPath = {read=GetURLPath, write=SetURLPath};
	__property System::UnicodeString DSAuthUser = {read=GetDSAuthenticationUser, write=SetDSAuthenticationUser};
	__property System::UnicodeString DSAuthPassword = {read=GetDSAuthenticationPassword, write=SetDSAuthenticationPassword};
	__property System::UnicodeString DSAuthScheme = {read=GetDSAuthenticationScheme, write=SetDSAuthenticationScheme};
	__property System::UnicodeString ConnectTimeout = {read=GetConnectTimeout, write=SetConnectTimeout};
	__property System::UnicodeString CommunicationTimeout = {read=GetCommunicationTimeout, write=SetCommunicationTimeout};
	__property Dbxtransport::TTransportFilterCollection* Filters = {read=GetFilters, write=SetFilters};
	__property System::UnicodeString DatasnapContext = {read=GetDatasnapContext, write=SetDatasnapContext};
};


class DELPHICLASS TDBXDatasnapDriver;
class PASCALIMPLEMENTATION TDBXDatasnapDriver : public Dbxclient::TDBXClientDriver
{
	typedef Dbxclient::TDBXClientDriver inherited;
	
public:
	__fastcall virtual TDBXDatasnapDriver(const Dbxcommon::TDBXDriverDef &DriverDef)/* overload */;
	__classmethod Dbxjson::TJSONValue* __fastcall InvokeClientCallback(int argType, Dbxcommon::TDBXParameter* parameter, Dbxjson::TJSONValue* rawInput);
public:
	/* TDBXClientDriver.Destroy */ inline __fastcall virtual ~TDBXDatasnapDriver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define DS_CONTEXT L"datasnap/"

}	/* namespace Dbxdatasnap */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdatasnap;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdatasnapHPP
