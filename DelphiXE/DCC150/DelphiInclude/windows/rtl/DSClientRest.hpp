// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientRest.pas' rev: 22.00

#ifndef DsclientrestHPP
#define DsclientrestHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit
#include <DSHTTP.hpp>	// Pascal unit
#include <Contnrs.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientrest
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TDSRestParameterMetaData
{
	
public:
	System::UnicodeString Name;
	int Direction;
	int DBXType;
	System::UnicodeString TypeName;
};


class DELPHICLASS TDSRestLoginProperties;
class PASCALIMPLEMENTATION TDSRestLoginProperties : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	System::UnicodeString UserName;
	System::UnicodeString Password;
	bool LoginPrompt;
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDSRestLoginProperties(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDSRestLoginProperties(void) : Classes::TPersistent() { }
	
};


typedef void __fastcall (__closure *TDSRestLoginEvent)(System::TObject* Sender, TDSRestLoginProperties* LoginProperties, bool &Cancel);

#pragma option push -b-
enum TDSTestConnectionOption { toNoLoginPrompt };
#pragma option pop

typedef System::Set<TDSTestConnectionOption, TDSTestConnectionOption::toNoLoginPrompt, TDSTestConnectionOption::toNoLoginPrompt>  TDSTestConnectionOptions;

class DELPHICLASS TDSCustomRestConnection;
class DELPHICLASS TDSRestCommand;
class PASCALIMPLEMENTATION TDSCustomRestConnection : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	System::UnicodeString FProtocol;
	System::UnicodeString FHost;
	int FPort;
	System::UnicodeString FUrlPath;
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	System::UnicodeString FUniqueID;
	System::UnicodeString FContext;
	TDSRestLoginProperties* FLoginProperties;
	Dshttp::TDSHTTP* FHTTP;
	System::UnicodeString FSessionID;
	
private:
	bool FLoginPrompt;
	TDSRestLoginEvent FOnLogin;
	Dbxcommon::TValidateCertificate FOnValidateCertificate;
	Classes::TNotifyEvent FBeforeExecute;
	Classes::TNotifyEvent FAfterExecute;
	bool FPreserveSessionID;
	void __fastcall ReadUniqueId(Classes::TReader* Reader);
	void __fastcall WriteUniqueId(Classes::TWriter* Writer);
	System::UnicodeString __fastcall GetPassword(void);
	System::UnicodeString __fastcall GetUserName(void);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUserName(const System::UnicodeString Value);
	void __fastcall SetLoginPrompt(const bool Value);
	bool __fastcall GetLoginPrompt(void);
	void __fastcall LoginDialogTestConnection(void);
	void __fastcall SetContext(const System::UnicodeString Value);
	Dshttp::TDSHTTP* __fastcall GetHTTP(void);
	Dbxcommon::TValidateCertificate __fastcall GetOnValidatePeerCertificate(void);
	void __fastcall SetOnValidatePeerCertificate(const Dbxcommon::TValidateCertificate Value);
	void __fastcall SetProtocol(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall Login(void);
	virtual void __fastcall BeforeExecute(void);
	virtual void __fastcall AfterExecute(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	virtual void __fastcall SessionExpired(void);
	virtual void __fastcall SetConnection(const System::UnicodeString KeepAlive);
	virtual System::UnicodeString __fastcall GetConnection(void);
	
public:
	__fastcall virtual TDSCustomRestConnection(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSCustomRestConnection(void);
	void __fastcall TestConnection(TDSTestConnectionOptions AOptions = TDSTestConnectionOptions() );
	TDSRestCommand* __fastcall CreateCommand(void);
	System::UnicodeString __fastcall DefaultProtocol(void);
	void __fastcall Reset(void);
	__property System::UnicodeString Protocol = {read=FProtocol, write=SetProtocol};
	__property System::UnicodeString Host = {read=FHost, write=FHost};
	__property int Port = {read=FPort, write=FPort, nodefault};
	__property System::UnicodeString UrlPath = {read=FUrlPath, write=FUrlPath};
	__property System::UnicodeString Context = {read=FContext, write=SetContext};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property System::UnicodeString UniqueID = {read=FUniqueID, write=FUniqueID};
	__property bool LoginPrompt = {read=GetLoginPrompt, write=SetLoginPrompt, default=1};
	__property TDSRestLoginEvent OnLogin = {read=FOnLogin, write=FOnLogin};
	__property System::UnicodeString SessionID = {read=FSessionID, write=FSessionID};
	__property TDSRestLoginProperties* LoginProperties = {read=FLoginProperties};
	__property bool PreserveSessionID = {read=FPreserveSessionID, write=FPreserveSessionID, default=1};
	__property Dbxcommon::TValidateCertificate OnValidatePeerCertificate = {read=GetOnValidatePeerCertificate, write=SetOnValidatePeerCertificate};
	__property Classes::TNotifyEvent OnBeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property Classes::TNotifyEvent OnAfterExecute = {read=FAfterExecute, write=FAfterExecute};
	__property Dshttp::TDSHTTP* HTTP = {read=GetHTTP};
	__property System::UnicodeString Connection = {read=GetConnection, write=SetConnection};
};


class DELPHICLASS TDSRestConnection;
class PASCALIMPLEMENTATION TDSRestConnection : public TDSCustomRestConnection
{
	typedef TDSCustomRestConnection inherited;
	
__published:
	__property Protocol;
	__property Host;
	__property Port;
	__property UrlPath;
	__property Context;
	__property UserName;
	__property Password;
	__property LoginPrompt = {default=1};
	__property PreserveSessionID = {default=1};
	__property Connection;
	__property OnLogin;
	__property OnValidatePeerCertificate;
	__property OnBeforeExecute;
	__property OnAfterExecute;
public:
	/* TDSCustomRestConnection.Create */ inline __fastcall virtual TDSRestConnection(Classes::TComponent* AOwner) : TDSCustomRestConnection(AOwner) { }
	/* TDSCustomRestConnection.Destroy */ inline __fastcall virtual ~TDSRestConnection(void) { }
	
};


typedef System::DynamicArray<TDSRestParameterMetaData> TDSRestParameterMetaDataArray;

class PASCALIMPLEMENTATION TDSRestCommand : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dbxcommon::TDBXContext* FDBXContext;
	TDSCustomRestConnection* FConnection;
	System::UnicodeString FText;
	Dbxcommon::TDBXParameterList* FParameters;
	System::UnicodeString FRequestType;
	Contnrs::TObjectList* FFreeOnExecuteList;
	Dbxcommon::TDBXParameterList* __fastcall CreateParameters(TDSRestParameterMetaData *AMetaData, const int AMetaData_Size);
	
private:
	void __fastcall AfterExecute(void);
	void __fastcall BeforeExecute(void);
	System::DynamicArray<TDSRestParameterMetaData> __fastcall BuildParameterMetaDataArray(void)/* overload */;
	System::DynamicArray<TDSRestParameterMetaData> __fastcall BuildParameterMetaDataArray(Dscommonproxy::TDSProxyMetadata* AProxyMetaData)/* overload */;
	System::UnicodeString __fastcall DetermineRequestType(TDSRestParameterMetaData *AMetaData, const int AMetaData_Size);
	
public:
	__fastcall TDSRestCommand(TDSCustomRestConnection* AConnection);
	__fastcall virtual ~TDSRestCommand(void);
	void __fastcall Prepare(TDSRestParameterMetaData *AMetaData, const int AMetaData_Size)/* overload */;
	void __fastcall Prepare(Dscommonproxy::TDSProxyMetadata* AProxyMetaData)/* overload */;
	void __fastcall Prepare(void)/* overload */;
	void __fastcall Execute(const System::UnicodeString ARequestFilter = L"");
	void __fastcall ExecuteCache(const System::UnicodeString ARequestFilter = L"");
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property Dbxcommon::TDBXParameterList* Parameters = {read=FParameters};
	__property System::UnicodeString RequestType = {read=FRequestType, write=FRequestType};
	__property TDSCustomRestConnection* Connection = {read=FConnection};
	Dbxjsonreflect::TJSONMarshal* __fastcall GetJSONMarshaler(void);
	Dbxjsonreflect::TJSONUnMarshal* __fastcall GetJSONUnMarshaler(void);
	void __fastcall FreeOnExecute(System::TObject* Value);
};


__interface TDSRestResponseStreamProc;
typedef System::DelphiInterface<TDSRestResponseStreamProc> _di_TDSRestResponseStreamProc;
__interface TDSRestResponseStreamProc  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(Classes::TStream* AStream, const System::UnicodeString AResponseCharSet, bool &AOwnsStream) = 0 ;
};

class DELPHICLASS TDSRestCacheCommand;
class PASCALIMPLEMENTATION TDSRestCacheCommand : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FParameterPath;
	TDSCustomRestConnection* FConnection;
	void __fastcall Execute(const System::UnicodeString ARequestType, const System::UnicodeString ACachePath, _di_TDSRestResponseStreamProc AResponseStreamProc, const System::UnicodeString ARequestFilter = L"");
	System::UnicodeString __fastcall GetCommandPath(void);
	
public:
	__fastcall TDSRestCacheCommand(TDSCustomRestConnection* AConnection);
	__fastcall virtual ~TDSRestCacheCommand(void);
	void __fastcall GetParameter(_di_TDSRestResponseStreamProc AResponseStreamProc, const System::UnicodeString ARequestFilter = L"")/* overload */;
	void __fastcall GetParameter(/* out */ Dbxjson::TJSONValue* &AJSONValue, const System::UnicodeString ARequestFilter = L"")/* overload */;
	void __fastcall GetParameter(/* out */ Classes::TStream* &AStream, bool AOwnsObject, const System::UnicodeString ARequestFilter = L"")/* overload */;
	void __fastcall GetCommand(_di_TDSRestResponseStreamProc AResponseStreamProc);
	void __fastcall DeleteCommand(void);
	__property TDSCustomRestConnection* Connection = {read=FConnection};
	__property System::UnicodeString ParameterPath = {read=FParameterPath, write=FParameterPath};
	__property System::UnicodeString CommandPath = {read=GetCommandPath};
};


__interface IDSRestCachedCommand;
typedef System::DelphiInterface<IDSRestCachedCommand> _di_IDSRestCachedCommand;
__interface  INTERFACE_UUID("{16B2E1F2-436B-45D8-A17D-5B1617F65BD6}") IDSRestCachedCommand  : public System::IInterface 
{
	
public:
	virtual Dbxjson::TJSONObject* __fastcall GetCommand(TDSRestConnection* AConnection, bool AOwnsObject = true) = 0 ;
	virtual void __fastcall DeleteCommand(TDSRestConnection* AConnection) = 0 ;
};

__interface IDSRestCachedItem;
typedef System::DelphiInterface<IDSRestCachedItem> _di_IDSRestCachedItem;
__interface  INTERFACE_UUID("{CCCDC036-04F0-4CF6-A74F-D2759F1E635A}") IDSRestCachedItem  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall GetItemPath(void) = 0 ;
	__property System::UnicodeString ItemPath = {read=GetItemPath};
};

__interface IDSRestCachedJSONObject;
typedef System::DelphiInterface<IDSRestCachedJSONObject> _di_IDSRestCachedJSONObject;
__interface  INTERFACE_UUID("{3C45664B-BAAB-42AA-8FD9-9D3AB0198455}") IDSRestCachedJSONObject  : public IDSRestCachedItem 
{
	
public:
	virtual Dbxjson::TJSONObject* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedJSONArray;
typedef System::DelphiInterface<IDSRestCachedJSONArray> _di_IDSRestCachedJSONArray;
__interface  INTERFACE_UUID("{38E0EFCC-A1B6-4E11-BD9D-F640B7822D44}") IDSRestCachedJSONArray  : public IDSRestCachedItem 
{
	
public:
	virtual Dbxjson::TJSONArray* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedJSONValue;
typedef System::DelphiInterface<IDSRestCachedJSONValue> _di_IDSRestCachedJSONValue;
__interface  INTERFACE_UUID("{12458118-91A1-4A67-87AB-947CB8970D7B}") IDSRestCachedJSONValue  : public IDSRestCachedItem 
{
	
public:
	virtual Dbxjson::TJSONValue* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedDBXReader;
typedef System::DelphiInterface<IDSRestCachedDBXReader> _di_IDSRestCachedDBXReader;
__interface  INTERFACE_UUID("{567DBA1E-2CAE-4C15-824B-0B678FBBD5B1}") IDSRestCachedDBXReader  : public IDSRestCachedItem 
{
	
public:
	virtual Dbxcommon::TDBXReader* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedDataSet;
typedef System::DelphiInterface<IDSRestCachedDataSet> _di_IDSRestCachedDataSet;
__interface  INTERFACE_UUID("{54D0BA3F-9159-4DD5-802A-0097BA842D91}") IDSRestCachedDataSet  : public IDSRestCachedItem 
{
	
public:
	virtual Db::TDataSet* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedParams;
typedef System::DelphiInterface<IDSRestCachedParams> _di_IDSRestCachedParams;
__interface  INTERFACE_UUID("{FD14E67B-D225-4FED-8B45-451B6627962C}") IDSRestCachedParams  : public IDSRestCachedItem 
{
	
public:
	virtual Db::TParams* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface IDSRestCachedStream;
typedef System::DelphiInterface<IDSRestCachedStream> _di_IDSRestCachedStream;
__interface  INTERFACE_UUID("{0E09C8A7-11A5-4CD5-B175-A35C9B0BEDF5}") IDSRestCachedStream  : public IDSRestCachedItem 
{
	
public:
	virtual Classes::TStream* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

template<typename T> __interface IDSRestCachedObject__1;
// template<typename T> typedef System::DelphiInterface<IDSRestCachedObject__1<T> > _di_IDSRestCachedObject__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IDSRestCachedObject__1  : public System::IInterface 
{
	
public:
	virtual T __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"") = 0 ;
};

__interface TGetJSONValueCallback;
typedef System::DelphiInterface<TGetJSONValueCallback> _di_TGetJSONValueCallback;
__interface TGetJSONValueCallback  : public System::IInterface 
{
	
public:
	virtual bool __fastcall Invoke(Dbxjson::TJSONValue* AValue) = 0 ;
};

class DELPHICLASS TDSRestCachedItem;
class PASCALIMPLEMENTATION TDSRestCachedItem : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FItemPath;
	Classes::TList* FOwnedObjects;
	
protected:
	System::UnicodeString __fastcall GetItemPath(void);
	Dbxjson::TJSONValue* __fastcall GetJSONValue(TDSRestConnection* AConnection, bool AOwnsObject, const System::UnicodeString ARequestFilter);
	Dbxjson::TJSONValue* __fastcall GetJSONValueCallback(TDSRestConnection* AConnection, _di_TGetJSONValueCallback ACallBack, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
	template<typename T> T __fastcall UnmarshalValue(TDSRestConnection* AConnection, bool AOwnsObject, const System::UnicodeString ARequestFilter);
	__property Classes::TList* OwnedObjects = {read=FOwnedObjects};
	
public:
	__fastcall TDSRestCachedItem(const System::UnicodeString AItemPath);
	__fastcall virtual ~TDSRestCachedItem(void);
	void __fastcall DeleteCommand(TDSRestConnection* AConnection);
	Dbxjson::TJSONObject* __fastcall GetCommand(TDSRestConnection* AConnection, bool AOwnsObject = true);
	__property System::UnicodeString ItemPath = {read=GetItemPath};
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedItem;	/* IDSRestCachedItem */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedItem()
	{
		_di_IDSRestCachedItem intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedItem*(void) { return (IDSRestCachedItem*)&__IDSRestCachedItem; }
	#endif
	
};


class DELPHICLASS TDSRestCachedJSONObject;
class PASCALIMPLEMENTATION TDSRestCachedJSONObject : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Dbxjson::TJSONObject* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedJSONObject(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedJSONObject(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedJSONObject;	/* IDSRestCachedJSONObject */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedJSONObject()
	{
		_di_IDSRestCachedJSONObject intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedJSONObject*(void) { return (IDSRestCachedJSONObject*)&__IDSRestCachedJSONObject; }
	#endif
	
};


class DELPHICLASS TDSRestCachedJSONArray;
class PASCALIMPLEMENTATION TDSRestCachedJSONArray : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Dbxjson::TJSONArray* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedJSONArray(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedJSONArray(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedJSONArray;	/* IDSRestCachedJSONArray */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedJSONArray()
	{
		_di_IDSRestCachedJSONArray intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedJSONArray*(void) { return (IDSRestCachedJSONArray*)&__IDSRestCachedJSONArray; }
	#endif
	
};


class DELPHICLASS TDSRestCachedJSONValue;
class PASCALIMPLEMENTATION TDSRestCachedJSONValue : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Dbxjson::TJSONValue* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedJSONValue(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedJSONValue(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedJSONValue;	/* IDSRestCachedJSONValue */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedJSONValue()
	{
		_di_IDSRestCachedJSONValue intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedJSONValue*(void) { return (IDSRestCachedJSONValue*)&__IDSRestCachedJSONValue; }
	#endif
	
};


class DELPHICLASS TDSRestCachedStream;
class PASCALIMPLEMENTATION TDSRestCachedStream : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Classes::TStream* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedStream(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedStream(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedStream;	/* IDSRestCachedStream */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedStream()
	{
		_di_IDSRestCachedStream intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedStream*(void) { return (IDSRestCachedStream*)&__IDSRestCachedStream; }
	#endif
	
};


class DELPHICLASS TDSRestCachedDataSet;
class PASCALIMPLEMENTATION TDSRestCachedDataSet : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Db::TDataSet* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedDataSet(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedDataSet(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedDataSet;	/* IDSRestCachedDataSet */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedDataSet()
	{
		_di_IDSRestCachedDataSet intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedDataSet*(void) { return (IDSRestCachedDataSet*)&__IDSRestCachedDataSet; }
	#endif
	
};


class DELPHICLASS TDSRestCachedParams;
class PASCALIMPLEMENTATION TDSRestCachedParams : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Db::TParams* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedParams(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedParams(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedParams;	/* IDSRestCachedParams */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedParams()
	{
		_di_IDSRestCachedParams intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedParams*(void) { return (IDSRestCachedParams*)&__IDSRestCachedParams; }
	#endif
	
};


class DELPHICLASS TDSRestCachedDBXReader;
class PASCALIMPLEMENTATION TDSRestCachedDBXReader : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	Dbxcommon::TDBXReader* __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedDBXReader(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedDBXReader(void) { }
	
private:
	void *__IDSRestCachedCommand;	/* IDSRestCachedCommand */
	void *__IDSRestCachedDBXReader;	/* IDSRestCachedDBXReader */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedCommand()
	{
		_di_IDSRestCachedCommand intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedCommand*(void) { return (IDSRestCachedCommand*)&__IDSRestCachedCommand; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSRestCachedDBXReader()
	{
		_di_IDSRestCachedDBXReader intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSRestCachedDBXReader*(void) { return (IDSRestCachedDBXReader*)&__IDSRestCachedDBXReader; }
	#endif
	
};


template<typename T> class DELPHICLASS TDSRestCachedObject__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TDSRestCachedObject__1 : public TDSRestCachedItem
{
	typedef TDSRestCachedItem inherited;
	
public:
	T __fastcall GetValue(TDSRestConnection* AConnection, bool AOwnsObject = true, const System::UnicodeString ARequestFilter = L"");
public:
	/* TDSRestCachedItem.Create */ inline __fastcall TDSRestCachedObject__1(const System::UnicodeString AItemPath) : TDSRestCachedItem(AItemPath) { }
	/* TDSRestCachedItem.Destroy */ inline __fastcall virtual ~TDSRestCachedObject__1(void) { }
	
};


class DELPHICLASS TDSRestClientChannel;
class DELPHICLASS TDSRestCallbackLoop;
class DELPHICLASS TDSRestClientCallback;
class PASCALIMPLEMENTATION TDSRestClientChannel : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDSCustomRestConnection* FConnection;
	TDSRestCallbackLoop* FCallbackLoop;
	Classes::TNotifyEvent FOnDisconnect;
	void __fastcall EnumerateCallbacks(System::DelphiInterface<Sysutils::TFunc__2<TDSRestClientCallback*,bool> >  AMethod)/* overload */;
	void __fastcall EnumerateCallbacks(System::DelphiInterface<Sysutils::TProc__1<TDSRestClientCallback*> >  AMethod)/* overload */;
	void __fastcall UnregisterAllCallbacks(void);
	
private:
	System::UnicodeString FChannelId;
	System::UnicodeString FServerChannelName;
	Generics_collections::TList__1<TDSRestClientCallback*>* FCallbacks;
	bool __fastcall GetConnected(void);
	
public:
	__fastcall TDSRestClientChannel(const System::UnicodeString AChannelId, const System::UnicodeString AServerChannelName, TDSCustomRestConnection* AConnection);
	__fastcall virtual ~TDSRestClientChannel(void);
	void __fastcall RegisterCallback(TDSRestClientCallback* AClientCallback);
	void __fastcall Connect(TDSRestClientCallback* AFirstCallback);
	void __fastcall UnRegisterCallback(TDSRestClientCallback* AClientCallback);
	bool __fastcall Broadcast(Dbxjson::TJSONValue* AMessage);
	void __fastcall DisConnect(void);
	bool __fastcall Notify(const System::UnicodeString AClientId, const System::UnicodeString ACallbackId, Dbxjson::TJSONValue* AMessage);
	__property bool Connected = {read=GetConnected, nodefault};
	__property Classes::TNotifyEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property System::UnicodeString ServerChannelName = {read=FServerChannelName};
	__property System::UnicodeString ChannelId = {read=FChannelId};
};


class PASCALIMPLEMENTATION TDSRestCallbackLoop : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDSRestClientChannel* FClientChannel;
	TDSCustomRestConnection* FConnection;
	Classes::TThread* FThread;
	void __fastcall OnThreadTerminate(System::TObject* ASender);
	bool __fastcall GetStopped(void);
	
public:
	__fastcall TDSRestCallbackLoop(TDSRestClientChannel* AClientChannel, TDSCustomRestConnection* AConnection);
	__fastcall virtual ~TDSRestCallbackLoop(void);
	void __fastcall Callback(Dbxjson::TJSONValue* responseValue, bool &AStatus, bool &AStop);
	void __fastcall Start(TDSRestClientCallback* AFirstCallback);
	void __fastcall Stop(void);
	__property bool Stopped = {read=GetStopped, nodefault};
	__property TDSRestClientChannel* ClientChannel = {read=FClientChannel};
};


typedef System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  TDSRestClientCallbackFunction;
// System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  TDSRestClientCallbackFunction;

class PASCALIMPLEMENTATION TDSRestClientCallback : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCallbackId;
	System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  FClientCallbackFunction;
	// System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  FClientCallbackFunction;
	TDSRestClientChannel* FClientChannel;
	
public:
	__fastcall TDSRestClientCallback(TDSRestClientChannel* AClientChannel, const System::UnicodeString ACallbackId, System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  AClientCallbackFunction);
	__property System::UnicodeString CallbackId = {read=FCallbackId};
	__property System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  ClientCallbackFunction = {read=FClientCallbackFunction};
	// __property System::DelphiInterface<Sysutils::TFunc__3<Dbxjson::TJSONValue*,System::UnicodeString,bool> >  ClientCallbackFunction = ...;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSRestClientCallback(void) { }
	
};


typedef void __fastcall (__closure *TTestConnectionMethod)(void);

class DELPHICLASS TDSRestException;
class PASCALIMPLEMENTATION TDSRestException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall TDSRestException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall TDSRestException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDSRestException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDSRestException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDSRestException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDSRestException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDSRestException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDSRestException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDSRestException(void) { }
	
};


class DELPHICLASS TDSRestProtocolException;
class PASCALIMPLEMENTATION TDSRestProtocolException : public TDSRestException
{
	typedef TDSRestException inherited;
	
private:
	int FStatus;
	System::UnicodeString FResponseText;
	
public:
	__fastcall TDSRestProtocolException(int AStatus, const System::UnicodeString AMessage, const System::UnicodeString AResponseText);
	__property int Status = {read=FStatus, nodefault};
	__property System::UnicodeString ResponseText = {read=FResponseText};
public:
	/* Exception.CreateFmt */ inline __fastcall TDSRestProtocolException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : TDSRestException(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDSRestProtocolException(int Ident)/* overload */ : TDSRestException(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDSRestProtocolException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : TDSRestException(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDSRestProtocolException(const System::UnicodeString Msg, int AHelpContext) : TDSRestException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDSRestProtocolException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : TDSRestException(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDSRestProtocolException(int Ident, int AHelpContext)/* overload */ : TDSRestException(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDSRestProtocolException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : TDSRestException(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDSRestProtocolException(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall (*DSRestLoginDialogProc)(System::TObject* ASender, TDSRestLoginProperties* &LoginProperties, TTestConnectionMethod ATestConnectionMethod);

}	/* namespace Dsclientrest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientrest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientrestHPP
