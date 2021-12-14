// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCommonServer.pas' rev: 22.00

#ifndef DscommonserverHPP
#define DscommonserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXMessageHandlerServer.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXSqlScanner.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <DSCommonTable.hpp>	// Pascal unit
#include <DSPlatform.hpp>	// Pascal unit
#include <DSReflect.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Rtti.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dscommonserver
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClassInfo;
class DELPHICLASS TDSCustomServerClass;
class PASCALIMPLEMENTATION TDSClassInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDSClassInfo(void);
	void __fastcall Close(void);
	
private:
	System::UnicodeString FPackageName;
	System::UnicodeString FClassName;
	System::UnicodeString FUnitName;
	System::UnicodeString FRoleName;
	System::UnicodeString FLifeCycle;
	Dsreflect::TDSClass* FDsClass;
	bool FAdminClass;
	TDSCustomServerClass* FServerClass;
	
public:
	__property System::UnicodeString DSClassName = {read=FClassName, write=FClassName};
	__property Dsreflect::TDSClass* DSClass = {read=FDsClass, write=FDsClass};
	__property System::UnicodeString LifeCycle = {read=FLifeCycle, write=FLifeCycle};
	__property System::UnicodeString PackageName = {read=FPackageName, write=FPackageName};
	__property System::UnicodeString RoleName = {read=FRoleName, write=FRoleName};
	__property bool CustomAdminClass = {read=FAdminClass, write=FAdminClass, nodefault};
	__property TDSCustomServerClass* ServerClass = {read=FServerClass, write=FServerClass};
	__property System::UnicodeString DSUnitName = {read=FUnitName, write=FUnitName};
public:
	/* TObject.Create */ inline __fastcall TDSClassInfo(void) : System::TObject() { }
	
};


class DELPHICLASS TDSConfiguration;
class PASCALIMPLEMENTATION TDSConfiguration : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TDSConfiguration* __fastcall CopyConfiguration(void);
	
protected:
	Dbxcommontable::TDBXTable* __fastcall GetClassTable(void);
	void __fastcall SetClassTable(const Dbxcommontable::TDBXTable* Classes);
	Dbxcommontable::TDBXTable* __fastcall GetMethodTable(void);
	void __fastcall SetMethodTable(const Dbxcommontable::TDBXTable* Methods);
	
private:
	void __fastcall CreateClassTable(void);
	void __fastcall CreateMethodTable(void);
	Dbxcommontable::TDBXTable* FClassTable;
	Dbxcommontable::TDBXTable* FMethodTable;
	
public:
	__property Dbxcommontable::TDBXTable* ClassTable = {read=GetClassTable, write=SetClassTable};
	__property Dbxcommontable::TDBXTable* MethodTable = {read=GetMethodTable, write=SetMethodTable};
public:
	/* TObject.Create */ inline __fastcall TDSConfiguration(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSConfiguration(void) { }
	
};


class DELPHICLASS TDSCustomAdmin;
class DELPHICLASS TDSServerConnectionHandler;
class DELPHICLASS TDSCustomServer;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSCustomAdmin : public Dsplatform::TDBXServerComponent
{
	typedef Dsplatform::TDBXServerComponent inherited;
	
public:
	__fastcall virtual TDSCustomAdmin(void)/* overload */;
	__fastcall virtual TDSCustomAdmin(Classes::TComponent* AOwner)/* overload */;
	virtual System::UnicodeString __fastcall GetDSServerName(void);
	
protected:
	Dbxcommon::TDBXContext* __fastcall GetDBXContext(void);
	void __fastcall SetServerConnection(const TDSServerConnectionHandler* Con);
	TDSCustomServer* FServer;
	TDSServerConnectionHandler* FServerCon;
	
public:
	__property Dbxcommon::TDBXContext* DBXContext = {read=GetDBXContext};
	__property TDSServerConnectionHandler* ServerConnection = {write=SetServerConnection};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSCustomAdmin(void) { }
	
};


class DELPHICLASS TDSMethodInfo;
class PASCALIMPLEMENTATION TDSMethodInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDSMethodInfo(void);
	
protected:
	void __fastcall SetMethodAlias(const System::UnicodeString MethodAlias);
	Dsreflect::TDSMethod* __fastcall GetDSMethod(void);
	
private:
	System::UnicodeString FMethodAlias;
	TDSClassInfo* FClassInfo;
	Dsreflect::TDSMethod* FDsMethod;
	System::UnicodeString FRoleName;
	System::UnicodeString FMethodName;
	System::UnicodeString FSearchName;
	System::TObject* FAuthRole;
	void __fastcall SetAuthRole(System::TObject* ARoleAuth);
	
public:
	__property TDSClassInfo* DSClassInfo = {read=FClassInfo, write=FClassInfo};
	__property System::UnicodeString MethodAlias = {read=FMethodAlias, write=SetMethodAlias};
	__property System::UnicodeString SearchName = {read=FSearchName};
	__property System::UnicodeString DSMethodName = {read=FMethodName, write=FMethodName};
	__property System::UnicodeString RoleName = {read=FRoleName, write=FRoleName};
	__property Dsreflect::TDSMethod* DSMethod = {read=GetDSMethod, write=FDsMethod};
	__property System::TObject* AuthRole = {read=FAuthRole, write=SetAuthRole};
public:
	/* TObject.Create */ inline __fastcall TDSMethodInfo(void) : System::TObject() { }
	
};


class DELPHICLASS DSAdmin;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI DSAdmin : public TDSCustomAdmin
{
	typedef TDSCustomAdmin inherited;
	
public:
	__fastcall virtual DSAdmin(Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~DSAdmin(void);
	System::UnicodeString __fastcall GetPlatformName(void);
	bool __fastcall ClearResources(void);
	Dbxcommon::TDBXReader* __fastcall FindPackages(void);
	Dbxcommon::TDBXReader* __fastcall FindClasses(const System::UnicodeString PackageName, const System::UnicodeString ClassPattern);
	Dbxcommon::TDBXReader* __fastcall FindMethods(const System::UnicodeString PackageName, const System::UnicodeString ClassPattern, const System::UnicodeString MethodPattern);
	void __fastcall CreateServerClasses(const Dbxcommon::TDBXReader* ClassReader);
	void __fastcall DropServerClasses(const Dbxcommon::TDBXReader* ClassReader);
	void __fastcall CreateServerMethods(const Dbxcommon::TDBXReader* MethodReader);
	void __fastcall DropServerMethods(const Dbxcommon::TDBXReader* MethodReader);
	Dbxcommon::TDBXReader* __fastcall GetServerClasses(void);
	Dbxjson::TJSONArray* __fastcall ListClasses(void);
	Dbxjson::TJSONObject* __fastcall DescribeClass(const System::UnicodeString ClassName);
	Dbxjson::TJSONArray* __fastcall ListMethods(const System::UnicodeString ClassName);
	Dbxjson::TJSONObject* __fastcall DescribeMethod(const System::UnicodeString ServerMethodName);
	Dbxcommon::TDBXReader* __fastcall GetServerMethods(void);
	Dbxcommon::TDBXReader* __fastcall GetServerMethodParameters(void);
	Dbxcommon::TDBXConnection* __fastcall GetConnection(const System::UnicodeString NewConName);
	Dbxcommon::TDBXReader* __fastcall GetDatabaseConnectionProperties(void);
	
private:
	Dbxcommon::TDBXConnection* FCon;
	System::UnicodeString FConName;
};


class DELPHICLASS TDSServerComponent;
class DELPHICLASS TDSConnectEventObject;
class DELPHICLASS TDSPrepareEventObject;
class DELPHICLASS TDSErrorEventObject;
class DELPHICLASS TDSServerMethodProvider;
class PASCALIMPLEMENTATION TDSCustomServer : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
public:
	__fastcall virtual TDSCustomServer(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSCustomServer(void);
	void __fastcall GetServerClassList(const Dbxplatform::TDBXArrayList* List);
	void __fastcall RemoveServerComponent(const TDSServerComponent* AComponent);
	void __fastcall AddServerComponent(const TDSServerComponent* AComponent);
	virtual void __fastcall Stop(void);
	virtual void __fastcall Start(void);
	void __fastcall GetServerClasses(const TDSServerConnectionHandler* ServerCon, const Dscommontable::TDSClassEntity* Classes)/* overload */;
	void __fastcall GetServerClasses(const Dbxjson::TJSONArray* Container)/* overload */;
	void __fastcall GetServerClass(const System::UnicodeString ClassName, const Dbxjson::TJSONObject* Container);
	void __fastcall GetServerMethods(const System::UnicodeString ClassName, const Dbxjson::TJSONArray* Container)/* overload */;
	void __fastcall GetServerMethod(const System::UnicodeString ServerMethodName, const Dbxjson::TJSONObject* Container);
	void __fastcall CreateServerClasses(const Dscommontable::TDSClassEntity* Classes);
	void __fastcall DropServerClasses(const Dscommontable::TDSClassEntity* Classes);
	void __fastcall GetServerMethods(const TDSServerConnectionHandler* ServerCon, const Dscommontable::TDSMethodEntity* Methods)/* overload */;
	void __fastcall GetServerMethodParameters(const TDSServerConnectionHandler* ServerCon, const Dscommonproxy::TDSMethodParametersEntity* Parameters);
	void __fastcall CreateServerMethods(const Dscommontable::TDSMethodEntity* Methods);
	void __fastcall DropServerMethods(const Dscommontable::TDSMethodEntity* Methods);
	virtual Dbxcommon::TDBXConnection* __fastcall GetServerConnection(const Dbxcommon::TDBXProperties* Properties) = 0 ;
	
protected:
	static TDSCustomServer* __fastcall FindCustomServer(const System::UnicodeString Name);
	Dbxcommontable::TDBXTable* __fastcall GetClassTable(void);
	void __fastcall SetClassTable(const Dbxcommontable::TDBXTable* Classes);
	Dbxcommontable::TDBXTable* __fastcall GetMethodTable(void);
	void __fastcall SetMethodTable(const Dbxcommontable::TDBXTable* Methods);
	virtual void __fastcall Connecting(const TDSConnectEventObject* ConnectEventObject) = 0 ;
	virtual void __fastcall Disconnecting(const TDSConnectEventObject* ConnectEventObject) = 0 ;
	virtual void __fastcall Preparing(const TDSPrepareEventObject* PrepareEventObject) = 0 ;
	virtual void __fastcall Error(const TDSErrorEventObject* ErrorEventObject) = 0 ;
	
private:
	void __fastcall StartTransports(void);
	void __fastcall StopTransports(void);
	
protected:
	Dbxcommon::TDBXContext* FDbxContext;
	
private:
	bool FStarted;
	TDSConfiguration* FConfig;
	TDSServerMethodProvider* FServerMethodProvider;
	Dbxplatform::TDBXArrayList* FComponentList;
	bool FHideDSAdmin;
	
public:
	__property bool Started = {read=FStarted, nodefault};
	__property Dbxcommontable::TDBXTable* ClassTable = {read=GetClassTable, write=SetClassTable};
	__property Dbxcommontable::TDBXTable* MethodTable = {read=GetMethodTable, write=SetMethodTable};
	__property TDSServerMethodProvider* ServerMethodProvider = {read=FServerMethodProvider};
	__property bool HideDSAdmin = {read=FHideDSAdmin, write=FHideDSAdmin, nodefault};
	__property Dbxcommon::TDBXContext* DbxContext = {read=FDbxContext};
};


class DELPHICLASS TDSDefaultCommandHandler;
class DELPHICLASS TDSServerMethod;
class PASCALIMPLEMENTATION TDSDefaultCommandHandler : public Dbxmessagehandlercommon::TDBXCommandHandler
{
	typedef Dbxmessagehandlercommon::TDBXCommandHandler inherited;
	
public:
	__fastcall TDSDefaultCommandHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxmessagehandlercommon::TDBXCommandHandler* ANextHandler);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	__fastcall virtual ~TDSDefaultCommandHandler(void);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
private:
	TDSServerConnectionHandler* FServerCon;
	TDSServerMethod* FServerMethod;
	Dbxcommontable::TDBXActiveTableReaderList* FActiveStreamerRowList;
	Dbxmessagehandlercommon::TDBXCommandHandler* FNextHandler;
	
public:
	__property TDSServerConnectionHandler* ServerCon = {write=FServerCon};
};


class DELPHICLASS TDSDefaultDatabaseConnectionHandler;
class PASCALIMPLEMENTATION TDSDefaultDatabaseConnectionHandler : public Dbxmessagehandlercommon::TDBXConnectionHandler
{
	typedef Dbxmessagehandlercommon::TDBXConnectionHandler inherited;
	
public:
	__fastcall TDSDefaultDatabaseConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const TDSServerConnectionHandler* Con, const Dbxmessagehandlercommon::TDBXConnectionHandler* ANextHandler);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* ErrorMessage);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual void __fastcall DbxConnect(const Dbxmessagehandlercommon::TDBXConnectMessage* Message);
	virtual void __fastcall DbxDisconnect(const Dbxmessagehandlercommon::TDBXDisconnectMessage* Message);
	virtual void __fastcall DbxTxBegin(const Dbxmessagehandlercommon::TDBXTxBeginMessage* Message);
	virtual void __fastcall DbxTxEnd(const Dbxmessagehandlercommon::TDBXTxEndMessage* Message);
	virtual void __fastcall DbxVendorProperty(const Dbxmessagehandlercommon::TDBXVendorPropertyMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void);
	
private:
	TDSServerConnectionHandler* FServerCon;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
public:
	/* TDBXCommandHandler.Destroy */ inline __fastcall virtual ~TDSDefaultDatabaseConnectionHandler(void) { }
	
};


class DELPHICLASS TDSEventObject;
class DELPHICLASS TDSServerTransport;
class PASCALIMPLEMENTATION TDSEventObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDSEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	
private:
	Dbxcommon::TDBXContext* FDbxContext;
	TDSServerTransport* FTransport;
	TDSCustomServer* FServer;
	Dbxcommon::TDBXConnection* FDbxConnection;
	TDSServerConnectionHandler* FServerConnectionHandler;
	
public:
	__property Dbxcommon::TDBXContext* DbxContext = {read=FDbxContext};
	__property TDSServerTransport* Transport = {read=FTransport};
	__property TDSCustomServer* Server = {read=FServer};
	__property Dbxcommon::TDBXConnection* DbxConnection = {read=FDbxConnection};
	__property TDSServerConnectionHandler* ServerConnectionHandler = {read=FServerConnectionHandler};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSEventObject(void) { }
	
};


class PASCALIMPLEMENTATION TDSErrorEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSErrorEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	
private:
	Sysutils::Exception* FError;
	
public:
	__property Sysutils::Exception* Error = {read=FError, write=FError};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSErrorEventObject(void) { }
	
};


class DELPHICLASS TDSDestroyInstanceEventObject;
class PASCALIMPLEMENTATION TDSDestroyInstanceEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSDestroyInstanceEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	
private:
	System::TObject* FServerClassInstance;
	
public:
	__property System::TObject* ServerClassInstance = {read=FServerClassInstance, write=FServerClassInstance};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSDestroyInstanceEventObject(void) { }
	
};


class DELPHICLASS TDSCreateInstanceEventObject;
class PASCALIMPLEMENTATION TDSCreateInstanceEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSCreateInstanceEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	
private:
	System::TObject* FServerClassInstance;
	
public:
	__property System::TObject* ServerClassInstance = {read=FServerClassInstance, write=FServerClassInstance};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSCreateInstanceEventObject(void) { }
	
};


class PASCALIMPLEMENTATION TDSConnectEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSConnectEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxtransport::TDBXChannelInfo* AChannelInfo, const Dbxcommon::TDBXConnection* ADbxConnection, const Dbxcommon::TDBXProperties* AConnectProperties);
	
private:
	Dbxcommon::TDBXProperties* FConnectProperties;
	Dbxtransport::TDBXChannelInfo* FChannelInfo;
	
public:
	__property Dbxcommon::TDBXProperties* ConnectProperties = {read=FConnectProperties, write=FConnectProperties};
	__property Dbxtransport::TDBXChannelInfo* ChannelInfo = {read=FChannelInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSConnectEventObject(void) { }
	
};


class DELPHICLASS TDSInstanceProvider;
class PASCALIMPLEMENTATION TDSInstanceProvider : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::TObject* __fastcall GetInstance(const TDSServerConnectionHandler* ServerCon, const TDSClassInfo* ClassInfo) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDSInstanceProvider(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSInstanceProvider(void) { }
	
};


class DELPHICLASS TDSHashtableInstanceProvider;
class DELPHICLASS TInstanceProviderItem;
class PASCALIMPLEMENTATION TDSHashtableInstanceProvider : public TDSInstanceProvider
{
	typedef TDSInstanceProvider inherited;
	
public:
	__fastcall TDSHashtableInstanceProvider(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	__fastcall virtual ~TDSHashtableInstanceProvider(void);
	virtual System::TObject* __fastcall GetInstance(const TDSServerConnectionHandler* ServerCon, const TDSClassInfo* ClassInfo);
	
private:
	Dbxplatform::TDBXObjectStore* FInstanceTable;
	TInstanceProviderItem* FList;
	TDSDestroyInstanceEventObject* FDestroyInstanceEventObject;
};


class DELPHICLASS DSMetadata;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI DSMetadata : public TDSCustomAdmin
{
	typedef TDSCustomAdmin inherited;
	
public:
	__fastcall virtual DSMetadata(Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual DSMetadata(void)/* overload */;
	Dbxcommon::TDBXReader* __fastcall GetProcedures(const System::UnicodeString ProcedureNamePattern, const System::UnicodeString ProcedureType);
	Dbxcommon::TDBXReader* __fastcall GetProcedureParameters(const System::UnicodeString ProcedureNamePattern);
	Dbxcommon::TDBXReader* __fastcall GetDatabase(void);
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~DSMetadata(void) { }
	
};


class DELPHICLASS TDSServerMethodEventObject;
class PASCALIMPLEMENTATION TDSServerMethodEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSServerMethodEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	
private:
	System::UnicodeString FMethodAlias;
	TDSCustomServerClass* FServerClass;
	System::TObject* FMethodInstance;
	
public:
	__property TDSCustomServerClass* ServerClass = {read=FServerClass, write=FServerClass};
	__property System::UnicodeString MethodAlias = {read=FMethodAlias};
	__property System::TObject* MethodInstance = {read=FMethodInstance};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSServerMethodEventObject(void) { }
	
};


class DELPHICLASS TDSServerMethodUserEventObject;
class PASCALIMPLEMENTATION TDSServerMethodUserEventObject : public TDSServerMethodEventObject
{
	typedef TDSServerMethodEventObject inherited;
	
public:
	__fastcall TDSServerMethodUserEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
	__fastcall virtual ~TDSServerMethodUserEventObject(void);
	
private:
	Classes::TStrings* FUserRoles;
	Classes::TStrings* FReadOnlyUserRoles;
	Classes::TStrings* FReadOnlyAuthorizedRoles;
	Classes::TStrings* FReadOnlyDeniedRoles;
	Classes::TStrings* FAuthorizedRoles;
	Classes::TStrings* FDeniedRoles;
	System::UnicodeString FUserName;
	Classes::TStrings* __fastcall GetUserRoles(void);
	Classes::TStrings* __fastcall GetAuthorizedRoles(void);
	Classes::TStrings* __fastcall GetDeniedRoles(void);
	System::UnicodeString __fastcall GetUserName(void);
	
public:
	__property System::UnicodeString UserName = {read=GetUserName};
	__property Classes::TStrings* UserRoles = {read=GetUserRoles};
	__property Classes::TStrings* AuthorizedRoles = {read=GetAuthorizedRoles};
	__property Classes::TStrings* DeniedRoles = {read=GetDeniedRoles};
};


class PASCALIMPLEMENTATION TDSPrepareEventObject : public TDSServerMethodUserEventObject
{
	typedef TDSServerMethodUserEventObject inherited;
	
public:
	/* TDSServerMethodUserEventObject.Create */ inline __fastcall TDSPrepareEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection) : TDSServerMethodUserEventObject(ADbxContext, AServer, ATransport, ADbxConnection) { }
	/* TDSServerMethodUserEventObject.Destroy */ inline __fastcall virtual ~TDSPrepareEventObject(void) { }
	
};


class DELPHICLASS TDSAuthorizeEventObject;
class PASCALIMPLEMENTATION TDSAuthorizeEventObject : public TDSServerMethodUserEventObject
{
	typedef TDSServerMethodUserEventObject inherited;
	
public:
	/* TDSServerMethodUserEventObject.Create */ inline __fastcall TDSAuthorizeEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection) : TDSServerMethodUserEventObject(ADbxContext, AServer, ATransport, ADbxConnection) { }
	/* TDSServerMethodUserEventObject.Destroy */ inline __fastcall virtual ~TDSAuthorizeEventObject(void) { }
	
};


class DELPHICLASS TDSAuthenticateEventObject;
class PASCALIMPLEMENTATION TDSAuthenticateEventObject : public TDSEventObject
{
	typedef TDSEventObject inherited;
	
public:
	__fastcall TDSAuthenticateEventObject(const Dbxcommon::TDBXContext* ADbxContext, const TDSCustomServer* AServer, const TDSServerTransport* ATransport, const Dbxcommon::TDBXConnection* ADbxConnection);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSAuthenticateEventObject(void) { }
	
};


class DELPHICLASS TDSServerCommand;
class DELPHICLASS TDSServerConnection;
class PASCALIMPLEMENTATION TDSServerCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
public:
	__fastcall TDSServerCommand(const Dbxcommon::TDBXContext* Context, const TDSServerConnection* AServerCon, const TDSServerConnectionHandler* AConHandler);
	
protected:
	virtual void __fastcall DerivedOpen(void);
	virtual Dbxcommon::TDBXRow* __fastcall CreateParameterRow(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual void __fastcall SetRowSetSize(const __int64 RowSetSize);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	
private:
	void __fastcall Execute(void);
	TDSServerConnectionHandler* FConHandler;
	TDSServerConnection* FServerCon;
	__int64 FRowsAffected;
	Dbxcommon::TDBXParameterList* FServerParameterList;
public:
	/* TDBXCommand.Destroy */ inline __fastcall virtual ~TDSServerCommand(void) { }
	
};


class DELPHICLASS TDSServerCommandHandler;
class PASCALIMPLEMENTATION TDSServerCommandHandler : public Dbxmessagehandlercommon::TDBXCommandHandler
{
	typedef Dbxmessagehandlercommon::TDBXCommandHandler inherited;
	
public:
	__fastcall TDSServerCommandHandler(const Dbxcommon::TDBXContext* ADbxContext);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
public:
	/* TDBXCommandHandler.Destroy */ inline __fastcall virtual ~TDSServerCommandHandler(void) { }
	
};


class PASCALIMPLEMENTATION TDSServerComponent : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
public:
	__fastcall virtual TDSServerComponent(Classes::TComponent* AOwner);
	virtual void __fastcall Start(void) = 0 ;
	virtual void __fastcall Stop(void) = 0 ;
	
protected:
	virtual TDSCustomServer* __fastcall GetServer(void);
	virtual void __fastcall SetServer(const TDSCustomServer* AServer);
	
private:
	TDSCustomServer* FServer;
	
public:
	__property TDSCustomServer* Server = {read=GetServer, write=SetServer};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSServerComponent(void) { }
	
};


class PASCALIMPLEMENTATION TDSCustomServerClass : public TDSServerComponent
{
	typedef TDSServerComponent inherited;
	
public:
	__fastcall virtual TDSCustomServerClass(Classes::TComponent* AOwner);
	
protected:
	virtual Dsreflect::TDSClass* __fastcall GetDSClass(void) = 0 ;
	virtual void __fastcall CreateInstance(const TDSCreateInstanceEventObject* CreateInstanceEventObject) = 0 ;
	virtual void __fastcall DestroyInstance(const TDSDestroyInstanceEventObject* DestroyInstanceEventObject) = 0 ;
	virtual void __fastcall Preparing(const TDSPrepareEventObject* PrepareEventObject) = 0 ;
	
private:
	System::UnicodeString FLifeCycle;
	System::UnicodeString FRoleName;
	
public:
	__property System::UnicodeString LifeCycle = {read=FLifeCycle, write=FLifeCycle};
	__property System::UnicodeString RoleName = {read=FRoleName, write=FRoleName};
	
protected:
	__property Dsreflect::TDSClass* DSClass = {read=GetDSClass};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSCustomServerClass(void) { }
	
};


class PASCALIMPLEMENTATION TDSServerConnection : public Dbxcommon::TDBXConnection
{
	typedef Dbxcommon::TDBXConnection inherited;
	
public:
	__fastcall TDSServerConnection(const Dbxcommon::TDBXConnectionBuilder* Builder);
	__fastcall virtual ~TDSServerConnection(void);
	void __fastcall InitSharedConnectionHandler(const TDSServerConnectionHandler* ASharedHandler);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateCommand(void)/* overload */;
	virtual void __fastcall Commit(const Dbxcommon::TDBXTransaction* Transaction);
	virtual void __fastcall Rollback(const Dbxcommon::TDBXTransaction* Transaction);
	
protected:
	virtual void __fastcall DerivedOpen(void);
	virtual Dbxcommon::TDBXTransaction* __fastcall CreateAndBeginTransaction(const int IsolationLevel);
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	virtual void __fastcall DerivedClose(void);
	
private:
	TDSServerConnectionHandler* FConHandler;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
	Dbxmessagehandlercommon::TDBXPrepareMessage* FPrepareMessage;
	Dbxmessagehandlercommon::TDBXExecuteMessage* FExecuteMessage;
	Dbxmessagehandlercommon::TDBXCommandCloseMessage* FCommandCloseMessage;
	Dbxmessagehandlercommon::TDBXConnectMessage* FConnectMessage;
	Dbxmessagehandlercommon::TDBXDisconnectMessage* FDisConnectMessage;
	Dbxmessagehandlercommon::TDBXNextResultMessage* FNextResultMessage;
	Dbxmessagehandlercommon::TDBXTxBeginMessage* FTxBeginMessage;
	Dbxmessagehandlercommon::TDBXTxEndMessage* FTxEndMessage;
	
public:
	__property TDSServerConnectionHandler* ServerConnectionHandler = {read=FConHandler};
	__property Dbxmessagehandlercommon::TDBXPrepareMessage* PrepareMessage = {read=FPrepareMessage};
	__property Dbxmessagehandlercommon::TDBXExecuteMessage* ExecuteMessage = {read=FExecuteMessage};
	__property Dbxmessagehandlercommon::TDBXCommandCloseMessage* CommandCloseMessage = {read=FCommandCloseMessage};
	__property Dbxmessagehandlercommon::TDBXNextResultMessage* NextResultMessage = {read=FNextResultMessage};
};


class PASCALIMPLEMENTATION TDSServerConnectionHandler : public Dbxmessagehandlercommon::TDBXConnectionHandler
{
	typedef Dbxmessagehandlercommon::TDBXConnectionHandler inherited;
	
public:
	__fastcall TDSServerConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const Dbxmessagehandlercommon::TDBXConnectionHandler* ANextHandler, const Dbxtransport::TDbxChannel* AChannel);
	__fastcall virtual ~TDSServerConnectionHandler(void);
	virtual bool __fastcall ClearResources(void);
	void __fastcall InitSharedConnectionHandler(const TDSServerConnectionHandler* ASharedHandler);
	System::TObject* __fastcall CreateInstance(const TDSCustomServerClass* ServerClass, const Dsreflect::TDSClass* DsClass);
	void __fastcall DestroyInstance(const TDSCustomServerClass* ServerClass, const System::TObject* Instance);
	void __fastcall PrepareServerMethod(const System::UnicodeString MethodAlias, const TDSServerMethod* ServerMethod, const System::UnicodeString UserName, const Classes::TStrings* UserRoles, const Classes::TStrings* AuthorizedRoles, const Classes::TStrings* DeniedRoles);
	TDSAuthorizeEventObject* __fastcall GetAuthorizeMethodEventObject(const TDSServerMethod* ServerMethod, const System::UnicodeString UserName, const Classes::TStrings* UserRoles, const Classes::TStrings* AuthorizedRoles, const Classes::TStrings* DeniedRoles);
	bool __fastcall UsesDbxParameters(void);
	virtual void __fastcall DbxOpen(const Dbxmessagehandlercommon::TDBXOpenMessage* Message);
	System::TObject* __fastcall GetInstance(const TDSClassInfo* ClassInfo);
	Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireNewCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message, const Dbxmessagehandlercommon::TDBXCommandHandler* InNextCommandHandler);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	void __fastcall DbxError(const Sysutils::Exception* Ex);
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
	
protected:
	void __fastcall SetServerConnection(const TDSServerConnection* AServerCon);
	Dbxsqlscanner::TDBXSqlScanner* __fastcall GetSQLScanner(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	void __fastcall SetDbxConnection(const Dbxcommon::TDBXConnection* Con);
	virtual void __fastcall SetTransport(const TDSServerTransport* Transport);
	
private:
	void __fastcall FetchServerConnection(void);
	int __fastcall AddCommandHandler(const Dbxmessagehandlercommon::TDBXCommandHandler* Handler);
	void __fastcall FreeCommandHandler(const Dbxmessagehandlercommon::TDBXCommandHandler* Handler);
	Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall GetCommandHandler(const int Handle);
	int __fastcall IsCall(const System::UnicodeString CommandText);
	System::UnicodeString __fastcall FirstToken(const System::UnicodeString CommandText);
	System::UnicodeString __fastcall ScanMetaDataParameter(const System::UnicodeString InCommandText);
	bool __fastcall ConvertMetaDataCommandToServerMethodHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	void __fastcall DestroyEventObjects(void);
	void __fastcall CreateEventObjects(void);
	void __fastcall InitDatabaseConnectionHandler(void);
	Dbxcommon::TDBXProperties* FConProperties;
	int FConHandle;
	TDSCustomServer* FServer;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FDatabaseConnectionHandler;
	bool FHasServerConnection;
	TDSHashtableInstanceProvider* FInstanceProvider;
	Dbxmessagehandlercommon::TDBXCommandHandlerArray FCommandHandlers;
	int FLastCommandHandler;
	Dbxmessagehandlercommon::TDBXConnectionHandler* FNextHandler;
	Dbxmessagehandlercommon::TDBXErrorMessage* FErrorMessage;
	Dbxsqlscanner::TDBXSqlScanner* FScanner;
	Dbxcommon::TDBXConnection* FDbxConnection;
	TDSServerTransport* FTransport;
	Dbxtransport::TDbxChannel* FChannel;
	TDSCreateInstanceEventObject* FCreateInstanceEventObject;
	TDSDestroyInstanceEventObject* FDestroyInstanceEventObject;
	TDSPrepareEventObject* FPrepareEventObject;
	TDSAuthenticateEventObject* FAuthenticateEventObject;
	TDSAuthorizeEventObject* FAuthorizeEventObject;
	TDSConnectEventObject* FConnectEventObject;
	TDSErrorEventObject* FErrorEventObject;
	TDSServerConnection* FServerCon;
	TDSServerConnectionHandler* FSharedConHandler;
	void __fastcall InitServerMethodEventObject(TDSServerMethodUserEventObject* EventObject, const System::UnicodeString MethodAlias, const TDSServerMethod* ServerMethod, const System::UnicodeString UserName, const Classes::TStrings* UserRoles, const Classes::TStrings* AuthorizedRoles, const Classes::TStrings* DeniedRoles);
	
public:
	__property Dbxtransport::TDbxChannel* Channel = {read=FChannel};
	__property TDSServerConnection* ServerConnection = {write=SetServerConnection};
	__property Dbxsqlscanner::TDBXSqlScanner* SQLScanner = {read=GetSQLScanner};
	__property Dbxcommon::TDBXProperties* ConProperties = {read=FConProperties};
	__property Dbxcommon::TDBXConnection* DbxConnection = {read=FDbxConnection, write=SetDbxConnection};
	__property TDSServerTransport* Transport = {write=SetTransport};
	__property int ConHandle = {read=FConHandle, write=FConHandle, nodefault};
	__property TDSCustomServer* Server = {read=FServer, write=FServer};
	__property TDSCreateInstanceEventObject* CreateInstanceEventObject = {read=FCreateInstanceEventObject, write=FCreateInstanceEventObject};
	__property TDSAuthenticateEventObject* AuthenticateEventObject = {read=FAuthenticateEventObject, write=FAuthenticateEventObject};
};


class DELPHICLASS TDSServerHelp;
class PASCALIMPLEMENTATION TDSServerHelp : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static TDSServerConnectionHandler* __fastcall GetServerConnectionHandler(const TDSServerConnection* Con);
public:
	/* TObject.Create */ inline __fastcall TDSServerHelp(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSServerHelp(void) { }
	
};


class PASCALIMPLEMENTATION TDSServerMethod : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDSServerMethod(void);
	__fastcall virtual ~TDSServerMethod(void);
	void __fastcall Invoke(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual bool __fastcall ClearResources(void);
	
protected:
	void __fastcall SetServerSideCommand(const bool ServerSide);
	void __fastcall SetParameters(const Dbxmessagehandlerserver::TDBXServerParameterList* Parameters);
	
private:
	TDSServerConnectionHandler* FServerConnection;
	Dsreflect::TDSMethod* FMethod;
	TDSMethodInfo* FMethodInfo;
	Dsreflect::TDSMethodValues* FMethodValues;
	TDSCustomServerClass* FServerClass;
	System::TObject* FMethodInstance;
	Dbxmessagehandlerserver::TDBXServerParameterList* FParameters;
	Dbxcommon::TDBXParameterArray FDbxParameters;
	Dbxcommon::TDBXParameter* FReturnParameter;
	bool FHasOutOrReturnParameters;
	Dbxcommontable::TDBXStreamerRow* FRow;
	
public:
	__property Dbxcommon::TDBXParameter* ReturnParameter = {read=FReturnParameter};
	__property Dbxmessagehandlerserver::TDBXServerParameterList* Parameters = {read=FParameters, write=SetParameters};
	__property Dsreflect::TDSMethod* Method = {read=FMethod, write=FMethod};
	__property System::TObject* MethodInstance = {read=FMethodInstance, write=FMethodInstance};
	__property Dsreflect::TDSMethodValues* MethodValues = {write=FMethodValues};
	__property bool ServerSideCommand = {write=SetServerSideCommand, nodefault};
	__property Dbxcommon::TDBXParameter* ReturnValue = {write=FReturnParameter};
	__property TDSServerConnectionHandler* ServerConnection = {write=FServerConnection};
	__property bool HasOutOrReturnParameters = {read=FHasOutOrReturnParameters, write=FHasOutOrReturnParameters, nodefault};
	__property Dbxcommontable::TDBXStreamerRow* Row = {write=FRow};
	__property TDSCustomServerClass* ServerClass = {read=FServerClass, write=FServerClass};
	__property TDSMethodInfo* MethodInfo = {read=FMethodInfo, write=FMethodInfo};
};


class DELPHICLASS TDSServerMethodCommandHandler;
class PASCALIMPLEMENTATION TDSServerMethodCommandHandler : public Dbxmessagehandlercommon::TDBXCommandHandler
{
	typedef Dbxmessagehandlercommon::TDBXCommandHandler inherited;
	
public:
	__fastcall TDSServerMethodCommandHandler(const Dbxcommon::TDBXContext* ADbxContext, const TDSServerConnectionHandler* AServerCon, const Dbxmessagehandlercommon::TDBXCommandHandler* ANextHandler);
	__fastcall virtual ~TDSServerMethodCommandHandler(void);
	virtual bool __fastcall ClearResources(void);
	virtual void __fastcall DbxExecute(const Dbxmessagehandlercommon::TDBXExecuteMessage* Message);
	virtual void __fastcall DbxPrepare(const Dbxmessagehandlercommon::TDBXPrepareMessage* Message);
	virtual void __fastcall DbxNextResult(const Dbxmessagehandlercommon::TDBXNextResultMessage* Message);
	virtual void __fastcall DbxNext(const Dbxmessagehandlercommon::TDBXNextMessage* Message);
	virtual void __fastcall DbxMoreBlob(const Dbxmessagehandlercommon::TDBXMoreBlobMessage* Message);
	virtual void __fastcall DbxCommandClose(const Dbxmessagehandlercommon::TDBXCommandCloseMessage* Message);
	virtual void __fastcall DbxReaderClose(const Dbxmessagehandlercommon::TDBXReaderCloseMessage* Message);
	virtual void __fastcall DbxErrorMessage(const Dbxmessagehandlercommon::TDBXErrorMessage* Message);
	
private:
	void __fastcall DestroyInstance(void);
	void __fastcall DestroyServerMethod(void);
	void __fastcall InitInvocationLifeCycle(void);
	void __fastcall DestroyInstanceIfNotNeeded(void);
	TDSServerConnectionHandler* FServerCon;
	TDSServerMethod* FServerMethod;
	Dbxmessagehandlercommon::TDBXCommandHandler* FNextHandler;
	bool FHasInvocationLifeCycle;
	bool FHasExecuted;
	
public:
	__property TDSServerConnectionHandler* ServerConnection = {write=FServerCon};
};


class PASCALIMPLEMENTATION TDSServerMethodProvider : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDSServerMethodProvider(void);
	__fastcall virtual ~TDSServerMethodProvider(void);
	TDSClassInfo* __fastcall GetClassInfo(const System::UnicodeString ClassName);
	void __fastcall GetServerClasses(const TDSServerConnectionHandler* ServerCon, const Dscommontable::TDSClassEntity* Classes)/* overload */;
	void __fastcall GetServerClasses(const Dbxjson::TJSONArray* Container)/* overload */;
	void __fastcall GetServerClass(const System::UnicodeString ClassName, const Dbxjson::TJSONObject* Container);
	void __fastcall AddServerClass(const TDSClassInfo* ClassInfo);
	void __fastcall DropServerClass(const System::UnicodeString ServerClassName);
	void __fastcall CreateServerMethod(const TDSClassInfo* ClassInfo, const TDSMethodInfo* MethodInfo, const Rtti::TRttiType* typeCtx, const System::TObject* ClassAuthRole);
	void __fastcall DropSeverMethod(const System::UnicodeString MethodAlias);
	void __fastcall GetServerMethods(const TDSServerConnectionHandler* ServerCon, const Dscommontable::TDSMethodEntity* Methods)/* overload */;
	void __fastcall GetServerMethods(const System::UnicodeString ClassName, const Dbxjson::TJSONArray* Container)/* overload */;
	void __fastcall GetServerMethod(const System::UnicodeString ServerMethodName, const Dbxjson::TJSONObject* Container);
	void __fastcall GetServerMethodParameters(const TDSServerConnectionHandler* ServerCon, const Dscommonproxy::TDSMethodParametersEntity* Parameters)/* overload */;
	void __fastcall GetServerMethodParameters(const System::UnicodeString SearchName, const Dbxjson::TJSONObject* Container)/* overload */;
	void __fastcall GetProcedures(const TDSServerConnectionHandler* ServerCon, const System::UnicodeString ProcedureNamePattern, const System::UnicodeString ProcedureTypePattern, const Dscommontable::TDSProcedureEntity* Procedures);
	void __fastcall GetProcedureParameters(const TDSServerConnectionHandler* ServerCon, const System::UnicodeString SchemaPattern, const System::UnicodeString MethodPattern, const Dscommontable::TDSProcedureParametersEntity* ProcedureParameters);
	void __fastcall UpdateConfiguration(const TDSConfiguration* Config);
	System::TObject* __fastcall GetServerMethodInstance(const TDSServerConnectionHandler* ServerCon, const TDSMethodInfo* MethodInfo);
	bool __fastcall HasServerMethod(const System::UnicodeString MethodName);
	TDSServerMethod* __fastcall PrepareMethod(const TDSServerConnectionHandler* Con, const Dbxmessagehandlercommon::TDBXCommandMessage* Message, const Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerRowList, const Dbxcommontable::TDBXStreamerRow* InRow);
	void __fastcall Open(void);
	void __fastcall Close(void);
	
private:
	bool __fastcall IsCallableMethod(const Dsreflect::TDSMethod* Method);
	System::UnicodeString __fastcall CreateMethodAlias(const Dsreflect::TDSMethod* MethodClass);
	void __fastcall AddAllMethods(Rtti::TRttiContext ARTTICtx, const TDSClassInfo* ClassInfo);
	TDSClassInfo* __fastcall AddBuiltinMethods(Rtti::TRttiContext ARTTICtx, const System::UnicodeString PackageName, const System::UnicodeString UnitName, const System::UnicodeString ClassName, const bool AdminClass);
	void __fastcall AddRegisteredServerClasses(Rtti::TRttiContext ARttiContext);
	void __fastcall DropServerMethod(const TDSMethodInfo* MethodInfo, const int Index);
	void __fastcall InsertServerMethodParameter(const TDSMethodInfo* MethodInfo, const Dscommonproxy::TDSMethodParametersEntity* Parameters);
	System::UnicodeString __fastcall GetParameterMode(const Dsreflect::TDSClass* ParameterClass);
	void __fastcall AddParameter(const TDSServerConnectionHandler* ServerCon, const Dsreflect::TDSClass* Parameter, const System::UnicodeString ParameterName, const System::UnicodeString SchemaName, const System::UnicodeString ProcedureName, const int ParamIndex, const Dscommontable::TDSProcedureParametersEntity* ProcedureParameters);
	void __fastcall CheckConfiguration(const TDSConfiguration* Config);
	void __fastcall ProcessConfiguration(const TDSConfiguration* Config);
	void __fastcall UnknownLifeCycle(const System::UnicodeString LifeCycle);
	System::TObject* __fastcall GetServerInstance(const TDSServerConnectionHandler* ServerCon, const TDSClassInfo* ClassInfo);
	int __fastcall GetDbxParameterDirection(const Dsreflect::TDSClass* DsClass);
	Dbxcommon::TDBXParameter* __fastcall CreateServerParameter(const TDSServerConnectionHandler* Con, const Dsreflect::TDSClass* DsClass, const Dbxcommon::TDBXRow* DbxRow);
	void __fastcall PrepareParameters(const TDSServerConnectionHandler* Con, const TDSMethodInfo* MethodInfo, const TDSServerMethod* ServerMethod, const Dbxcommontable::TDBXActiveTableReaderItem* Item);
	System::TObject* __fastcall GetAuthRole(const System::DynamicArray<System::TCustomAttribute*> attrs, const System::TObject* defValue = (System::TObject*)(0x0));
	TDSConfiguration* FConfig;
	bool FOpen;
	Dbxplatform::TDBXObjectStore* FPackageTable;
	Dbxplatform::TDBXObjectStore* FClassTable;
	Classes::TStringList* FClassList;
	Dbxplatform::TDBXObjectStore* FMethodTable;
	Classes::TStringList* FMethodSearchNameList;
	Dbxplatform::TDBXObjectStore* FStreamerTable;
	TDSHashtableInstanceProvider* FServerInstanceProvider;
	TDSCustomServer* FServer;
	
public:
	__property TDSCustomServer* Server = {write=FServer};
};


class PASCALIMPLEMENTATION TDSServerTransport : public TDSServerComponent
{
	typedef TDSServerComponent inherited;
	
public:
	__fastcall virtual TDSServerTransport(Classes::TComponent* ATransportOwner);
	__fastcall virtual ~TDSServerTransport(void);
	void __fastcall AddConnection(const Dbxmessagehandlercommon::TDBXConnectionHandler* Con);
	void __fastcall RemoveConnection(const Dbxmessagehandlercommon::TDBXConnectionHandler* Con);
	void __fastcall CloseConnections(void);
	void __fastcall WaitForClosedConnections(void);
	
protected:
	virtual void __fastcall Disconnecting(const Dbxmessagehandlercommon::TDBXConnectionHandler* Con);
	void __fastcall SetBufferKBSize(const int BufferKBSize);
	virtual Dbxtransport::TTransportFilterCollection* __fastcall GetFilters(void);
	virtual void __fastcall SetFilters(const Dbxtransport::TTransportFilterCollection* Value);
	
private:
	Dbxmessagehandlercommon::TDBXConnectionHandlerArray FServerConnections;
	Dbxcommon::TDBXContext* FDbxContext;
	Dbxmessagehandlercommon::TDBXOpenMessage* FOpenMessage;
	Dbxmessagehandlercommon::TDBXDisconnectMessage* FDisconnectMessage;
	int FBufferKBSize;
	Dbxtransport::TTransportFilterCollection* FFilterList;
	
public:
	__property Dbxcommon::TDBXContext* DbxContext = {read=FDbxContext, write=FDbxContext};
	__property int BufferKBSize = {read=FBufferKBSize, write=SetBufferKBSize, nodefault};
	__property Dbxtransport::TTransportFilterCollection* Filters = {read=GetFilters, write=SetFilters};
};


class DELPHICLASS TDSSystemProperties;
class PASCALIMPLEMENTATION TDSSystemProperties : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSSystemProperties_TempDir L"TempDir"
	
	#define TDSSystemProperties_Port L"Port"
	
	#define TDSSystemProperties_ConfigDir L"ConfigDir"
	
public:
	/* TObject.Create */ inline __fastcall TDSSystemProperties(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSSystemProperties(void) { }
	
};


class DELPHICLASS TDSVoidConnectionHandler;
class PASCALIMPLEMENTATION TDSVoidConnectionHandler : public Dbxmessagehandlercommon::TDBXConnectionHandler
{
	typedef Dbxmessagehandlercommon::TDBXConnectionHandler inherited;
	
public:
	__fastcall TDSVoidConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext);
	virtual Dbxmessagehandlercommon::TDBXCommandHandler* __fastcall AcquireCommandHandler(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	virtual bool __fastcall DbxBeforeRequest(void);
	virtual Dbxcommontable::TDBXStreamerRow* __fastcall CreateDbxRow(void);
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
public:
	/* TDBXCommandHandler.Destroy */ inline __fastcall virtual ~TDSVoidConnectionHandler(void) { }
	
};


class PASCALIMPLEMENTATION TInstanceProviderItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TInstanceProviderItem(const System::UnicodeString AClassName, const TDSDestroyInstanceEventObject* ADestroyEventObject, const TDSCustomServerClass* AServerClass, const System::TObject* AInstance);
	void __fastcall DestroyInstance(void);
	TInstanceProviderItem* FNext;
	
private:
	System::UnicodeString FInstanceClassName;
	TDSDestroyInstanceEventObject* FDestroyEventObject;
	TDSCustomServerClass* FServerClass;
	System::TObject* FInstance;
	
public:
	__property System::TObject* Instance = {read=FInstance};
	__property System::UnicodeString InstanceClassName = {read=FInstanceClassName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInstanceProviderItem(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dscommonserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dscommonserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscommonserverHPP
