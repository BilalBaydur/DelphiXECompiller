// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwProvider.pas' rev: 22.00

#ifndef WwproviderHPP
#define WwproviderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Provider.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprovider
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwProvider;
class PASCALIMPLEMENTATION TwwProvider : public Provider::TProvider
{
	typedef Provider::TProvider inherited;
	
public:
	virtual System::OleVariant __fastcall DataRequest(const System::OleVariant &Input);
public:
	/* TDataSetProvider.Create */ inline __fastcall virtual TwwProvider(Classes::TComponent* AOwner) : Provider::TProvider(AOwner) { }
	/* TDataSetProvider.Destroy */ inline __fastcall virtual ~TwwProvider(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwprovider */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprovider;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwproviderHPP
