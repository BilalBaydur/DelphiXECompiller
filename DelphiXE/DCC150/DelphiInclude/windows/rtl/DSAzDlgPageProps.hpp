// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgPageProps.pas' rev: 22.00

#ifndef DsazdlgpagepropsHPP
#define DsazdlgpagepropsHPP

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
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <DSAzDlgBlockProps.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgpageprops
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzPageProps;
class PASCALIMPLEMENTATION TAzPageProps : public Dsazdlgblockprops::TAzBlockProps
{
	typedef Dsazdlgblockprops::TAzBlockProps inherited;
	
__published:
	Extctrls::TLabeledEdit* lbeLength;
	Extctrls::TLabeledEdit* lbeNumber;
	Stdctrls::TLabel* Label1;
	Stdctrls::TComboBox* cbxAction;
	
private:
	System::UnicodeString __fastcall GetLength(void);
	void __fastcall SetLength(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetNumberAction(void);
	void __fastcall SetNumberAction(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetSequence(void);
	void __fastcall SetSequence(const System::UnicodeString Data);
	
public:
	__property System::UnicodeString Length = {read=GetLength, write=SetLength};
	__property System::UnicodeString Action = {read=GetNumberAction, write=SetNumberAction};
	__property System::UnicodeString Sequence = {read=GetSequence, write=SetSequence};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzPageProps(Classes::TComponent* AOwner) : Dsazdlgblockprops::TAzBlockProps(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzPageProps(Classes::TComponent* AOwner, int Dummy) : Dsazdlgblockprops::TAzBlockProps(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzPageProps(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzPageProps(HWND ParentWindow) : Dsazdlgblockprops::TAzBlockProps(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgpageprops */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgpageprops;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgpagepropsHPP
