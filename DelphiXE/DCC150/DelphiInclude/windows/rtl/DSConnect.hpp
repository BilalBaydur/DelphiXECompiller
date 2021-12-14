// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnect.pas' rev: 22.00

#ifndef DsconnectHPP
#define DsconnectHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <ComObj.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Midas.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit
#include <DBXDBReaders.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DSUtil.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsconnect
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSProviderConnection;
class PASCALIMPLEMENTATION TDSProviderConnection : public Dbclient::TCustomRemoteServer
{
	typedef Dbclient::TCustomRemoteServer inherited;
	
private:
	Midas::_di_IAppServer FAppServer;
	System::UnicodeString FServerClassName;
	Sqlexpr::TSQLConnection* FSQLConnection;
	Dbxcommon::TDBXCommand* FApplyUpdatesCommand;
	Dbxcommon::TDBXCommand* FGetRecordsCommand;
	Dbxcommon::TDBXCommand* FDataRequestCommand;
	Dbxcommon::TDBXCommand* FGetProviderNamesCommand;
	Dbxcommon::TDBXCommand* FGetParamsCommand;
	Dbxcommon::TDBXCommand* FRowRequestCommand;
	Dbxcommon::TDBXCommand* FExecuteCommand;
	Dbxcommon::TDBXCommand* FRowRequest;
	void __fastcall SetSQLConnection(const Sqlexpr::TSQLConnection* Value);
	void __fastcall SetServerClassName(const System::UnicodeString Value);
	Dbxcommon::TDBXConnection* __fastcall GetDBXConnection(void);
	void __fastcall FreeCommands(void);
	void __fastcall ConnectChange(System::TObject* Sender, bool Connecting);
	
protected:
	virtual void __fastcall DoConnect(void);
	virtual void __fastcall DoDisconnect(void);
	virtual bool __fastcall GetConnected(void);
	virtual void __fastcall SetConnected(bool Value);
	Dbxcommon::TDBXCommand* __fastcall GetCommandObject(const System::UnicodeString ProcedureName);
	__property Dbxcommon::TDBXConnection* Connection = {read=GetDBXConnection};
	HRESULT __safecall AS_ApplyUpdates(const System::WideString ProviderName, const System::OleVariant Delta, int MaxErrors, /* out */ int &ErrorCount, System::OleVariant &OwnerData, System::OleVariant &__AS_ApplyUpdates_result);
	HRESULT __safecall AS_GetRecords(const System::WideString ProviderName, int Count, /* out */ int &RecsOut, int Options, const System::WideString CommandText, System::OleVariant &Params, System::OleVariant &OwnerData, System::OleVariant &__AS_GetRecords_result);
	HRESULT __safecall AS_DataRequest(const System::WideString ProviderName, const System::OleVariant Data, System::OleVariant &__AS_DataRequest_result);
	HRESULT __safecall AS_GetProviderNames(System::OleVariant &__AS_GetProviderNames_result);
	HRESULT __safecall AS_GetParams(const System::WideString ProviderName, System::OleVariant &OwnerData, System::OleVariant &__AS_GetParams_result);
	HRESULT __safecall AS_RowRequest(const System::WideString ProviderName, const System::OleVariant Row, int RequestType, System::OleVariant &OwnerData, System::OleVariant &__AS_RowRequest_result);
	HRESULT __safecall AS_Execute(const System::WideString ProviderName, const System::WideString CommandText, System::OleVariant &Params, System::OleVariant &OwnerData);
	HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	
public:
	__fastcall virtual TDSProviderConnection(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSProviderConnection(void);
	__property Midas::_di_IAppServer AppServer = {read=FAppServer};
	virtual Midas::_di_IAppServer __fastcall GetServer(void);
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
__published:
	__property System::UnicodeString ServerClassName = {read=FServerClassName, write=SetServerClassName};
	__property Connected = {default=0};
	__property Sqlexpr::TSQLConnection* SQLConnection = {read=FSQLConnection, write=SetSQLConnection};
private:
	void *__ISupportErrorInfo;	/* ISupportErrorInfo */
	void *__IAppServer;	/* Midas::IAppServer */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_ISupportErrorInfo()
	{
		_di_ISupportErrorInfo intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ISupportErrorInfo*(void) { return (ISupportErrorInfo*)&__ISupportErrorInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Midas::_di_IAppServer()
	{
		Midas::_di_IAppServer intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Midas::IAppServer*(void) { return (Midas::IAppServer*)&__IAppServer; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsconnect */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnect;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnectHPP
