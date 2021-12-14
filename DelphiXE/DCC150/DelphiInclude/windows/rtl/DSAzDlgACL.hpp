// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgACL.pas' rev: 22.00

#ifndef DsazdlgaclHPP
#define DsazdlgaclHPP

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
#include <Grids.hpp>	// Pascal unit
#include <DSAzure.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgacl
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzACL;
class PASCALIMPLEMENTATION TAzACL : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Extctrls::TRadioGroup* rgPublicDataAccess;
	Grids::TStringGrid* sgId;
	Stdctrls::TCheckBox* cbxRead;
	Stdctrls::TCheckBox* cbxDelete;
	Stdctrls::TCheckBox* cbxWrite;
	Stdctrls::TCheckBox* cbxList;
	Stdctrls::TGroupBox* gbxAccessPolicy;
	Extctrls::TLabeledEdit* lbeStart;
	Extctrls::TLabeledEdit* lbeExpiry;
	Stdctrls::TGroupBox* gbxIdentifiers;
	void __fastcall sgIdSetEditText(System::TObject* Sender, int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall sgIdSelectCell(System::TObject* Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall sgIdGetEditText(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall lbeStartChange(System::TObject* Sender);
	void __fastcall lbeExpiryChange(System::TObject* Sender);
	void __fastcall cbxReadClick(System::TObject* Sender);
	void __fastcall cbxWriteClick(System::TObject* Sender);
	void __fastcall cbxDeleteClick(System::TObject* Sender);
	void __fastcall cbxListClick(System::TObject* Sender);
	void __fastcall rgPublicDataAccessClick(System::TObject* Sender);
	
private:
	Dsazure::TAccessPolicyArray FAPArray;
	int FIndex;
	System::UnicodeString FLastValidIdentifier;
	void __fastcall MoveIndex(int NewIndex);
	void __fastcall SetPublicDataAccess(const System::UnicodeString Access);
	System::UnicodeString __fastcall GetPublicDataAccess(void);
	Dsazure::TAccessPolicy __fastcall GetAccessPolicy(int idx);
	System::UnicodeString __fastcall GetIdentifier(int idx);
	int __fastcall GetCount(void);
	void __fastcall DeleteRow(int ARow);
	System::UnicodeString __fastcall GetRawIdentifier(int idx);
	
public:
	void __fastcall SetAccessPolicyLength(int Size);
	void __fastcall SetAccessPolicy(int Index, const System::UnicodeString Id, const Dsazure::TAccessPolicy &AP);
	void __fastcall SetBaseline(void);
	void __fastcall MoveToRow(int ARow);
	__property System::UnicodeString PublicDataAccess = {read=GetPublicDataAccess, write=SetPublicDataAccess};
	__property Dsazure::TAccessPolicy AccessPolicy[int idx] = {read=GetAccessPolicy};
	__property System::UnicodeString Identifier[int idx] = {read=GetIdentifier};
	__property System::UnicodeString RawIdentifier[int idx] = {read=GetRawIdentifier};
	__property int Count = {read=GetCount, nodefault};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzACL(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzACL(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzACL(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzACL(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgacl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgacl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgaclHPP
