// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwDialog.pas' rev: 22.00

#ifndef WwdialogHPP
#define WwdialogHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdialog
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwCustomDialog;
class PASCALIMPLEMENTATION TwwCustomDialog : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
public:
	virtual bool __fastcall Execute(void) = 0 ;
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void) = 0 ;
public:
	/* TComponent.Create */ inline __fastcall virtual TwwCustomDialog(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TwwCustomDialog(void) { }
	
};


typedef TMetaClass* TwwCustomDialogClass;

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwdialog */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdialog;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdialogHPP
