// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwidlg.pas' rev: 22.00

#ifndef WwidlgHPP
#define WwidlgHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwkeycb.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <Wwdatsrc.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwDialog.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwidlg
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwDBLookupDlgOption { opShowOKCancel, opShowSearchBy, opGroupControls, opFixFirstColumn, opShowStatusBar, opDisableReorderColumns };
#pragma option pop

typedef System::Set<TwwDBLookupDlgOption, TwwDBLookupDlgOption::opShowOKCancel, TwwDBLookupDlgOption::opDisableReorderColumns>  TwwDBLookupDlgOptions;

typedef void __fastcall (__closure *TwwUserButtonEvent)(System::TObject* Sender, Db::TDataSet* LookupTable);

class DELPHICLASS TwwLookupDlg;
typedef void __fastcall (__closure *TwwOnInitDialogEvent)(TwwLookupDlg* Dialog);

typedef void __fastcall (__closure *TwwSyncDataSetsEvent)(System::TObject* Sender, Db::TDataSet* MoveDataSet, Db::TDataSet* BaseDataSet);

class PASCALIMPLEMENTATION TwwLookupDlg : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TLabel* SearchCharacterLabel;
	Stdctrls::TLabel* SortByLabel;
	Wwdbgrid::TwwDBGrid* wwDBGrid1;
	Wwkeycb::TwwIncrementalSearch* wwIncrementalSearch1;
	Db::TDataSource* DataSource1;
	Extctrls::THeader* StatusHeader;
	Extctrls::TPanel* UserButtonPanel;
	Stdctrls::TButton* UserButton1;
	Stdctrls::TButton* UserButton2;
	void __fastcall wwKeyCombo1Change(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall FormKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall wwKeyCombo1Enter(System::TObject* Sender);
	void __fastcall wwDBGrid1DblClick(System::TObject* Sender);
	void __fastcall DataSource1DataChange(System::TObject* Sender, Db::TField* Field);
	void __fastcall UserButton1Click(System::TObject* Sender);
	void __fastcall UserButton2Click(System::TObject* Sender);
	void __fastcall wwDBGrid1MouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall wwDBGrid1ColumnMoved(System::TObject* Sender, int FromIndex, int ToIndex);
	
private:
	bool InShow;
	TwwUserButtonEvent FUserButton1Click;
	TwwUserButtonEvent FUserButton2Click;
	TwwOnInitDialogEvent FOnInitDialog;
	TwwOnInitDialogEvent FOnCloseDialog;
	Classes::TNotifyEvent FOnSortChange;
	System::UnicodeString FSearchText;
	bool FShowingChanged;
	int OrigLeft;
	Classes::TComponent* CallingComponent;
	bool initialized;
	bool PictureMaskFromField;
	void __fastcall AdjustColumnsToIndex(void);
	void __fastcall ResizeControls(bool padOnly);
	void __fastcall ApplyIntl(void);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Messages::TMessage &Message);
	void __fastcall UpdateSearchField(void);
	
protected:
	void __fastcall WriteStatusInfo(void);
	DYNAMIC void __fastcall DoShow(void);
	DYNAMIC void __fastcall Activate(void);
	
public:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	int MaxWidth;
	int MaxHeight;
	TwwDBLookupDlgOptions Options;
	bool ClickedMemoField;
	Db::TDataSet* ThisDataSet;
	Wwkeycb::TwwKeyCombo* wwKeyCombo1;
	__fastcall virtual TwwLookupDlg(Classes::TComponent* AOwner);
	void __fastcall KeyComboChange(void);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwLookupDlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwLookupDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwLookupDlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TwwCustomLookupDialog;
class PASCALIMPLEMENTATION TwwCustomLookupDialog : public Wwdialog::TwwCustomDialog
{
	typedef Wwdialog::TwwCustomDialog inherited;
	
private:
	TwwUserButtonEvent FUserButton1Click;
	TwwUserButtonEvent FUserButton2Click;
	TwwOnInitDialogEvent FOnInitDialog;
	TwwSyncDataSetsEvent FOnSyncDataSets;
	TwwOnInitDialogEvent FOnCloseDialog;
	Classes::TNotifyEvent FOnSortChange;
	System::UnicodeString FUserButton1Caption;
	System::UnicodeString FUserButton2Caption;
	bool FUseTFields;
	bool FPictureMaskFromField;
	Classes::TStrings* FControlType;
	bool FControlInfoInDataset;
	Classes::TStrings* FPictureMasks;
	bool FPictureMaskFromDataSet;
	Wwdblook::TwwPerformSearchEvent FOnPerformCustomSearch;
	void __fastcall SetPictureMasks(Classes::TStrings* val);
	void __fastcall SetControlType(Classes::TStrings* val);
	
protected:
	int FMaxWidth;
	int FMaxHeight;
	Classes::TAlignment FGridTitleAlignment;
	Classes::TStrings* FSelected;
	Db::TDataSet* FLookupTable;
	Db::TDataSet* FSyncTable;
	TwwDBLookupDlgOptions FOptions;
	Wwdbigrd::TwwDBGridOptions FGridOptions;
	Graphics::TColor FGridColor;
	System::UnicodeString FCaption;
	Stdctrls::TEditCharCase FCharCase;
	Classes::TStrings* __fastcall GetSelectedFields(void);
	void __fastcall SetSelectedFields(Classes::TStrings* sel);
	void __fastcall SetLookupTable(Db::TDataSet* sel);
	void __fastcall SetWWLookupTable(Db::TDataSet* sel);
	void __fastcall SetSyncTable(Db::TDataSet* sel);
	Db::TDataSet* __fastcall GetSyncTable(void);
	Db::TDataSet* __fastcall GetLookupTable(void);
	Db::TDataSet* __fastcall GetWWLookupTable(void);
	void __fastcall SetOptions(TwwDBLookupDlgOptions sel);
	void __fastcall SetGridOptions(Wwdbigrd::TwwDBGridOptions sel);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall DoSyncDataSets(Db::TDataSet* tempLookupTable, Db::TDataSet* FSyncTable);
	
public:
	__fastcall virtual TwwCustomLookupDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomLookupDialog(void);
	virtual bool __fastcall Execute(void);
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void);
	__property Db::TDataSet* SearchTable = {read=GetSyncTable, write=SetSyncTable};
	__property Classes::TStrings* Selected = {read=GetSelectedFields, write=SetSelectedFields};
	__property Graphics::TColor GridColor = {read=FGridColor, write=FGridColor, nodefault};
	__property TwwDBLookupDlgOptions Options = {read=FOptions, write=SetOptions, default=3};
	__property Wwdbigrd::TwwDBGridOptions GridOptions = {read=FGridOptions, write=SetGridOptions, default=1277};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property int MaxHeight = {read=FMaxHeight, write=FMaxHeight, nodefault};
	__property Stdctrls::TEditCharCase CharCase = {read=FCharCase, write=FCharCase, nodefault};
	__property Classes::TAlignment GridTitleAlignment = {read=FGridTitleAlignment, write=FGridTitleAlignment, nodefault};
	__property TwwUserButtonEvent OnUserButton1Click = {read=FUserButton1Click, write=FUserButton1Click};
	__property TwwUserButtonEvent OnUserButton2Click = {read=FUserButton2Click, write=FUserButton2Click};
	__property TwwSyncDataSetsEvent OnSyncDataSets = {read=FOnSyncDataSets, write=FOnSyncDataSets};
	__property Wwdblook::TwwPerformSearchEvent OnPerformCustomSearch = {read=FOnPerformCustomSearch, write=FOnPerformCustomSearch};
	__property System::UnicodeString UserButton1Caption = {read=FUserButton1Caption, write=FUserButton1Caption};
	__property System::UnicodeString UserButton2Caption = {read=FUserButton2Caption, write=FUserButton2Caption};
	__property TwwOnInitDialogEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property TwwOnInitDialogEvent OnCloseDialog = {read=FOnCloseDialog, write=FOnCloseDialog};
	__property Classes::TNotifyEvent OnSortChange = {read=FOnSortChange, write=FOnSortChange};
	__property bool UseTFields = {read=FUseTFields, write=FUseTFields, default=1};
	__property bool PictureMaskFromField = {read=FPictureMaskFromField, write=FPictureMaskFromField, default=0};
	__property Classes::TStrings* ControlType = {read=FControlType, write=SetControlType};
	__property bool ControlInfoInDataset = {read=FControlInfoInDataset, write=FControlInfoInDataset, default=1};
	__property bool PictureMaskFromDataset = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=1};
	__property Classes::TStrings* PictureMasks = {read=FPictureMasks, write=SetPictureMasks};
};


class DELPHICLASS TwwLookupDialog;
class PASCALIMPLEMENTATION TwwLookupDialog : public TwwCustomLookupDialog
{
	typedef TwwCustomLookupDialog inherited;
	
public:
	virtual bool __fastcall Execute(void);
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void);
	
__published:
	__property Selected;
	__property GridTitleAlignment;
	__property GridColor;
	__property Options = {default=3};
	__property GridOptions = {default=1277};
	__property Db::TDataSet* LookupTable = {read=GetLookupTable, write=SetLookupTable};
	__property Caption;
	__property MaxWidth;
	__property MaxHeight;
	__property CharCase;
	__property PictureMaskFromField = {default=0};
	__property UseTFields = {default=1};
	__property UserButton1Caption;
	__property UserButton2Caption;
	__property OnUserButton1Click;
	__property OnUserButton2Click;
	__property OnInitDialog;
	__property OnCloseDialog;
	__property OnSortChange;
	__property OnPerformCustomSearch;
	__property ControlType;
	__property ControlInfoInDataset = {default=1};
	__property PictureMaskFromDataset = {default=1};
	__property PictureMasks;
public:
	/* TwwCustomLookupDialog.Create */ inline __fastcall virtual TwwLookupDialog(Classes::TComponent* AOwner) : TwwCustomLookupDialog(AOwner) { }
	/* TwwCustomLookupDialog.Destroy */ inline __fastcall virtual ~TwwLookupDialog(void) { }
	
};


class DELPHICLASS TwwSearchDialog;
class PASCALIMPLEMENTATION TwwSearchDialog : public TwwCustomLookupDialog
{
	typedef TwwCustomLookupDialog inherited;
	
public:
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void);
	
__published:
	__property Selected;
	__property GridTitleAlignment;
	__property GridColor;
	__property Options = {default=3};
	__property GridOptions = {default=1277};
	__property SearchTable;
	__property Db::TDataSet* ShadowSearchTable = {read=GetWWLookupTable, write=SetWWLookupTable};
	__property PictureMaskFromField = {default=0};
	__property Caption;
	__property MaxWidth;
	__property MaxHeight;
	__property CharCase;
	__property UseTFields = {default=1};
	__property UserButton1Caption;
	__property UserButton2Caption;
	__property OnUserButton1Click;
	__property OnUserButton2Click;
	__property OnSyncDataSets;
	__property OnInitDialog;
	__property OnCloseDialog;
	__property OnSortChange;
	__property OnPerformCustomSearch;
	__property ControlType;
	__property ControlInfoInDataset = {default=1};
	__property PictureMaskFromDataset = {default=1};
	__property PictureMasks;
public:
	/* TwwCustomLookupDialog.Create */ inline __fastcall virtual TwwSearchDialog(Classes::TComponent* AOwner) : TwwCustomLookupDialog(AOwner) { }
	/* TwwCustomLookupDialog.Destroy */ inline __fastcall virtual ~TwwSearchDialog(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall ExecuteWWLookupDlg(Forms::TForm* AParentForm, Classes::TComponent* AComponent, Classes::TStrings* ASelected, Db::TDataSet* ADataSet, TwwDBLookupDlgOptions AOptions, Wwdbigrd::TwwDBGridOptions AGridOptions, Graphics::TColor AGridColor, Classes::TAlignment AGridTitleAlignment, System::UnicodeString ACaption, int AMaxWidth, int AMaxHeight, Stdctrls::TEditCharCase ACharCase, System::UnicodeString AUserButton1Caption, System::UnicodeString AUserButton2Caption, TwwUserButtonEvent AUserButton1Click, TwwUserButtonEvent AUserButton2Click, TwwOnInitDialogEvent AOnInitDialog, TwwOnInitDialogEvent AOnCloseDialog, Classes::TNotifyEvent AOnSortChange, System::UnicodeString ASearchText, bool AUseTFields, bool APictureMaskFromField);
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwidlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwidlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwidlgHPP
