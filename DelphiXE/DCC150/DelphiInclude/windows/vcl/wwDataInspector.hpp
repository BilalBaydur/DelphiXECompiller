// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwDataInspector.pas' rev: 22.00

#ifndef WwdatainspectorHPP
#define WwdatainspectorHPP

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
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <WwPict.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwbitmap.hpp>	// Pascal unit
#include <wwpaintoptions.hpp>	// Pascal unit
#include <Imm.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdatainspector
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwInspectorHintWindow;
class PASCALIMPLEMENTATION TwwInspectorHintWindow : public Controls::THintWindow
{
	typedef Controls::THintWindow inherited;
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	Db::TField* Field;
	bool WordWrap;
	Classes::TAlignment Alignment;
	bool CenterVertically;
public:
	/* THintWindow.Create */ inline __fastcall virtual TwwInspectorHintWindow(Classes::TComponent* AOwner) : Controls::THintWindow(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TwwInspectorHintWindow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwInspectorHintWindow(HWND ParentWindow) : Controls::THintWindow(ParentWindow) { }
	
};


class DELPHICLASS TwwDataInspectorDataLink;
class DELPHICLASS TwwDataInspector;
class PASCALIMPLEMENTATION TwwDataInspectorDataLink : public Db::TDataLink
{
	typedef Db::TDataLink inherited;
	
private:
	TwwDataInspector* FObjectView;
	bool FInUpdateData;
	bool FModified;
	
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
	__fastcall TwwDataInspectorDataLink(TwwDataInspector* AObjectView);
	void __fastcall Modified(void);
	void __fastcall Reset(void);
	__property bool isFieldModified = {read=FModified, nodefault};
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TwwDataInspectorDataLink(void) { }
	
};


class DELPHICLASS TwwInspectorPickList;
class PASCALIMPLEMENTATION TwwInspectorPickList : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Classes::TStrings* FItems;
	bool FMapped;
	bool FDisplayAsCheckbox;
	Stdctrls::TComboBoxStyle FStyle;
	bool FShowMatchText;
	bool FAllowClearKey;
	Wwframe::TwwComboButtonStyle FButtonStyle;
	Graphics::TBitmap* FButtonGlyph;
	int FButtonWidth;
	void __fastcall SetItems(Classes::TStrings* val);
	void __fastcall SetButtonGlyph(Graphics::TBitmap* Value);
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	__fastcall TwwInspectorPickList(void);
	__fastcall virtual ~TwwInspectorPickList(void);
	
__published:
	__property Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property bool MapList = {read=FMapped, write=FMapped, default=0};
	__property Stdctrls::TComboBoxStyle Style = {read=FStyle, write=FStyle, default=0};
	__property bool ShowMatchText = {read=FShowMatchText, write=FShowMatchText, default=1};
	__property bool AllowClearKey = {read=FAllowClearKey, write=FAllowClearKey, default=0};
	__property Wwframe::TwwComboButtonStyle ButtonStyle = {read=FButtonStyle, write=FButtonStyle, default=1};
	__property bool DisplayAsCheckbox = {read=FDisplayAsCheckbox, write=FDisplayAsCheckbox, default=0};
	__property Graphics::TBitmap* ButtonGlyph = {read=FButtonGlyph, write=SetButtonGlyph};
	__property int ButtonWidth = {read=FButtonWidth, write=FButtonWidth, default=0};
};


#pragma option push -b-
enum TwwInspectorItemOption { iioAutoDateTimePicker, iioAutoLookupCombo };
#pragma option pop

typedef System::Set<TwwInspectorItemOption, TwwInspectorItemOption::iioAutoDateTimePicker, TwwInspectorItemOption::iioAutoLookupCombo>  TwwInspectorItemOptions;

class DELPHICLASS TwwInspectorItem;
typedef void __fastcall (__closure *TwwInspectorItemChanged)(TwwDataInspector* Sender, TwwInspectorItem* Item, System::UnicodeString NewValue);

typedef void __fastcall (__closure *TwwInspectorItemNotifyEvent)(TwwDataInspector* Sender, TwwInspectorItem* Item);

typedef void __fastcall (__closure *TwwInspectorNotifyEvent)(TwwDataInspector* Sender);

class DELPHICLASS TwwInspectorCollection;
class PASCALIMPLEMENTATION TwwInspectorItem : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FEditText;
	TwwInspectorCollection* FItems;
	bool FReadOnly;
	Controls::TWinControl* FCustomControlName;
	bool FCustomControlAlwaysPaints;
	System::UnicodeString FCaption;
	int FCellHeight;
	System::UnicodeString FDataField;
	Dbctrls::TFieldDataLink* FDataLink;
	bool FExpanded;
	TwwInspectorPickList* FPickList;
	Wwdbedit::TwwDBPicture* FPicture;
	TwwInspectorItem* FParentItem;
	bool FResizeable;
	bool FVisible;
	int FTag;
	System::UnicodeString FTagString;
	TwwInspectorItemOptions FOptions;
	bool FTabStop;
	TwwInspectorItemChanged FItemChanged;
	bool FWordWrap;
	bool FDisableDefaultEditor;
	bool FActiveRecord;
	TwwInspectorItemNotifyEvent FOnEditButtonClick;
	Classes::TAlignment FAlignment;
	bool FCustomControlHighlight;
	bool FEnabled;
	void __fastcall SetItems(TwwInspectorCollection* Value);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	System::UnicodeString __fastcall GetDataField(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	Classes::TComponent* __fastcall GetControl(void);
	Db::TField* __fastcall GetField(void);
	void __fastcall SetCellHeight(const int Value);
	int __fastcall GetLevel(void);
	void __fastcall SetCustomControl(Controls::TWinControl* val);
	void __fastcall SetVisible(bool val);
	void __fastcall SetExpanded(bool val);
	bool __fastcall GetChecked(void);
	void __fastcall SetChecked(bool val);
	Db::TDataLink* __fastcall GetDataLink(void);
	System::UnicodeString __fastcall GetDisplayText(void);
	void __fastcall SetDisplayText(System::UnicodeString val);
	void __fastcall SetEditText(System::UnicodeString val);
	
protected:
	Types::TPoint ButtonPoint;
	__property Db::TDataLink* DataLink = {read=GetDataLink};
	virtual bool __fastcall HaveItems(void);
	Controls::TControl* __fastcall GetDesigner(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual void __fastcall DoItemTextChanged(void);
	bool __fastcall UseDefaultComboBox(void);
	virtual System::UnicodeString __fastcall GetMappedPaintText(System::UnicodeString StoredValue);
	
public:
	__fastcall virtual TwwInspectorItem(Classes::TCollection* Collection);
	__fastcall virtual ~TwwInspectorItem(void);
	bool __fastcall HaveVisibleItem(void);
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	DYNAMIC System::UnicodeString __fastcall GetNamePath(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__property bool ActiveRecord = {read=FActiveRecord, write=FActiveRecord, nodefault};
	__property Db::TField* Field = {read=GetField};
	__property Classes::TComponent* Control = {read=GetControl};
	__property int Level = {read=GetLevel, nodefault};
	__property TwwInspectorItem* ParentItem = {read=FParentItem, write=FParentItem};
	TwwInspectorItem* __fastcall GetFirstChild(bool VisibleItemsOnly = true, bool ExpandedOnly = false);
	TwwInspectorItem* __fastcall GetLastChild(bool VisibleItemsOnly = true, bool ExpandedOnly = false);
	TwwInspectorItem* __fastcall GetPrior(bool VisibleItemsOnly = true, bool ExpandedOnly = false);
	TwwInspectorItem* __fastcall GetNext(bool VisibleItemsOnly = true, bool ExpandedOnly = false);
	TwwInspectorItem* __fastcall GetNextSibling(bool VisibleItemsOnly = true);
	TwwInspectorItem* __fastcall GetPriorSibling(bool VisibleItemsOnly = true);
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property System::UnicodeString DisplayText = {read=GetDisplayText, write=SetDisplayText};
	
__published:
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property int CellHeight = {read=FCellHeight, write=SetCellHeight, default=0};
	__property System::UnicodeString EditText = {read=FEditText, write=SetEditText};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=FAlignment, default=0};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property Controls::TWinControl* CustomControl = {read=FCustomControlName, write=SetCustomControl};
	__property bool CustomControlAlwaysPaints = {read=FCustomControlAlwaysPaints, write=FCustomControlAlwaysPaints, default=1};
	__property bool CustomControlHighlight = {read=FCustomControlHighlight, write=FCustomControlHighlight, default=0};
	__property bool Expanded = {read=FExpanded, write=SetExpanded, default=0};
	__property TwwInspectorPickList* PickList = {read=FPickList, write=FPickList};
	__property Wwdbedit::TwwDBPicture* Picture = {read=FPicture, write=FPicture};
	__property bool Resizeable = {read=FResizeable, write=FResizeable, default=0};
	__property TwwInspectorCollection* Items = {read=FItems, write=SetItems, stored=HaveItems};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property int Tag = {read=FTag, write=FTag, default=0};
	__property System::UnicodeString TagString = {read=FTagString, write=FTagString};
	__property bool TabStop = {read=FTabStop, write=FTabStop, default=1};
	__property TwwInspectorItemOptions Options = {read=FOptions, write=FOptions, default=1};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, nodefault};
	__property bool DisableDefaultEditor = {read=FDisableDefaultEditor, write=FDisableDefaultEditor, default=0};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property TwwInspectorItemChanged OnItemChanged = {read=FItemChanged, write=FItemChanged};
	__property TwwInspectorItemNotifyEvent OnEditButtonClick = {read=FOnEditButtonClick, write=FOnEditButtonClick};
};


class PASCALIMPLEMENTATION TwwInspectorCollection : public Classes::TCollection
{
	typedef Classes::TCollection inherited;
	
public:
	TwwInspectorItem* operator[](int Index) { return Items[Index]; }
	
private:
	TwwInspectorItem* FParentItem;
	HIDESBASE TwwInspectorItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TwwInspectorItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	Classes::TComponent* Control;
	__property TwwInspectorItem* ParentItem = {read=FParentItem};
	__fastcall TwwInspectorCollection(Classes::TComponent* Control);
	__fastcall virtual ~TwwInspectorCollection(void);
	HIDESBASE TwwInspectorItem* __fastcall Add(void);
	HIDESBASE TwwInspectorItem* __fastcall Insert(int index);
	void __fastcall SaveToStream(Classes::TStream* s);
	void __fastcall LoadFromStream(Classes::TStream* s);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	__property TwwInspectorItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


typedef void __fastcall (__closure *TwwInspectorItemCallback)(TwwInspectorItem* obj, void * UserData, bool &AContinue);

#pragma option push -b-
enum TwwDataInspectorOption { ovColumnResize, ovRowResize, ovTabExits, ovEnterToTab, ovHighlightActiveRow, ovHideVertDataLines, ovCenterCaptionVert, ovTabToVisibleOnly, ovShowTreeLines, ovShowCaptionHints, ovShowCellHints, ovFillNonCellArea, ovActiveRecord3DLines, ovAllowInsert, ovHideCaptionColumn, ovHideVertFixedLines, ovUseOwnBackgroundColors };
#pragma option pop

typedef System::Set<TwwDataInspectorOption, TwwDataInspectorOption::ovColumnResize, TwwDataInspectorOption::ovUseOwnBackgroundColors>  TwwDataInspectorOptions;

#pragma option push -b-
enum TwwDataInspectorLineStyle { ovNoLines, ovDottedLine, ovLight3DLine, ovDark3DLine, ovButtonLine };
#pragma option pop

typedef void __fastcall (__closure *TwwInspectorCalcCustomEditEvent)(TwwDataInspector* Sender, TwwInspectorItem* Item, Controls::TWinControl* CustomEdit, bool &AllowCustomEdit);

typedef void __fastcall (__closure *TwwInspectorDrawDataCellEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem, bool ASelected, const Types::TRect &ACellRect, bool &DefaultDrawing);

typedef void __fastcall (__closure *TwwInspectorDrawICellEvent)(TwwDataInspector* Sender, int ACol, const Types::TRect &ACellRect, bool &DefaultDrawing);

typedef void __fastcall (__closure *TwwInspectorDrawCaptionEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem, bool ASelected, const Types::TRect &ACellRect, Types::TRect &ACaptionRect, bool &DefaultTextDrawing);

class DELPHICLASS TwwDataInspectorEdit;
class PASCALIMPLEMENTATION TwwDataInspectorEdit : public Grids::TInplaceEdit
{
	typedef Grids::TInplaceEdit inherited;
	
private:
	Wwdbedit::TwwDBPicture* FwwPicture;
	bool FWordWrap;
	TwwDataInspector* ParentGrid;
	bool FUsePictureMask;
	Controls::TControlCanvas* FCanvas;
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall BoundsChanged(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall SetWordWrap(bool val);
	virtual void __fastcall UpdateContents(void);
	
public:
	__fastcall virtual TwwDataInspectorEdit(Classes::TComponent* AOwner, int dummy);
	__fastcall virtual ~TwwDataInspectorEdit(void);
	bool __fastcall IsValidPictureValue(System::UnicodeString s);
	bool __fastcall HavePictureMask(void);
	__property Wwdbedit::TwwDBPicture* Picture = {read=FwwPicture, write=FwwPicture};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Color = {default=-16777211};
	__property Font;
public:
	/* TInplaceEdit.Create */ inline __fastcall virtual TwwDataInspectorEdit(Classes::TComponent* AOwner) : Grids::TInplaceEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDataInspectorEdit(HWND ParentWindow) : Grids::TInplaceEdit(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TwwInspectorFieldChangedEvent)(TwwDataInspector* Sender, Db::TField* Field);

typedef void __fastcall (__closure *TwwInspectorCreateDTPEvent)(TwwDataInspector* Sender, Wwdbdatetimepicker::TwwDBCustomDateTimePicker* ADateTimePicker);

typedef void __fastcall (__closure *TwwInspectorCreateComboEvent)(TwwDataInspector* Sender, Wwdbcomb::TwwDBComboBox* Combo);

typedef void __fastcall (__closure *TwwInspectorBeforeSelectCellEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem, bool &CanSelect);

typedef void __fastcall (__closure *TwwInspectorAfterSelectCellEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem);

typedef void __fastcall (__closure *TwwInspectorCanExpandEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem, bool &CanExpand);

typedef void __fastcall (__closure *TwwInspectorCanCollapseEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem, bool &CanCollapse);

typedef void __fastcall (__closure *TwwInspectorExpandedEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem);

typedef void __fastcall (__closure *TwwInspectorCollapsedEvent)(TwwDataInspector* Sender, TwwInspectorItem* ObjItem);

#pragma option push -b-
enum TwwInspectorTabSetFocusStyle { itsPreserveActiveItem, itsResetActiveItem };
#pragma option pop

class DELPHICLASS TwwInspectorButtonOptions;
class PASCALIMPLEMENTATION TwwInspectorButtonOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TBitmap* FExpandGlyph;
	Graphics::TBitmap* FCollapseGlyph;
	Controls::TWinControl* Control;
	bool FTransparentGlyphs;
	void __fastcall SetExpandGlyph(Graphics::TBitmap* Value);
	void __fastcall SetCollapseGlyph(Graphics::TBitmap* Value);
	
public:
	__fastcall TwwInspectorButtonOptions(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwInspectorButtonOptions(void);
	
__published:
	__property Graphics::TBitmap* ExpandGlyph = {read=FExpandGlyph, write=SetExpandGlyph};
	__property Graphics::TBitmap* CollapseGlyph = {read=FCollapseGlyph, write=SetCollapseGlyph};
	__property bool TransparentGlyphs = {read=FTransparentGlyphs, write=FTransparentGlyphs, default=0};
};


typedef void __fastcall (__closure *TwwInspectorPaintTextEvent)(TwwDataInspector* Sender, TwwInspectorItem* Item, System::UnicodeString &PaintText);

typedef void __fastcall (__closure *TwwInspectorValidationError)(TwwDataInspector* Sender, TwwInspectorItem* Item, System::UnicodeString &Msg, bool &DoDefault);

typedef void __fastcall (__closure *TwwCreateInspectorHintWindowEvent)(System::TObject* Sender, TwwInspectorHintWindow* HintWindow, Db::TField* AField, const Types::TRect &R, bool &WordWrap, int &MaxWidth, int &MaxHeight, bool &DoDefault);

class DELPHICLASS TwwInspectorIndicatorRow;
class PASCALIMPLEMENTATION TwwInspectorIndicatorRow : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	System::UnicodeString FCaption;
	int FHeight;
	Graphics::TColor FColor;
	Classes::TAlignment FTextAlignment;
	void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetCaption(System::UnicodeString Value);
	void __fastcall SetTextAlignment(Classes::TAlignment Value);
	
public:
	TwwDataInspector* Inspector;
	__fastcall TwwInspectorIndicatorRow(Classes::TComponent* Owner);
	void __fastcall Invalidate(void);
	
__published:
	__property Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetTextAlignment, default=0};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property int Height = {read=FHeight, write=SetHeight, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwInspectorIndicatorRow(void) { }
	
};


class PASCALIMPLEMENTATION TwwDataInspector : public Grids::TCustomGrid
{
	typedef Grids::TCustomGrid inherited;
	
private:
	bool SkipUpdateCustomControlInFocus;
	int NewMouseRow;
	Controls::TImageList* FIndicators;
	TwwInspectorDrawDataCellEvent FOnDrawDataCell;
	TwwInspectorDrawICellEvent FOnDrawIndicatorCell;
	Classes::TNotifyEvent FOnTopLeftChanged;
	TwwInspectorCalcCustomEditEvent FOnCalcCustomEdit;
	TwwDataInspectorOptions FOptions;
	Wwpaintoptions::TwwGridPaintOptions* FPaintOptions;
	Controls::TControl* FDesigner;
	TwwInspectorCollection* FItems;
	TwwDataInspectorDataLink* FDataLink;
	int FCaptionWidth;
	Graphics::TColor FInactiveFocusColor;
	System::UnicodeString FEditText;
	int FSizingIndex;
	int FSizingPos;
	int FSizingOfs;
	Wwdbedit::TwwValidateEvent FOnCheckValue;
	TwwInspectorFieldChangedEvent FOnFieldChanged;
	TwwInspectorItemChanged FOnItemChanged;
	bool FReadOnly;
	int FCaptionIndent;
	Wwdbdatetimepicker::TwwDBCustomDateTimePicker* FDateTimePicker;
	Wwdbcomb::TwwDBComboBox* FCombo;
	TwwInspectorCreateDTPEvent FOnCreateDateTimePicker;
	TwwInspectorCreateComboEvent FOnCreateDefaultCombo;
	bool FPictureMaskFromDataSet;
	int FDefaultRowHeight;
	Graphics::TFont* FCaptionFont;
	TwwDataInspectorLineStyle FLineStyleData;
	TwwDataInspectorLineStyle FLineStyleCaption;
	Graphics::TColor FDottedLineColor;
	int FUpdateCount;
	bool InvalidateInEndUpdate;
	TwwInspectorButtonOptions* FButtonOptions;
	TwwInspectorTabSetFocusStyle FSetFocusTabStyle;
	TwwInspectorDrawCaptionEvent FOnDrawCaptionCell;
	TwwInspectorNotifyEvent FOnBeforePaint;
	Grids::TGetEditEvent FOnGetEditMask;
	TwwInspectorBeforeSelectCellEvent FOnBeforeSelectCell;
	TwwInspectorAfterSelectCellEvent FOnAfterSelectCell;
	TwwInspectorCanExpandEvent FOnCanExpand;
	TwwInspectorCanCollapseEvent FOnCanCollapse;
	TwwInspectorExpandedEvent FOnExpanded;
	TwwInspectorCollapsedEvent FOnCollapsed;
	TwwInspectorPaintTextEvent FOnCalcDataPaintText;
	TwwInspectorValidationError FOnValidationErrorUsingMask;
	TwwCreateInspectorHintWindowEvent FOnCreateHintWindow;
	bool TextIsSame;
	int LastDefaultRowHeight;
	bool SkipErase;
	bool CheckRowCount;
	Graphics::TCanvas* FPaintCanvas;
	Graphics::TBitmap* FPaintBitmap;
	bool UseTempCanvas;
	bool OldDesigning;
	TwwInspectorItem* LastActiveItem;
	TwwInspectorItem* FActiveItem;
	TwwInspectorItem* FTopItem;
	int FMinRowHeight;
	int OldTopRow;
	bool DoBeginUpdateInSelectCell;
	Types::TRect SelectCellUpdateRect;
	bool ChildDataChanged;
	int FDataColumns;
	Graphics::TColor FTreeLineColor;
	int FFixedDataRows;
	int lastMouseX;
	int lastMouseY;
	Controls::THintWindow* HintWindow;
	Extctrls::TTimer* HintTimer;
	int HintTimerCount;
	bool FCustomControlKeyMode;
	Types::TRect UpdateRect;
	Types::TRect OldBoundsRect;
	Stdctrls::TScrollStyle FScrollBars;
	TwwInspectorIndicatorRow* FIndicatorRow;
	Graphics::TColor PaintCopyTextColor;
	bool SkipSetFocus;
	bool SkipUpdateEditText;
	Grids::TGridCoord lastMouseCoord;
	int HotCol;
	int HotRow;
	bool FDisableThemes;
	void __fastcall HintTimerEvent(System::TObject* Sender);
	void __fastcall EditingChanged(void);
	void __fastcall SetDataSource(Db::TDataSource* value);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetCaptionWidth(int value);
	void __fastcall FieldChanged(Db::TField* Field);
	void __fastcall RecordChanged(Db::TField* Field);
	void __fastcall UpdateData(void);
	int __fastcall GetPageHeight(void);
	bool __fastcall InValidColSizingArea(int x);
	Wwdbdatetimepicker::TwwDBCustomDateTimePicker* __fastcall GetDateTimePicker(void);
	int __fastcall DataRow(int ARow);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Messages::TWMScroll &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	bool __fastcall IsHighlightRowVisible(void);
	void __fastcall GetActiveItemCallback(TwwInspectorItem* Item, void * UserData, bool &AContinue);
	void __fastcall GetActiveRowsCallback(TwwInspectorItem* Item, void * UserData, bool &AContinue);
	void __fastcall ApplySettingsCallback(TwwInspectorItem* Item, void * UserData, bool &AContinue);
	void __fastcall LinkActiveCallback(TwwInspectorItem* Item, void * UserData, bool &AContinue);
	int __fastcall GetActiveRows(void);
	void __fastcall SetCaptionIndent(int val);
	void __fastcall SetItems(TwwInspectorCollection* Value);
	HIDESBASE void __fastcall SetOptions(TwwDataInspectorOptions Value);
	HIDESBASE void __fastcall SetDefaultRowHeight(int Value);
	void __fastcall SetCaptionFont(Graphics::TFont* Value);
	void __fastcall CaptionFontChanged(System::TObject* Sender);
	void __fastcall ToggleCheckbox(TwwInspectorItem* obj);
	void __fastcall SetLineStyleCaption(TwwDataInspectorLineStyle val);
	void __fastcall SetLineStyleData(TwwDataInspectorLineStyle val);
	void __fastcall SetUpdateState(bool Updating);
	bool __fastcall isFocused(void);
	void __fastcall SetActiveItem(TwwInspectorItem* obj);
	TwwInspectorItem* __fastcall GetActiveItem(void);
	Graphics::TColor __fastcall GetCaptionColor(void);
	Graphics::TColor __fastcall GetTreeLineColor(void);
	void __fastcall SetCaptionColor(Graphics::TColor val);
	void __fastcall SetTreeLineColor(Graphics::TColor val);
	TwwInspectorItem* __fastcall GetTopItem(void);
	void __fastcall UpdateRowCount(void);
	void __fastcall EditDataLinkDataChange(System::TObject* Sender);
	void __fastcall EditDataLinkUpdateData(System::TObject* Sender);
	Controls::TWinControl* __fastcall GetActiveEdit(void);
	void __fastcall SetDottedLineColor(Graphics::TColor val);
	void __fastcall SetDataColumns(int val);
	HIDESBASE void __fastcall SetScrollBars(Stdctrls::TScrollStyle Value);
	void __fastcall SetFixedDataRows(int Value);
	
protected:
	Controls::TWinControl* CurrentCustomEdit;
	int CurrentCustomEditRow;
	int CurrentCustomEditCol;
	bool InTracking;
	bool FFocused;
	bool FastDesign;
	Wwriched::TwwDBRichEdit* TempRichEdit;
	DYNAMIC int __fastcall GetEditLimit(void);
	DYNAMIC bool __fastcall CanEditAcceptKey(System::WideChar Key);
	virtual void __fastcall CurrentCustomEditSetfocus(void);
	virtual void __fastcall DoCalcCustomEdit(TwwInspectorItem* Item, Controls::TWinControl* CustomEdit, bool &AllowCustomEdit);
	virtual bool __fastcall RecordCountIsValid(void);
	virtual Types::TRect __fastcall GetClientRect(void);
	virtual void __fastcall UpdateScrollBar(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Scroll(int Distance);
	virtual Controls::THintWindow* __fastcall CreateHintWindow(void);
	virtual void __fastcall HintMouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DisplayIndicatorCell(int ACol, const Types::TRect &ARect);
	bool __fastcall EffectiveFocused(void);
	virtual void __fastcall DoCreateHintWindow(TwwInspectorHintWindow* HintWindow, Db::TField* AField, const Types::TRect &R, bool &WordWrap, int &MaxWidth, int &MaxHeight, bool &DoDefault);
	void __fastcall UpdateCurrentEditPosition(void);
	Types::TRect __fastcall ControlRect(int ACol, int ARow);
	void __fastcall UpdateCustomEdit(void);
	virtual void __fastcall FreeHintWindow(void);
	HIDESBASE bool __fastcall IsActiveControl(void);
	void __fastcall ChangeOrientation(bool RightToLeftOrientation);
	void __fastcall InheritedPaint(void);
	virtual void __fastcall FirstTimePaint(void);
	virtual void __fastcall SetDesigner(Controls::TControl* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual Wwdbdatetimepicker::TwwDBCustomDateTimePicker* __fastcall CreateDateTimePicker(void);
	virtual Wwdbcomb::TwwDBComboBox* __fastcall CreateDefaultCombo(void);
	virtual void __fastcall DoCreateDateTimePicker(Wwdbdatetimepicker::TwwDBCustomDateTimePicker* ADateTimePicker);
	virtual void __fastcall DoCreateDefaultCombo(Wwdbcomb::TwwDBComboBox* ACombo);
	virtual void __fastcall LinkActive(bool Value);
	DYNAMIC bool __fastcall CanEditModify(void);
	virtual void __fastcall DoFieldChanged(Db::TField* Field);
	virtual void __fastcall DoItemChanged(TwwInspectorItem* Item, System::UnicodeString NewValue);
	virtual Grids::TInplaceEdit* __fastcall CreateEditor(void);
	DYNAMIC void __fastcall DoExit(void);
	DYNAMIC void __fastcall TopLeftChanged(void);
	virtual bool __fastcall CanEditShow(void);
	virtual void __fastcall DrawCell(int ACol, int ARow, const Types::TRect &ARect, Grids::TGridDrawState AState);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CalcSizingState(int X, int Y, Grids::TGridState &State, int &Index, int &SizingPos, int &SizingOfs, Grids::TGridDrawInfo &FixedInfo);
	virtual void __fastcall UpdateDataColumnWidth(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	virtual void __fastcall Loaded(void);
	virtual bool __fastcall AcquireFocus(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetFocusCell(int ACol, int ARow);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	virtual void __fastcall DataChanged(void);
	virtual void __fastcall UpdateActive(void);
	Db::TField* __fastcall GetField(int ARow);
	virtual bool __fastcall UseDefaultEditor(void);
	virtual bool __fastcall UseCheckbox(int ARow);
	virtual Types::TPoint __fastcall ButtonPt(const Types::TRect &ARect, TwwInspectorItem* Obj);
	virtual Types::TRect __fastcall CheckboxRect(const Types::TRect &ARect, TwwInspectorItem* Obj);
	HIDESBASE void __fastcall DrawSizingLine(const Grids::TGridDrawInfo &DrawInfo);
	DYNAMIC void __fastcall RowHeightsChanged(void);
	virtual void __fastcall DoDrawDataCell(TwwInspectorItem* ObjItem, bool ASelected, const Types::TRect &ACellRect, bool &DefaultDrawing);
	virtual void __fastcall InitCustomEdit(Controls::TWinControl* customEdit, TwwInspectorItem* Obj);
	virtual void __fastcall DoDrawCaptionCell(TwwInspectorItem* ObjItem, bool ASelected, const Types::TRect &ACellRect, Types::TRect &ACaptionRect, bool &DefaultTextDrawing);
	virtual Graphics::TCanvas* __fastcall GetCanvas(void);
	bool __fastcall IsDefaultDateTimePicker(TwwInspectorItem* Obj);
	bool __fastcall IsDefaultLookupCombo(TwwInspectorItem* Obj);
	virtual void __fastcall DoCollapse(TwwInspectorItem* ObjItem);
	virtual void __fastcall DoExpand(TwwInspectorItem* ObjItem);
	DYNAMIC void __fastcall Click(void);
	virtual void __fastcall PaintLines(TwwInspectorItem* item);
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	virtual void __fastcall DoCalcDataPaintText(TwwInspectorItem* item, System::UnicodeString &PaintText);
	virtual void __fastcall ValidationErrorUsingMask(TwwInspectorItem* Item);
	virtual void __fastcall FillWithFixedBitmap(const Types::TRect &TempRect, int CurRelRow);
	virtual void __fastcall FillWithAlternatingRowBitmap(const Types::TRect &TempRect);
	__property Graphics::TColor InactiveFocusColor = {read=FInactiveFocusColor, write=FInactiveFocusColor, default=536870911};
	__property TwwInspectorItem* TopItem = {read=GetTopItem};
	
public:
	__property Col;
	__property ColWidths;
	__property EditorMode;
	__property GridHeight;
	__property GridWidth;
	__property LeftCol;
	__property Selection;
	__property Row;
	__property RowHeights;
	__property TabStops;
	__property TopRow;
	__property RowCount = {default=5};
	__property Controls::TWinControl* ActiveEdit = {read=GetActiveEdit};
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	__property TwwDataInspectorDataLink* DataLink = {read=FDataLink};
	__property Wwdbdatetimepicker::TwwDBCustomDateTimePicker* DefaultDateTimePicker = {read=GetDateTimePicker};
	__property Wwdbcomb::TwwDBComboBox* DefaultCombo = {read=FCombo};
	__property Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property bool CustomControlKeyMode = {read=FCustomControlKeyMode, write=FCustomControlKeyMode, nodefault};
	Types::TRect __fastcall LevelRect(TwwInspectorItem* item);
	void __fastcall MouseToCell(int X, int Y, int &ACol, int &ARow);
	TwwInspectorItem* __fastcall MouseToItem(int X, int Y);
	TwwInspectorItem* __fastcall RefreshActiveItem(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(bool Repaint = false);
	__fastcall virtual TwwDataInspector(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDataInspector(void);
	void __fastcall ApplySettings(void);
	virtual void __fastcall RefreshItem(TwwInspectorItem* Item);
	virtual int __fastcall GetRowByItem(TwwInspectorItem* AItem);
	void __fastcall IterateItems(TwwInspectorItemCallback CallBack, bool ExpandedOnly, void * UserData);
	HIDESBASE void __fastcall InvalidateRow(int ARow);
	void __fastcall InvalidateRowCol(int ARow, int ACol = 0xffffffff);
	TwwInspectorItem* __fastcall GetItemByFieldName(System::UnicodeString AFieldName);
	virtual TwwInspectorItem* __fastcall GetItemByRow(int ARow, bool Optimize = true);
	TwwInspectorItem* __fastcall GetItemByCaption(System::UnicodeString ACaption);
	TwwInspectorItem* __fastcall GetItemByTagString(System::UnicodeString ATagString);
	bool __fastcall HaveVisibleItem(void);
	TwwInspectorItem* __fastcall GetFirstChild(bool VisibleItemsOnly = true);
	void __fastcall FlushContents(void);
	__property Controls::TControl* Designer = {read=FDesigner, write=SetDesigner};
	__property int ActiveRows = {read=GetActiveRows, nodefault};
	__property InplaceEditor;
	__property TwwInspectorItem* ActiveItem = {read=GetActiveItem, write=SetActiveItem};
	__property TwwInspectorFieldChangedEvent OnFieldChanged = {read=FOnFieldChanged, write=FOnFieldChanged};
	__property int FixedDataRows = {read=FFixedDataRows, write=SetFixedDataRows, default=0};
	
__published:
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, nodefault};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Graphics::TColor CaptionColor = {read=GetCaptionColor, write=SetCaptionColor, default=-16777201};
	__property Graphics::TColor TreeLineColor = {read=GetTreeLineColor, write=SetTreeLineColor, default=16777215};
	__property Font;
	__property int DataColumns = {read=FDataColumns, write=SetDataColumns, default=1};
	__property TwwInspectorIndicatorRow* IndicatorRow = {read=FIndicatorRow, write=FIndicatorRow};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Stdctrls::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=2};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property bool PictureMaskFromDataSet = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=0};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property TwwInspectorCollection* Items = {read=FItems, write=SetItems};
	__property int DefaultRowHeight = {read=FDefaultRowHeight, write=SetDefaultRowHeight, default=0};
	__property int CaptionWidth = {read=FCaptionWidth, write=SetCaptionWidth, nodefault};
	__property TwwDataInspectorOptions Options = {read=FOptions, write=SetOptions, nodefault};
	__property Wwpaintoptions::TwwGridPaintOptions* PaintOptions = {read=FPaintOptions, write=FPaintOptions};
	__property Graphics::TFont* CaptionFont = {read=FCaptionFont, write=SetCaptionFont};
	__property TwwDataInspectorLineStyle LineStyleCaption = {read=FLineStyleCaption, write=SetLineStyleCaption, default=3};
	__property TwwDataInspectorLineStyle LineStyleData = {read=FLineStyleData, write=SetLineStyleData, default=3};
	__property Graphics::TColor DottedLineColor = {read=FDottedLineColor, write=SetDottedLineColor, default=-16777200};
	__property TwwInspectorButtonOptions* ButtonOptions = {read=FButtonOptions, write=FButtonOptions};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property int CaptionIndent = {read=FCaptionIndent, write=SetCaptionIndent, default=12};
	__property TwwInspectorTabSetFocusStyle SetFocusTabStyle = {read=FSetFocusTabStyle, write=FSetFocusTabStyle, default=0};
	__property Visible = {default=1};
	__property Touch;
	__property TwwInspectorCalcCustomEditEvent OnCalcCustomEdit = {read=FOnCalcCustomEdit, write=FOnCalcCustomEdit};
	__property OnClick;
	__property TwwCreateInspectorHintWindowEvent OnCreateHintWindow = {read=FOnCreateHintWindow, write=FOnCreateHintWindow};
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property TwwInspectorDrawDataCellEvent OnDrawDataCell = {read=FOnDrawDataCell, write=FOnDrawDataCell};
	__property TwwInspectorDrawICellEvent OnDrawIndicatorCell = {read=FOnDrawIndicatorCell, write=FOnDrawIndicatorCell};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property TwwInspectorBeforeSelectCellEvent OnBeforeSelectCell = {read=FOnBeforeSelectCell, write=FOnBeforeSelectCell};
	__property TwwInspectorAfterSelectCellEvent OnAfterSelectCell = {read=FOnAfterSelectCell, write=FOnAfterSelectCell};
	__property OnStartDock;
	__property OnStartDrag;
	__property Classes::TNotifyEvent OnTopLeftChanged = {read=FOnTopLeftChanged, write=FOnTopLeftChanged};
	__property OnContextPopup;
	__property OnGesture;
	__property TwwInspectorCreateDTPEvent OnCreateDateTimePicker = {read=FOnCreateDateTimePicker, write=FOnCreateDateTimePicker};
	__property TwwInspectorCreateComboEvent OnCreateDefaultCombo = {read=FOnCreateDefaultCombo, write=FOnCreateDefaultCombo};
	__property TwwInspectorDrawCaptionEvent OnDrawCaptionCell = {read=FOnDrawCaptionCell, write=FOnDrawCaptionCell};
	__property TwwInspectorNotifyEvent OnBeforePaint = {read=FOnBeforePaint, write=FOnBeforePaint};
	__property TwwInspectorCanExpandEvent OnCanExpand = {read=FOnCanExpand, write=FOnCanExpand};
	__property TwwInspectorCanCollapseEvent OnCanCollapse = {read=FOnCanCollapse, write=FOnCanCollapse};
	__property TwwInspectorExpandedEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TwwInspectorCollapsedEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TwwInspectorItemChanged OnItemChanged = {read=FOnItemChanged, write=FOnItemChanged};
	__property TwwInspectorPaintTextEvent OnCalcDataPaintText = {read=FOnCalcDataPaintText, write=FOnCalcDataPaintText};
	__property TwwInspectorValidationError OnValidationErrorUsingMask = {read=FOnValidationErrorUsingMask, write=FOnValidationErrorUsingMask};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDataInspector(HWND ParentWindow) : Grids::TCustomGrid(ParentWindow) { }
	
};


class DELPHICLASS TwwInspectorComboBox;
class PASCALIMPLEMENTATION TwwInspectorComboBox : public Wwdbcomb::TwwDBComboBox
{
	typedef Wwdbcomb::TwwDBComboBox inherited;
	
private:
	TwwDataInspector* Inspector;
	
protected:
	int FClickTime;
	virtual void __fastcall CloseUp(bool Accept);
	DYNAMIC void __fastcall DblClick(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall DropDown(void);
	__fastcall virtual TwwInspectorComboBox(Classes::TComponent* AOwner);
public:
	/* TwwDBCustomComboBox.Destroy */ inline __fastcall virtual ~TwwInspectorComboBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwInspectorComboBox(HWND ParentWindow) : Wwdbcomb::TwwDBComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdatainspector */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdatainspector;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdatainspectorHPP
