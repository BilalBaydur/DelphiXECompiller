// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxSqlEdit.pas' rev: 22.00

#ifndef DbxsqleditHPP
#define DbxsqleditHPP

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
#include <DesignIntf.hpp>	// Pascal unit
#include <SqlEdit.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <CheckLst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxsqledit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSqlEditForm;
class PASCALIMPLEMENTATION TDBXSqlEditForm : public Sqledit::TSQLEditForm
{
	typedef Sqledit::TSQLEditForm inherited;
	
__published:
	Extctrls::TPanel* ConnectionPanel;
	Stdctrls::TLabel* ConnectionLabel;
	Stdctrls::TLabel* SchemaNameLabel;
	Stdctrls::TLabel* TableScopeLabel;
	Stdctrls::TComboBox* ConnectionComboBox;
	Stdctrls::TComboBox* SchemaNameComboBox;
	Stdctrls::TButton* GetTablesButton;
	Checklst::TCheckListBox* TableScopeCheckListBox;
	HIDESBASE void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ConnectionComboBoxSelect(System::TObject* Sender);
	void __fastcall SchemaNameComboBoxDropDown(System::TObject* Sender);
	void __fastcall ConnectionComboBoxDropDown(System::TObject* Sender);
	void __fastcall GetTablesButtonClick(System::TObject* Sender);
	void __fastcall SyncTableScope(Sqlexpr::TSQLConnection* SqlCon);
	Sqlexpr::TTableScopes __fastcall GetTableScopes(void);
	HIDESBASE void __fastcall FormUpdateActionUpdate(System::TObject* Sender);
	
protected:
	Sqlexpr::TCustomSQLDataSet* LSqlDataSet;
	Classes::TList* LSqlConnections;
	Sqlexpr::TSQLConnection* NewSqlConnection;
	int curIndex;
	Sqlexpr::TSQLConnection* ActiveSqlConnection;
	Sqlexpr::TSQLConnection* PassedInSqlConnection;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDBXSqlEditForm(Classes::TComponent* AOwner) : Sqledit::TSQLEditForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDBXSqlEditForm(Classes::TComponent* AOwner, int Dummy) : Sqledit::TSQLEditForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDBXSqlEditForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBXSqlEditForm(HWND ParentWindow) : Sqledit::TSQLEditForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TDBXSqlEditForm* DbxSqlEditForm;
extern PACKAGE bool __fastcall EditSQL(System::UnicodeString SQL, Classes::TList* SqlConnections, Sqlexpr::TCustomSQLDataSet* SqlDataSet, Designintf::_di_IDesigner ADesigner)/* overload */;
extern PACKAGE Sqlexpr::TSQLConnection* __fastcall GetSqlConnection(const Designintf::_di_IDesigner Designer, Sqlexpr::TCustomSQLDataSet* SqlDataSet, Sqlexpr::TSQLConnection* SqlCon);

}	/* namespace Dbxsqledit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsqledit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsqleditHPP
