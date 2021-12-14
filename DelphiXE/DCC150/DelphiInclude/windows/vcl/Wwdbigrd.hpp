// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwdbigrd.pas' rev: 22.00

#ifndef WwdbigrdHPP
#define WwdbigrdHPP

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
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <wwgridfilter.hpp>	// Pascal unit
#include <RTLConsts.hpp>	// Pascal unit
#include <wwtreeview.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <wwpaintoptions.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwlocate.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbigrd
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwEditControlOption { ecoCheckboxSingleClick, ecoSearchOwnerForm, ecoDisableCustomControls, ecoDisableDateTimePicker, ecoDisableEditorIfReadOnly };
#pragma option pop

typedef System::Set<TwwEditControlOption, TwwEditControlOption::ecoCheckboxSingleClick, TwwEditControlOption::ecoDisableEditorIfReadOnly>  TwwEditControlOptions;

#pragma option push -b-
enum TwwDittoDirection { wwDittoPrior, wwDittoNext, wwDittoPriorOrNext };
#pragma option pop

#pragma option push -b-
enum TwwDittoOption { wwdoSkipBlobFields, wwdoSkipReadOnlyFields, wwdoSkipHiddenFields };
#pragma option pop

typedef System::Set<TwwDittoOption, TwwDittoOption::wwdoSkipBlobFields, TwwDittoOption::wwdoSkipHiddenFields>  TwwDittoOptions;

class DELPHICLASS TwwDittoAttributes;
class PASCALIMPLEMENTATION TwwDittoAttributes : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TwwDittoDirection FDittoDirection;
	Classes::TShortCut FShortCutDittoField;
	Classes::TShortCut FShortCutDittoRecord;
	TwwDittoOptions FOptions;
	
__published:
	__property TwwDittoDirection DittoDirection = {read=FDittoDirection, write=FDittoDirection, default=0};
	__property Classes::TShortCut ShortCutDittoField = {read=FShortCutDittoField, write=FShortCutDittoField, default=0};
	__property Classes::TShortCut ShortCutDittoRecord = {read=FShortCutDittoRecord, write=FShortCutDittoRecord, default=0};
	__property TwwDittoOptions Options = {read=FOptions, write=FOptions, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwDittoAttributes(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwDittoAttributes(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwGridSearchEditor;
class PASCALIMPLEMENTATION TwwGridSearchEditor : public Wwdbedit::TwwDBEdit
{
	typedef Wwdbedit::TwwDBEdit inherited;
	
protected:
	DYNAMIC void __fastcall DoExit(void);
	
public:
	System::UnicodeString FieldName;
	int Column;
public:
	/* TwwDBCustomEdit.Create */ inline __fastcall virtual TwwGridSearchEditor(Classes::TComponent* AOwner) : Wwdbedit::TwwDBEdit(AOwner) { }
	/* TwwDBCustomEdit.Destroy */ inline __fastcall virtual ~TwwGridSearchEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwGridSearchEditor(HWND ParentWindow) : Wwdbedit::TwwDBEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwSelectColumnsTreeNode;
class PASCALIMPLEMENTATION TwwSelectColumnsTreeNode : public Wwtreeview::TwwTreeNode
{
	typedef Wwtreeview::TwwTreeNode inherited;
	
private:
	System::UnicodeString FFieldName;
	bool FIsCategory;
	
public:
	__property System::UnicodeString FieldName = {read=FFieldName, write=FFieldName};
	__property bool IsCategory = {read=FIsCategory, write=FIsCategory, nodefault};
public:
	/* TwwTreeNode.Create */ inline __fastcall virtual TwwSelectColumnsTreeNode(Wwtreeview::TwwTreeNodes* AOwner) : Wwtreeview::TwwTreeNode(AOwner) { }
	/* TwwTreeNode.Destroy */ inline __fastcall virtual ~TwwSelectColumnsTreeNode(void) { }
	
};


class DELPHICLASS TwwSelectColumnsTreeView;
class PASCALIMPLEMENTATION TwwSelectColumnsTreeView : public Wwtreeview::TwwTreeView
{
	typedef Wwtreeview::TwwTreeView inherited;
	
private:
	Grids::TCustomGrid* FGrid;
	
protected:
	virtual Wwtreeview::TwwTreeNode* __fastcall CreateNode(void);
	
public:
	void __fastcall AddField(System::UnicodeString NodeGroups, System::UnicodeString FieldName);
	__property Grids::TCustomGrid* Grid = {read=FGrid, write=FGrid};
public:
	/* TwwCustomTreeView.Create */ inline __fastcall virtual TwwSelectColumnsTreeView(Classes::TComponent* AOwner) : Wwtreeview::TwwTreeView(AOwner) { }
	/* TwwCustomTreeView.Destroy */ inline __fastcall virtual ~TwwSelectColumnsTreeView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwSelectColumnsTreeView(HWND ParentWindow) : Wwtreeview::TwwTreeView(ParentWindow) { }
	
};


#pragma option push -b-
enum TwwSortFilterOption { sfoSortAscending, sfoSortDescending, sfoFilter, sfoGrouping, sfoSelectColumns, sfoCreateIndexes, sfoAutoTitleButtonSort, sfoClientCursor };
#pragma option pop

typedef System::Set<TwwSortFilterOption, TwwSortFilterOption::sfoSortAscending, TwwSortFilterOption::sfoClientCursor>  TwwSortFilterOptions;

class DELPHICLASS TwwTitleMenuAttributes;
class PASCALIMPLEMENTATION TwwTitleMenuAttributes : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TwwSortFilterOptions FOptions;
	bool FMenuEnabled;
	Grids::TCustomGrid* FGrid;
	void __fastcall SetOptions(TwwSortFilterOptions value);
	void __fastcall SetMenuEnabled(bool value);
	
public:
	__fastcall virtual TwwTitleMenuAttributes(Grids::TCustomGrid* AGrid);
	virtual bool __fastcall TitleMenuEnabled(void);
	
__published:
	__property TwwSortFilterOptions Options = {read=FOptions, write=SetOptions, default=101};
	__property bool MenuEnabled = {read=FMenuEnabled, write=SetMenuEnabled, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwTitleMenuAttributes(void) { }
	
};


class DELPHICLASS TwwGridHintWindow;
class PASCALIMPLEMENTATION TwwGridHintWindow : public Controls::THintWindow
{
	typedef Controls::THintWindow inherited;
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	Db::TField* Field;
	bool WordWrap;
	Classes::TAlignment Alignment;
public:
	/* THintWindow.Create */ inline __fastcall virtual TwwGridHintWindow(Classes::TComponent* AOwner) : Controls::THintWindow(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TwwGridHintWindow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwGridHintWindow(HWND ParentWindow) : Controls::THintWindow(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TwwTitleImageAttributes
{
	
public:
	int ImageIndex;
	Classes::TAlignment Alignment;
	int Margin;
	bool IsGroupHeader;
};


typedef void __fastcall (__closure *TTitleButtonClickEvent)(System::TObject* Sender, System::UnicodeString AFieldName);

typedef void __fastcall (__closure *TCalcCellColorsEvent)(System::TObject* Sender, Db::TField* Field, Grids::TGridDrawState State, bool Highlight, Graphics::TFont* AFont, Graphics::TBrush* ABrush);

typedef void __fastcall (__closure *TCalcTitleAttributesEvent)(System::TObject* Sender, System::UnicodeString AFieldName, Graphics::TFont* AFont, Graphics::TBrush* ABrush, Classes::TAlignment &ATitleAlignment);

typedef void __fastcall (__closure *TwwDrawTitleCellEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas, Db::TField* Field, const Types::TRect &Rect, bool &DefaultDrawing);

typedef void __fastcall (__closure *TwwDrawGroupHeaderCellEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas, System::UnicodeString GroupHeaderName, const Types::TRect &Rect, bool &DefaultDrawing);

typedef void __fastcall (__closure *TwwCalcTitleImageEvent)(System::TObject* Sender, Db::TField* Field, TwwTitleImageAttributes &TitleImageAttributes);

typedef void __fastcall (__closure *TDrawFooterCellEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas, const Types::TRect &FooterCellRect, Db::TField* Field, System::UnicodeString FooterText, bool &DefaultDrawing);

typedef void __fastcall (__closure *TColWidthChangedEvent)(System::TObject* Sender, int Column);

typedef void __fastcall (__closure *TAllowColResizeEvent)(System::TObject* Sender, int Column, bool &Accept);

typedef void __fastcall (__closure *TwwLeftColChangedEvent)(System::TObject* Sender, int NewLeftCol);

typedef void __fastcall (__closure *TwwCreateGridHintWindowEvent)(System::TObject* Sender, TwwGridHintWindow* HintWindow, Db::TField* AField, const Types::TRect &R, bool &WordWrap, int &MaxWidth, int &MaxHeight, bool &DoDefault);

typedef void __fastcall (__closure *TwwOnInitSelectColumnsDialogEvent)(Forms::TCustomForm* Form, TwwSelectColumnsTreeView* TreeView, bool &doDefault);

typedef void __fastcall (__closure *TwwBeforeSortEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool SortDescending, bool &DoDefault);

typedef void __fastcall (__closure *TwwSortEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool SortDescending);

typedef void __fastcall (__closure *TwwCanSortEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool SortDescending, bool &CanSort);

typedef void __fastcall (__closure *TwwCanFilterEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool &CanFilter);

typedef void __fastcall (__closure *TwwCanGroupEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool &CanGroup);

typedef void __fastcall (__closure *TwwBeforeTitleMenuEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool &doDefault);

typedef void __fastcall (__closure *TwwBeforeColumnAddEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool insertBefore, bool &doDefault);

typedef void __fastcall (__closure *TwwAddSelectColumnEvent)(System::TObject* Sender, Db::TField* AField, System::UnicodeString &NodeGroups, bool &canAdd);

typedef void __fastcall (__closure *TwwCanShowTitleDropDownEvent)(System::TObject* Sender, System::UnicodeString AFieldName, bool &CanShow);

typedef void __fastcall (__closure *TwwQuerySortFieldEvent)(System::TObject* Sender, System::UnicodeString &SortFieldName, bool &IsDescending);

typedef void __fastcall (__closure *TwwPopupTitleDropDownEvent)(System::TObject* Sender, Menus::TPopupMenu* PopupMenu);

#pragma option push -b-
enum TwwMultiSelectOption { msoAutoUnselect, msoShiftSelect };
#pragma option pop

typedef System::Set<TwwMultiSelectOption, TwwMultiSelectOption::msoAutoUnselect, TwwMultiSelectOption::msoShiftSelect>  TwwMultiSelectOptions;

typedef void __fastcall (__closure *TwwFieldChangedEvent)(System::TObject* Sender, Db::TField* Field);

class DELPHICLASS TwwGridDataLink;
class DELPHICLASS TwwCustomDBGrid;
class PASCALIMPLEMENTATION TwwGridDataLink : public Db::TDataLink
{
	typedef Db::TDataLink inherited;
	
private:
	TwwCustomDBGrid* FGrid;
	int FFieldCount;
	int FFieldMapSize;
	bool FModified;
	bool FInUpdateData;
	void *FFieldMap;
	bool __fastcall GetDefaultFields(void);
	Db::TField* __fastcall GetFields(int I);
	
protected:
	virtual void __fastcall ActiveChanged(void);
	virtual void __fastcall DataSetChanged(void);
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall FocusControl(Db::TFieldRef Field);
	virtual void __fastcall EditingChanged(void);
	virtual void __fastcall LayoutChanged(void);
	virtual void __fastcall RecordChanged(Db::TField* Field);
	virtual void __fastcall UpdateData(void);
	
public:
	__fastcall TwwGridDataLink(TwwCustomDBGrid* AGrid);
	__fastcall virtual ~TwwGridDataLink(void);
	bool __fastcall AddMapping(const System::UnicodeString FieldName);
	void __fastcall ClearMapping(void);
	void __fastcall Modified(void);
	void __fastcall Reset(void);
	__property bool DefaultFields = {read=GetDefaultFields, nodefault};
	__property int FieldCount = {read=FFieldCount, nodefault};
	__property Db::TField* Fields[int I] = {read=GetFields};
	__property bool isFieldModified = {read=FModified, nodefault};
};


#pragma option push -b-
enum TwwDBGridOption { dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgWordWrap, dgPerfectRowFit, dgMultiSelect, dgShowFooter, dgFooter3DCells, dgNoLimitColSize, dgTrailingEllipsis, dgShowCellHint, dgTabExitsOnLastCol, dgFixedResizable, dgFixedEditable, dgProportionalColResize, dgRowResize, dgRowLinesDisableFixed, dgColLinesDisableFixed, dgFixedProportionalResize, dgHideBottomDataLine, dgDblClickColSizing };
#pragma option pop

typedef System::Set<TwwDBGridOption, TwwDBGridOption::dgEditing, TwwDBGridOption::dgDblClickColSizing>  TwwDBGridOptions;

#pragma option push -b-
enum TwwDBGridKeyOption { dgEnterToTab, dgAllowDelete, dgAllowInsert };
#pragma option pop

typedef System::Set<TwwDBGridKeyOption, TwwDBGridKeyOption::dgEnterToTab, TwwDBGridKeyOption::dgAllowInsert>  TwwDBGridKeyOptions;

typedef void __fastcall (__closure *TwwDrawDataCellEvent)(System::TObject* Sender, const Types::TRect &Rect, Db::TField* Field, Grids::TGridDrawState State);

class DELPHICLASS TwwCustomDrawGridCellInfo;
class PASCALIMPLEMENTATION TwwCustomDrawGridCellInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Types::TRect Rect;
	Db::TField* Field;
	Grids::TGridDrawState State;
	int DataCol;
	int DataRow;
	bool DefaultDrawBackground;
	bool DefaultDrawHorzTopLine;
	bool DefaultDrawHorzBottomLine;
	bool DefaultDrawContents;
public:
	/* TObject.Create */ inline __fastcall TwwCustomDrawGridCellInfo(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwCustomDrawGridCellInfo(void) { }
	
};


typedef void __fastcall (__closure *TwwCustomDrawCellEvent)(TwwCustomDBGrid* Sender, TwwCustomDrawGridCellInfo* DrawCellInfo);

#pragma option push -b-
enum TIndicatorColorType { icBlack, icYellow };
#pragma option pop

#pragma option push -b-
enum TwwBitmapSizeType { bsOriginalSize, bsStretchToFit, bsFitHeight, bsFitWidth };
#pragma option pop

class DELPHICLASS TwwIButton;
class PASCALIMPLEMENTATION TwwIButton : public Buttons::TSpeedButton
{
	typedef Buttons::TSpeedButton inherited;
	
public:
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
public:
	/* TSpeedButton.Create */ inline __fastcall virtual TwwIButton(Classes::TComponent* AOwner) : Buttons::TSpeedButton(AOwner) { }
	/* TSpeedButton.Destroy */ inline __fastcall virtual ~TwwIButton(void) { }
	
};


class DELPHICLASS TwwInplaceEdit;
class PASCALIMPLEMENTATION TwwInplaceEdit : public Grids::TInplaceEdit
{
	typedef Grids::TInplaceEdit inherited;
	
private:
	Wwdbedit::TwwDBPicture* FwwPicture;
	Wwdbedit::TwwRegexMask* FRegexMask;
	bool FWordWrap;
	TwwCustomDBGrid* ParentGrid;
	bool FUsePictureMask;
	Graphics::TColor OrigForeColor;
	Graphics::TColor OrigBackColor;
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall BoundsChanged(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall SetWordWrap(bool val);
	virtual void __fastcall UpdateContents(void);
	
public:
	__fastcall virtual TwwInplaceEdit(Classes::TComponent* AOwner, int dummy);
	__fastcall virtual ~TwwInplaceEdit(void);
	bool __fastcall IsValidPictureValue(System::UnicodeString s);
	bool __fastcall HavePictureMask(void);
	virtual void __fastcall ApplyValidationColors(bool valid);
	virtual void __fastcall ResetValidationColors(Graphics::TColor ForeColor = (Graphics::TColor)(0x1fffffff), Graphics::TColor BackColor = (Graphics::TColor)(0x1fffffff));
	virtual void __fastcall DoRefreshValidationDisplay(bool valid)/* overload */;
	virtual void __fastcall DoRefreshValidationDisplay(System::UnicodeString input = L"")/* overload */;
	__property Wwdbedit::TwwDBPicture* Picture = {read=FwwPicture, write=FwwPicture};
	__property Wwdbedit::TwwRegexMask* RegexMask = {read=FRegexMask, write=FRegexMask};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Color = {default=-16777211};
	__property Font;
public:
	/* TInplaceEdit.Create */ inline __fastcall virtual TwwInplaceEdit(Classes::TComponent* AOwner) : Grids::TInplaceEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwInplaceEdit(HWND ParentWindow) : Grids::TInplaceEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwColumn;
class PASCALIMPLEMENTATION TwwColumn : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FFieldName;
	TwwCustomDBGrid* Grid;
	System::UnicodeString FFooterValue;
	System::UnicodeString FGroupName;
	bool FDisableSizing;
	System::UnicodeString FSearchValue;
	bool FVisible;
	int FDisplayWidth;
	System::UnicodeString FDisplayLabel;
	bool __fastcall GetReadOnly(void);
	System::UnicodeString __fastcall GetDisplayLabel(void);
	int __fastcall GetDisplayWidth(void);
	System::UnicodeString __fastcall GetGroupName(void);
	int __fastcall GetIndex(void);
	void __fastcall SetReadOnly(bool val);
	void __fastcall SetDisplayLabel(System::UnicodeString val);
	void __fastcall SetDisplayWidth(int val);
	void __fastcall SetFooterValue(System::UnicodeString val);
	void __fastcall SetGroupName(System::UnicodeString val);
	void __fastcall SetSearchValue(System::UnicodeString val);
	void __fastcall SetIndex(int val);
	bool __fastcall GetVisible(void);
	void __fastcall SetVisible(bool val);
	
public:
	Sysutils::TByteArray *ColumnFlags;
	__property System::UnicodeString FieldName = {read=FFieldName};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	__property System::UnicodeString DisplayLabel = {read=GetDisplayLabel, write=SetDisplayLabel};
	__property int DisplayWidth = {read=GetDisplayWidth, write=SetDisplayWidth, nodefault};
	__property System::UnicodeString FooterValue = {read=FFooterValue, write=SetFooterValue};
	__property System::UnicodeString GroupName = {read=GetGroupName, write=SetGroupName};
	__property bool DisableSizing = {read=FDisableSizing, write=FDisableSizing, nodefault};
	__property System::UnicodeString SearchValue = {read=FSearchValue, write=SetSearchValue};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__fastcall TwwColumn(Classes::TComponent* AOwner, System::UnicodeString AFieldName);
	__fastcall virtual ~TwwColumn(void);
	void __fastcall InsertBeforeColumn(System::UnicodeString fieldName);
	void __fastcall InsertAfterColumn(System::UnicodeString fieldName);
	void __fastcall MakeVisible(bool val);
};


typedef void __fastcall (__closure *TwwGridURLOpenEvent)(System::TObject* Sender, System::UnicodeString &URLLink, Db::TField* Field, bool &UseDefault);

#pragma option push -b-
enum TwwPadColumnStyle { pcsPlain, pcsPadHeader, pcsPadHeaderAndData };
#pragma option pop

class DELPHICLASS TwwCacheColInfoItem;
class PASCALIMPLEMENTATION TwwCacheColInfoItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Controls::TWinControl* CustomControl;
	System::UnicodeString ControlType;
	System::UnicodeString ControlData;
	bool AlwaysPaints;
	bool IsWhiteBackground;
public:
	/* TObject.Create */ inline __fastcall TwwCacheColInfoItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwCacheColInfoItem(void) { }
	
};


#pragma option push -b-
enum TwwGridLineStyle { glsSingle, gls3D, glsDynamic };
#pragma option pop

class DELPHICLASS TwwGridLineColors;
class PASCALIMPLEMENTATION TwwGridLineColors : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FDataColor;
	Graphics::TColor FHighlightColor;
	Graphics::TColor FShadowColor;
	Graphics::TColor FFixedColor;
	Graphics::TColor FGroupingColor;
	TwwCustomDBGrid* FGrid;
	void __fastcall SetDataColor(Graphics::TColor val);
	void __fastcall SetHighlightColor(Graphics::TColor val);
	void __fastcall SetShadowColor(Graphics::TColor val);
	void __fastcall SetFixedColor(Graphics::TColor val);
	void __fastcall SetGroupingColor(Graphics::TColor val);
	
__published:
	__property Graphics::TColor DataColor = {read=FDataColor, write=SetDataColor, default=12632256};
	__property Graphics::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=-16777196};
	__property Graphics::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=-16777200};
	__property Graphics::TColor FixedColor = {read=FFixedColor, write=SetFixedColor, default=0};
	__property Graphics::TColor GroupingColor = {read=FGroupingColor, write=SetGroupingColor, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwGridLineColors(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwGridLineColors(void) : Classes::TPersistent() { }
	
};


typedef void __fastcall (__closure *TwwDittoEvent)(System::TObject* Sender, Db::TDataSet* DataSet, Db::TField* Field, System::UnicodeString &DittoValue, bool &AllowDitto);

class DELPHICLASS TwwBookmarkList;
class PASCALIMPLEMENTATION TwwBookmarkList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<System::DynamicArray<System::Byte> > _TwwBookmarkList__1;
	
	
public:
	System::DynamicArray<System::Byte> operator[](int Index) { return Items[Index]; }
	
private:
	_TwwBookmarkList__1 FList;
	TwwCustomDBGrid* FGrid;
	System::DynamicArray<System::Byte> FCache;
	// System::TArray__1<System::Byte>  FCache;
	int FCacheIndex;
	bool FCacheFind;
	bool FLinkActive;
	int __fastcall GetCount(void);
	bool __fastcall GetCurrentRowSelected(void);
	System::DynamicArray<System::Byte> __fastcall GetItem(int Index);
	void __fastcall InsertItem(int Index, System::DynamicArray<System::Byte> Item);
	void __fastcall DeleteItem(int Index);
	void __fastcall SetCurrentRowSelected(bool Value);
	void __fastcall DataChanged(System::TObject* Sender);
	
protected:
	System::DynamicArray<System::Byte> __fastcall CurrentRow(void);
	
public:
	__fastcall TwwBookmarkList(TwwCustomDBGrid* AGrid);
	int __fastcall Compare(const System::DynamicArray<System::Byte> Item1, const System::DynamicArray<System::Byte> Item2);
	void __fastcall DeleteSelection(int Index);
	__fastcall virtual ~TwwBookmarkList(void);
	void __fastcall Clear(void);
	void __fastcall Delete(void);
	bool __fastcall Find(const System::DynamicArray<System::Byte> Item, int &Index);
	int __fastcall IndexOf(const System::DynamicArray<System::Byte> Item);
	bool __fastcall Refresh(void);
	void __fastcall LinkActive(bool Value);
	__property int Count = {read=GetCount, nodefault};
	__property bool CurrentRowSelected = {read=GetCurrentRowSelected, write=SetCurrentRowSelected, nodefault};
	__property System::DynamicArray<System::Byte> Items[int Index] = {read=GetItem/*, default*/};
};


class PASCALIMPLEMENTATION TwwCustomDBGrid : public Grids::TCustomGrid
{
	typedef Grids::TCustomGrid inherited;
	
private:
	System::UnicodeString FGroupFieldName;
	TwwDittoEvent FOnDitto;
	TwwDittoAttributes* FDittoAttributes;
	TwwTitleMenuAttributes* FTitleMenuAttributes;
	TwwOnInitSelectColumnsDialogEvent FOnInitSelectColumnsDialog;
	bool FShowHorzScrollBar;
	Classes::TNotifyEvent FOnBeforePaint;
	Classes::TStrings* FSelected;
	TwwGridLineColors* FLineColors;
	Graphics::TFont* FTitleFont;
	Graphics::TColor FTitleColor;
	Graphics::TColor FFooterColor;
	Graphics::TColor FFooterCellColor;
	int FFooterHeight;
	bool FReadOnly;
	bool FUserChange;
	int FUpdatingColWidths;
	TwwDBGridOptions FOptions;
	TwwDBGridKeyOptions FKeyOptions;
	System::Byte FTitleOffset;
	System::Byte FUpdateLock;
	bool FInColExit;
	bool FDefaultDrawing;
	bool FSelfChangingTitleFont;
	int FSelRow;
	TwwGridDataLink* FDataLink;
	Classes::TNotifyEvent FOnColEnter;
	Classes::TNotifyEvent FOnColExit;
	TwwDrawDataCellEvent FOnDrawDataCell;
	TCalcCellColorsEvent FOnCalcCellColors;
	TCalcTitleAttributesEvent FOnCalcTitleAttributes;
	TwwDrawTitleCellEvent FOnDrawTitleCell;
	TwwDrawGroupHeaderCellEvent FOnDrawGroupHeaderCell;
	TwwCalcTitleImageEvent FOnCalcTitleImage;
	TTitleButtonClickEvent FOnTitleButtonClick;
	Wwdbedit::TwwValidateEvent FOnCheckValue;
	Classes::TNotifyEvent FOnTopRowChanged;
	Classes::TNotifyEvent FOnRowChanged;
	Classes::TNotifyEvent FOnCellChanged;
	TwwLeftColChangedEvent FOnLeftColChanged;
	System::UnicodeString FEditText;
	TIndicatorColorType FIndicatorColor;
	Graphics::TColor FIndicatorIconColor;
	Classes::TAlignment FTitleAlignment;
	int FRowHeightPercent;
	int FTitleLines;
	bool FShowVertScrollBar;
	Grids::TMovedEvent FOnColumnMoved;
	TColWidthChangedEvent FOnColWidthChanged;
	TAllowColResizeEvent FOnAllowColResize;
	bool FTitleButtons;
	bool FEditCalculated;
	bool FUseTFields;
	int FIndicatorWidth;
	TwwIButton* FIndicatorButton;
	Controls::TImageList* FImageList;
	Controls::TImageList* FTitleImageList;
	TDrawFooterCellEvent FOnDrawFooterCell;
	TwwFieldChangedEvent FOnFieldChanged;
	Classes::TNotifyEvent FOnUpdateFooter;
	TwwCreateGridHintWindowEvent FOnCreateHintWindow;
	TwwGridURLOpenEvent FOnURLOpen;
	int FSavePrevGridWidth;
	bool FHideAllLines;
	Controls::TCursor FSavedCursor;
	int URLLinkActiveRow;
	int URLLinkActiveCol;
	bool InUpdateRowCount;
	int FCalcCellRow;
	int FCalcCellCol;
	bool IsWhiteBackground;
	bool isDrawFocusRect;
	bool SkipLineDrawing;
	int TitleClickColumn;
	int TitleClickRow;
	bool TitleClickGroupTitle;
	bool MouseOverGroupTitle;
	bool MouseOverGroupChild;
	TwwMultiSelectOptions FMultiSelectOptions;
	bool DisableCellChangedEvent;
	Classes::TList* ColItems;
	Classes::TList* SavedColItems;
	bool UseDragCanvas;
	Graphics::TBitmap* CaptureTitleBitmap;
	int FDragVertOffset;
	bool SkipTitleButtonClick;
	Classes::TStrings* FControlType;
	bool FControlInfoInDataset;
	Classes::TStrings* FPictureMasks;
	Classes::TStrings* FRegexMasks;
	bool FPictureMaskFromDataSet;
	bool CallColEnter;
	System::DynamicArray<System::Byte> LastBookmark;
	// System::TArray__1<System::Byte>  LastBookmark;
	System::DynamicArray<System::Byte> LastMasterBookmark;
	// System::TArray__1<System::Byte>  LastMasterBookmark;
	int TempLastCol;
	bool ShouldUpdateFooter;
	TwwColumn* DummyColumn;
	int lastMouseX;
	int lastMouseY;
	int titleLastMouseX;
	int titleLastMouseY;
	Extctrls::TTimer* HintTimer;
	int HintTimerCount;
	int FUpdateCount;
	TwwPadColumnStyle FPadColumnStyle;
	Graphics::TCanvas* FPaintCanvas;
	Graphics::TBitmap* FPaintBitmap;
	TwwEditControlOptions FEditControlOptions;
	Wwpaintoptions::TwwGridPaintOptions* FPaintOptions;
	Types::TRect UpdateRect;
	bool ChangedBrushColor;
	bool AlternatingEven;
	int FSizingIndex;
	int FPriorSizingWidth;
	int FRowOffset;
	TwwGridLineStyle FLineStyle;
	bool ClickedOnGroupName;
	bool ClickedOnGroupChild;
	bool PaintingSearchCell;
	bool FCompareBookmarksAltMethod;
	TwwCustomDrawCellEvent FOnBeforeDrawCell;
	TwwCustomDrawCellEvent FOnAfterDrawCell;
	bool FDisableThemesInTitle;
	bool FShowSearchRow;
	TwwGridSearchEditor* FSearchEditor;
	bool FSearchMode;
	TwwBeforeSortEvent FOnBeforeSort;
	TwwSortEvent FOnAfterSort;
	TwwCanSortEvent FOnCanSort;
	TwwCanFilterEvent FOnCanFilter;
	TwwCanGroupEvent FOnCanGroup;
	TwwCanShowTitleDropDownEvent FOnCanShowTitleDropDown;
	TwwQuerySortFieldEvent FOnQuerySortField;
	TwwPopupTitleDropDownEvent FOnPopupTitleDropDown;
	TwwBeforeTitleMenuEvent FOnBeforeGroup;
	TwwBeforeTitleMenuEvent FOnBeforeClearGroup;
	TwwBeforeTitleMenuEvent FOnBeforeColumnRemove;
	TwwBeforeColumnAddEvent FOnBeforeColumnAdd;
	TwwAddSelectColumnEvent FOnAddSelectColumn;
	bool __fastcall HaveActiveRecordColor(void);
	bool __fastcall HaveAlternatingRowColor(void);
	HIDESBASE Grids::TGridCoord __fastcall CalcCoordFromPoint(int X, int Y, const Grids::TGridDrawInfo &DrawInfo);
	void __fastcall SetRowOffset(int Value);
	void __fastcall SetUseTFields(bool val);
	Classes::TComponent* __fastcall GetPictureControl(void);
	void __fastcall HintTimerEvent(System::TObject* Sender);
	void __fastcall MouseLoop_DragColumn(int HitTest, int X, int Y);
	bool __fastcall IsScrollBarVisible(void);
	bool __fastcall AcquireFocus(void);
	void __fastcall EditingChanged(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	int __fastcall GetFieldCount(void);
	Db::TField* __fastcall GetFields(int Index);
	Db::TField* __fastcall GetSelectedField(void);
	int __fastcall GetSelectedIndex(void);
	void __fastcall RecordChanged(Db::TField* Field);
	void __fastcall FieldChanged(Db::TField* Field);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	HIDESBASE void __fastcall SetOptions(TwwDBGridOptions Value);
	void __fastcall SetSelectedField(Db::TField* Value);
	void __fastcall SetSelectedIndex(int Value);
	void __fastcall SetTitleFont(Graphics::TFont* Value);
	void __fastcall SetIndicatorIconColor(Graphics::TColor Value);
	void __fastcall SetTitleAlignment(Classes::TAlignment sel);
	void __fastcall SetTitleLines(int sel);
	void __fastcall SetRowHeightPercent(int sel);
	void __fastcall SetShowVertScrollBar(bool val);
	void __fastcall SetTitleButtons(bool val);
	bool __fastcall GetShowHorzScrollBar(void);
	void __fastcall SetShowHorzScrollBar(bool val);
	Classes::TStrings* __fastcall GetSelectedFields(void);
	void __fastcall SetSelectedFields(Classes::TStrings* sel);
	int __fastcall GetColWidthsPixels(int Index);
	void __fastcall SetColWidthsPixels(int Index, int Value);
	void __fastcall SetIndicatorWidth(int val);
	void __fastcall TitleFontChanged(System::TObject* Sender);
	void __fastcall UpdateData(void);
	void __fastcall UpdateActive(void);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	TwwColumn* __fastcall GetFastColumn(int Index);
	TwwColumn* __fastcall GetColumn(int Index);
	void __fastcall SetFooterColor(Graphics::TColor sel);
	void __fastcall SetFooterCellColor(Graphics::TColor sel);
	void __fastcall SetFooterHeight(int val);
	Graphics::TCanvas* __fastcall GetCanvas(void);
	void __fastcall SetPictureMasks(Classes::TStrings* val);
	void __fastcall SetRegexMasks(Classes::TStrings* val);
	void __fastcall SetControlType(Classes::TStrings* val);
	void __fastcall SetUpdateState(bool Updating);
	void __fastcall InheritedPaint(void);
	void __fastcall SetIndicatorColor(TIndicatorColorType Value);
	int __fastcall GetCalcCellRow(void);
	HIDESBASE MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	HIDESBASE Grids::TGridCoord __fastcall CalcMaxTopLeft(const Grids::TGridCoord &Coord, const Grids::TGridDrawInfo &DrawInfo);
	void __fastcall SetGroupFieldName(System::UnicodeString Value);
	System::UnicodeString __fastcall GetGroupFieldName(void);
	void __fastcall SetShowSearchRow(bool Value);
	
protected:
	Classes::TList* FCacheColInfo;
	int FTopRecord;
	System::Byte FIndicatorOffset;
	Wwriched::TwwDBRichEdit* TempRichEdit;
	bool FUpdateFields;
	bool FAcquireFocus;
	bool SuppressShowEditor;
	bool ShiftSelectMode;
	System::DynamicArray<System::Byte> ShiftSelectBookmark;
	// System::TArray__1<System::Byte>  ShiftSelectBookmark;
	System::UnicodeString dummy1;
	System::UnicodeString dummy2;
	int TitleTextOffset;
	bool FieldMappedText;
	bool URLLinkActive;
	Controls::THintWindow* HintWindow;
	Sysutils::TWordArray *OrigColWidths;
	int OrigColWidthsCount;
	TwwCustomDrawGridCellInfo* DrawCellInfo;
	bool SkipErase;
	Controls::TWinControl* CurrentCustomEdit;
	Wwdbdatetimepicker::TwwDBCustomDateTimePicker* FDateTimePicker;
	bool FFocused;
	virtual bool __fastcall UseAlternateBuffering(void);
	virtual int __fastcall GetGridDataBottom(const Grids::TGridDrawInfo &DrawInfo);
	void __fastcall ResetTitleClick(void);
	void __fastcall UpdateLeftCol(int ACol);
	HIDESBASE virtual void __fastcall ShowEditor(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	void __fastcall MoveCol(int ACol);
	virtual void __fastcall DoCreateHintWindow(TwwGridHintWindow* HintWindow, Db::TField* AField, const Types::TRect &R, bool &WordWrap, int &MaxWidth, int &MaxHeight, bool &DoDefault);
	virtual bool __fastcall IsProportionalColumns(void);
	virtual void __fastcall DoURLOpen(System::UnicodeString &URLLink, Db::TField* Field, bool &UseDefault);
	bool __fastcall IsDropDownGridFocused(void);
	bool __fastcall IsDropDownGridShowing(void);
	virtual void __fastcall FillWithAlternatingRowBitmap(const Types::TRect &TempRect);
	virtual void __fastcall LayoutChanged(void);
	DYNAMIC void __fastcall CalcRowHeight(void);
	bool __fastcall RecordCountIsValid(void);
	DYNAMIC bool __fastcall AllowCancelOnExit(void);
	DYNAMIC bool __fastcall CanEditAcceptKey(System::WideChar Key);
	DYNAMIC bool __fastcall CanEditModify(void);
	DYNAMIC int __fastcall GetEditLimit(void);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall ColEnter(void);
	DYNAMIC void __fastcall ColExit(void);
	virtual void __fastcall Scroll(int Distance);
	DYNAMIC void __fastcall ColWidthsChanged(void);
	virtual bool __fastcall HighlightCell(int DataCol, int DataRow, const System::UnicodeString Value, Grids::TGridDrawState AState);
	virtual void __fastcall DrawCell(int ACol, int ARow, const Types::TRect &ARect, Grids::TGridDrawState AState);
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	Db::TField* __fastcall GetColField(int ACol);
	DYNAMIC System::UnicodeString __fastcall GetFieldValue(int ACol);
	virtual void __fastcall DefineFieldMap(void);
	DYNAMIC void __fastcall DrawDataCell(const Types::TRect &Rect, Db::TField* Field, Grids::TGridDrawState State);
	virtual void __fastcall ProportionalColWidths(void);
	virtual void __fastcall SetColumnAttributes(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall LinkActive(bool Value);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual Types::TRect __fastcall TitleImageRect(int ACol);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall TimedScroll(Grids::TGridScrollDirection Direction);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall IsWWControl(int ACol, int ARow);
	virtual void __fastcall InvalidateTitle(void);
	__property bool DefaultDrawing = {read=FDefaultDrawing, write=FDefaultDrawing, default=1};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property ParentColor = {default=0};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property Graphics::TColor TitleColor = {read=FTitleColor, write=FTitleColor, default=-16777201};
	__property Graphics::TColor FooterColor = {read=FFooterColor, write=SetFooterColor, default=-16777201};
	__property Graphics::TColor FooterCellColor = {read=FFooterCellColor, write=SetFooterCellColor, default=-16777201};
	__property int FooterHeight = {read=FFooterHeight, write=SetFooterHeight, default=0};
	__property Graphics::TFont* TitleFont = {read=FTitleFont, write=SetTitleFont};
	__property Classes::TNotifyEvent OnColEnter = {read=FOnColEnter, write=FOnColEnter};
	__property Classes::TNotifyEvent OnColExit = {read=FOnColExit, write=FOnColExit};
	__property TwwDrawDataCellEvent OnDrawDataCell = {read=FOnDrawDataCell, write=FOnDrawDataCell};
	virtual void __fastcall DoTitleButtonClick(System::UnicodeString AFieldName);
	virtual void __fastcall DoDrawTitleCell(Graphics::TCanvas* ACanvas, Db::TField* Field, const Types::TRect &ARect, bool &DefaultDrawing);
	virtual void __fastcall DoDrawGroupHeaderCell(Graphics::TCanvas* ACanvas, System::UnicodeString GroupHeaderName, const Types::TRect &ARect, bool &DefaultDrawing);
	virtual void __fastcall DoCalcTitleImage(System::TObject* Sender, Db::TField* Field, TwwTitleImageAttributes &TitleImageAttributes);
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	bool __fastcall UseRightToLeftAlignmentForField(const Db::TField* AField, Classes::TAlignment Alignment);
	void __fastcall UpdateScrollBar(void);
	bool __fastcall IsValidCell(int ACol, int ARow);
	int __fastcall DbCol(int col);
	int __fastcall DbRow(int row);
	void __fastcall Draw3DLines(const Types::TRect &ARect, int ACol, int ARow, Grids::TGridDrawState AState);
	virtual Graphics::TColor __fastcall CellColor(int ACol, int ARow);
	virtual void __fastcall DrawCheckBox(const Types::TRect &ARect, int ACol, int ARow, bool val);
	void __fastcall DrawCheckBox_Checkmark(const Types::TRect &ARect, int ACol, int ARow, bool val);
	virtual void __fastcall RefreshBookmarkList(void);
	virtual Grids::TInplaceEdit* __fastcall CreateEditor(void);
	virtual void __fastcall HideControls(void);
	__property TColWidthChangedEvent OnColWidthChanged = {read=FOnColWidthChanged, write=FOnColWidthChanged};
	__property TAllowColResizeEvent OnAllowColResize = {read=FOnAllowColResize, write=FOnAllowColResize};
	__property Grids::TMovedEvent OnColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	virtual void __fastcall UnselectAll(void);
	bool __fastcall IsSelectedCheckbox(int ACol);
	virtual void __fastcall DataChanged(void);
	DYNAMIC bool __fastcall IsSelectedRow(int DataRow);
	virtual void __fastcall DoTopRowChanged(void);
	virtual void __fastcall DoRowChanged(void);
	virtual void __fastcall DoCellChanged(void);
	virtual void __fastcall DoCheckRowChanged(void);
	__property int IndicatorButtonWidth = {read=FIndicatorWidth, write=SetIndicatorWidth, nodefault};
	DYNAMIC void __fastcall TopLeftChanged(void);
	virtual Types::TRect __fastcall GetClientRect(void);
	virtual void __fastcall Paint(void);
	Classes::TStrings* __fastcall GetControlType(void);
	virtual void __fastcall GetControlInfo(System::UnicodeString AFieldName, System::UnicodeString &AControlType, System::UnicodeString &AParameters);
	virtual void __fastcall DoFieldChanged(Db::TField* Field);
	virtual void __fastcall DoUpdateFooter(void);
	virtual Types::TRect __fastcall GetFooterRect(void);
	virtual void __fastcall CheckFooterUpdate(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int AX, int AY);
	virtual void __fastcall FreeHintWindow(void);
	virtual Controls::THintWindow* __fastcall CreateHintWindow(Db::TField* AField);
	virtual void __fastcall ValidationErrorUsingMask(Db::TField* Field, System::UnicodeString Msg = L"");
	void __fastcall ChangeOrientation(bool RightToLeftOrientation);
	virtual void __fastcall DrawLines(void);
	virtual void __fastcall PaintClickedTitleButton(void);
	bool __fastcall AdjustBoundsRect(Controls::TWinControl* ACurrentCustomEdit);
	virtual void __fastcall CalcSizingState(int X, int Y, Grids::TGridState &State, int &Index, int &SizingPos, int &SizingOfs, Grids::TGridDrawInfo &FixedInfo);
	virtual void __fastcall InitCacheColInfo(void);
	bool __fastcall UseThemesInTitle(void);
	bool __fastcall IsShortCut(Messages::TWMKey &Message);
	virtual int __fastcall GetSearchRowHeight(void);
	virtual TwwGridSearchEditor* __fastcall CreateSearchEditor(void);
	virtual void __fastcall UpdateSearchEditor(int ACol);
	virtual void __fastcall GridUpdateData(void);
	virtual void __fastcall WriteTextLines(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, int DX, int DY, System::WideChar * s, Classes::TAlignment Alignment, Wwtypes::TwwWriteTextOptions WriteOptions);
	virtual void __fastcall DoOnAfterDrawCell(TwwCustomDrawGridCellInfo* &DrawCellInfo);
	virtual void __fastcall DoOnBeforeDrawCell(System::WideString ATextWide, TwwCustomDrawGridCellInfo* &DrawCellInfo);
	DYNAMIC System::WideString __fastcall WideGetFieldValue(int ACol);
	
public:
	Wwgridfilter::TwwFormGridFilterTypes* FormGridFilterTypes;
	bool AlternatePaintBuffering;
	bool SkipHideControls;
	bool SkipDataChange;
	bool AlwaysShowControls;
	int MinRowHeightPercent;
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	virtual Controls::TImageList* __fastcall EffectiveTitleImageList(void);
	bool __fastcall IsAlternatingRow(int DbRow);
	virtual void __fastcall Sort(System::UnicodeString FieldName, bool descending);
	__property System::UnicodeString GroupFieldName = {read=GetGroupFieldName, write=SetGroupFieldName};
	__property int RowOffset = {read=FRowOffset, write=SetRowOffset, nodefault};
	__property System::Byte TitleOffset = {read=FTitleOffset, nodefault};
	__property bool CompareBookmarksAltMethod = {read=FCompareBookmarksAltMethod, write=FCompareBookmarksAltMethod, default=0};
	void __fastcall FormGridFilterTypesNeeded(void);
	virtual void __fastcall FillWithBlendBitmap(const Types::TRect &TempRect, int CurRelRow, Graphics::TColor FillColor = (Graphics::TColor)(0x1fffffff));
	virtual void __fastcall FillWithFixedBitmap(const Types::TRect &TempRect, int CurRelRow, Graphics::TColor FillColor = (Graphics::TColor)(0x1fffffff));
	void __fastcall UpdateCustomEdit(void);
	void __fastcall ResetProportionalWidths(void);
	bool __fastcall ShouldShowCustomControls(void);
	virtual bool __fastcall CanEditGrid(void);
	void __fastcall ClearURLPaint(void);
	Controls::TWinControl* __fastcall ActiveExpandButton(void);
	HIDESBASE virtual void __fastcall CalcDrawInfo(Grids::TGridDrawInfo &DrawInfo);
	bool __fastcall HasFocus(void);
	bool __fastcall IsActiveRowAlternatingColor(void);
	void __fastcall CollapseChildGrid(void);
	void __fastcall AddField(System::UnicodeString FieldName, int Position = 0xffffffff, bool Redraw = true);
	void __fastcall RemoveField(System::UnicodeString FieldName, bool Redraw = true);
	bool __fastcall HaveAnyRowLines(void);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	virtual void __fastcall GetURLLink(System::UnicodeString Value, System::UnicodeString &URLDisplayString, System::UnicodeString &URLLinkAddress);
	void __fastcall InvalidateCurrentRow(void);
	void __fastcall InvalidateFooter(void);
	virtual void __fastcall FlushChanges(void);
	void __fastcall UpdateRowCount(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	void __fastcall SizeLastColumn(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(bool Repaint = false);
	bool __fastcall IsCustomEditCell(int col, int row, Controls::TWinControl* &customEdit);
	virtual Types::TRect __fastcall TitleCellRect(int ACol, int ARow, bool EntireTitle = false);
	virtual Types::TRect __fastcall SearchCellRect(int ACol, int ARow);
	virtual Types::TRect __fastcall GroupNameCellRect(int ACol, int ARow, int &StartCol, int &EndCol, bool VisibleOnly = true);
	virtual Types::TRect __fastcall DragTitleCellRect(int ACol, int X, int Y);
	HIDESBASE virtual Types::TRect __fastcall CellRect(int ACol, int ARow);
	void __fastcall RestoreRowHeights(void);
	virtual void __fastcall ApplySelected(void);
	virtual void __fastcall DoOnAddSelectColumn(Db::TField* Field, System::UnicodeString &NodeGroups, bool &canAdd);
	void __fastcall PaintActiveRowBackground(Graphics::TCanvas* ACanvas, const Types::TRect &ARect);
	__fastcall virtual TwwCustomDBGrid(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomDBGrid(void);
	bool __fastcall IsCheckBox(int col, int row, System::UnicodeString &checkboxon, System::UnicodeString &checkboxoff);
	virtual bool __fastcall IsMemoField(int ACol, int ARow);
	DYNAMIC bool __fastcall IsSelected(void);
	bool __fastcall AllowPerfectFit(void);
	bool __fastcall DoPerfectFit(void);
	bool __fastcall DoShrinkToFit(void);
	virtual void __fastcall SelectRecord(void);
	virtual void __fastcall UnselectRecord(void);
	void __fastcall SetPictureMask(System::UnicodeString FieldName, System::UnicodeString Mask);
	void __fastcall SetPictureAutoFill(System::UnicodeString FieldName, bool AutoFill);
	void __fastcall SetRegex(System::UnicodeString FieldName, System::UnicodeString Mask, bool CaseSensitive, System::UnicodeString ErrorMsg);
	void __fastcall ClearLastBookmarks(void);
	System::UnicodeString __fastcall FieldName(int ACol);
	Graphics::TColor __fastcall GetHighlightColor(void);
	virtual bool __fastcall DittoField(Db::TField* SelectedField, TwwDittoDirection Direction = (TwwDittoDirection)(0x0));
	void __fastcall DefaultDrawDataCell(const Types::TRect &Rect, Db::TField* Field, Grids::TGridDrawState State);
	virtual void __fastcall DoCalcTitleAttributes(System::UnicodeString AFieldName, Graphics::TFont* AFont, Graphics::TBrush* ABrush, Classes::TAlignment &FTitleAlignment);
	virtual void __fastcall DoCalcCellColors(Db::TField* Field, Grids::TGridDrawState State, bool Highlight, Graphics::TFont* AFont, Graphics::TBrush* ABrush);
	virtual void __fastcall DoCalcCellColorsDetect(Db::TField* Field, Grids::TGridDrawState State, bool Highlight, Graphics::TFont* AFont, Graphics::TBrush* ABrush);
	int __fastcall XIndicatorOffset(void);
	HIDESBASE Controls::TWinControl* __fastcall GetComponent(System::UnicodeString thisName);
	int __fastcall GetEffectiveFooterHeight(void);
	virtual bool __fastcall ExecuteSelectGridColumnsDialog(System::UnicodeString curField, bool insertBefore = true);
	virtual void __fastcall DoInitSelectColumnsDialog(Forms::TCustomForm* form);
	HIDESBASE Grids::TGridCoord __fastcall MouseCoord(int X, int Y);
	void __fastcall AutoSizeColumn(int ACol);
	bool __fastcall GetPriorRecordText(System::UnicodeString AFieldName, System::UnicodeString &AText);
	bool __fastcall GetNextRecordText(System::UnicodeString AFieldName, System::UnicodeString &AText);
	__property TwwGridDataLink* DataLink = {read=FDataLink};
	__property RowHeights;
	__property int ColWidthsPixels[int Index] = {read=GetColWidthsPixels, write=SetColWidthsPixels};
	__property EditorMode;
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property Db::TField* Fields[int Index] = {read=GetFields};
	__property Db::TField* SelectedField = {read=GetSelectedField, write=SetSelectedField};
	__property int SelectedIndex = {read=GetSelectedIndex, write=SetSelectedIndex, nodefault};
	__property TIndicatorColorType IndicatorColor = {read=FIndicatorColor, write=SetIndicatorColor, nodefault};
	__property Graphics::TColor IndicatorIconColor = {read=FIndicatorIconColor, write=SetIndicatorIconColor, default=0};
	__property TwwDBGridOptions Options = {read=FOptions, write=SetOptions, default=7421};
	__property TwwDBGridKeyOptions KeyOptions = {read=FKeyOptions, write=FKeyOptions, default=6};
	__property Classes::TAlignment TitleAlignment = {read=FTitleAlignment, write=SetTitleAlignment, nodefault};
	__property int TitleLines = {read=FTitleLines, write=SetTitleLines, nodefault};
	__property TCalcCellColorsEvent OnCalcCellColors = {read=FOnCalcCellColors, write=FOnCalcCellColors};
	__property TCalcTitleAttributesEvent OnCalcTitleAttributes = {read=FOnCalcTitleAttributes, write=FOnCalcTitleAttributes};
	__property TwwDrawTitleCellEvent OnDrawTitleCell = {read=FOnDrawTitleCell, write=FOnDrawTitleCell};
	__property TwwDrawGroupHeaderCellEvent OnDrawGroupHeaderCell = {read=FOnDrawGroupHeaderCell, write=FOnDrawGroupHeaderCell};
	__property TwwCalcTitleImageEvent OnCalcTitleImage = {read=FOnCalcTitleImage, write=FOnCalcTitleImage};
	__property TTitleButtonClickEvent OnTitleButtonClick = {read=FOnTitleButtonClick, write=FOnTitleButtonClick};
	__property int RowHeightPercent = {read=FRowHeightPercent, write=SetRowHeightPercent, default=100};
	__property bool ShowVertScrollBar = {read=FShowVertScrollBar, write=SetShowVertScrollBar, default=1};
	__property bool ShowHorzScrollBar = {read=GetShowHorzScrollBar, write=SetShowHorzScrollBar, nodefault};
	__property Wwdbedit::TwwValidateEvent OnCheckValue = {read=FOnCheckValue, write=FOnCheckValue};
	__property Classes::TNotifyEvent OnTopRowChanged = {read=FOnTopRowChanged, write=FOnTopRowChanged};
	__property Classes::TNotifyEvent OnRowChanged = {read=FOnRowChanged, write=FOnRowChanged};
	__property Classes::TNotifyEvent OnCellChanged = {read=FOnCellChanged, write=FOnCellChanged};
	__property TwwLeftColChangedEvent OnLeftColChanged = {read=FOnLeftColChanged, write=FOnLeftColChanged};
	__property TwwFieldChangedEvent OnFieldChanged = {read=FOnFieldChanged, write=FOnFieldChanged};
	__property Classes::TNotifyEvent OnUpdateFooter = {read=FOnUpdateFooter, write=FOnUpdateFooter};
	__property int CalcCellRow = {read=GetCalcCellRow, nodefault};
	__property int CalcCellCol = {read=FCalcCellCol, nodefault};
	__property bool TitleButtons = {read=FTitleButtons, write=SetTitleButtons, nodefault};
	__property bool EditCalculated = {read=FEditCalculated, write=FEditCalculated, default=0};
	__property TwwMultiSelectOptions MultiSelectOptions = {read=FMultiSelectOptions, write=FMultiSelectOptions, default=0};
	__property Classes::TStrings* Selected = {read=GetSelectedFields, write=SetSelectedFields};
	__property bool UseTFields = {read=FUseTFields, write=SetUseTFields, default=1};
	__property TwwIButton* IndicatorButton = {read=FIndicatorButton, write=FIndicatorButton, stored=false};
	__property Controls::TImageList* ImageList = {read=FImageList, write=FImageList};
	__property Controls::TImageList* TitleImageList = {read=FTitleImageList, write=FTitleImageList};
	__property TwwGridLineColors* LineColors = {read=FLineColors, write=FLineColors};
	__property TwwColumn* Columns[int Index] = {read=GetColumn};
	__property TwwColumn* FastColumns[int Index] = {read=GetFastColumn};
	TwwColumn* __fastcall ColumnByName(System::UnicodeString Index);
	__property TDrawFooterCellEvent OnDrawFooterCell = {read=FOnDrawFooterCell, write=FOnDrawFooterCell};
	__property TwwCreateGridHintWindowEvent OnCreateHintWindow = {read=FOnCreateHintWindow, write=FOnCreateHintWindow};
	__property Classes::TNotifyEvent OnBeforePaint = {read=FOnBeforePaint, write=FOnBeforePaint};
	__property TwwGridURLOpenEvent OnURLOpen = {read=FOnURLOpen, write=FOnURLOpen};
	__property Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property int DragVertOffset = {read=FDragVertOffset, write=FDragVertOffset, default=15};
	__property bool ControlInfoInDataset = {read=FControlInfoInDataset, write=FControlInfoInDataset, default=1};
	__property Classes::TStrings* ControlType = {read=FControlType, write=SetControlType};
	__property bool PictureMaskFromDataSet = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=1};
	__property Classes::TStrings* PictureMasks = {read=FPictureMasks, write=SetPictureMasks};
	__property Classes::TStrings* RegexMasks = {read=FRegexMasks, write=SetRegexMasks};
	__property LeftCol;
	__property TwwPadColumnStyle PadColumnStyle = {read=FPadColumnStyle, write=FPadColumnStyle, default=2};
	__property TwwEditControlOptions EditControlOptions = {read=FEditControlOptions, write=FEditControlOptions, default=2};
	__property Wwpaintoptions::TwwGridPaintOptions* PaintOptions = {read=FPaintOptions, write=FPaintOptions};
	__property TwwGridLineStyle LineStyle = {read=FLineStyle, write=FLineStyle, default=2};
	__property bool HideAllLines = {read=FHideAllLines, write=FHideAllLines, default=0};
	__property TwwCustomDrawCellEvent OnBeforeDrawCell = {read=FOnBeforeDrawCell, write=FOnBeforeDrawCell};
	__property TwwCustomDrawCellEvent OnAfterDrawCell = {read=FOnAfterDrawCell, write=FOnAfterDrawCell};
	__property TwwDittoEvent OnDitto = {read=FOnDitto, write=FOnDitto};
	__property TwwBeforeSortEvent OnBeforeMenuSort = {read=FOnBeforeSort, write=FOnBeforeSort};
	__property TwwSortEvent OnAfterMenuSort = {read=FOnAfterSort, write=FOnAfterSort};
	__property TwwCanGroupEvent OnCanGroup = {read=FOnCanGroup, write=FOnCanGroup};
	__property TwwCanSortEvent OnCanSort = {read=FOnCanSort, write=FOnCanSort};
	__property TwwCanFilterEvent OnCanFilter = {read=FOnCanFilter, write=FOnCanFilter};
	__property TwwCanShowTitleDropDownEvent OnCanShowTitleDropDown = {read=FOnCanShowTitleDropDown, write=FOnCanShowTitleDropDown};
	__property TwwQuerySortFieldEvent OnQuerySortField = {read=FOnQuerySortField, write=FOnQuerySortField};
	__property TwwPopupTitleDropDownEvent OnPopupTitleDropDown = {read=FOnPopupTitleDropDown, write=FOnPopupTitleDropDown};
	__property TwwBeforeTitleMenuEvent OnBeforeMenuGroup = {read=FOnBeforeGroup, write=FOnBeforeGroup};
	__property TwwBeforeTitleMenuEvent OnBeforeMenuClearGroup = {read=FOnBeforeClearGroup, write=FOnBeforeClearGroup};
	__property TwwBeforeTitleMenuEvent OnBeforeMenuColumnRemove = {read=FOnBeforeColumnRemove, write=FOnBeforeColumnRemove};
	__property TwwBeforeColumnAddEvent OnBeforeMenuColumnAdd = {read=FOnBeforeColumnAdd, write=FOnBeforeColumnAdd};
	__property TwwAddSelectColumnEvent OnAddSelectColumn = {read=FOnAddSelectColumn, write=FOnAddSelectColumn};
	__property TwwOnInitSelectColumnsDialogEvent OnInitSelectColumnsDialog = {read=FOnInitSelectColumnsDialog, write=FOnInitSelectColumnsDialog};
	__property VisibleRowCount;
	__property TwwDittoAttributes* DittoAttributes = {read=FDittoAttributes, write=FDittoAttributes};
	__property TwwTitleMenuAttributes* TitleMenuAttributes = {read=FTitleMenuAttributes, write=FTitleMenuAttributes};
	__property bool DisableThemesInTitle = {read=FDisableThemesInTitle, write=FDisableThemesInTitle, default=0};
	__property bool ShowSearchRow = {read=FShowSearchRow, write=SetShowSearchRow, default=0};
	__property TwwGridSearchEditor* SearchEditor = {read=FSearchEditor};
	__property bool SearchMode = {read=FSearchMode, write=FSearchMode, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomDBGrid(HWND ParentWindow) : Grids::TCustomGrid(ParentWindow) { }
	
};


#pragma option push -b-
enum TwwUpdateSelected { sptUpdateField, sptUpdateWidth, sptUpdateLabel, sptUpdateReadOnly, sptUpdateGroup, sptUpdateIndex, sptUpdateVisible };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Controls::TImageList* __fastcall wwGetIndicators(void);
extern PACKAGE Controls::TImageList* __fastcall wwGetDefaultTitleImages(void);
extern PACKAGE void __fastcall UpdateSelectedProp(Classes::TStrings* Selected, System::UnicodeString FieldName, System::UnicodeString val, TwwUpdateSelected SelectedProperty, int Index = 0xffffffff);
extern PACKAGE void __fastcall UpdateSelectedPropWithGrid(TwwCustomDBGrid* Grid, Classes::TStrings* Selected, System::UnicodeString FieldName, System::UnicodeString val, TwwUpdateSelected SelectedProperty, int Index = 0xffffffff);
extern PACKAGE System::UnicodeString __fastcall GetSelectedProp(Classes::TStrings* Selected, System::UnicodeString FieldName, TwwUpdateSelected SelectedProperty);
extern PACKAGE void __fastcall wwWriteTextLines(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, int DX, int DY, System::WideChar * s, Classes::TAlignment Alignment, Wwtypes::TwwWriteTextOptions WriteOptions);

}	/* namespace Wwdbigrd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbigrd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbigrdHPP
