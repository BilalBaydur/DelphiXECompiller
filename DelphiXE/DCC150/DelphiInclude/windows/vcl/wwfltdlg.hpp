// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwfltdlg.pas' rev: 22.00

#ifndef WwfltdlgHPP
#define WwfltdlgHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Wwdatsrc.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwfltdum.hpp>	// Pascal unit
#include <Tabs.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <wwDialog.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <wwclearbuttongroup.hpp>	// Pascal unit
#include <wwradiogroup.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <WideStrings.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwfltdlg
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwFilterDialogOption { fdCaseSensitive, fdShowCaseSensitive, fdShowOKCancel, fdShowViewSummary, fdShowFieldOrder, fdShowValueRangeTab, fdShowNonMatching, fdHidePartialAnywhere, fdDisableDateTimePicker, fdSizeable, fdTabsAtTop };
#pragma option pop

#pragma option push -b-
enum TwwFilterFieldsFetchType { fmUseTTable, fmUseSQL, fmUseTFields };
#pragma option pop

typedef System::Set<TwwFilterDialogOption, TwwFilterDialogOption::fdCaseSensitive, TwwFilterDialogOption::fdTabsAtTop>  TwwFilterDialogOptions;

#pragma option push -b-
enum TwwFilterDialogSort { fdSortByFieldNo, fdSortByFieldName };
#pragma option pop

#pragma option push -b-
enum TwwFilterMatchType { fdMatchStart, fdMatchAny, fdMatchExact, fdMatchEnd, fdMatchRange, fdMatchKeyword, fdMatchNone };
#pragma option pop

#pragma option push -b-
enum TwwFilterMethodAll { fdByFilter, fdByQueryModify, fdByQueryParams };
#pragma option pop

typedef TwwFilterMethodAll TwwFilterMethod;

typedef TwwFilterMatchType TwwDefaultMatchType;

#pragma option push -b-
enum TwwDefaultFilterBy { fdSmartFilter, fdFilterByRange, fdFilterByValue };
#pragma option pop

typedef void __fastcall (__closure *TwwFilterDialogSummaryEvent)(System::TObject* Sender, Classes::TList* AFieldInfo, bool &DoDefault);

typedef void __fastcall (__closure *TwwOnInitTempDataSetEvent)(System::TObject* Sender, Db::TDataSet* OrigDataSet, Db::TDataSet* TempDataSet);

class DELPHICLASS TwwFilterDlg;
typedef void __fastcall (__closure *TwwOnInitFilterDlgEvent)(TwwFilterDlg* Dialog);

typedef void __fastcall (__closure *TwwOnExecuteSQLEvent)(TwwFilterDlg* Dialog, Db::TDataSet* Query);

typedef void __fastcall (__closure *TwwOnEncodeValueEvent)(Db::TFieldType AFieldType, System::UnicodeString AFieldName, System::UnicodeString &AUserValue);

typedef void __fastcall (__closure *TwwOnEncodeDateTimeEvent)(System::TDateTime ADateTime, Db::TFieldType AFieldType, System::UnicodeString AFieldName, System::UnicodeString &FormattedDateStr);

#pragma option push -b-
enum TwwFilterOptimization { fdNone, fdUseAllIndexes, fdUseActiveIndex };
#pragma option pop

#pragma option push -b-
enum TwwQueryFormatDateMode { qfdMonthDayYear, qfdDayMonthYear, qfdYearMonthDay };
#pragma option pop

typedef void __fastcall (__closure *TwwOnSelectFilterField)(System::TObject* Sender, System::UnicodeString FieldName, System::UnicodeString &PictureMask, Classes::TStrings* ComboList);

typedef void __fastcall (__closure *TwwOnAcceptFilterRecord)(System::TObject* Sender, Db::TDataSet* DataSet, bool &Accept, bool &DefaultFiltering);

class DELPHICLASS TwwFieldInfo;
class PASCALIMPLEMENTATION TwwFieldInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString FieldName;
	System::UnicodeString DisplayLabel;
	TwwFilterMatchType MatchType;
	System::UnicodeString FilterValue;
	System::UnicodeString MinValue;
	System::UnicodeString MaxValue;
	bool CaseSensitive;
	bool NonMatching;
	int Tag;
	System::UnicodeString TagString;
public:
	/* TObject.Create */ inline __fastcall TwwFieldInfo(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwFieldInfo(void) { }
	
};


class PASCALIMPLEMENTATION TwwFilterDlg : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* FieldCriteriaPanel;
	Comctrls::TPageControl* SelectNotebook;
	Comctrls::TTabSheet* TabSheet1;
	Stdctrls::TLabel* FieldValueLbl;
	Extctrls::TRadioGroup* MatchTypeGroup;
	Extctrls::TPanel* Panel1;
	Stdctrls::TCheckBox* CaseSensitive;
	Stdctrls::TCheckBox* Nonmatching;
	Buttons::TBitBtn* FilterValueClearButton;
	Wwdbcomb::TwwDBComboBox* FilterValueCombo;
	Wwdbedit::TwwDBEdit* FilterValueEdit;
	Comctrls::TTabSheet* TabSheet2;
	Stdctrls::TLabel* StartingRangeLbl;
	Stdctrls::TLabel* EndingRangeLbl;
	Stdctrls::TEdit* MinValueEdit;
	Stdctrls::TEdit* MaxValueEdit;
	Buttons::TBitBtn* MinValueClearButton;
	Buttons::TBitBtn* MaxValueClearButton;
	Wwdbdatetimepicker::TwwDBDateTimePicker* MinDateEdit;
	Wwdbdatetimepicker::TwwDBDateTimePicker* MaxDateEdit;
	Extctrls::TPanel* FieldListPanel;
	Comctrls::TTabControl* FieldTabSet;
	Stdctrls::TListBox* FieldsListBox;
	Extctrls::TPanel* ButtonPanel;
	Stdctrls::TButton* ViewButton;
	Stdctrls::TButton* ClearSearchButton;
	Extctrls::TPanel* OKCancelPanel;
	Extctrls::TPanel* CriteriaLabelPanel;
	Stdctrls::TLabel* FieldCriteria;
	Extctrls::TPanel* FieldsLabelPanel;
	Stdctrls::TLabel* FieldsLbl;
	Extctrls::TPanel* FieldOrderPanel;
	Extctrls::TRadioGroup* FieldOrder;
	void __fastcall FieldOrderClick(System::TObject* Sender);
	void __fastcall FieldsListBoxClick(System::TObject* Sender);
	void __fastcall ViewButtonClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ValueRangeTabSetChange(System::TObject* Sender, int NewTab, bool &AllowChange);
	void __fastcall ClearSearchButtonClick(System::TObject* Sender);
	void __fastcall FilterValueComboChange(System::TObject* Sender);
	void __fastcall MinValueEditChange(System::TObject* Sender);
	void __fastcall MaxValueEditChange(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall MinValueClearButtonClick(System::TObject* Sender);
	void __fastcall MaxValueClearButtonClick(System::TObject* Sender);
	void __fastcall FilterValueClearButtonClick(System::TObject* Sender);
	void __fastcall MatchTypeGroupClick(System::TObject* Sender);
	void __fastcall FieldTabSetChanging(System::TObject* Sender, bool &AllowChange);
	void __fastcall FieldCriteriaPanelResize(System::TObject* Sender);
	void __fastcall FieldTabSetChange(System::TObject* Sender);
	
private:
	int LastItemIndex;
	bool FormActivated;
	bool __fastcall IsValueField(System::UnicodeString ADisplayLabel);
	bool __fastcall IsValueType(Db::TFieldType AFieldType);
	void __fastcall RefreshClearbutton(void);
	bool __fastcall ValidEditValue(System::UnicodeString val);
	bool __fastcall ValidEditValues(System::UnicodeString val);
	void __fastcall ApplyIntl(void);
	Db::TFieldType __fastcall GetFieldType(System::UnicodeString ADisplayLabel);
	void __fastcall UpdateFilterEditControl(void);
	System::UnicodeString __fastcall GetSQLPropertyname(void);
	void __fastcall ShowValueRangeTabs(void);
	
protected:
	Classes::TComponent* DlgComponent;
	Db::TDataSet* DlgDataSet;
	Classes::TList* FieldInfo;
	Stdctrls::TCustomEdit* MinValueEditControl;
	Stdctrls::TCustomEdit* MaxValueEditControl;
	Stdctrls::TCustomEdit* FilterValueEditControl;
	
public:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	bool FilterChanged;
	void __fastcall RefreshFieldList(bool ShowAll);
	void __fastcall AdjustFieldTabSet(int NewTab);
	__fastcall TwwFilterDlg(Classes::TComponent* AOwner, Classes::TComponent* ADlgComponent);
	__fastcall virtual ~TwwFilterDlg(void);
	bool __fastcall SelectField(bool FieldChanged);
	void __fastcall SelectPage(void);
	void __fastcall SelectFocus(void);
	void __fastcall SetFilterfield(System::UnicodeString ADisplayLabel, TwwFilterMatchType AMatchType, System::UnicodeString AFilterValue, System::UnicodeString AMinValue, System::UnicodeString AMaxValue, bool ACaseSensitive, bool ANonMatching);
	bool __fastcall GetFilterField(System::UnicodeString ADisplayLabel, TwwFieldInfo* &FldInfo);
	void __fastcall CopyList(Classes::TList* fromlist, Classes::TList* tolist);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwFilterDlg(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwFilterDlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwFilterDlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TwwDBFieldInfo;
class PASCALIMPLEMENTATION TwwDBFieldInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString LogicalFieldName;
	System::UnicodeString PhysicalFieldName;
	System::UnicodeString TableName;
	Db::TFieldType FieldType;
	System::UnicodeString DisplayLabel;
	int Size;
public:
	/* TObject.Create */ inline __fastcall TwwDBFieldInfo(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwDBFieldInfo(void) { }
	
};


#pragma option push -b-
enum TwwDatasetFilterType { fdUseOnFilter, fdUseFilterProp, fdUseBothFilterTypes };
#pragma option pop

class DELPHICLASS TwwFilterPropertyOptions;
class PASCALIMPLEMENTATION TwwFilterPropertyOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TwwDatasetFilterType FDatasetFilterType;
	System::UnicodeString FLikeWildcardChar;
	bool FUseBracketsAroundFields;
	bool FUseLikeOperator;
	bool FLikeSupportsUpperKeyword;
	
__published:
	__property TwwDatasetFilterType DatasetFilterType = {read=FDatasetFilterType, write=FDatasetFilterType, default=0};
	__property bool UseLikeOperator = {read=FUseLikeOperator, write=FUseLikeOperator, default=0};
	__property System::UnicodeString LikeWildcardChar = {read=FLikeWildcardChar, write=FLikeWildcardChar};
	__property bool LikeSupportsUpperKeyword = {read=FLikeSupportsUpperKeyword, write=FLikeSupportsUpperKeyword, default=0};
	__property bool UseBracketsAroundFields = {read=FUseBracketsAroundFields, write=FUseBracketsAroundFields, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwFilterPropertyOptions(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwFilterPropertyOptions(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwFieldOperators;
class PASCALIMPLEMENTATION TwwFieldOperators : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FOrChar;
	System::UnicodeString FAndChar;
	System::UnicodeString FNullChar;
	void __fastcall SetOrChar(System::UnicodeString val);
	void __fastcall SetAndChar(System::UnicodeString val);
	void __fastcall SetNullChar(System::UnicodeString val);
	void __fastcall SetOpChar(System::UnicodeString &opchar, System::UnicodeString val);
	
public:
	__fastcall TwwFieldOperators(Classes::TComponent* Owner);
	
__published:
	__property System::UnicodeString OrChar = {read=FOrChar, write=SetOrChar};
	__property System::UnicodeString AndChar = {read=FAndChar, write=SetAndChar};
	__property System::UnicodeString NullChar = {read=FNullChar, write=SetNullChar};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwFieldOperators(void) { }
	
};


class DELPHICLASS TwwSQLTablesCollectionItem;
class PASCALIMPLEMENTATION TwwSQLTablesCollectionItem : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FTableName;
	System::UnicodeString FTableAliasName;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	
__published:
	__property System::UnicodeString TableName = {read=FTableName, write=FTableName};
	__property System::UnicodeString TableAliasName = {read=FTableAliasName, write=FTableAliasName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TwwSQLTablesCollectionItem(Classes::TCollection* Collection) : Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TwwSQLTablesCollectionItem(void) { }
	
};


class DELPHICLASS TwwSQLTablesCollection;
class PASCALIMPLEMENTATION TwwSQLTablesCollection : public Classes::TCollection
{
	typedef Classes::TCollection inherited;
	
protected:
	Classes::TComponent* Control;
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TwwSQLTablesCollection(Classes::TComponent* Control);
	HIDESBASE TwwSQLTablesCollectionItem* __fastcall Add(void);
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TwwSQLTablesCollection(void) { }
	
};


#pragma option push -b-
enum TwwOnFilterPropertyOption { fdClearWhenNoCriteria, fdClearWhenCloseDataSet };
#pragma option pop

typedef System::Set<TwwOnFilterPropertyOption, TwwOnFilterPropertyOption::fdClearWhenNoCriteria, TwwOnFilterPropertyOption::fdClearWhenCloseDataSet>  TwwOnFilterPropertyOptions;

#pragma option push -b-
enum TwwFilterDialogRoundingMethod { fdrmFixed, fdrmRelative };
#pragma option pop

class DELPHICLASS TwwFilterDialogRounding;
class PASCALIMPLEMENTATION TwwFilterDialogRounding : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	double FEpsilon;
	TwwFilterDialogRoundingMethod FRoundingMethod;
	
public:
	__fastcall TwwFilterDialogRounding(Classes::TComponent* Owner);
	
__published:
	__property double Epsilon = {read=FEpsilon, write=FEpsilon};
	__property TwwFilterDialogRoundingMethod RoundingMethod = {read=FRoundingMethod, write=FRoundingMethod, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwFilterDialogRounding(void) { }
	
};


class DELPHICLASS TwwFilterDialog;
class PASCALIMPLEMENTATION TwwFilterDialog : public Wwdialog::TwwCustomDialog
{
	typedef Wwdialog::TwwCustomDialog inherited;
	
private:
	Db::TDataLink* FDataLink;
	TwwFilterDialogOptions FOptions;
	TwwFilterDialogSort FSortBy;
	Wwfltdum::TwwDummyForm* FDummyForm;
	System::UnicodeString FTitle;
	TwwFilterMethodAll FFilterMethod;
	TwwFilterMatchType FDefaultMatchType;
	TwwDefaultFilterBy FDefaultFilterBy;
	System::UnicodeString FDefaultField;
	Classes::TStrings* FSelectedFields;
	TwwOnInitFilterDlgEvent FOnInitDialog;
	TwwOnExecuteSQLEvent FOnExecuteSQL;
	TwwFieldOperators* FwwOperators;
	TwwFilterDialogRounding* FRounding;
	bool FRangeApplied;
	TwwFilterOptimization FFilterOptimization;
	System::Word FUpperRangePadChar;
	int FDlgHeight;
	TwwOnEncodeValueEvent FOnEncodeValue;
	TwwOnEncodeDateTimeEvent FOnEncodeDateTime;
	TwwOnSelectFilterField FOnSelectField;
	TwwOnInitTempDataSetEvent FOnInitTempDataSet;
	TwwOnAcceptFilterRecord FOnAcceptFilterRecord;
	TwwFilterFieldsFetchType FFieldsFetchMethod;
	TwwFilterDialogSummaryEvent FOnDialogSummary;
	Classes::TStrings* FOrigSQL;
	Classes::TList* FFldList;
	bool FShowDialog;
	Classes::TList* FDependentComponents;
	TwwQueryFormatDateMode FQueryFormatDateMode;
	TwwFilterPropertyOptions* FFilterPropertyOptions;
	TwwOnFilterPropertyOptions FOnFilterPropertyOptions;
	TwwSQLTablesCollection* FSQLTables;
	System::UnicodeString FSQLUpperString;
	bool SkipClearFieldInfo;
	System::UnicodeString FSQLPropertyName;
	void __fastcall SetDataSource(Db::TDataSource* value);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetFilterMethod(TwwFilterMethod val);
	void __fastcall ReplaceRemoteSQL(Classes::TStrings* querySQL);
	System::UnicodeString __fastcall PadUpperRange(int size, System::UnicodeString val);
	void __fastcall SetDlgHeight(int val);
	System::UnicodeString __fastcall GetEffectiveSQLUpperString(void);
	System::UnicodeString __fastcall FieldstoIndexWithCase(System::UnicodeString aIndexFields, bool caseSensitive);
	
protected:
	virtual void __fastcall FilterDialogView(Classes::TList* AFieldInfo);
	virtual System::UnicodeString __fastcall GetSQLPropertyname(void);
	virtual void __fastcall DoInitDialog(void);
	TwwDBFieldInfo* __fastcall AddDBFieldInfo(void);
	virtual void __fastcall LinkActive(bool active);
	virtual void __fastcall DoSelectField(System::UnicodeString FieldName, System::UnicodeString &PictureMask, Classes::TStrings* ComboList);
	virtual void __fastcall DoInitTempDataSet(Db::TDataSet* OrigDataSet, Db::TDataSet* TempDataset);
	virtual void __fastcall DoAcceptFilterRecord(Db::TDataSet* DataSet, bool &Accept, bool &DefaultFiltering);
	virtual void __fastcall InitQueryFields(void);
	virtual void __fastcall InitTableFields(void);
	virtual void __fastcall ReplaceWhereClause(Classes::TStrings* whereClause);
	virtual Db::TDataSet* __fastcall GetCommandTextDataSet(Db::TDataSet* ADataSet = (Db::TDataSet*)(0x0));
	bool __fastcall IsWideSql(Db::TDataSet* dataSet, Typinfo::PPropInfo propInfo);
	
public:
	System::WideChar *MemoBuffer;
	TwwFilterDlg* Form;
	Classes::TList* FieldInfo;
	bool FieldsInDblQuotes;
	System::Variant Patch;
	Classes::TStringList* SQLWhereClause;
	__fastcall virtual TwwFilterDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwFilterDialog(void);
	bool __fastcall ExecuteDialog(bool ExecuteQuery = true, Classes::TStrings* ReturnWhereClause = (Classes::TStrings*)(0x0));
	virtual bool __fastcall Execute(void);
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void);
	void __fastcall ApplyFilter(void);
	void __fastcall ClearFilter(void);
	virtual void __fastcall InitFields(void);
	__property Classes::TList* AllFields = {read=FFldList};
	__property bool ShowDialog = {read=FShowDialog, write=FShowDialog, nodefault};
	TwwDBFieldInfo* __fastcall GetDBInfoForField(System::UnicodeString AFilterFieldName);
	void __fastcall AddDependent(Classes::TComponent* value);
	void __fastcall RemoveDependent(Classes::TComponent* value);
	TwwFieldInfo* __fastcall AddFieldInfo(void);
	
__published:
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property TwwFilterDialogSummaryEvent OnDialogSummary = {read=FOnDialogSummary, write=FOnDialogSummary};
	__property TwwFilterDialogOptions Options = {read=FOptions, write=FOptions, default=62};
	__property TwwFilterDialogSort SortBy = {read=FSortBy, write=FSortBy, nodefault};
	__property System::UnicodeString Caption = {read=FTitle, write=FTitle};
	__property TwwFilterMethod FilterMethod = {read=FFilterMethod, write=SetFilterMethod, nodefault};
	__property TwwDefaultMatchType DefaultMatchType = {read=FDefaultMatchType, write=FDefaultMatchType, nodefault};
	__property TwwDefaultFilterBy DefaultFilterBy = {read=FDefaultFilterBy, write=FDefaultFilterBy, nodefault};
	__property System::UnicodeString DefaultField = {read=FDefaultField, write=FDefaultField};
	__property TwwFilterFieldsFetchType FieldsFetchMethod = {read=FFieldsFetchMethod, write=FFieldsFetchMethod, default=0};
	__property TwwFieldOperators* FieldOperators = {read=FwwOperators, write=FwwOperators};
	__property TwwFilterDialogRounding* Rounding = {read=FRounding, write=FRounding};
	__property TwwFilterPropertyOptions* FilterPropertyOptions = {read=FFilterPropertyOptions, write=FFilterPropertyOptions};
	__property TwwOnFilterPropertyOptions OnFilterPropertyOptions = {read=FOnFilterPropertyOptions, write=FOnFilterPropertyOptions, default=3};
	__property Classes::TStrings* SelectedFields = {read=FSelectedFields, write=FSelectedFields};
	__property TwwFilterOptimization FilterOptimization = {read=FFilterOptimization, write=FFilterOptimization, nodefault};
	__property System::Word UpperRangePadChar = {read=FUpperRangePadChar, write=FUpperRangePadChar, default=122};
	__property int DlgHeight = {read=FDlgHeight, write=SetDlgHeight, default=267};
	__property TwwQueryFormatDateMode QueryFormatDateMode = {read=FQueryFormatDateMode, write=FQueryFormatDateMode, nodefault};
	__property TwwSQLTablesCollection* SQLTables = {read=FSQLTables, write=FSQLTables};
	__property System::UnicodeString SQLUpperString = {read=FSQLUpperString, write=FSQLUpperString};
	__property System::UnicodeString SQLPropertyName = {read=FSQLPropertyName, write=FSQLPropertyName};
	__property TwwOnInitFilterDlgEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property TwwOnExecuteSQLEvent OnExecuteSQL = {read=FOnExecuteSQL, write=FOnExecuteSQL};
	__property TwwOnEncodeValueEvent OnEncodeValue = {read=FOnEncodeValue, write=FOnEncodeValue};
	__property TwwOnEncodeDateTimeEvent OnEncodeDateTime = {read=FOnEncodeDateTime, write=FOnEncodeDateTime};
	__property TwwOnSelectFilterField OnSelectField = {read=FOnSelectField, write=FOnSelectField};
	__property TwwOnInitTempDataSetEvent OnInitTempDataSet = {read=FOnInitTempDataSet, write=FOnInitTempDataSet};
	__property TwwOnAcceptFilterRecord OnAcceptFilterRecord = {read=FOnAcceptFilterRecord, write=FOnAcceptFilterRecord};
};


class DELPHICLASS TwwFilterDataLink;
class PASCALIMPLEMENTATION TwwFilterDataLink : public Db::TDataLink
{
	typedef Db::TDataLink inherited;
	
private:
	TwwFilterDialog* FilterDialog;
	
protected:
	virtual void __fastcall ActiveChanged(void);
	
public:
	__fastcall TwwFilterDataLink(TwwFilterDialog* AFilterDialog);
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TwwFilterDataLink(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwFilterDlg* wwFilterDlg;
extern PACKAGE void __fastcall Register(void);
extern PACKAGE System::UnicodeString __fastcall wwGetFilterToken(System::UnicodeString FilterValue, System::UnicodeString SearchDelimiter, int &CurPos);
extern PACKAGE System::UnicodeString __fastcall wwGetFilterOperator(System::UnicodeString FilterValue, TwwFieldOperators* FilterOperator, bool &OrFlg, bool &AndFlg);
extern PACKAGE System::UnicodeString __fastcall wwPadUpperRange(int size, System::UnicodeString s, System::Word UpperRangePadChar);

}	/* namespace Wwfltdlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwfltdlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwfltdlgHPP
