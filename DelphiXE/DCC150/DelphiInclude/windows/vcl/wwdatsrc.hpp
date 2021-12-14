// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwdatsrc.pas' rev: 22.00

#ifndef WwdatsrcHPP
#define WwdatsrcHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdatsrc
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDataSource;
class PASCALIMPLEMENTATION TwwDataSource : public Db::TDataSource
{
	typedef Db::TDataSource inherited;
	
public:
	/* TDataSource.Create */ inline __fastcall virtual TwwDataSource(Classes::TComponent* AOwner) : Db::TDataSource(AOwner) { }
	/* TDataSource.Destroy */ inline __fastcall virtual ~TwwDataSource(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdatsrc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdatsrc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdatsrcHPP
