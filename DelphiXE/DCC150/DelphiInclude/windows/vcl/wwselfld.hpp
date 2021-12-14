// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwselfld.pas' rev: 22.00

#ifndef WwselfldHPP
#define WwselfldHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <TabNotBk.hpp>	// Pascal unit
#include <Tabs.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwdbdlg.hpp>	// Pascal unit
#include <wwidlg.hpp>	// Pascal unit
#include <wwDataInspector.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Wwtable.hpp>	// Pascal unit
#include <Wwaddlk.hpp>	// Pascal unit
#include <Wwquery.hpp>	// Pascal unit
#include <Wwqbe.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Wwprpfld.hpp>	// Pascal unit
#include <Wwprprx.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <ipdsgn.hpp>	// Pascal unit
#include <wwedtpic.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwselfld
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwSelectedPropertyType { sptNone, sptDataSetType, sptRecordViewType, sptObjectViewType };
#pragma option pop

class DELPHICLASS TSelFieldsForm;
class PASCALIMPLEMENTATION TSelFieldsForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Buttons::TBitBtn* HelpBtn;
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TListBox* DstList;
	Stdctrls::TButton* AddFieldsButton;
	Stdctrls::TButton* RemoveFieldsButton;
	Stdctrls::TGroupBox* SelectedFieldCaption;
	Comctrls::TPageControl* FieldNotebook;
	Stdctrls::TLabel* DisplayWidthLabel;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* DisplayWidth;
	Stdctrls::TEdit* DisplayTitle;
	Stdctrls::TLabel* Label3;
	Stdctrls::TComboBox* ControlTypeEdit;
	Extctrls::TNotebook* ControlTypeNotebook;
	Stdctrls::TLabel* Label10;
	Stdctrls::TLabel* Label11;
	Stdctrls::TComboBox* BitmapScalingCombo;
	Stdctrls::TComboBox* RasterCombo;
	Stdctrls::TLabel* Label9;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* Label4;
	Stdctrls::TLabel* Label5;
	Stdctrls::TLabel* LookupFieldCaption;
	Stdctrls::TLabel* LookupTableCaption;
	Stdctrls::TButton* Button4;
	Stdctrls::TButton* EditLookupButton;
	Extctrls::TPanel* Panel1;
	Stdctrls::TCheckBox* UseTFieldCheckbox;
	Wwdbcomb::TwwDBComboBox* DBRichEditComboList;
	Stdctrls::TLabel* Label1;
	Buttons::TBitBtn* InsertNewLineButton;
	Stdctrls::TCheckBox* ReadOnlyCB;
	Stdctrls::TCheckBox* ShrinkToFit;
	Wwdbcomb::TwwDBComboBox* DBLookupComboList;
	Stdctrls::TCheckBox* ControlAlwaysPaints;
	Stdctrls::TCheckBox* RTFControlAlwaysPaints;
	Stdctrls::TEdit* GroupName;
	Stdctrls::TLabel* GroupNameLabel;
	Stdctrls::TButton* DesignMaskButton;
	Wwdotdot::TwwDBComboDlg* PictureMaskEdit;
	Stdctrls::TCheckBox* AutoFillCheckbox;
	Stdctrls::TCheckBox* UsePictureMask;
	Comctrls::TPageControl* MaskTabControl;
	Stdctrls::TMemo* PictureDescription;
	Comctrls::TTabSheet* RegexPage;
	Comctrls::TTabSheet* PictureMaskPage;
	Wwdotdot::TwwDBComboDlg* RegexEdit;
	Stdctrls::TMemo* RegexDescription;
	Stdctrls::TCheckBox* CaseSensitiveRegexCheckBox;
	Stdctrls::TButton* Button1;
	Stdctrls::TMemo* RegexErrorMsgEdit;
	Stdctrls::TEdit* CheckOnValue;
	Stdctrls::TEdit* CheckOffValue;
	Comctrls::TTabSheet* TabSheetDisplay;
	Comctrls::TTabSheet* TabSheet3;
	Comctrls::TTabSheet* TabSheetLinks;
	bool __fastcall InDestList(System::UnicodeString Value);
	void __fastcall ExcludeItems(void);
	void __fastcall DstListClick(System::TObject* Sender);
	void __fastcall EditLookupButtonClick(System::TObject* Sender);
	void __fastcall ClearLinkButtonClick(System::TObject* Sender);
	void __fastcall SelectDest(int index);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall DisplayWidthChange(System::TObject* Sender);
	void __fastcall DisplayTitleChange(System::TObject* Sender);
	void __fastcall FieldTabSetClick(System::TObject* Sender);
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall ControlTypeEditChange(System::TObject* Sender);
	void __fastcall ExcludeBtnClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall SortAvailCheckboxClick(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	void __fastcall DesignMaskButtonClick(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall PictureMaskEditChange(System::TObject* Sender);
	void __fastcall PictureMaskEditCloseUp(System::TObject* Sender, Db::TDataSet* LookupTable, Db::TDataSet* FillTable, bool modified);
	void __fastcall RemoveFieldsButtonClick(System::TObject* Sender);
	void __fastcall AddFieldsButtonClick(System::TObject* Sender);
	void __fastcall DstListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall DstListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	void __fastcall DstListMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ScrollTimerOnTimer(System::TObject* Sender);
	void __fastcall FormDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	void __fastcall UseTFieldCheckboxClick(System::TObject* Sender);
	void __fastcall InsertNewLineButtonClick(System::TObject* Sender);
	void __fastcall ReadOnlyCBClick(System::TObject* Sender);
	void __fastcall PictureMaskEditCustomDlg(System::TObject* Sender);
	void __fastcall DBLookupComboListDropDown(System::TObject* Sender);
	void __fastcall DBLookupComboListCloseUp(Wwdbcomb::TwwDBComboBox* Sender, bool Select);
	void __fastcall GroupNameChange(System::TObject* Sender);
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall RegexEditCustomDlg(System::TObject* Sender);
	void __fastcall RegexEditChange(System::TObject* Sender);
	void __fastcall GroupNameEnter(System::TObject* Sender);
	
private:
	Db::TDataSet* gridTable;
	Db::TField* curField;
	int dragFromRow;
	bool initialized;
	Classes::TStrings* SrcListItems;
	Extctrls::TTimer* ScrollTimer;
	bool GoForwards;
	bool GoBackwards;
	bool useTFields;
	Classes::TStrings* GSelected;
	bool InSelectDest;
	Classes::TComponent* Component;
	Classes::TStrings* controlType;
	TwwSelectedPropertyType propertyType;
	Graphics::TColor OrigColor;
	void __fastcall refreshSourceList(void);
	void __fastcall getLookupFields(Db::TField* curField, System::UnicodeString &databasename, System::UnicodeString &tableName, System::UnicodeString &fieldName, System::UnicodeString &index, System::UnicodeString &indexFields, System::UnicodeString &joins, System::WideChar &useExtension, int &foundIndex);
	void __fastcall getControlInfo(Db::TField* curField, System::UnicodeString &controlName, Classes::TStrings* controlData);
	void __fastcall setControlInfo(Db::TField* curField, System::UnicodeString controlName, Classes::TStrings* controlData);
	void __fastcall saveControlInfo(void);
	void __fastcall SavePictureMasks(void);
	void __fastcall SaveRegexMasks(void);
	
public:
	__fastcall virtual TSelFieldsForm(Classes::TComponent* AOwner);
	__fastcall virtual ~TSelFieldsForm(void);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSelFieldsForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSelFieldsForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwSelectTableFields(Classes::TComponent* AComponent, Db::TDataSet* dataSet, Classes::TStrings* &fields, bool &AuseTFields, Designintf::_di_IDesigner ADesigner, TwwSelectedPropertyType APropertyType);

}	/* namespace Wwselfld */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwselfld;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwselfldHPP
