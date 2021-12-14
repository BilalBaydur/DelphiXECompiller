// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SQLProxyDesigner.pas' rev: 22.00

#ifndef SqlproxydesignerHPP
#define SqlproxydesignerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlproxydesigner
{
//-- type declarations -------------------------------------------------------
__interface TGenerateProxyProc;
typedef System::DelphiInterface<TGenerateProxyProc> _di_TGenerateProxyProc;
__interface TGenerateProxyProc  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(Dbxcommon::TDBXConnection* Connection, const System::UnicodeString APersonality, const System::UnicodeString AUnitName, System::DelphiInterface<Sysutils::TFunc__1<Classes::TStream*> >  CreateOutputStream, System::DelphiInterface<Sysutils::TFunc__1<Classes::TStream*> >  CreateHeaderOutputStream, System::DelphiInterface<Sysutils::TFunc__1<Sysutils::TEncoding*> >  GetStreamEncoding, System::DelphiInterface<Sysutils::TProc__2<Classes::TStream*,Classes::TStream*> >  GenerationFinished) = 0 ;
};

class DELPHICLASS TDSPersonalityProxyGenerator;
class PASCALIMPLEMENTATION TDSPersonalityProxyGenerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FConnectionString;
	System::UnicodeString FTargetUnitName;
	System::UnicodeString FPersonality;
	
protected:
	virtual Classes::TStream* __fastcall CreateOutputStream(void) = 0 ;
	virtual Classes::TStream* __fastcall CreateHeaderOutputStream(void) = 0 ;
	virtual Sysutils::TEncoding* __fastcall GetStreamEncoding(void) = 0 ;
	virtual void __fastcall GenerationFinished(Classes::TStream* AStream, Classes::TStream* AHeaderStream);
	
public:
	__fastcall TDSPersonalityProxyGenerator(const System::UnicodeString APersonality);
	void __fastcall GenerateProxy(void)/* overload */;
	void __fastcall GenerateProxy(Dbxcommon::TDBXConnection* Connection)/* overload */;
	__property System::UnicodeString ConnectionString = {read=FConnectionString, write=FConnectionString};
	__property System::UnicodeString TargetUnitName = {read=FTargetUnitName, write=FTargetUnitName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSPersonalityProxyGenerator(void) { }
	
};


class DELPHICLASS TDSStringPersonalityProxyGenerator;
class PASCALIMPLEMENTATION TDSStringPersonalityProxyGenerator : public TDSPersonalityProxyGenerator
{
	typedef TDSPersonalityProxyGenerator inherited;
	
private:
	System::UnicodeString FCodeAsString;
	System::UnicodeString FHeaderAsString;
	
protected:
	virtual Classes::TStream* __fastcall CreateOutputStream(void);
	virtual Classes::TStream* __fastcall CreateHeaderOutputStream(void);
	virtual Sysutils::TEncoding* __fastcall GetStreamEncoding(void);
	virtual void __fastcall GenerationFinished(Classes::TStream* AStream, Classes::TStream* AHeaderStream);
	
public:
	__property System::UnicodeString CodeAsString = {read=FCodeAsString};
	__property System::UnicodeString HeaderAsString = {read=FHeaderAsString};
public:
	/* TDSPersonalityProxyGenerator.Create */ inline __fastcall TDSStringPersonalityProxyGenerator(const System::UnicodeString APersonality) : TDSPersonalityProxyGenerator(APersonality) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSStringPersonalityProxyGenerator(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE _di_TGenerateProxyProc GGenerateProxyProc;
extern PACKAGE bool __fastcall CanGenerateProxy(void);
extern PACKAGE void __fastcall GenerateProxy(Dbxcommon::TDBXConnection* ADBXConnection, const System::UnicodeString AUnitName, const System::UnicodeString APersonality, /* out */ System::UnicodeString &SourceContents, /* out */ System::UnicodeString &HeaderContents);

}	/* namespace Sqlproxydesigner */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sqlproxydesigner;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlproxydesignerHPP
