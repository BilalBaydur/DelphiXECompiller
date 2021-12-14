// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientModuleCreators.pas' rev: 22.00

#ifndef DsclientmodulecreatorsHPP
#define DsclientmodulecreatorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DSClientSource.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DSClientCreators.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientmodulecreators
{
//-- type declarations -------------------------------------------------------
__interface IDSWizardEx;
typedef System::DelphiInterface<IDSWizardEx> _di_IDSWizardEx;
__interface IDSWizardEx  : public System::IInterface 
{
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall ExecuteDSClientRestModuleWizard(const _di_IDSWizardEx ADSWizardEx, const System::UnicodeString APersonality);
extern PACKAGE bool __fastcall ExecuteDSClientSQLModuleWizard(const _di_IDSWizardEx ADSWizardEx, const System::UnicodeString APersonality);
extern PACKAGE void __fastcall GeneratorDSClientModule(const System::UnicodeString APersonality, const Dsclientsource::TClientModuleDescription &AModuleDescription);

}	/* namespace Dsclientmodulecreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientmodulecreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientmodulecreatorsHPP
