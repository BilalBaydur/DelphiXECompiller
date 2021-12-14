// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgPage.pas' rev: 22.00

#ifndef DsazdlgpageHPP
#define DsazdlgpageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgpage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzPage;
class PASCALIMPLEMENTATION TAzPage : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* lbStartByte;
	Stdctrls::TEdit* edtStartByte;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* edtPageCount;
	Extctrls::TRadioGroup* rgOperation;
	Stdctrls::TGroupBox* gbCriteria;
	Extctrls::TLabeledEdit* lblMD5;
	Extctrls::TLabeledEdit* lblLease;
	Stdctrls::TLabel* lblSequence;
	Stdctrls::TComboBox* cbSequenceOp;
	Stdctrls::TEdit* edtSequence;
	Stdctrls::TLabel* Label3;
	Stdctrls::TComboBox* cbSince;
	Stdctrls::TEdit* edtSince;
	Stdctrls::TLabel* lblIf;
	Stdctrls::TComboBox* cbMatch;
	Stdctrls::TEdit* edtMatch;
	Extctrls::TLabeledEdit* lblContentLocation;
	Stdctrls::TButton* btnExplorer;
	void __fastcall btnExplorerClick(System::TObject* Sender);
	
public:
	System::UnicodeString __fastcall GetContentMD5(void);
	System::UnicodeString __fastcall GetPageWrite(void);
	System::UnicodeString __fastcall GetLeaseID(void);
	void __fastcall SetLeaseID(System::UnicodeString LeaseId);
	System::UnicodeString __fastcall GetSequenceNumberLte(void);
	System::UnicodeString __fastcall GetSequenceNumberLt(void);
	System::UnicodeString __fastcall GetSequenceNumberEq(void);
	System::UnicodeString __fastcall GetModifiedSince(void);
	System::UnicodeString __fastcall GetUnmodifiedSince(void);
	System::UnicodeString __fastcall IfMatch(void);
	System::UnicodeString __fastcall IfNoneMatch(void);
	__int64 __fastcall FirstByte(void);
	__int64 __fastcall EndByte(void);
	System::DynamicArray<System::Byte> __fastcall Content(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzPage(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzPage(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzPage(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzPage(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgpageHPP
