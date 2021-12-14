// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgCreateContainer.pas' rev: 22.00

#ifndef DsazdlgcreatecontainerHPP
#define DsazdlgcreatecontainerHPP

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
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgcreatecontainer
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzCreateContainerDlg;
class PASCALIMPLEMENTATION TAzCreateContainerDlg : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TGridPanel* GridPanel1;
	Extctrls::TFlowPanel* FlowPanel1;
	Stdctrls::TLabel* lbName;
	Stdctrls::TEdit* edtContainerName;
	Extctrls::TRadioGroup* rgPublicDataAccess;
	Valedit::TValueListEditor* vleMeta;
	Stdctrls::TButton* btnAddMetadata;
	Stdctrls::TButton* btnDelMetadata;
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	void __fastcall edtContainerNameChange(System::TObject* Sender);
	
public:
	void __fastcall PopulateWithMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall AssignMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall SetContainerName(const System::UnicodeString Name, bool Enabled = true);
	System::UnicodeString __fastcall GetContainerName(void);
	void __fastcall SetPublicDataAccess(const System::UnicodeString DataAccess);
	System::UnicodeString __fastcall GetPublicDataAccess(void);
	void __fastcall SetTitle(const System::UnicodeString Title);
	Classes::TStrings* __fastcall RawMetadata(void);
	__property System::UnicodeString PublicDataAccess = {read=GetPublicDataAccess, write=SetPublicDataAccess};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzCreateContainerDlg(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzCreateContainerDlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzCreateContainerDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzCreateContainerDlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgcreatecontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgcreatecontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgcreatecontainerHPP
