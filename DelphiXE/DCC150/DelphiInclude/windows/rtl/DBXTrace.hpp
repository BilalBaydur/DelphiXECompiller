// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXTrace.pas' rev: 22.00

#ifndef DbxtraceHPP
#define DbxtraceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXDelegate.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <DBCommonTypes.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SyncObjs.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DBXTrace"

namespace Dbxtrace
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXTracePropertyNames;
class PASCALIMPLEMENTATION TDBXTracePropertyNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXTracePropertyNames_TraceFlags L"TraceFlags"
	
	#define TDBXTracePropertyNames_TraceDriver L"TraceDriver"
	
	#define TDBXTracePropertyNames_TraceFile L"TraceFile"
	
public:
	/* TObject.Create */ inline __fastcall TDBXTracePropertyNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTracePropertyNames(void) { }
	
};


class DELPHICLASS TDBXTraceFlagNames;
class PASCALIMPLEMENTATION TDBXTraceFlagNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXTraceFlagNames_NONE L"NONE"
	
	#define TDBXTraceFlagNames_PREPARE L"PREPARE"
	
	#define TDBXTraceFlagNames_EXECUTE L"EXECUTE"
	
	#define TDBXTraceFlagNames_ERROR L"ERROR"
	
	#define TDBXTraceFlagNames_COMMAND L"COMMAND"
	
	#define TDBXTraceFlagNames_CONNECT L"CONNECT"
	
	#define TDBXTraceFlagNames_TRANSACT L"TRANSACT"
	
	#define TDBXTraceFlagNames_BLOB L"BLOB"
	
	#define TDBXTraceFlagNames_MISC L"MISC"
	
	#define TDBXTraceFlagNames_VENDOR L"VENDOR"
	
	#define TDBXTraceFlagNames_PARAMETER L"PARAMETER"
	
	#define TDBXTraceFlagNames_READER L"READER"
	
	#define TDBXTraceFlagNames_DRIVER_LOAD L"DRIVER_LOAD"
	
	#define TDBXTraceFlagNames_METADATA L"METADATA"
	
	#define TDBXTraceFlagNames_DRIVER L"DRIVER"
	
	#define TDBXTraceFlagNames_CUSTOM L"CUSTOM"
	
public:
	/* TObject.Create */ inline __fastcall TDBXTraceFlagNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTraceFlagNames(void) { }
	
};


class DELPHICLASS TDBXTraceWriter;
class PASCALIMPLEMENTATION TDBXTraceWriter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual bool __fastcall IsSingleton(void) = 0 ;
	virtual Dbcommontypes::CBRType __fastcall WriteTrace(const Dbxcommon::TDBXTraceInfo &TraceInfo) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXTraceWriter(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTraceWriter(void) { }
	
};


class DELPHICLASS TDBXConsoleTraceWriter;
class PASCALIMPLEMENTATION TDBXConsoleTraceWriter : public TDBXTraceWriter
{
	typedef TDBXTraceWriter inherited;
	
public:
	virtual bool __fastcall IsSingleton(void);
	virtual Dbcommontypes::CBRType __fastcall WriteTrace(const Dbxcommon::TDBXTraceInfo &TraceInfo);
public:
	/* TObject.Create */ inline __fastcall TDBXConsoleTraceWriter(void) : TDBXTraceWriter() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXConsoleTraceWriter(void) { }
	
};


class DELPHICLASS TDBXTraceFormatter;
class PASCALIMPLEMENTATION TDBXTraceFormatter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCommentStart;
	System::UnicodeString FCommentEnd;
	int FMaxLineWidth;
	__fastcall TDBXTraceFormatter(System::UnicodeString CommentStart, System::UnicodeString CommentEnd, int MaxLineWidth);
	virtual System::UnicodeString __fastcall Comment(System::UnicodeString CommentText) = 0 ;
	virtual System::UnicodeString __fastcall CommentValue(System::UnicodeString ResultName, System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall OpenComment(System::UnicodeString CommentText) = 0 ;
	virtual System::UnicodeString __fastcall CloseComment(void) = 0 ;
	virtual System::UnicodeString __fastcall GetProperty(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString PropertyName) = 0 ;
	virtual System::UnicodeString __fastcall SetProperty(System::UnicodeString InstanceName, System::UnicodeString PropertyName, System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall CallProcedure(System::UnicodeString InstanceName, System::UnicodeString MethodName) = 0 ;
	virtual System::UnicodeString __fastcall CallFunction(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString MethodName) = 0 ;
	virtual System::UnicodeString __fastcall CallOpenProcedure(System::UnicodeString InstanceName, System::UnicodeString MethodName) = 0 ;
	virtual System::UnicodeString __fastcall CallOpenFunction(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString MethodName) = 0 ;
	virtual System::UnicodeString __fastcall ArrayProperty(System::UnicodeString InstanceName, int Ordinal) = 0 ;
	virtual System::UnicodeString __fastcall ParamString(System::UnicodeString Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamWideString(System::UnicodeString Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamBoolean(bool Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamUInt8(System::Byte Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamInt8(System::ShortInt Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamUInt16(System::Word Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamInt16(short Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamInt32(int Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamInt64(__int64 Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamDouble(double Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamBcd(const Fmtbcd::TBcd &Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamDate(Dbxcommon::TDBXDate Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamTime(Dbxcommon::TDBXTime Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamTimeStamp(const Sqltimst::TSQLTimeStamp &Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Param, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ParamBytes(System::Byte *Param, const int Param_Size, __int64 Offset, __int64 RequestedCount, __int64 Count, System::UnicodeString Separator) = 0 ;
	virtual System::UnicodeString __fastcall ColumnTypeToStr(int ColumnType);
	virtual System::UnicodeString __fastcall CloseProcedure(void) = 0 ;
	virtual System::UnicodeString __fastcall CloseFunction(void) = 0 ;
	virtual System::UnicodeString __fastcall QuoteString(System::UnicodeString Value) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXTraceFormatter(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTraceFormatter(void) { }
	
};


class DELPHICLASS TDBXTracePascalFormatter;
class PASCALIMPLEMENTATION TDBXTracePascalFormatter : public TDBXTraceFormatter
{
	typedef TDBXTraceFormatter inherited;
	
private:
	virtual System::UnicodeString __fastcall Comment(System::UnicodeString CommentText);
	virtual System::UnicodeString __fastcall CommentValue(System::UnicodeString ResultName, System::UnicodeString Value);
	virtual System::UnicodeString __fastcall OpenComment(System::UnicodeString CommentText);
	virtual System::UnicodeString __fastcall CloseComment(void);
	virtual System::UnicodeString __fastcall GetProperty(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString PropertyName);
	virtual System::UnicodeString __fastcall SetProperty(System::UnicodeString InstanceName, System::UnicodeString PropertyName, System::UnicodeString Value);
	virtual System::UnicodeString __fastcall CallProcedure(System::UnicodeString InstanceName, System::UnicodeString MethodName);
	virtual System::UnicodeString __fastcall CallFunction(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString MethodName);
	virtual System::UnicodeString __fastcall CallOpenProcedure(System::UnicodeString InstanceName, System::UnicodeString MethodName);
	virtual System::UnicodeString __fastcall CallOpenFunction(System::UnicodeString ResultName, System::UnicodeString InstanceName, System::UnicodeString MethodName);
	virtual System::UnicodeString __fastcall ArrayProperty(System::UnicodeString InstanceName, int Ordinal);
	virtual System::UnicodeString __fastcall ParamString(System::UnicodeString Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamWideString(System::UnicodeString Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamBoolean(bool Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamUInt8(System::Byte Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamInt8(System::ShortInt Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamUInt16(System::Word Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamInt16(short Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamInt32(int Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamInt64(__int64 Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamDouble(double Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamBcd(const Fmtbcd::TBcd &Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamDate(Dbxcommon::TDBXDate Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamTime(Dbxcommon::TDBXTime Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamTimeStamp(const Sqltimst::TSQLTimeStamp &Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Param, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall ParamBytes(System::Byte *Param, const int Param_Size, __int64 Offset, __int64 RequestedCount, __int64 Count, System::UnicodeString Separator);
	virtual System::UnicodeString __fastcall CloseProcedure(void);
	virtual System::UnicodeString __fastcall CloseFunction(void);
	virtual System::UnicodeString __fastcall QuoteString(System::UnicodeString Value);
public:
	/* TObject.Create */ inline __fastcall TDBXTracePascalFormatter(void) : TDBXTraceFormatter() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTracePascalFormatter(void) { }
	
};


class DELPHICLASS TDBXTraceOutput;
class PASCALIMPLEMENTATION TDBXTraceOutput : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	int FReferenceCount;
	Syncobjs::TCriticalSection* FCriticalSection;
	TDBXTraceFormatter* FFormatter;
	virtual void __fastcall Open(void) = 0 ;
	virtual void __fastcall WriteTraceln(System::UnicodeString Line) = 0 ;
	Dbcommontypes::CBRType __fastcall LogTrace(const Dbxcommon::TDBXTraceInfo &TraceInfo);
	Dbcommontypes::CBRType __fastcall LogDriverTrace(const Dbxcommon::TDBXTraceInfo &TraceInfo);
	System::UnicodeString __fastcall TraceFlagToString(int TraceFlag);
	void __fastcall AddReference(void);
	int __fastcall RemoveReference(void);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TDBXTraceFormatter* Formatter = {read=FFormatter, write=FFormatter};
	
public:
	__fastcall TDBXTraceOutput(void);
	__fastcall virtual ~TDBXTraceOutput(void);
};


class DELPHICLASS TDBXConsoleTraceOutput;
class PASCALIMPLEMENTATION TDBXConsoleTraceOutput : public TDBXTraceOutput
{
	typedef TDBXTraceOutput inherited;
	
private:
	virtual void __fastcall Open(void);
	virtual void __fastcall WriteTraceln(System::UnicodeString Line);
	
public:
	__fastcall virtual ~TDBXConsoleTraceOutput(void);
public:
	/* TDBXTraceOutput.Create */ inline __fastcall TDBXConsoleTraceOutput(void) : TDBXTraceOutput() { }
	
};


class DELPHICLASS TDBXFileTraceOutput;
class PASCALIMPLEMENTATION TDBXFileTraceOutput : public TDBXTraceOutput
{
	typedef TDBXTraceOutput inherited;
	
private:
	System::TextFile FTraceFile;
	virtual void __fastcall Open(void);
	virtual void __fastcall WriteTraceln(System::UnicodeString Line);
	
public:
	__fastcall virtual ~TDBXFileTraceOutput(void);
public:
	/* TDBXTraceOutput.Create */ inline __fastcall TDBXFileTraceOutput(void) : TDBXTraceOutput() { }
	
};


class DELPHICLASS TDBXTraceDriver;
class PASCALIMPLEMENTATION TDBXTraceDriver : public Dbxcommon::TDBXDriver
{
	typedef Dbxcommon::TDBXDriver inherited;
	
private:
	__int64 FConnectionCount;
	Classes::TStrings* FTraceOutputList;
	TDBXTraceOutput* __fastcall GetTraceOutput(System::UnicodeString Name);
	void __fastcall AddTraceOutput(TDBXTraceOutput* TraceOutput);
	void __fastcall ReleaseTraceOutput(TDBXTraceOutput* TraceOutput);
	void __fastcall SetTraceFlags(int TraceFlags);
	int __fastcall GetTraceFlags(void);
	void __fastcall SetTraceDriver(bool TraceDriver);
	bool __fastcall GetTraceDriver(void);
	void __fastcall SetTraceFile(System::UnicodeString TraceFile);
	System::UnicodeString __fastcall GetTraceFile(void);
	
protected:
	virtual System::UnicodeString __fastcall GetDriverName(void);
	virtual void __fastcall Close(void);
	
public:
	__fastcall virtual ~TDBXTraceDriver(void);
	__fastcall virtual TDBXTraceDriver(const Dbxcommon::TDBXDriverDef &DriverDef)/* overload */;
	virtual Dbxcommon::TDBXConnection* __fastcall CreateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
	__property int TraceFlags = {read=GetTraceFlags, write=SetTraceFlags, nodefault};
	__property bool TraceDriver = {read=GetTraceDriver, write=SetTraceDriver, nodefault};
	__property System::UnicodeString TraceFile = {read=GetTraceFile, write=SetTraceFile};
};


class DELPHICLASS TDBXTraceConnection;
class PASCALIMPLEMENTATION TDBXTraceConnection : public Dbxdelegate::TDBXDelegateConnection
{
	typedef Dbxdelegate::TDBXDelegateConnection inherited;
	
private:
	TDBXTraceFormatter* FFormatter;
	__int64 FConnectionId;
	System::UnicodeString FConnectionName;
	__int64 FCommandCount;
	Dbxcommon::TDBXErrorEvent FOriginalLogError;
	TDBXTraceDriver* FTraceDriver;
	TDBXTraceOutput* FTraceOutput;
	void __fastcall Trace(int TraceFlags, System::UnicodeString Message);
	
protected:
	virtual Dbxcommon::TDBXTransaction* __fastcall CreateAndBeginTransaction(const int Isolation);
	virtual void __fastcall Commit(const Dbxcommon::TDBXTransaction* Transaction);
	virtual void __fastcall Rollback(const Dbxcommon::TDBXTransaction* Transaction);
	virtual Dbxcommon::TDBXDatabaseMetaData* __fastcall GetDatabaseMetaData(void);
	virtual Dbxcommon::TDBXProperties* __fastcall GetConnectionProperties(void);
	virtual void __fastcall SetConnectionProperties(const Dbxcommon::TDBXProperties* Value);
	virtual Dbxcommon::TDBXTraceEvent __fastcall GetTraceInfoEvent(void);
	virtual void __fastcall SetTraceInfoEvent(const Dbxcommon::TDBXTraceEvent TraceInfoEvent);
	virtual int __fastcall GetTraceFlags(void);
	virtual void __fastcall SetTraceFlags(const int TraceFlags);
	virtual Dbxcommon::TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual void __fastcall SetErrorEvent(const Dbxcommon::TDBXErrorEvent ErrorEvent);
	virtual Dbxcommon::TDBXFormatter* __fastcall GetDBXFormatter(void);
	virtual void __fastcall SetDBXFormatter(const Dbxcommon::TDBXFormatter* DBXFormatter);
	virtual bool __fastcall GetIsOpen(void);
	virtual Dbxcommon::TDBXCommand* __fastcall DerivedCreateCommand(void)/* overload */;
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateMorphCommand(Dbxcommon::TDBXCommand* MorphicCommand);
	virtual System::UnicodeString __fastcall GetProductVersion(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetConnectionProperty(const System::UnicodeString Name);
	void __fastcall LogError(Dbxcommon::TDBXError* DBXError);
	System::UnicodeString __fastcall GetName(void);
	
public:
	__fastcall TDBXTraceConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder, TDBXTraceOutput* TraceOutput, TDBXTraceDriver* DRIVER, Dbxcommon::TDBXConnection* Connection, __int64 ConnectionId);
	__fastcall virtual ~TDBXTraceConnection(void);
	virtual void __fastcall Open(void);
	virtual void __fastcall Close(void);
	virtual Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(int Isolation)/* overload */;
	virtual Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(void)/* overload */;
	virtual void __fastcall CommitFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackIncompleteFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateCommand(void)/* overload */;
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name);
};


class DELPHICLASS TDBXTraceCommand;
class PASCALIMPLEMENTATION TDBXTraceCommand : public Dbxdelegate::TDBXDelegateCommand
{
	typedef Dbxdelegate::TDBXDelegateCommand inherited;
	
private:
	TDBXTraceFormatter* FFormatter;
	__int64 FReaderCount;
	__int64 FConnectionId;
	__int64 FCommandId;
	System::UnicodeString FCommandName;
	System::UnicodeString FParametersName;
	void __fastcall Trace(int TraceFlags, System::UnicodeString Message);
	
protected:
	virtual void __fastcall SetCommandType(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetCommandType(void);
	virtual System::UnicodeString __fastcall GetText(void);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetRowSetSize(const __int64 Value);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual void __fastcall SetCommandTimeout(const int Timeout);
	virtual int __fastcall GetCommandTimeout(void);
	virtual Dbxcommon::TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual Dbxcommon::TDBXRow* __fastcall CreateParameterRow(void);
	virtual void __fastcall CreateParameters(Dbxcommon::TDBXCommand* Command);
	virtual void __fastcall Open(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedClearParameters(void);
	System::UnicodeString __fastcall GetName(void);
	
public:
	__fastcall TDBXTraceCommand(Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXContext* DBXContext, TDBXTraceFormatter* Formatter, __int64 ConnectionId, __int64 CommandId);
	__fastcall virtual ~TDBXTraceCommand(void);
	virtual Dbxcommon::TDBXParameter* __fastcall CreateParameter(void);
	virtual Dbxcommon::TDBXParameterList* __fastcall GetParameters(void);
	virtual void __fastcall Prepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall ExecuteQuery(void);
	virtual void __fastcall ExecuteUpdate(void);
	virtual Dbxcommon::TDBXReader* __fastcall GetNextReader(void);
};


class DELPHICLASS TDBXTraceParameterList;
class PASCALIMPLEMENTATION TDBXTraceParameterList : public Dbxdelegate::TDBXDelegateParameterList
{
	typedef Dbxdelegate::TDBXDelegateParameterList inherited;
	
protected:
	TDBXTraceFormatter* FFormatter;
	System::UnicodeString FParametersName;
	__int64 FConnectionId;
	__int64 FCommandId;
	System::UnicodeString __fastcall GetName(void);
	
protected:
	virtual Dbxcommon::TDBXParameter* __fastcall GetParameterByOrdinal(const int Ordinal);
	virtual int __fastcall GetCount(void);
	
public:
	__fastcall TDBXTraceParameterList(Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXParameterList* Parameters, Dbxcommon::TDBXContext* DBXContext, TDBXTraceFormatter* Formatter, System::UnicodeString ParametersName, __int64 ConnectionId, __int64 CommandId);
	__fastcall virtual ~TDBXTraceParameterList(void);
	virtual void __fastcall SetCount(const int Count);
	virtual void __fastcall AddParameter(Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall SetParameter(const int Ordinal, const Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall InsertParameter(int Ordinal, Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall RemoveParameter(int Ordinal)/* overload */;
	virtual void __fastcall RemoveParameter(Dbxcommon::TDBXParameter* Parameter)/* overload */;
	virtual void __fastcall ClearParameters(void)/* overload */;
	virtual void __fastcall RemoveParameters(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name);
};


class DELPHICLASS TDBXTraceWritableValue;
class PASCALIMPLEMENTATION TDBXTraceWritableValue : public Dbxdelegate::TDBXDelegateWritableValue
{
	typedef Dbxdelegate::TDBXDelegateWritableValue inherited;
	
private:
	TDBXTraceFormatter* FFormatter;
	System::UnicodeString FValueName;
	System::UnicodeString FValueDisplayName;
	int FLastOrdinal;
	System::UnicodeString __fastcall GetValueDisplayName(void);
	
protected:
	__fastcall TDBXTraceWritableValue(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXValueType* ValueType, Dbxcommon::TDBXWritableValue* Value, TDBXTraceFormatter* Formatter, System::UnicodeString ValueName)/* overload */;
	virtual Dbxcommon::TDBXValue* __fastcall GetNonDelegate(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual Dbxcommon::TDBXDate __fastcall GetAsDate(void);
	virtual Dbxcommon::TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual void __fastcall SetPendingValue(void);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsDate(const Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetAsTime(const Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	
public:
	virtual bool __fastcall IsNull(void);
	virtual __int64 __fastcall GetValueSize(void);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual Dbxcommon::TDBXDate __fastcall GetDate(void);
	virtual bool __fastcall GetBoolean(void)/* overload */;
	virtual Dbxcommon::TDBXTime __fastcall GetTime(void);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual System::UnicodeString __fastcall GetString(void)/* overload */;
	virtual System::Byte __fastcall GetUInt8(void)/* overload */;
	virtual System::ShortInt __fastcall GetInt8(void)/* overload */;
	virtual System::Word __fastcall GetUInt16(void)/* overload */;
	virtual short __fastcall GetInt16(void)/* overload */;
	virtual int __fastcall GetInt32(void)/* overload */;
	virtual __int64 __fastcall GetInt64(void)/* overload */;
	virtual float __fastcall GetSingle(void);
	virtual double __fastcall GetDouble(void);
	virtual __int64 __fastcall GetBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length)/* overload */;
	virtual Sqltimst::TSQLTimeStamp __fastcall GetTimeStamp(void);
	virtual Sqltimst::TSQLTimeStampOffset __fastcall GetTimeStampOffset(void);
	virtual Fmtbcd::TBcd __fastcall GetBcd(void);
	virtual Dbxcommon::TDBXReader* __fastcall GetDBXReader(bool AInstanceOwner)/* overload */;
	virtual Dbxcommon::TDBXConnection* __fastcall GetDBXConnection(void);
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual System::UnicodeString __fastcall GetWideString(System::UnicodeString defaultValue)/* overload */;
	virtual bool __fastcall GetBoolean(bool defaultValue)/* overload */;
	virtual System::Byte __fastcall GetUInt8(System::Byte defaultValue)/* overload */;
	virtual System::ShortInt __fastcall GetInt8(System::ShortInt defaultValue)/* overload */;
	virtual System::Word __fastcall GetUInt16(System::Word defaultValue)/* overload */;
	virtual short __fastcall GetInt16(short defaultValue)/* overload */;
	virtual int __fastcall GetInt32(int defaultValue)/* overload */;
	virtual __int64 __fastcall GetInt64(__int64 defaultValue)/* overload */;
	virtual bool __fastcall EqualsValue(Dbxcommon::TDBXValue* Other);
	virtual void __fastcall SetNull(void);
	virtual void __fastcall SetTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetBoolean(const bool Value);
	virtual void __fastcall SetDate(const Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(const Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetWideString(const System::UnicodeString Value);
	virtual void __fastcall SetString(const System::UnicodeString Value);
	virtual void __fastcall SetUInt8(const System::Byte Value);
	virtual void __fastcall SetInt8(const System::ShortInt Value);
	virtual void __fastcall SetUInt16(const System::Word Value);
	virtual void __fastcall SetInt16(const short Value);
	virtual void __fastcall SetInt32(const int Value);
	virtual void __fastcall SetInt64(const __int64 Value);
	virtual void __fastcall SetSingle(const float Value);
	virtual void __fastcall SetDouble(const double Value);
	virtual void __fastcall SetStaticBytes(__int64 Offset, System::Byte const *Buffer, const int Buffer_Size, __int64 BufferOffset, __int64 Length);
	virtual void __fastcall SetDynamicBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length);
	virtual void __fastcall SetDBXReader(const Dbxcommon::TDBXReader* Value, const bool AInstanceOwner)/* overload */;
	virtual void __fastcall SetStream(const Classes::TStream* Stream, const bool AInstanceOwner);
	virtual void __fastcall SetDBXConnection(const Dbxcommon::TDBXConnection* Value);
	virtual void __fastcall SetValue(const Dbxcommon::TDBXValue* Value);
	__fastcall virtual ~TDBXTraceWritableValue(void);
/* Hoisted overloads: */
	
public:
	inline Dbxcommon::TDBXReader* __fastcall  GetDBXReader(void){ return Dbxcommon::TDBXValue::GetDBXReader(); }
	inline Classes::TStream* __fastcall  GetStream(void){ return Dbxcommon::TDBXValue::GetStream(); }
	
};


class DELPHICLASS TDBXTraceParameter;
class PASCALIMPLEMENTATION TDBXTraceParameter : public Dbxdelegate::TDBXDelegateParameter
{
	typedef Dbxdelegate::TDBXDelegateParameter inherited;
	
public:
	TDBXTraceWritableValue* FTraceValue;
	TDBXTraceFormatter* FFormatter;
	System::UnicodeString FParameterName;
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetValue(void);
	
public:
	__fastcall TDBXTraceParameter(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXParameter* Parameter, TDBXTraceFormatter* Formatter, System::UnicodeString ValueName);
	__fastcall virtual ~TDBXTraceParameter(void);
	virtual System::TObject* __fastcall Clone(void);
};


class DELPHICLASS TDBXTraceReader;
class PASCALIMPLEMENTATION TDBXTraceReader : public Dbxdelegate::TDBXDelegateReader
{
	typedef Dbxdelegate::TDBXDelegateReader inherited;
	
private:
	TDBXTraceFormatter* FFormatter;
	__int64 FNextCount;
	__int64 FConnectionId;
	__int64 FCommandId;
	__int64 FReaderId;
	System::UnicodeString FReaderName;
	bool FClosed;
	void __fastcall PrintColumns(void);
	
public:
	__fastcall TDBXTraceReader(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXReader* Reader, TDBXTraceFormatter* Formatter, __int64 ConnectionId, __int64 CommandId, __int64 ReaderId);
	__fastcall virtual ~TDBXTraceReader(void);
	virtual bool __fastcall Next(void);
};


#pragma option push -b-
enum TTraceFlag { PARAMETER, ERROR_, EXECUTE, COMMAND, CONNECT, TRANSACT, BLOB, MISC, VENDOR, READER, DRIVER_LOAD, METADATA };
#pragma option pop

typedef System::Set<TTraceFlag, TTraceFlag::PARAMETER, TTraceFlag::METADATA>  TTraceFlags;

class DELPHICLASS TDBXTraceProperties;
class PASCALIMPLEMENTATION TDBXTraceProperties : public Dbxcommon::TDBXProperties
{
	typedef Dbxcommon::TDBXProperties inherited;
	
private:
	#define TDBXTraceProperties_StrTraceFile L"TraceFile"
	
	#define TDBXTraceProperties_StrTraceFlags L"TraceFlags"
	
	#define TDBXTraceProperties_StrTraceDriver L"TraceDriver"
	
	System::UnicodeString __fastcall TraceFlagsToStr(TTraceFlags Flags);
	TTraceFlags __fastcall StrtoTraceFlags(System::UnicodeString Value);
	System::UnicodeString __fastcall GetTraceFile(void);
	TTraceFlags __fastcall GetTraceFlags(void);
	bool __fastcall GetTraceDriver(void);
	void __fastcall SetTraceFile(const System::UnicodeString Value);
	void __fastcall SetTraceFlags(const TTraceFlags Value);
	void __fastcall SetTraceDriver(const bool Value);
	
public:
	__fastcall virtual TDBXTraceProperties(Dbxcommon::TDBXContext* DBXContext)/* overload */;
	
__published:
	__property System::UnicodeString TraceFile = {read=GetTraceFile, write=SetTraceFile};
	__property TTraceFlags TraceFlags = {read=GetTraceFlags, write=SetTraceFlags, nodefault};
	__property bool TraceDriver = {read=GetTraceDriver, write=SetTraceDriver, nodefault};
public:
	/* TDBXProperties.Destroy */ inline __fastcall virtual ~TDBXTraceProperties(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDriverName L"DBXTrace"

}	/* namespace Dbxtrace */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtrace;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtraceHPP
