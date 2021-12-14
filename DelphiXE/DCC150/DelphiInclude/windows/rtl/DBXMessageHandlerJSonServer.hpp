// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMessageHandlerJSonServer.pas' rev: 22.00

#ifndef DbxmessagehandlerjsonserverHPP
#define DbxmessagehandlerjsonserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXMessageHandlerJSonCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DSService.hpp>	// Pascal unit
#include <DSHTTPCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmessagehandlerjsonserver
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSonServerInputConnectionHandler;
class PASCALIMPLEMENTATION TDBXJSonServerInputConnectionHandler : public Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler
{
	typedef Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler inherited;
	
public:
	__fastcall TDBXJSonServerInputConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const bool AUsesDbxParameters, const Dbxmessagehandlercommon::TDBXConnectionHandler* ANextHandler, const Dbxstream::TDBXJSonStreamReader* ADbxStreamReader, const Dbxstream::TDBXJSonStreamWriter* ADbxStreamWriter, const Dbxstream::TDBXRowBuffer* ARowBuffer);
	__fastcall virtual ~TDBXJSonServerInputConnectionHandler(void);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	void __fastcall HandleProtocol(void);
	bool __fastcall HandleNonBlockingProtocol(void);
	bool __fastcall HandleDbxRequest(void);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	void __fastcall Close(void);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	
private:
	void __fastcall UnexpectedError(const Sysutils::Exception* Ex);
	void __fastcall ProcessDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	Dbxplatform::TDBXInt32s __fastcall ReadDbxDataTypes(void);
	
protected:
	Dbxmessagehandlercommon::TDBXCommandCloseMessage* FCommandCloseMessage;
	Dbxmessagehandlercommon::TDBXConnectMessage* FConnectMessage;
	Dbxmessagehandlercommon::TDBXDisconnectMessage* FDisconnectMessage;
	Dbxmessagehandlercommon::TDBXExecuteMessage* FExecuteMessage;
	Dbxmessagehandlercommon::TDBXMoreBlobMessage* FMoreBlobMessage;
	Dbxmessagehandlercommon::TDBXNextMessage* FNextMessage;
	Dbxmessagehandlercommon::TDBXNextResultMessage* FNextResultMessage;
	Dbxmessagehandlercommon::TDBXPrepareMessage* FPrepareMessage;
	Dbxmessagehandlercommon::TDBXReaderCloseMessage* FReaderCloseMessage;
	Dbxmessagehandlercommon::TDBXTxBeginMessage* FTxBeginMessage;
	Dbxmessagehandlercommon::TDBXTxEndMessage* FTxEndMessage;
	Dbxmessagehandlercommon::TDBXVendorPropertyMessage* FVendorProperMessage;
	Dbxmessagehandlercommon::TDBXErrorMessage* FErrorMessage;
	
private:
	bool FHandleRequests;
	int FMinRowBufferSize;
	Dbxcommontable::TDBXActiveTableReaderList* FActiveStreamerRowList;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
	Dbxcommon::TDBXProperties* FConnectProps;
	
public:
	__property int MinRowBufferSize = {read=FMinRowBufferSize, nodefault};
};


class DELPHICLASS TDBXJSonServerOutputConnectionHandler;
class PASCALIMPLEMENTATION TDBXJSonServerOutputConnectionHandler : public Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler
{
	typedef Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler inherited;
	
public:
	__fastcall TDBXJSonServerOutputConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxstream::TDBXJSonStreamReader* ADbxStreamReader, const Dbxstream::TDBXJSonStreamWriter* ADbxStreamWriter, const Dbxstream::TDBXRowBuffer* ARowBuffer);
	__fastcall virtual ~TDBXJSonServerOutputConnectionHandler(void);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual Dbxcommontable::TDBXStreamerRow* __fastcall CreateDbxRow(void);
	void __fastcall FlushRowBuffer(void);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	void __fastcall SetDbxStreamReader(const Dbxstream::TDBXJSonStreamReader* DbxStreamReader);
	void __fastcall SetDbxStreamWriter(const Dbxstream::TDBXJSonStreamWriter* DbxStreamWriter);
	
private:
	int __fastcall WriteReaderFirst(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message, const Dbxcommon::TDBXReader* ReturnTableReader, const bool SomethingWritten);
	void __fastcall WriteReaderNext(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message, const Dbxcommon::TDBXReader* Reader, const int RowHandle);
	
public:
	__property Dbxstream::TDBXJSonStreamReader* DbxStreamReader = {read=FDbxStreamReader, write=SetDbxStreamReader};
	__property Dbxstream::TDBXJSonStreamWriter* DbxStreamWriter = {read=FDbxStreamWriter, write=SetDbxStreamWriter};
	__property Dbxstream::TDBXRowBuffer* DbxRowBuffer = {read=FDbxRowBuffer, write=FDbxRowBuffer};
};


class DELPHICLASS TDBXJSonServerProtocolHandler;
class PASCALIMPLEMENTATION TDBXJSonServerProtocolHandler : public Dbxmessagehandlercommon::TDBXProtocolHandler
{
	typedef Dbxmessagehandlercommon::TDBXProtocolHandler inherited;
	
private:
	Dsservice::TDSSession* FDSSession;
	
public:
	__fastcall TDBXJSonServerProtocolHandler(const TDBXJSonServerInputConnectionHandler* AConnectionHandler);
	__fastcall virtual ~TDBXJSonServerProtocolHandler(void);
	virtual void __fastcall HandleProtocol(void);
	virtual bool __fastcall HandleNonBlockingProtocol(void);
	virtual void __fastcall SetUp(const System::TObject* Data);
	__property Dsservice::TDSSession* DSSession = {read=FDSSession, write=FDSSession};
	
private:
	TDBXJSonServerInputConnectionHandler* FConnectionHandler;
};


class DELPHICLASS TDBXServerCallback;
class PASCALIMPLEMENTATION TDBXServerCallback : public Dbxjson::TDBXCallback
{
	typedef Dbxjson::TDBXCallback inherited;
	
public:
	virtual Dbxjson::TJSONValue* __fastcall Execute(const Dbxjson::TJSONValue* Arg)/* overload */;
	virtual System::TObject* __fastcall Execute(System::TObject* Arg)/* overload */;
	
protected:
	virtual System::TObject* __fastcall GetConnectionHandler(void);
	virtual void __fastcall SetConnectionHandler(const System::TObject* ConnectionHandler);
	virtual int __fastcall GetOrdinal(void);
	virtual void __fastcall SetOrdinal(const int Ordinal);
	virtual System::TObject* __fastcall GetDsServer(void);
	virtual void __fastcall SetDsServer(const System::TObject* DsServer);
	virtual bool __fastcall IsConnectionLost(void);
	
private:
	System::TObject* FConnectionHandler;
	System::TObject* FDsServer;
	int FOrdinal;
	
public:
	__property System::TObject* ConnectionHandler = {read=GetConnectionHandler, write=SetConnectionHandler};
	__property int Ordinal = {read=GetOrdinal, write=SetOrdinal, nodefault};
	__property System::TObject* DsServer = {read=GetDsServer, write=SetDsServer};
public:
	/* TObject.Create */ inline __fastcall TDBXServerCallback(void) : Dbxjson::TDBXCallback() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXServerCallback(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmessagehandlerjsonserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmessagehandlerjsonserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmessagehandlerjsonserverHPP
