// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwgridfilter.pas' rev: 22.00

#ifndef WwgridfilterHPP
#define WwgridfilterHPP

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
#include <Menus.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <wwmenuitem.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <Themes.hpp>	// Pascal unit
#include <wwtreeview.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwgridfilter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwFormGridFilterTypes;
class PASCALIMPLEMENTATION TwwFormGridFilterTypes : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Controls::TImageList* ImageList1;
	Menus::TPopupMenu* PopupFilterMenu;
	Wwmenuitem::TwwMenuItem* SortSmallesttoLargest1;
	Wwmenuitem::TwwMenuItem* SortLargesttoSmallest1;
	Wwmenuitem::TwwMenuItem* N1;
	Wwmenuitem::TwwMenuItem* ClearFilter1;
	Wwmenuitem::TwwMenuItem* NumberFilters1;
	Wwmenuitem::TwwMenuItem* Equals1;
	Wwmenuitem::TwwMenuItem* Doesnotequal1;
	Wwmenuitem::TwwMenuItem* LessThan1;
	Wwmenuitem::TwwMenuItem* GreaterThan1;
	Wwmenuitem::TwwMenuItem* Between1;
	Wwmenuitem::TwwMenuItem* TextFilters1;
	Wwmenuitem::TwwMenuItem* Equals2;
	Wwmenuitem::TwwMenuItem* Doesnotequal2;
	Wwmenuitem::TwwMenuItem* Startswith1;
	Wwmenuitem::TwwMenuItem* Doesnotstartwith1;
	Wwmenuitem::TwwMenuItem* Contains1;
	Wwmenuitem::TwwMenuItem* Doesnotcontain1;
	Wwmenuitem::TwwMenuItem* Endswith1;
	Wwmenuitem::TwwMenuItem* Doesnotendwith1;
	Wwmenuitem::TwwMenuItem* N2;
	Wwmenuitem::TwwMenuItem* GroupBy1;
	Menus::TMenuItem* DateFilters1;
	Menus::TMenuItem* Equals3;
	Menus::TMenuItem* N3;
	Menus::TMenuItem* Before1;
	Menus::TMenuItem* After1;
	Menus::TMenuItem* Between2;
	Menus::TMenuItem* N4;
	Menus::TMenuItem* Tomorrow1;
	Menus::TMenuItem* Today1;
	Menus::TMenuItem* Yesterday1;
	Menus::TMenuItem* N5;
	Menus::TMenuItem* NextWeek1;
	Menus::TMenuItem* ThisWeek1;
	Menus::TMenuItem* LastWeek1;
	Menus::TMenuItem* N6;
	Menus::TMenuItem* NextMonth1;
	Menus::TMenuItem* ThisMonth1;
	Menus::TMenuItem* LastMonth1;
	Menus::TMenuItem* N7;
	Menus::TMenuItem* NextQuarter1;
	Menus::TMenuItem* ThisQuarter1;
	Menus::TMenuItem* LastQuarter1;
	Menus::TMenuItem* N8;
	Menus::TMenuItem* NextYear1;
	Menus::TMenuItem* ThisYear1;
	Menus::TMenuItem* LastYear1;
	Menus::TMenuItem* AddRemoveColumns1;
	Menus::TMenuItem* N9;
	Menus::TMenuItem* RemoveColumn1;
	Menus::TMenuItem* AddColumnsAfter1;
	Menus::TMenuItem* AddColumnsBefore1;
	Menus::TMenuItem* ClearGroupBy1;
	void __fastcall SortSmallesttoLargest1Click(System::TObject* Sender);
	void __fastcall SortLargesttoSmallest1Click(System::TObject* Sender);
	void __fastcall PopupFilterMenuPopup(System::TObject* Sender);
	void __fastcall FilterMenuItemClick(System::TObject* Sender);
	void __fastcall ClearFilter1Click(System::TObject* Sender);
	void __fastcall GroupBy1Click(System::TObject* Sender);
	void __fastcall AddColumnsBefore1Click(System::TObject* Sender);
	void __fastcall RemoveColumn1Click(System::TObject* Sender);
	void __fastcall AddColumnsAfter1Click(System::TObject* Sender);
	void __fastcall AddRemoveColumns1Click(System::TObject* Sender);
	void __fastcall ClearGroupBy1Click(System::TObject* Sender);
	
private:
	bool __fastcall HaveAscendingIndexDefs(void);
	bool __fastcall HaveDescendingIndexDefs(void);
	Db::TDataSet* __fastcall GetDataSet(void);
	void __fastcall RemoveItem(System::UnicodeString fieldName);
	System::UnicodeString __fastcall GetFieldName(void);
	Db::TField* __fastcall GetField(void);
	void __fastcall ApplyIntl(void);
	
public:
	Grids::TCustomGrid* Grid;
	System::TObject* Column;
	Classes::TComponent* FilterDialog;
	__fastcall virtual TwwFormGridFilterTypes(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwFormGridFilterTypes(void);
	System::TObject* __fastcall FindItem(System::UnicodeString fieldName);
	bool __fastcall IsClientCursor(void);
	void __fastcall SortAscending(System::UnicodeString fieldName = L"");
	void __fastcall SortDescending(System::UnicodeString fieldName = L"");
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwFormGridFilterTypes(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwFormGridFilterTypes(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


#pragma option push -b-
enum TwwfcItemState { wwfcisSelected, wwfcisGrayed, wwfcisDisabled, wwfcisChecked, wwfcisFocused, wwfcisDefault, wwfcisHot, wwfcisMarked, wwfcisIndeterminate };
#pragma option pop

typedef System::Set<TwwfcItemState, TwwfcItemState::wwfcisSelected, TwwfcItemState::wwfcisIndeterminate>  TwwfcItemStates;

#pragma option push -b-
enum TwwTreeViewCheckboxType { wwtvctNone, wwtvctCheckbox, wwtvctRadioGroup };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwFormGridFilterTypes* wwFormGridFilterTypes;

}	/* namespace Wwgridfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwgridfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwgridfilterHPP
