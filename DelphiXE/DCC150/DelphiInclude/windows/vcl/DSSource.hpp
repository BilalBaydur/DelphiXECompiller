// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSSource.pas' rev: 22.00

#ifndef DssourceHPP
#define DssourceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dssource
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TSourceIndex { stDataSnapModuleSource, stDataSnapModuleIntf, stDataSnapModuleDFMSource, stDataSnapVCLFormSource, stDataSnapVCLFormIntf, stDataSnapConsoleSource, stDataSnapServiceSource, stDataSnapVCLSource, stDSServerModuleTemplate, stDSServerModuleTemplateIntf, stDataSnapServerMethodsClassTemplate, stDataSnapServerMethodsClassTemplateIntf, stDataSnapWebModuleSource, stDataSnapWebModuleIntf, stDataSnapWebModuleDFMSource };
#pragma option pop

typedef System::StaticArray<System::UnicodeString, 15> Dssource__1;

#pragma option push -b-
enum TSourceFlag { sfRunDSServer, sfServiceMethods, sfHTTPSProtocol, sfHTTPProtocol, sfAuthentication, sfAuthorization, sfTCPIPProtocol, sfServerMethodsClass, sfMethodInfoOn, sfIncludeComments, sfIncludeSampleMethods, sfDataSnapRest };
#pragma option pop

typedef System::Set<TSourceFlag, TSourceFlag::sfRunDSServer, TSourceFlag::sfDataSnapRest>  TSourceFlags;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Dssource__1 SourceTypeNames;
extern PACKAGE System::UnicodeString __fastcall GetSourceFromTemplate(const System::UnicodeString APersonality, TSourceIndex SourceIndex, Classes::TStrings* Props, TSourceFlags Flags = TSourceFlags() );
extern PACKAGE System::UnicodeString __fastcall GetSourceFromTemplateFile(const System::UnicodeString FileName, Classes::TStrings* Props = (Classes::TStrings*)(0x0), TSourceFlags Flags = TSourceFlags() );
extern PACKAGE Sysutils::TEncoding* __fastcall GetTemplateFileEncoding(const System::UnicodeString FileName);

}	/* namespace Dssource */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dssource;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DssourceHPP
