// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwdblook.pas' rev: 22.00

#ifndef WwdblookHPP
#define WwdblookHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Wwlocate.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <wwcombobutton.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdblook
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TNotifyCloseUpEvent)(System::TObject* Sender, Db::TDataSet* LookupTable, Db::TDataSet* FillTable, bool modified);

typedef void __fastcall (__closure *TNotInListEvent)(System::TObject* Sender, Db::TDataSet* LookupTable, System::UnicodeString NewValue, bool &Accept);

typedef void __fastcall (__closure *TwwPerformSearchEvent)(System::TObject* Sender, Db::TDataSet* LookupTable, System::UnicodeString SearchField, System::UnicodeString SearchValue, bool PerformLookup, bool &Found);

#pragma option push -b-
enum TwwDBLookupComboStyle { csDropDown, csDropDownList };
#pragma option pop

#pragma option push -b-
enum TwwDBLookupListOption { loColLines, loRowLines, loTitles, loFixedDropDownHeight, loSearchOnBackspace };
#pragma option pop

typedef System::Set<TwwDBLookupListOption, TwwDBLookupListOption::loColLines, TwwDBLookupListOption::loSearchOnBackspace>  TwwDBLookupListOptions;

#pragma option push -b-
enum TwwCalcFieldType { cftUnknown, cftCalculated, cftNotCalculated };
#pragma option pop

#pragma option push -b-
enum TwwSeqSearchOption { ssoEnabled, ssoCaseSensitive };
#pragma option pop

typedef System::Set<TwwSeqSearchOption, TwwSeqSearchOption::ssoEnabled, TwwSeqSearchOption::ssoCaseSensitive>  TwwSeqSearchOptions;

#pragma option push -b-
enum TwwLookupSearchType { lstDefault, lstCustom };
#pragma option pop

class DELPHICLASS TwwDropDownGridOptions;
class PASCALIMPLEMENTATION TwwDropDownGridOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FTitleLines;
	Graphics::TColor FColor;
	Classes::TAlignment FTitleAlignment;
	
public:
	__fastcall TwwDropDownGridOptions(Classes::TComponent* AOwner);
	
__published:
	__property int TitleLines = {read=FTitleLines, write=FTitleLines, default=1};
	__property Graphics::TColor Color = {read=FColor, write=FColor, default=-16777211};
	__property Classes::TAlignment TitleAlignment = {read=FTitleAlignment, write=FTitleAlignment, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwDropDownGridOptions(void) { }
	
};


class DELPHICLASS TwwDBCustomLookupCombo;
class DELPHICLASS TwwPopupGrid;
class PASCALIMPLEMENTATION TwwDBCustomLookupCombo : public Stdctrls::TCustomEdit
{
	typedef Stdctrls::TCustomEdit inherited;
	
private:
	Wwintl::TwwController* FController;
	Wwdbedit::TwwDBPicture* FPicture;
	Classes::TAlignment FDropDownAlignment;
	Controls::TControlCanvas* FCanvas;
	int FDropDownCount;
	int FDropDownWidth;
	Controls::TWinControl* FBtnControl;
	TwwDBLookupComboStyle FStyle;
	Classes::TNotifyEvent FOnDropDown;
	TNotifyCloseUpEvent FOnCloseUp;
	TNotInListEvent FOnNotInList;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FShowMatchText;
	TwwPerformSearchEvent FOnPerformCustomSearch;
	Classes::TNotifyEvent FOnBeforeDropDown;
	TwwDropDownGridOptions* FDropDownGridOptions;
	bool FNavigator;
	bool ChangingFromLink;
	bool ProcessingNotInList;
	bool InCloseUpEvent;
	int FSearchDelay;
	bool FAutoDropDown;
	System::UnicodeString FSearchField;
	TwwSeqSearchOptions FSeqSearchOptions;
	bool FOrderByDisplay;
	int FItemCount;
	bool FPreciseEditRegion;
	bool FAllowClearKey;
	bool FUseTFields;
	Controls::TImageList* FImageList;
	Wwframe::TwwComboButtonStyle FButtonStyle;
	int ExtraHeight;
	bool FControlInfoInDataset;
	Wwframe::TwwEditFrame* FFrame;
	Wwframe::TwwButtonEffects* FButtonEffects;
	int FButtonWidth;
	bool SkipUpdate;
	bool SetModifiedInChangeEvent;
	bool InDropDownEvent;
	bool InCustomSearch;
	bool FDisableThemes;
	bool OldShowHint;
	bool FMouseInControl;
	System::UnicodeString __fastcall GetDataField(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	Db::TDataSet* __fastcall GetLookupTable(void);
	System::UnicodeString __fastcall GetLookupField(void);
	bool __fastcall GetReadOnly(void);
	System::UnicodeString __fastcall GetValue(void);
	System::UnicodeString __fastcall GetValue2(void);
	System::UnicodeString __fastcall GetValue3(void);
	void __fastcall EnableEdit(void);
	System::UnicodeString __fastcall GetDisplayValue(void);
	int __fastcall GetMinHeight(void);
	TwwDBLookupListOptions __fastcall GetOptions(void);
	bool __fastcall CanEdit(void);
	bool __fastcall Editable(void);
	bool __fastcall MouseEditable(void);
	void __fastcall SetValue(const System::UnicodeString NewValue);
	void __fastcall SetDisplayValue(const System::UnicodeString NewValue);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetLookupTable(Db::TDataSet* sel);
	void __fastcall SetLookupField(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetOptions(TwwDBLookupListOptions Value);
	void __fastcall SetStyle(TwwDBLookupComboStyle Value);
	void __fastcall SetPreciseEditRegion(bool val);
	void __fastcall FieldLinkActive(System::TObject* Sender);
	void __fastcall NonEditMouseDown(Messages::TWMMouse &Message);
	void __fastcall DoSelectAll(void);
	void __fastcall SetEditRect(void);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Messages::TWMSetFont &Message);
	MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	Classes::TStrings* __fastcall getSelectedFields(void);
	void __fastcall setSelectedFields(Classes::TStrings* sel);
	bool __fastcall GetShowButton(void);
	void __fastcall SetShowButton(bool sel);
	bool __fastcall IsLookup(void);
	void __fastcall SetUseTFields(bool val);
	Classes::TStrings* __fastcall GetControlType(void);
	void __fastcall SetControlType(Classes::TStrings* val);
	void __fastcall SetButtonGlyph(Graphics::TBitmap* Value);
	Graphics::TBitmap* __fastcall GetButtonGlyph(void);
	void __fastcall SetButtonStyle(Wwframe::TwwComboButtonStyle val);
	void __fastcall SetButtonWidth(int val);
	int __fastcall GetButtonWidth(void);
	void __fastcall SetNavigator(bool Value);
	void __fastcall SetController(Wwintl::TwwController* Value);
	
protected:
	Dbctrls::TFieldDataLink* FFieldLink;
	Extctrls::TTimer* FTimer;
	TwwPopupGrid* FGrid;
	Wwcombobutton::TwwComboButton* FButton;
	System::UnicodeString FLastSearchKey;
	bool InList;
	System::UnicodeString TypedInText;
	System::UnicodeString OldLookupValue;
	System::UnicodeString OldDisplayValue;
	bool InAutoDropDown;
	bool SkipDataChange;
	bool FMouseInButtonControl;
	bool FFocused;
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	bool __fastcall HasMasterSource(void);
	bool __fastcall UseSeqSearch(void);
	Db::TDataSet* __fastcall LTable(void);
	bool __fastcall IsWWCalculatedField(void);
	virtual void __fastcall DrawButton(Graphics::TCanvas* Canvas, const Types::TRect &R, Buttons::TButtonState State, Controls::TControlState ControlState, bool &DefaultPaint);
	System::UnicodeString __fastcall SetValue2(void);
	System::UnicodeString __fastcall SetValue3(void);
	void __fastcall WwChangeFromLink(Db::TDataSet* AlookupTable, bool &modified);
	virtual void __fastcall OnEditTimerEvent(System::TObject* Sender);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	Db::TDataSource* __fastcall GetLookupSource(void);
	void __fastcall UpdateData(System::TObject* Sender);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	void __fastcall GridClick(System::TObject* Sender);
	virtual void __fastcall Loaded(void);
	System::UnicodeString __fastcall GetLookupValue(void);
	void __fastcall RedrawListGrid(void);
	void __fastcall UpdateButtonGlyph(void);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	DYNAMIC void __fastcall DoEnter(void);
	DYNAMIC void __fastcall DoExit(void);
	void __fastcall UpdateFromCurrentSelection(void);
	void __fastcall UpdateSearchIndex(bool useDisplayIndex);
	int __fastcall GetSearchIndex(void);
	HIDESBASE void __fastcall SetModified(bool val);
	bool __fastcall IsValidChar(System::Word key);
	virtual bool __fastcall IsLookupDlg(void);
	bool __fastcall IsLookupRequired(void);
	virtual bool __fastcall DoFindRecord(System::UnicodeString ASearchValue, System::UnicodeString ASearchField, Wwlocate::TwwLocateMatchType matchType);
	void __fastcall ComputeLookupFields(void);
	void __fastcall UpdateButtonPosition(void);
	virtual bool __fastcall FindRecord(System::UnicodeString KeyValue, System::UnicodeString LookupField, Wwlocate::TwwLocateMatchType MatchType, bool CaseSensitive, bool PerformLookup = false);
	virtual void __fastcall DrawFrame(Graphics::TCanvas* Canvas);
	virtual bool __fastcall IsCustom(void);
	bool __fastcall Is3DBorder(void);
	Classes::TAlignment __fastcall GetEffectiveAlignment(void);
	void __fastcall InvalidateTransparentButton(void);
	virtual void __fastcall PerformCustomSearch(System::UnicodeString SearchField, System::UnicodeString SearchValue, bool PerformLookup, bool &Found);
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	bool __fastcall UseExprIndex(void);
	Db::TField* __fastcall IndexFields(int index);
	void __fastcall SetToIndexContainingField(System::UnicodeString fieldName);
	void __fastcall SetToIndexContainingFields(Classes::TStrings* fields);
	bool __fastcall wwFindRecord(System::UnicodeString KeyValue, System::UnicodeString LookupField, Wwlocate::TwwLocateMatchType MatchType, bool caseSensitive);
	bool __fastcall wwFindNearest(System::UnicodeString key, int FieldNo);
	bool __fastcall wwFindKey(System::TVarRec const *KeyValues, const int KeyValues_Size);
	__property Controls::TControlCanvas* ControlCanvas = {read=FCanvas};
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	
public:
	TwwCalcFieldType wwDBCalcFieldType;
	System::Variant Patch;
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	bool __fastcall isTransparentEffective(void);
	void __fastcall RefreshDisplay(void);
	void __fastcall RefreshButton(void);
	void __fastcall PerformSearch(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	__fastcall virtual TwwDBCustomLookupCombo(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBCustomLookupCombo(void);
	DYNAMIC void __fastcall DropDown(void);
	DYNAMIC void __fastcall CloseUp(bool modified);
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
	__property System::UnicodeString Value2 = {read=GetValue2};
	__property System::UnicodeString Value3 = {read=GetValue3};
	__property System::UnicodeString LookupValue = {read=GetLookupValue, write=SetValue};
	__property System::UnicodeString DisplayValue = {read=GetDisplayValue, write=SetDisplayValue};
	__property System::UnicodeString SearchField = {read=FSearchField, write=FSearchField};
	__property Classes::TLeftRight DropDownAlignment = {read=FDropDownAlignment, write=FDropDownAlignment, nodefault};
	__property Classes::TStrings* Selected = {read=getSelectedFields, write=setSelectedFields};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property Wwframe::TwwComboButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, nodefault};
	__property Wwframe::TwwButtonEffects* ButtonEffects = {read=FButtonEffects, write=FButtonEffects};
	__property Graphics::TBitmap* ButtonGlyph = {read=GetButtonGlyph, write=SetButtonGlyph, stored=IsCustom};
	__property int ButtonWidth = {read=GetButtonWidth, write=SetButtonWidth, default=0};
	__property Db::TDataSet* LookupTable = {read=GetLookupTable, write=SetLookupTable};
	__property System::UnicodeString LookupField = {read=GetLookupField, write=SetLookupField};
	__property TwwDBLookupListOptions Options = {read=GetOptions, write=SetOptions, default=0};
	__property TwwDBLookupComboStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int DropDownCount = {read=FDropDownCount, write=FDropDownCount, default=8};
	__property int DropDownWidth = {read=FDropDownWidth, write=FDropDownWidth, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool AutoDropDown = {read=FAutoDropDown, write=FAutoDropDown, nodefault};
	__property Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property Classes::TNotifyEvent OnBeforeDropDown = {read=FOnBeforeDropDown, write=FOnBeforeDropDown};
	__property TNotifyCloseUpEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property bool ShowButton = {read=GetShowButton, write=SetShowButton, nodefault};
	__property TwwSeqSearchOptions SeqSearchOptions = {read=FSeqSearchOptions, write=FSeqSearchOptions, default=1};
	__property TNotInListEvent OnNotInList = {read=FOnNotInList, write=FOnNotInList};
	__property TwwPopupGrid* Grid = {read=FGrid, write=FGrid};
	__property bool OrderByDisplay = {read=FOrderByDisplay, write=FOrderByDisplay, default=1};
	__property bool PreciseEditRegion = {read=FPreciseEditRegion, write=SetPreciseEditRegion, nodefault};
	__property bool AllowClearKey = {read=FAllowClearKey, write=FAllowClearKey, nodefault};
	__property bool ShowMatchText = {read=FShowMatchText, write=FShowMatchText, default=0};
	__property bool UseTFields = {read=FUseTFields, write=SetUseTFields, default=1};
	__property Controls::TImageList* ImageList = {read=FImageList, write=FImageList};
	__property bool ControlInfoInDataset = {read=FControlInfoInDataset, write=FControlInfoInDataset, default=1};
	__property Classes::TStrings* ControlType = {read=GetControlType, write=SetControlType};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property int SearchDelay = {read=FSearchDelay, write=FSearchDelay, default=0};
	__property TwwDropDownGridOptions* DropDownGridOptions = {read=FDropDownGridOptions, write=FDropDownGridOptions};
	__property TwwPerformSearchEvent OnPerformCustomSearch = {read=FOnPerformCustomSearch, write=FOnPerformCustomSearch};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property bool Navigator = {read=FNavigator, write=SetNavigator, default=0};
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
	
__published:
	__property Wwdbedit::TwwDBPicture* Picture = {read=FPicture, write=FPicture};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property AutoSize = {default=1};
	__property Ctl3D;
	__property Font;
	__property CharCase = {default=0};
	__property BorderStyle = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBCustomLookupCombo(HWND ParentWindow) : Stdctrls::TCustomEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwDBLookupCombo;
class PASCALIMPLEMENTATION TwwDBLookupCombo : public TwwDBCustomLookupCombo
{
	typedef TwwDBCustomLookupCombo inherited;
	
__published:
	__property Controller;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property DisableThemes = {default=0};
	__property ControlInfoInDataset = {default=1};
	__property ControlType;
	__property DropDownAlignment;
	__property Selected;
	__property DataField;
	__property DataSource;
	__property LookupTable;
	__property LookupField;
	__property Options = {default=0};
	__property Style = {default=0};
	__property AutoSelect = {default=1};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property DropDownWidth = {default=0};
	__property Enabled = {default=1};
	__property ButtonStyle = {default=1};
	__property ButtonEffects;
	__property Navigator = {default=0};
	__property Frame;
	__property ButtonWidth = {default=0};
	__property ButtonGlyph;
	__property ImeMode = {default=3};
	__property ImeName;
	__property ImageList;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property AutoDropDown;
	__property ShowButton;
	__property SeqSearchOptions = {default=1};
	__property OrderByDisplay = {default=1};
	__property SearchDelay = {default=0};
	__property UseTFields = {default=1};
	__property PreciseEditRegion;
	__property AllowClearKey;
	__property ShowMatchText = {default=0};
	__property Touch;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnBeforeDropDown;
	__property OnDropDown;
	__property OnCloseUp;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnNotInList;
	__property OnPerformCustomSearch;
	__property OnGesture;
public:
	/* TwwDBCustomLookupCombo.Create */ inline __fastcall virtual TwwDBLookupCombo(Classes::TComponent* AOwner) : TwwDBCustomLookupCombo(AOwner) { }
	/* TwwDBCustomLookupCombo.Destroy */ inline __fastcall virtual ~TwwDBLookupCombo(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBLookupCombo(HWND ParentWindow) : TwwDBCustomLookupCombo(ParentWindow) { }
	
};


class DELPHICLASS TwwDBLookupList;
class PASCALIMPLEMENTATION TwwDBLookupList : public Wwdbigrd::TwwCustomDBGrid
{
	typedef Wwdbigrd::TwwCustomDBGrid inherited;
	
private:
	TwwDBCustomLookupCombo* FCombo;
	Dbctrls::TFieldDataLink* FFieldLink;
	Dbctrls::TFieldDataLink* FNavigatorLink;
	System::UnicodeString FLookupField;
	Db::TField* FDisplayFld;
	Db::TField* FValueFld;
	Db::TField* FValueFld2;
	Db::TField* FValueFld3;
	System::UnicodeString FValue;
	System::UnicodeString FValue2;
	System::UnicodeString FValue3;
	System::UnicodeString FDisplayValue;
	int FHiliteRow;
	TwwDBLookupListOptions FOptions;
	int FTitleOffset;
	bool FFoundValue;
	bool FInCellSelect;
	Classes::TNotifyEvent FOnListClick;
	bool BeAccurate;
	int inDataChanged;
	System::UnicodeString DummyString;
	HIDESBASE Classes::TStrings* __fastcall getSelectedFields(void);
	HIDESBASE void __fastcall setSelectedFields(Classes::TStrings* sel);
	System::UnicodeString __fastcall GetDataField(void);
	HIDESBASE Db::TDataSource* __fastcall GetDataSource(void);
	Db::TDataSource* __fastcall GetLookupSource(void);
	System::UnicodeString __fastcall GetLookupField(void);
	Db::TDataSet* __fastcall GetLookupTable(void);
	System::UnicodeString __fastcall GetValue(void);
	System::UnicodeString __fastcall GetValue2(void);
	System::UnicodeString __fastcall GetValue3(void);
	System::UnicodeString __fastcall GetDisplayValue(void);
	bool __fastcall GetReadOnly(void);
	void __fastcall FieldLinkActive(System::TObject* Sender);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall NavigatorDataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	void __fastcall SetDataField(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetLookupSource(Db::TDataSource* Value);
	void __fastcall SetLookupTable(Db::TDataSet* value);
	void __fastcall SetLookupField(const System::UnicodeString Value);
	void __fastcall SetValue(const System::UnicodeString Value);
	void __fastcall SetDisplayValue(const System::UnicodeString Value);
	void __fastcall SetReadOnly(bool Value);
	HIDESBASE void __fastcall SetOptions(TwwDBLookupListOptions Value);
	void __fastcall NewLayout(void);
	void __fastcall FastLookup(void);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	
protected:
	HIDESBASE void __fastcall UpdateData(System::TObject* Sender);
	bool __fastcall isWWCalculatedField(void);
	virtual bool __fastcall HighlightCell(int DataCol, int DataRow, const System::UnicodeString Value, Grids::TGridDrawState AState);
	DYNAMIC bool __fastcall CanGridAcceptKey(System::Word Key, Classes::TShiftState Shift);
	virtual void __fastcall DefineFieldMap(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall CanEdit(void);
	void __fastcall InitFields(bool showError);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall LinkActive(bool Value);
	virtual void __fastcall Scroll(int Distance);
	DYNAMIC void __fastcall ListClick(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Paint(void);
	virtual void __fastcall DataChanged(void);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	virtual void __fastcall DrawCell(int ACol, int ARow, const Types::TRect &ARect, Grids::TGridDrawState AState);
	
public:
	int lookupFieldCount;
	__fastcall virtual TwwDBLookupList(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBLookupList(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
	__property System::UnicodeString DisplayValue = {read=GetDisplayValue, write=SetDisplayValue};
	__property Db::TField* DisplayFld = {read=FDisplayFld};
	__property VisibleRowCount;
	virtual void __fastcall SetColumnAttributes(void);
	void __fastcall DoLookup(bool SetToDisplayIndex);
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property Classes::TStrings* Selected = {read=getSelectedFields, write=setSelectedFields};
	__property Db::TDataSet* LookupTable = {read=GetLookupTable, write=SetLookupTable};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString LookupField = {read=GetLookupField, write=SetLookupField};
	__property TwwDBLookupListOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property Classes::TNotifyEvent OnClick = {read=FOnListClick, write=FOnListClick};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property Align = {default=0};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBLookupList(HWND ParentWindow) : Wwdbigrd::TwwCustomDBGrid(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TwwPopupGrid : public TwwDBLookupList
{
	typedef TwwDBLookupList inherited;
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TWMMouse &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall CanEdit(void);
	virtual void __fastcall LinkActive(bool Value);
	
public:
	__property RowCount = {default=5};
	__property ColCount = {default=5};
	__fastcall virtual TwwPopupGrid(Classes::TComponent* AOwner);
	
__published:
	__property ControlType;
public:
	/* TwwDBLookupList.Destroy */ inline __fastcall virtual ~TwwPopupGrid(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwPopupGrid(HWND ParentWindow) : TwwDBLookupList(ParentWindow) { }
	
};


class DELPHICLASS TwwLookupComboButton;
class PASCALIMPLEMENTATION TwwLookupComboButton : public Wwcombobutton::TwwComboButton
{
	typedef Wwcombobutton::TwwComboButton inherited;
	
protected:
	virtual bool __fastcall IsVistaTransparentButton(void);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	virtual bool __fastcall ParentMouseInControl(void);
	virtual bool __fastcall ParentDroppedDown(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
public:
	/* TwwComboButton.Create */ inline __fastcall virtual TwwLookupComboButton(Classes::TComponent* AOwner) : Wwcombobutton::TwwComboButton(AOwner) { }
	/* TwwComboButton.Destroy */ inline __fastcall virtual ~TwwLookupComboButton(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdblook */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdblook;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdblookHPP
