// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgPutBlockList.pas' rev: 22.00

#ifndef DsazdlgputblocklistHPP
#define DsazdlgputblocklistHPP

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
#include <ValEdit.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <CheckLst.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgputblocklist
{
//-- type declarations -------------------------------------------------------
__interface TStringTransform;
typedef System::DelphiInterface<TStringTransform> _di_TStringTransform;
__interface TStringTransform  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(const System::UnicodeString InStr, System::UnicodeString &OutStr) = 0 ;
};

class DELPHICLASS TAzPutBlockList;
class PASCALIMPLEMENTATION TAzPutBlockList : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* Label4;
	Stdctrls::TEdit* edtContentType;
	Stdctrls::TEdit* edtLanguage;
	Stdctrls::TEdit* edtMD5;
	Stdctrls::TEdit* edtEncoding;
	Valedit::TValueListEditor* vleMeta;
	Stdctrls::TButton* btnAddMetadata;
	Stdctrls::TButton* btnDelMetadata;
	Stdctrls::TLabel* Label5;
	Stdctrls::TEdit* edtCacheControl;
	Stdctrls::TGroupBox* grbUploaded;
	Stdctrls::TCheckBox* cbxCommitLatest;
	Checklst::TCheckListBox* clbCommitted;
	Stdctrls::TLabel* Label6;
	Stdctrls::TLabel* Label7;
	Checklst::TCheckListBox* clbUncommitted;
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	void __fastcall cbxCommitLatestClick(System::TObject* Sender);
	void __fastcall clbCommittedClickCheck(System::TObject* Sender);
	void __fastcall clbUncommittedClickCheck(System::TObject* Sender);
	
private:
	_di_TStringTransform FEncode;
	
public:
	System::UnicodeString __fastcall GetContentType(void);
	System::UnicodeString __fastcall GetContentLanguage(void);
	System::UnicodeString __fastcall GetContentMD5(void);
	System::UnicodeString __fastcall GetContentEncoding(void);
	System::UnicodeString __fastcall GetCacheControl(void);
	void __fastcall AddCommittedBlockName(const System::UnicodeString Name);
	void __fastcall AddUncommittedBlockName(const System::UnicodeString Name);
	System::UnicodeString __fastcall BlockListAsXML(void);
	void __fastcall ClearLists(void);
	void __fastcall AssignMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall PopulateWithMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	Classes::TStrings* __fastcall RawMetadata(void);
	__property _di_TStringTransform Encode = {read=FEncode, write=FEncode};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzPutBlockList(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzPutBlockList(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzPutBlockList(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzPutBlockList(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgputblocklist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgputblocklist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgputblocklistHPP
