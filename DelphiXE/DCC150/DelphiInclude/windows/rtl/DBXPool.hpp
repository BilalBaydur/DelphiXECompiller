// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXPool.pas' rev: 22.00

#ifndef DbxpoolHPP
#define DbxpoolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXDelegate.hpp>	// Pascal unit
#include <SyncObjs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DBXPool"

namespace Dbxpool
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXPoolPropertyNames;
class PASCALIMPLEMENTATION TDBXPoolPropertyNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPoolPropertyNames_MaxConnections L"MaxConnections"
	
	#define TDBXPoolPropertyNames_MinConnections L"MinConnections"
	
	#define TDBXPoolPropertyNames_ConnectTimeout L"ConnectTimeout"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPoolPropertyNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPoolPropertyNames(void) { }
	
};


class DELPHICLASS TDBXPoolCommands;
class PASCALIMPLEMENTATION TDBXPoolCommands : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPoolCommands_GetPools L"GetPools"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPoolCommands(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPoolCommands(void) { }
	
};


class DELPHICLASS TDBXPoolsTable;
class PASCALIMPLEMENTATION TDBXPoolsTable : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPoolsTable_ConnectionName L"ConnectionName"
	
	#define TDBXPoolsTable_DriverName L"DriverName"
	
	#define TDBXPoolsTable_DatabaseName L"DatabaseName"
	
	#define TDBXPoolsTable_UserName L"UserName"
	
	#define TDBXPoolsTable_DelegateSignature L"DelegateSignature"
	
	#define TDBXPoolsTable_ConnectTimeout L"ConnectTimeout"
	
	#define TDBXPoolsTable_AvailableConnections L"AvailableConnections"
	
	#define TDBXPoolsTable_TotalConnections L"TotalConnections"
	
	#define TDBXPoolsTable_MaxConnections L"MaxConnections"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPoolsTable(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPoolsTable(void) { }
	
};


class DELPHICLASS TDBXPoolConnection;
class DELPHICLASS TDBXPoolDriver;
class DELPHICLASS TDBXPool;
class PASCALIMPLEMENTATION TDBXPoolConnection : public Dbxdelegate::TDBXDelegateConnection
{
	typedef Dbxdelegate::TDBXDelegateConnection inherited;
	
private:
	TDBXPoolDriver* FPoolDriver;
	TDBXPool* FPool;
	
protected:
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	
public:
	__fastcall TDBXPoolConnection(TDBXPool* Pool, Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder, TDBXPoolDriver* PoolDriver, Dbxcommon::TDBXConnection* Connection);
	__fastcall virtual ~TDBXPoolConnection(void);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateCommand(void)/* overload */;
};


class DELPHICLASS TDBXPoolCommand;
class PASCALIMPLEMENTATION TDBXPoolCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
private:
	TDBXPool* FPool;
	Dbxcommon::TDBXReader* __fastcall ExecuteGetPools(void);
	
protected:
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual void __fastcall SetRowSetSize(const __int64 Value);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual __int64 __fastcall GetRowsAffected(void);
	__fastcall TDBXPoolCommand(Dbxcommon::TDBXContext* DBXContext, TDBXPool* Pool);
	
public:
	__fastcall virtual ~TDBXPoolCommand(void);
};


class DELPHICLASS TDBXPoolReader;
class PASCALIMPLEMENTATION TDBXPoolReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
private:
	Dbxcommon::TDBXReaderByteReader* FByteReader;
	
protected:
	virtual bool __fastcall DerivedNext(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	
public:
	__fastcall TDBXPoolReader(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXRow* DbxRow, Dbxcommon::TDBXByteReader* ByteReader);
	__fastcall virtual ~TDBXPoolReader(void);
};


class DELPHICLASS TDBXPoolRow;
class PASCALIMPLEMENTATION TDBXPoolRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
private:
	Classes::TList* FPoolList;
	int FRow;
	bool __fastcall Next(void);
	
protected:
	virtual void __fastcall GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	
public:
	__fastcall TDBXPoolRow(Classes::TList* PoolList, Dbxcommon::TDBXContext* DBXContext);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPoolRow(void) { }
	
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull){ Dbxcommon::TDBXRow::GetWideString(DbxValue, Value, IsNull); }
	
};


class PASCALIMPLEMENTATION TDBXPool : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<Dbxcommon::TDBXConnection*> _TDBXPool__1;
	
	typedef System::DynamicArray<Dbxcommon::TDBXConnection*> _TDBXPool__2;
	
	
private:
	Dbxplatform::TDBXSemaphore* FSemaphore;
	Syncobjs::TCriticalSection* FCriticalSection;
	_TDBXPool__1 FAllConnectionArray;
	_TDBXPool__2 FAvailableConnectionArray;
	TDBXPoolDriver* FPoolDriver;
	System::UnicodeString FConnectionName;
	System::UnicodeString FDriverName;
	System::UnicodeString FDatabaseName;
	System::UnicodeString FUserName;
	System::UnicodeString FDelegateSignature;
	int FConnectTimeout;
	int FTotalConnections;
	int FAvailableConnections;
	int FMaxConnections;
	__fastcall TDBXPool(TDBXPoolDriver* Driver, Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	bool __fastcall IsEqual(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder, const System::UnicodeString ConnectionName, const System::UnicodeString DelegateSignature, const System::UnicodeString DriverName, const System::UnicodeString DatabaseName, const System::UnicodeString UserName);
	Dbxcommon::TDBXConnection* __fastcall GetConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	void __fastcall ReleaseConnection(Dbxcommon::TDBXConnection* Connection);
	void __fastcall ClearPool(void);
	
public:
	__fastcall virtual ~TDBXPool(void);
public:
	/* TObject.Create */ inline __fastcall TDBXPool(void) : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TDBXPoolDriver : public Dbxcommon::TDBXDriver
{
	typedef Dbxcommon::TDBXDriver inherited;
	
private:
	Classes::TList* FPoolList;
	TDBXPool* __fastcall FindPool(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	void __fastcall ClearPools(void);
	Dbxcommon::TDBXCommand* __fastcall CreatePoolCommand(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXConnection* Connection, Dbxcommon::TDBXCommand* MorphicCommand);
	
protected:
	virtual void __fastcall Close(void);
	
public:
	__fastcall virtual ~TDBXPoolDriver(void);
	__fastcall virtual TDBXPoolDriver(const Dbxcommon::TDBXDriverDef &DriverDef)/* overload */;
	virtual Dbxcommon::TDBXConnection* __fastcall CreateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
};


class DELPHICLASS TDBXPoolProperties;
class PASCALIMPLEMENTATION TDBXPoolProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXPoolProperties_StrMaxConnections L"MaxConnections"
	
	#define TDBXPoolProperties_StrMinConnections L"MinConnections"
	
	#define TDBXPoolProperties_StrConnectTimeout L"ConnectTimeout"
	
	int __fastcall GetConnectTimeout(void);
	int __fastcall GetMaxConnections(void);
	int __fastcall GetMinConnections(void);
	void __fastcall SetConnectTimeout(const int Value);
	void __fastcall SetMaxConnections(const int Value);
	void __fastcall SetMinConnections(const int Value);
	
public:
	__fastcall virtual TDBXPoolProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property int MaxConnections = {read=GetMaxConnections, write=SetMaxConnections, nodefault};
	__property int MinConnections = {read=GetMinConnections, write=SetMinConnections, nodefault};
	__property int ConnectTimeout = {read=GetConnectTimeout, write=SetConnectTimeout, nodefault};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXPoolProperties(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDriverName L"DBXPool"

}	/* namespace Dbxpool */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxpool;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxpoolHPP
