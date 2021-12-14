// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SimpleDSReg.pas' rev: 22.00

#ifndef SimpledsregHPP
#define SimpledsregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <SimpleDS.hpp>	// Pascal unit
#include <DsnDBCst.hpp>	// Pascal unit
#include <LMidReg.hpp>	// Pascal unit
#include <DBReg.hpp>	// Pascal unit
#include <DSDesign.hpp>	// Pascal unit
#include <SqlReg.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Simpledsreg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSimpleDataSetEditor;
class PASCALIMPLEMENTATION TSimpleDataSetEditor : public Dbreg::TDataSetEditor
{
	typedef Dbreg::TDataSetEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TSimpleDataSetEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Dbreg::TDataSetEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSimpleDataSetEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Simpledsreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Simpledsreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SimpledsregHPP
