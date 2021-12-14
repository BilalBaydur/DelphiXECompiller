// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSTCPServerTransport.pas' rev: 22.00

#ifndef DstcpservertransportHPP
#define DstcpservertransportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit
#include <IdTCPServer.hpp>	// Pascal unit
#include <IdContext.hpp>	// Pascal unit
#include <IdSchedulerOfThreadPool.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXMessageHandlerJSonServer.hpp>	// Pascal unit
#include <DSTransport.hpp>	// Pascal unit
#include <DBXTransportFilter.hpp>	// Pascal unit
#include <DSHTTPCommon.hpp>	// Pascal unit
#include <DSService.hpp>	// Pascal unit
#include <DSAuth.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dstcpservertransport
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSTCPServerTransport;
class PASCALIMPLEMENTATION TDSTCPServerTransport : public Dscommonserver::TDSServerTransport
{
	typedef Dscommonserver::TDSServerTransport inherited;
	
private:
	int FPort;
	int FMaxThreads;
	int FPoolSize;
	Dstransport::TDSJSONProtocolHandlerFactory* FProtocolHandlerFactory;
	Dsauth::TDSCustomAuthenticationManager* FAuthenticationManager;
	void __fastcall DoOnConnect(Idcontext::TIdContext* AContext);
	void __fastcall DoOnDisconnect(Idcontext::TIdContext* AContext);
	void __fastcall DoOnExecute(Idcontext::TIdContext* AContext);
	
protected:
	Idtcpserver::TIdTCPServer* FTcpServer;
	static Dbxtransport::TDbxChannel* __fastcall GetTcpChannel(Dscommonserver::TDSServerConnectionHandler* AConnectionHandler);
	virtual Idtcpserver::TIdTCPServer* __fastcall CreateTcpServer(void);
	virtual Dbxtransport::TDbxChannel* __fastcall CreateTcpChannel(Idcontext::TIdContext* AContext);
	virtual void __fastcall SetServer(const Dscommonserver::TDSCustomServer* AServer);
	void __fastcall SetAuthenticationManager(const Dsauth::TDSCustomAuthenticationManager* AuthManager);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual ~TDSTCPServerTransport(void);
	__fastcall virtual TDSTCPServerTransport(Classes::TComponent* AOwner);
	virtual void __fastcall Start(void);
	virtual void __fastcall Stop(void);
	
__published:
	__property int Port = {read=FPort, write=FPort, default=211};
	__property int MaxThreads = {read=FMaxThreads, write=FMaxThreads, default=0};
	__property int PoolSize = {read=FPoolSize, write=FPoolSize, default=10};
	__property Server;
	__property BufferKBSize;
	__property Filters;
	__property Dsauth::TDSCustomAuthenticationManager* AuthenticationManager = {read=FAuthenticationManager, write=SetAuthenticationManager};
};


class DELPHICLASS TDSTCPChannel;
class PASCALIMPLEMENTATION TDSTCPChannel : public Dbxtransport::TDbxChannel
{
	typedef Dbxtransport::TDbxChannel inherited;
	
private:
	Idcontext::TIdContext* FContext;
	Dbxtransport::TDBXSocketChannelInfo* FChannelInfo;
	System::DynamicArray<System::Byte> FReadBuffer;
	// System::TArray__1<System::Byte>  FReadBuffer;
	bool FConnectionLost;
	
protected:
	virtual bool __fastcall IsConnectionLost(void);
	virtual Dbxtransport::TDBXChannelInfo* __fastcall GetChannelInfo(void);
	
public:
	__fastcall TDSTCPChannel(Idcontext::TIdContext* AContext);
	__fastcall virtual ~TDSTCPChannel(void);
	virtual void __fastcall Open(void);
	virtual void __fastcall Close(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dstcpservertransport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dstcpservertransport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DstcpservertransportHPP
