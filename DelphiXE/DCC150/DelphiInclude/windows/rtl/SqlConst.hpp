// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlConst.pas' rev: 22.00

#ifndef SqlconstHPP
#define SqlconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlconst
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define DRIVERS_KEY L"Installed Drivers"
#define CONNECTIONS_KEY L"Installed Connections"
#define DRIVERNAME_KEY L"DriverName"
#define HOSTNAME_KEY L"HostName"
#define ROLENAME_KEY L"RoleName"
#define DATABASENAME_KEY L"Database"
#define MAXBLOBSIZE_KEY L"BlobSize"
#define VENDORLIB_KEY L"VendorLib"
#define DLLLIB_KEY L"LibraryName"
#define GETDRIVERFUNC_KEY L"GetDriverFunc"
#define AUTOCOMMIT_KEY L"AutoCommit"
#define BLOCKINGMODE_KEY L"BlockingMode"
#define WAITONLOCKS_KEY L"WaitOnLocks"
#define COMMITRETAIN_KEY L"CommitRetain"
#define TRANSISOLATION_KEY L"%s TransIsolation"
#define SQLDIALECT_KEY L"SqlDialect"
#define SQLLOCALE_CODE_KEY L"LocaleCode"
#define ERROR_RESOURCE_KEY L"ErrorResourceFile"
#define SQLSERVER_CHARSET_KEY L"ServerCharSet"
#define CONNECTION_STRING L"ConnectionString"
#define SREADCOMMITTED L"readcommitted"
#define SREPEATREAD L"repeatableread"
#define SDIRTYREAD L"dirtyread"
#define szPASSWORD L"PASSWORD"
#define SLocaleCode L"LCID"
#define ROWSETSIZE_KEY L"RowsetSize"
#define OSAUTHENTICATION L"OS Authentication"
#define SERVERPORT L"Server Port"
#define MULTITRANSENABLED L"Multiple Transaction"
#define TRIMCHAR L"Trim Char"
#define CUSTOM_INFO L"Custom String"
#define CONN_TIMEOUT L"Connection Timeout"
#define TDSPACKETSIZE L"TDS Packet Size"
#define CLIENTHOSTNAME L"Client HostName"
#define CLIENTAPPNAME L"Client AppName"
#define COMPRESSED L"Compressed"
#define ENCRYPTED L"Encrypted"
#define PREPARESQL L"Prepare SQL"
extern PACKAGE System::ResourceString _SLoginError;
#define Sqlconst_SLoginError System::LoadResourceString(&Sqlconst::_SLoginError)
extern PACKAGE System::ResourceString _SMonitorActive;
#define Sqlconst_SMonitorActive System::LoadResourceString(&Sqlconst::_SMonitorActive)
extern PACKAGE System::ResourceString _SMissingConnection;
#define Sqlconst_SMissingConnection System::LoadResourceString(&Sqlconst::_SMissingConnection)
extern PACKAGE System::ResourceString _SDatabaseOpen;
#define Sqlconst_SDatabaseOpen System::LoadResourceString(&Sqlconst::_SDatabaseOpen)
extern PACKAGE System::ResourceString _SDatabaseClosed;
#define Sqlconst_SDatabaseClosed System::LoadResourceString(&Sqlconst::_SDatabaseClosed)
extern PACKAGE System::ResourceString _SMissingSQLConnection;
#define Sqlconst_SMissingSQLConnection System::LoadResourceString(&Sqlconst::_SMissingSQLConnection)
extern PACKAGE System::ResourceString _SConnectionNameMissing;
#define Sqlconst_SConnectionNameMissing System::LoadResourceString(&Sqlconst::_SConnectionNameMissing)
extern PACKAGE System::ResourceString _SEmptySQLStatement;
#define Sqlconst_SEmptySQLStatement System::LoadResourceString(&Sqlconst::_SEmptySQLStatement)
extern PACKAGE System::ResourceString _SNoParameterValue;
#define Sqlconst_SNoParameterValue System::LoadResourceString(&Sqlconst::_SNoParameterValue)
extern PACKAGE System::ResourceString _SNoParameterType;
#define Sqlconst_SNoParameterType System::LoadResourceString(&Sqlconst::_SNoParameterType)
extern PACKAGE System::ResourceString _SParameterTypes;
#define Sqlconst_SParameterTypes System::LoadResourceString(&Sqlconst::_SParameterTypes)
extern PACKAGE System::ResourceString _SDataTypes;
#define Sqlconst_SDataTypes System::LoadResourceString(&Sqlconst::_SDataTypes)
extern PACKAGE System::ResourceString _SResultName;
#define Sqlconst_SResultName System::LoadResourceString(&Sqlconst::_SResultName)
extern PACKAGE System::ResourceString _SNoTableName;
#define Sqlconst_SNoTableName System::LoadResourceString(&Sqlconst::_SNoTableName)
extern PACKAGE System::ResourceString _SNoSqlStatement;
#define Sqlconst_SNoSqlStatement System::LoadResourceString(&Sqlconst::_SNoSqlStatement)
extern PACKAGE System::ResourceString _SNoDataSetField;
#define Sqlconst_SNoDataSetField System::LoadResourceString(&Sqlconst::_SNoDataSetField)
extern PACKAGE System::ResourceString _SNoCachedUpdates;
#define Sqlconst_SNoCachedUpdates System::LoadResourceString(&Sqlconst::_SNoCachedUpdates)
extern PACKAGE System::ResourceString _SMissingDataBaseName;
#define Sqlconst_SMissingDataBaseName System::LoadResourceString(&Sqlconst::_SMissingDataBaseName)
extern PACKAGE System::ResourceString _SMissingDataSet;
#define Sqlconst_SMissingDataSet System::LoadResourceString(&Sqlconst::_SMissingDataSet)
extern PACKAGE System::ResourceString _SMissingDriverName;
#define Sqlconst_SMissingDriverName System::LoadResourceString(&Sqlconst::_SMissingDriverName)
extern PACKAGE System::ResourceString _SPrepareError;
#define Sqlconst_SPrepareError System::LoadResourceString(&Sqlconst::_SPrepareError)
extern PACKAGE System::ResourceString _SObjectNameError;
#define Sqlconst_SObjectNameError System::LoadResourceString(&Sqlconst::_SObjectNameError)
extern PACKAGE System::ResourceString _SSQLDataSetOpen;
#define Sqlconst_SSQLDataSetOpen System::LoadResourceString(&Sqlconst::_SSQLDataSetOpen)
extern PACKAGE System::ResourceString _SNoActiveTrans;
#define Sqlconst_SNoActiveTrans System::LoadResourceString(&Sqlconst::_SNoActiveTrans)
extern PACKAGE System::ResourceString _SActiveTrans;
#define Sqlconst_SActiveTrans System::LoadResourceString(&Sqlconst::_SActiveTrans)
extern PACKAGE System::ResourceString _SDllLoadError;
#define Sqlconst_SDllLoadError System::LoadResourceString(&Sqlconst::_SDllLoadError)
extern PACKAGE System::ResourceString _SDllProcLoadError;
#define Sqlconst_SDllProcLoadError System::LoadResourceString(&Sqlconst::_SDllProcLoadError)
extern PACKAGE System::ResourceString _SConnectionEditor;
#define Sqlconst_SConnectionEditor System::LoadResourceString(&Sqlconst::_SConnectionEditor)
extern PACKAGE System::ResourceString _SAddConnectionString;
#define Sqlconst_SAddConnectionString System::LoadResourceString(&Sqlconst::_SAddConnectionString)
extern PACKAGE System::ResourceString _SRefreshConnectionString;
#define Sqlconst_SRefreshConnectionString System::LoadResourceString(&Sqlconst::_SRefreshConnectionString)
extern PACKAGE System::ResourceString _SRemoveConnectionString;
#define Sqlconst_SRemoveConnectionString System::LoadResourceString(&Sqlconst::_SRemoveConnectionString)
extern PACKAGE System::ResourceString _SCommandTextEditor;
#define Sqlconst_SCommandTextEditor System::LoadResourceString(&Sqlconst::_SCommandTextEditor)
extern PACKAGE System::ResourceString _SMissingDLLName;
#define Sqlconst_SMissingDLLName System::LoadResourceString(&Sqlconst::_SMissingDLLName)
extern PACKAGE System::ResourceString _SMissingDriverRegFile;
#define Sqlconst_SMissingDriverRegFile System::LoadResourceString(&Sqlconst::_SMissingDriverRegFile)
extern PACKAGE System::ResourceString _STableNameNotFound;
#define Sqlconst_STableNameNotFound System::LoadResourceString(&Sqlconst::_STableNameNotFound)
extern PACKAGE System::ResourceString _SNoCursor;
#define Sqlconst_SNoCursor System::LoadResourceString(&Sqlconst::_SNoCursor)
extern PACKAGE System::ResourceString _SMetaDataOpenError;
#define Sqlconst_SMetaDataOpenError System::LoadResourceString(&Sqlconst::_SMetaDataOpenError)
extern PACKAGE System::ResourceString _SErrorMappingError;
#define Sqlconst_SErrorMappingError System::LoadResourceString(&Sqlconst::_SErrorMappingError)
extern PACKAGE System::ResourceString _SStoredProcsNotSupported;
#define Sqlconst_SStoredProcsNotSupported System::LoadResourceString(&Sqlconst::_SStoredProcsNotSupported)
extern PACKAGE System::ResourceString _SPackagesNotSupported;
#define Sqlconst_SPackagesNotSupported System::LoadResourceString(&Sqlconst::_SPackagesNotSupported)
extern PACKAGE System::ResourceString _STooManyActualParam;
#define Sqlconst_STooManyActualParam System::LoadResourceString(&Sqlconst::_STooManyActualParam)
extern PACKAGE System::ResourceString _SDBXUNKNOWNERROR;
#define Sqlconst_SDBXUNKNOWNERROR System::LoadResourceString(&Sqlconst::_SDBXUNKNOWNERROR)
extern PACKAGE System::ResourceString _SNOERROR;
#define Sqlconst_SNOERROR System::LoadResourceString(&Sqlconst::_SNOERROR)
extern PACKAGE System::ResourceString _SWARNING;
#define Sqlconst_SWARNING System::LoadResourceString(&Sqlconst::_SWARNING)
extern PACKAGE System::ResourceString _SNOMEMORY;
#define Sqlconst_SNOMEMORY System::LoadResourceString(&Sqlconst::_SNOMEMORY)
extern PACKAGE System::ResourceString _SINVALIDFLDTYPE;
#define Sqlconst_SINVALIDFLDTYPE System::LoadResourceString(&Sqlconst::_SINVALIDFLDTYPE)
extern PACKAGE System::ResourceString _SINVALIDHNDL;
#define Sqlconst_SINVALIDHNDL System::LoadResourceString(&Sqlconst::_SINVALIDHNDL)
extern PACKAGE System::ResourceString _SNOTSUPPORTED;
#define Sqlconst_SNOTSUPPORTED System::LoadResourceString(&Sqlconst::_SNOTSUPPORTED)
extern PACKAGE System::ResourceString _SINVALIDTIME;
#define Sqlconst_SINVALIDTIME System::LoadResourceString(&Sqlconst::_SINVALIDTIME)
extern PACKAGE System::ResourceString _SINVALIDXLATION;
#define Sqlconst_SINVALIDXLATION System::LoadResourceString(&Sqlconst::_SINVALIDXLATION)
extern PACKAGE System::ResourceString _SOUTOFRANGE;
#define Sqlconst_SOUTOFRANGE System::LoadResourceString(&Sqlconst::_SOUTOFRANGE)
extern PACKAGE System::ResourceString _SINVALIDPARAM;
#define Sqlconst_SINVALIDPARAM System::LoadResourceString(&Sqlconst::_SINVALIDPARAM)
extern PACKAGE System::ResourceString _SEOF;
#define Sqlconst_SEOF System::LoadResourceString(&Sqlconst::_SEOF)
extern PACKAGE System::ResourceString _SSQLPARAMNOTSET;
#define Sqlconst_SSQLPARAMNOTSET System::LoadResourceString(&Sqlconst::_SSQLPARAMNOTSET)
extern PACKAGE System::ResourceString _SINVALIDUSRPASS;
#define Sqlconst_SINVALIDUSRPASS System::LoadResourceString(&Sqlconst::_SINVALIDUSRPASS)
extern PACKAGE System::ResourceString _SINVALIDPRECISION;
#define Sqlconst_SINVALIDPRECISION System::LoadResourceString(&Sqlconst::_SINVALIDPRECISION)
extern PACKAGE System::ResourceString _SINVALIDLEN;
#define Sqlconst_SINVALIDLEN System::LoadResourceString(&Sqlconst::_SINVALIDLEN)
extern PACKAGE System::ResourceString _SINVALIDXISOLEVEL;
#define Sqlconst_SINVALIDXISOLEVEL System::LoadResourceString(&Sqlconst::_SINVALIDXISOLEVEL)
extern PACKAGE System::ResourceString _SINVALIDTXNID;
#define Sqlconst_SINVALIDTXNID System::LoadResourceString(&Sqlconst::_SINVALIDTXNID)
extern PACKAGE System::ResourceString _SDUPLICATETXNID;
#define Sqlconst_SDUPLICATETXNID System::LoadResourceString(&Sqlconst::_SDUPLICATETXNID)
extern PACKAGE System::ResourceString _SDRIVERRESTRICTED;
#define Sqlconst_SDRIVERRESTRICTED System::LoadResourceString(&Sqlconst::_SDRIVERRESTRICTED)
extern PACKAGE System::ResourceString _SLOCALTRANSACTIVE;
#define Sqlconst_SLOCALTRANSACTIVE System::LoadResourceString(&Sqlconst::_SLOCALTRANSACTIVE)
extern PACKAGE System::ResourceString _SMULTIPLETRANSNOTENABLED;
#define Sqlconst_SMULTIPLETRANSNOTENABLED System::LoadResourceString(&Sqlconst::_SMULTIPLETRANSNOTENABLED)
extern PACKAGE System::ResourceString _SCONNECTIONFAILED;
#define Sqlconst_SCONNECTIONFAILED System::LoadResourceString(&Sqlconst::_SCONNECTIONFAILED)
extern PACKAGE System::ResourceString _SDRIVERINITFAILED;
#define Sqlconst_SDRIVERINITFAILED System::LoadResourceString(&Sqlconst::_SDRIVERINITFAILED)
extern PACKAGE System::ResourceString _SOPTLOCKFAILED;
#define Sqlconst_SOPTLOCKFAILED System::LoadResourceString(&Sqlconst::_SOPTLOCKFAILED)
extern PACKAGE System::ResourceString _SINVALIDREF;
#define Sqlconst_SINVALIDREF System::LoadResourceString(&Sqlconst::_SINVALIDREF)
extern PACKAGE System::ResourceString _SNOTABLE;
#define Sqlconst_SNOTABLE System::LoadResourceString(&Sqlconst::_SNOTABLE)
extern PACKAGE System::ResourceString _SMISSINGPARAMINSQL;
#define Sqlconst_SMISSINGPARAMINSQL System::LoadResourceString(&Sqlconst::_SMISSINGPARAMINSQL)
extern PACKAGE System::ResourceString _SNOTIMPLEMENTED;
#define Sqlconst_SNOTIMPLEMENTED System::LoadResourceString(&Sqlconst::_SNOTIMPLEMENTED)
extern PACKAGE System::ResourceString _SDRIVERINCOMPATIBLE;
#define Sqlconst_SDRIVERINCOMPATIBLE System::LoadResourceString(&Sqlconst::_SDRIVERINCOMPATIBLE)
extern PACKAGE System::ResourceString _SNODATA;
#define Sqlconst_SNODATA System::LoadResourceString(&Sqlconst::_SNODATA)
extern PACKAGE System::ResourceString _SSQLERROR;
#define Sqlconst_SSQLERROR System::LoadResourceString(&Sqlconst::_SSQLERROR)
extern PACKAGE System::ResourceString _SDBXError;
#define Sqlconst_SDBXError System::LoadResourceString(&Sqlconst::_SDBXError)
extern PACKAGE System::ResourceString _SSQLServerError;
#define Sqlconst_SSQLServerError System::LoadResourceString(&Sqlconst::_SSQLServerError)
extern PACKAGE System::ResourceString _SConfFileMoveError;
#define Sqlconst_SConfFileMoveError System::LoadResourceString(&Sqlconst::_SConfFileMoveError)
extern PACKAGE System::ResourceString _SMissingConfFile;
#define Sqlconst_SMissingConfFile System::LoadResourceString(&Sqlconst::_SMissingConfFile)
extern PACKAGE System::ResourceString _SObjectViewNotTrue;
#define Sqlconst_SObjectViewNotTrue System::LoadResourceString(&Sqlconst::_SObjectViewNotTrue)
extern PACKAGE System::ResourceString _SObjectTypenameRequired;
#define Sqlconst_SObjectTypenameRequired System::LoadResourceString(&Sqlconst::_SObjectTypenameRequired)
extern PACKAGE System::ResourceString _SCannotCreateFile;
#define Sqlconst_SCannotCreateFile System::LoadResourceString(&Sqlconst::_SCannotCreateFile)
extern PACKAGE System::ResourceString _SDlgOpenCaption;
#define Sqlconst_SDlgOpenCaption System::LoadResourceString(&Sqlconst::_SDlgOpenCaption)
extern PACKAGE System::ResourceString _SDlgFilterTxt;
#define Sqlconst_SDlgFilterTxt System::LoadResourceString(&Sqlconst::_SDlgFilterTxt)
extern PACKAGE System::ResourceString _SLogFileFilter;
#define Sqlconst_SLogFileFilter System::LoadResourceString(&Sqlconst::_SLogFileFilter)
extern PACKAGE System::ResourceString _SCircularProvider;
#define Sqlconst_SCircularProvider System::LoadResourceString(&Sqlconst::_SCircularProvider)
extern PACKAGE System::ResourceString _SUnknownDataType;
#define Sqlconst_SUnknownDataType System::LoadResourceString(&Sqlconst::_SUnknownDataType)
extern PACKAGE System::ResourceString _SSaveConnectionParams;
#define Sqlconst_SSaveConnectionParams System::LoadResourceString(&Sqlconst::_SSaveConnectionParams)
extern PACKAGE System::ResourceString _SReloadConnectionParams;
#define Sqlconst_SReloadConnectionParams System::LoadResourceString(&Sqlconst::_SReloadConnectionParams)
extern PACKAGE System::ResourceString _SGenerateClientClasses;
#define Sqlconst_SGenerateClientClasses System::LoadResourceString(&Sqlconst::_SGenerateClientClasses)

}	/* namespace Sqlconst */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sqlconst;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlconstHPP
