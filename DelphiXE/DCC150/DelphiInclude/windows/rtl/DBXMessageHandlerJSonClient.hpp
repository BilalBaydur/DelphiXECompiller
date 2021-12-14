// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMessageHandlerJSonClient.pas' rev: 22.00

#ifndef DbxmessagehandlerjsonclientHPP
#define DbxmessagehandlerjsonclientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXMessageHandlerJSonCommon.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmessagehandlerjsonclient
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSonClientInputConnectionHandler;
class PASCALIMPLEMENTATION TDBXJSonClientInputConnectionHandler : public Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler
{
	typedef Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler inherited;
	
public:
	__fastcall TDBXJSonClientInputConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxstream::TDBXJSonStreamReader* ADbxStreamReader, const Dbxstream::TDBXJSonStreamWriter* ADbxStreamWriter, const Dbxstream::TDBXRowBuffer* ARowBuffer);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	
private:
	void __fastcall HandleParameterMoreBlobRequest(const Dbxcommon::TDBXParameterList* Parameters);
	void __fastcall HandleCallbackRequest(const Dbxcommon::TDBXParameterList* Parameters);
	void __fastcall HandleParameterNextRequest(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	int __fastcall FindNextReaderOrdinal(const Dbxcommon::TDBXParameterList* Parameters, const int InLastReaderOrdinal);
public:
	/* TDBXJSonConnectionHandler.Destroy */ inline __fastcall virtual ~TDBXJSonClientInputConnectionHandler(void) { }
	
};


class DELPHICLASS TDBXJSonClientOutputConnectionHandler;
class PASCALIMPLEMENTATION TDBXJSonClientOutputConnectionHandler : public Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler
{
	typedef Dbxmessagehandlerjsoncommon::TDBXJSonConnectionHandler inherited;
	
public:
	__fastcall TDBXJSonClientOutputConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxmessagehandlercommon::TDBXConnectionHandler* ANextHandler, const Dbxstream::TDBXJSonStreamReader* ADbxStreamReader, const Dbxstream::TDBXJSonStreamWriter* ADbxStreamWriter, const Dbxstream::TDBXRowBuffer* ARowBuffer);
	__fastcall virtual ~TDBXJSonClientOutputConnectionHandler(void);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	
private:
	void __fastcall WriteInputStreamerParameters(const int CommandHandle, const Dbxcommontable::TDBXStreamerRow* StreamerRow, const Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerList, const Dbxcommon::TDBXParameterList* Parameters, const bool DataWritten);
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
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
	
public:
	__property Dbxmessagehandlercommon::TDBXCommandCloseMessage* CommandCloseMessage = {read=FCommandCloseMessage, write=FCommandCloseMessage};
	__property Dbxmessagehandlercommon::TDBXConnectMessage* ConnectMessage = {read=FConnectMessage, write=FConnectMessage};
	__property Dbxmessagehandlercommon::TDBXDisconnectMessage* DisconnectMessage = {read=FDisconnectMessage, write=FDisconnectMessage};
	__property Dbxmessagehandlercommon::TDBXExecuteMessage* ExecuteMessage = {read=FExecuteMessage, write=FExecuteMessage};
	__property Dbxmessagehandlercommon::TDBXMoreBlobMessage* MoreBlobMessage = {read=FMoreBlobMessage, write=FMoreBlobMessage};
	__property Dbxmessagehandlercommon::TDBXNextMessage* NextMessage = {read=FNextMessage, write=FNextMessage};
	__property Dbxmessagehandlercommon::TDBXNextResultMessage* NextResultMessage = {read=FNextResultMessage, write=FNextResultMessage};
	__property Dbxmessagehandlercommon::TDBXPrepareMessage* PrepareMessage = {read=FPrepareMessage, write=FPrepareMessage};
	__property Dbxmessagehandlercommon::TDBXReaderCloseMessage* ReaderCloseMessage = {read=FReaderCloseMessage, write=FReaderCloseMessage};
	__property Dbxmessagehandlercommon::TDBXTxBeginMessage* TxBeginMessage = {read=FTxBeginMessage, write=FTxBeginMessage};
	__property Dbxmessagehandlercommon::TDBXTxEndMessage* TxEndMessage = {read=FTxEndMessage, write=FTxEndMessage};
	__property Dbxmessagehandlercommon::TDBXVendorPropertyMessage* VendorProperMessage = {read=FVendorProperMessage, write=FVendorProperMessage};
	__property Dbxmessagehandlercommon::TDBXErrorMessage* ErrorMessage = {read=FErrorMessage, write=FErrorMessage};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmessagehandlerjsonclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmessagehandlerjsonclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmessagehandlerjsonclientHPP
