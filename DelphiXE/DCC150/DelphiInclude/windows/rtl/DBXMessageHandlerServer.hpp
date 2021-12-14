// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMessageHandlerServer.pas' rev: 22.00

#ifndef DbxmessagehandlerserverHPP
#define DbxmessagehandlerserverHPP

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
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmessagehandlerserver
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDatabaseCommandHandler;
class DELPHICLASS TDBXServerParameterList;
class PASCALIMPLEMENTATION TDBXDatabaseCommandHandler : public Dbxmessagehandlercommon::TDBXCommandHandler
{
	typedef Dbxmessagehandlercommon::TDBXCommandHandler inherited;
	
public:
	__fastcall TDBXDatabaseCommandHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxmessagehandlercommon::TDBXCommandHandler* ANextHandler, const Dbxcommon::TDBXCommand* ACommand);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	__fastcall virtual ~TDBXDatabaseCommandHandler(void);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	void __fastcall CreateParameterList(void);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
private:
	Dbxcommon::TDBXCommand* FCommand;
	Dbxcommon::TDBXReader* FReader;
	TDBXServerParameterList* FParameterList;
	Dbxcommontable::TDBXStreamerRow* FDbxRow;
	Dbxcommon::TDBXParameter* FCommandParameter;
	Dbxmessagehandlercommon::TDBXCommandHandler* FNextHandler;
};


class DELPHICLASS TDBXDatabaseConnectionHandler;
class PASCALIMPLEMENTATION TDBXDatabaseConnectionHandler : public Dbxmessagehandlercommon::TDBXConnectionHandler
{
	typedef Dbxmessagehandlercommon::TDBXConnectionHandler inherited;
	
public:
	__fastcall TDBXDatabaseConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxmessagehandlercommon::TDBXConnectionHandler* ANextHandler);
	__fastcall virtual ~TDBXDatabaseConnectionHandler(void);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	void __fastcall EndTransaction(const int Depth, const bool Commit);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	
private:
	Dbxcommon::TDBXConnection* FCon;
	Dbxplatform::TDBXArrayList* FTransactionStack;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
	
public:
	__property Dbxcommon::TDBXConnection* DBXConnection = {read=FCon, write=FCon};
};


class PASCALIMPLEMENTATION TDBXServerParameterList : public Dbxcommon::TDBXParameterList
{
	typedef Dbxcommon::TDBXParameterList inherited;
	
public:
	__fastcall TDBXServerParameterList(const Dbxcommon::TDBXContext* DbxContext, const Dbxcommon::TDBXRow* Row);
	void __fastcall NewRowGeneration(void);
	void __fastcall SetOutParameters(void);
public:
	/* TDBXParameterList.Destroy */ inline __fastcall virtual ~TDBXServerParameterList(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmessagehandlerserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmessagehandlerserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmessagehandlerserverHPP
