// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureTableRowDialog.pas' rev: 22.00

#ifndef DsazuretablerowdialogHPP
#define DsazuretablerowdialogHPP

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
#include <DSAzureTableDialog.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazuretablerowdialog
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TTAzureTableRowDialog;
class PASCALIMPLEMENTATION TTAzureTableRowDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TEdit* nameField;
	Stdctrls::TEdit* valueField;
	Stdctrls::TComboBox* datatypeCombo;
	Stdctrls::TLabel* nameLabel;
	Stdctrls::TLabel* valueLabel;
	Stdctrls::TLabel* datatypeLabel;
	Stdctrls::TLabel* errorLabel;
	void __fastcall datatypeComboChange(System::TObject* Sender);
	void __fastcall valueFieldChange(System::TObject* Sender);
	void __fastcall nameFieldChange(System::TObject* Sender);
	
private:
	Dsazuretabledialog::TAzureTableColumn* FColumnInfo;
	Dsazuretabledialog::TAzureTableRow* FRow;
	bool __fastcall IsAlphaNumeric(const System::UnicodeString Value, bool CantStartWithNumber = false);
	bool __fastcall IsValidNameFormat(void);
	void __fastcall UpdateOKButtonEnablement(void);
	System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetValue(void);
	Dsazuretabledialog::TPropertyDataType __fastcall GetColumnDataType(void);
	
public:
	__fastcall TTAzureTableRowDialog(Classes::TComponent* AOwner, Dsazuretabledialog::TAzureTableColumn* ColumnInfo, Dsazuretabledialog::TAzureTableRow* Row);
	Dsazuretabledialog::TAzureTableColumn* __fastcall PersistChanges(void);
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString Value = {read=GetValue};
	__property Dsazuretabledialog::TPropertyDataType DataType = {read=GetColumnDataType, nodefault};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TTAzureTableRowDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TTAzureTableRowDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTAzureTableRowDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazuretablerowdialog */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazuretablerowdialog;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazuretablerowdialogHPP
