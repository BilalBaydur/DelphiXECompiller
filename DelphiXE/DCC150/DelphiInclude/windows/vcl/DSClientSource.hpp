// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientSource.pas' rev: 22.00

#ifndef DsclientsourceHPP
#define DsclientsourceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientsource
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TSourceIndex { stDataSnapModuleSource, stDataSnapModuleIntf, stDataSnapModuleDFMSource, stPortNumber, stHostName, stUrlPath, stUserName, stPassword, stCommunicationProtocol, stDataSnapContext };
#pragma option pop

typedef System::StaticArray<System::UnicodeString, 10> Dsclientsource__1;

#pragma option push -b-
enum TSourceFlag { sfDSRestConnection, sfSqlConnection };
#pragma option pop

typedef System::Set<TSourceFlag, TSourceFlag::sfDSRestConnection, TSourceFlag::sfSqlConnection>  TSourceFlags;

#pragma option push -b-
enum TClientModuleType { mtRestProxyModule, mtSQLProxyModule };
#pragma option pop

__interface IConnectionComponentProperties;
typedef System::DelphiInterface<IConnectionComponentProperties> _di_IConnectionComponentProperties;
__interface  INTERFACE_UUID("{25B73026-E4A3-44BC-93B6-F9F94A96CB80}") IConnectionComponentProperties  : public System::IInterface 
{
	
};

__interface IRestConnectionComponentProperties;
typedef System::DelphiInterface<IRestConnectionComponentProperties> _di_IRestConnectionComponentProperties;
__interface  INTERFACE_UUID("{D3841162-5345-4D14-BE8D-C2A59445381E}") IRestConnectionComponentProperties  : public IConnectionComponentProperties 
{
	
public:
	virtual int __fastcall GetPort(void) = 0 ;
	virtual System::UnicodeString __fastcall GetHost(void) = 0 ;
	virtual System::UnicodeString __fastcall GetPassword(void) = 0 ;
	virtual System::UnicodeString __fastcall GetUserName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetUrlPath(void) = 0 ;
	virtual System::UnicodeString __fastcall GetContext(void) = 0 ;
	virtual System::UnicodeString __fastcall GetProtocol(void) = 0 ;
};

__interface ISQLConnectionComponentProperties;
typedef System::DelphiInterface<ISQLConnectionComponentProperties> _di_ISQLConnectionComponentProperties;
__interface  INTERFACE_UUID("{2838D068-24C6-41DD-8904-A67254B245C6}") ISQLConnectionComponentProperties  : public IConnectionComponentProperties 
{
	
public:
	virtual int __fastcall GetPort(void) = 0 ;
	virtual System::UnicodeString __fastcall GetHostName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetDSAuthPassword(void) = 0 ;
	virtual System::UnicodeString __fastcall GetDSAuthUser(void) = 0 ;
	virtual System::UnicodeString __fastcall GetUrlPath(void) = 0 ;
	virtual System::UnicodeString __fastcall GetDataSnapContext(void) = 0 ;
	virtual System::UnicodeString __fastcall GetCommunicationProtocol(void) = 0 ;
};

struct DECLSPEC_DRECORD TClientModuleDescription
{
	
public:
	TClientModuleType ModuleType;
	_di_IConnectionComponentProperties ConnectionProperties;
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Dsclientsource__1 SourceTypeNames;
extern PACKAGE System::UnicodeString __fastcall GetSourceFromTemplate(const System::UnicodeString APersonality, TSourceIndex SourceIndex, const TClientModuleDescription &AModuleDescription, Classes::TStrings* ACodeBlocks = (Classes::TStrings*)(0x0), TSourceFlags Flags = TSourceFlags() );
extern PACKAGE System::UnicodeString __fastcall GetSourceFromTemplateFile(const System::UnicodeString FileName, const TClientModuleDescription &AModuleDescription, Classes::TStrings* Props, TSourceFlags Flags);

}	/* namespace Dsclientsource */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientsource;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientsourceHPP
