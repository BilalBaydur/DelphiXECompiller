// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgBlock.pas' rev: 22.00

#ifndef DsazdlgblockHPP
#define DsazdlgblockHPP

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

namespace Dsazdlgblock
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzBlock;
class PASCALIMPLEMENTATION TAzBlock : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Extctrls::TLabeledEdit* lblBlockId;
	Extctrls::TLabeledEdit* lblMD5;
	Extctrls::TLabeledEdit* lblLeaseId;
	Extctrls::TLabeledEdit* lblLocation;
	Stdctrls::TButton* btnFile;
	void __fastcall btnFileClick(System::TObject* Sender);
	
private:
	System::UnicodeString __fastcall GetBlockId(void);
	void __fastcall SetBlockId(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetLeaseId(void);
	void __fastcall SetLeaseId(const System::UnicodeString Id);
	System::UnicodeString __fastcall GetMD5(void);
	void __fastcall SetMD5(const System::UnicodeString Val);
	System::UnicodeString __fastcall GetLocation(void);
	void __fastcall SetLocation(const System::UnicodeString Data);
	
public:
	System::DynamicArray<System::Byte> __fastcall Content(void);
	__property System::UnicodeString BlockId = {read=GetBlockId, write=SetBlockId};
	__property System::UnicodeString Location = {read=GetLocation, write=SetLocation};
	__property System::UnicodeString MD5 = {read=GetMD5, write=SetMD5};
	__property System::UnicodeString LeaseId = {read=GetLeaseId, write=SetLeaseId};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzBlock(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzBlock(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzBlock(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzBlock(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgblock */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgblock;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgblockHPP
