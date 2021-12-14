// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSStandAloneCreators.pas' rev: 22.00

#ifndef DsstandalonecreatorsHPP
#define DsstandalonecreatorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DSSource.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DSCreators.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsstandalonecreators
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TProjectType { ptConsole, ptService, ptVCL };
#pragma option pop

#pragma option push -b-
enum TProjectOption { poTCPIP, poHTTP, poHTTPS, poAuthentication, poAuthorization };
#pragma option pop

typedef System::Set<TProjectOption, TProjectOption::poTCPIP, TProjectOption::poAuthorization>  TProjectOptions;

struct DECLSPEC_DRECORD TProjectDescription
{
	
public:
	TProjectType ProjectType;
	TProjectOptions ProjectOptions;
	Dscreators::TServerModuleDescription ModuleDescription;
};


__interface IDSWizardEx;
typedef System::DelphiInterface<IDSWizardEx> _di_IDSWizardEx;
__interface IDSWizardEx  : public System::IInterface 
{
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall AddBCBAppUnits(TProjectType AProjectType);
extern PACKAGE void __fastcall CreateDSStandAloneApp(const TProjectDescription &AProjectDescription, const System::UnicodeString APersonality);
extern PACKAGE bool __fastcall ExecuteDSStandAloneWizard(const _di_IDSWizardEx ADSWizardEx, const System::UnicodeString APersonality);

}	/* namespace Dsstandalonecreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsstandalonecreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsstandalonecreatorsHPP
