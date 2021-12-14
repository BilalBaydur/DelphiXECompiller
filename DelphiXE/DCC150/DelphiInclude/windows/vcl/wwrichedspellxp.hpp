// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrichedspellxp.pas' rev: 22.00

#ifndef WwrichedspellxpHPP
#define WwrichedspellxpHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrichedspellxp
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDBRichEditMSWord;
class PASCALIMPLEMENTATION TwwDBRichEditMSWord : public Wwriched::TwwDBRichEdit
{
	typedef Wwriched::TwwDBRichEdit inherited;
	
public:
	virtual bool __fastcall MSWordSpellChecker(void);
public:
	/* TwwDBRichEdit.Create */ inline __fastcall virtual TwwDBRichEditMSWord(Classes::TComponent* AOwner) : Wwriched::TwwDBRichEdit(AOwner) { }
	/* TwwDBRichEdit.Destroy */ inline __fastcall virtual ~TwwDBRichEditMSWord(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBRichEditMSWord(HWND ParentWindow) : Wwriched::TwwDBRichEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall MSWordSpellChecker(Wwriched::TwwDBRichEdit* RichEdit);
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwrichedspellxp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrichedspellxp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrichedspellxpHPP
