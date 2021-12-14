// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwdbgrid.pas' rev: 22.00

#ifndef WwdbgridHPP
#define WwdbgridHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwmemo.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <wwexport.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <wwpaintoptions.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbgrid
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwFieldControlType { fctNone, fctField, fctCheckBox, fctCustom, fctBitmap, fctLookupCombo, fctComboBox, fctRichEdit, fctImageIndex, fctURLLink };
#pragma option pop

typedef void __fastcall (__closure *TwwOnInitMemoDlgEvent)(Wwmemo::TwwMemoDlg* Dialog);

typedef void __fastcall (__closure *TwwMemoUserButtonEvent)(Wwmemo::TwwMemoDlg* Dialog, Stdctrls::TMemo* Memo);

typedef void __fastcall (__closure *TwwCreateDTPEvent)(System::TObject* Sender, Wwdbdatetimepicker::TwwDBCustomDateTimePicker* ADateTimePicker);

class DELPHICLASS TwwIniAttributes;
class PASCALIMPLEMENTATION TwwIniAttributes : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FFormName;
	System::UnicodeString FFileName;
	System::UnicodeString FSectionName;
	System::UnicodeString FDelimiter;
	bool FEnabled;
	bool FSaveToRegistry;
	bool FCheckNewFields;
	void __fastcall SetFileName(System::UnicodeString val);
	void __fastcall SetSectionName(System::UnicodeString val);
	void __fastcall SetDelimiter(System::UnicodeString val);
	void __fastcall SetEnabled(bool val);
	System::UnicodeString __fastcall GetSectionName(void);
	System::UnicodeString __fastcall GetFileName(void);
	
public:
	Classes::TComponent* Owner;
	__property System::UnicodeString FormName = {read=FFormName};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property bool SaveToRegistry = {read=FSaveToRegistry, write=FSaveToRegistry, default=0};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString SectionName = {read=GetSectionName, write=SetSectionName};
	__property System::UnicodeString Delimiter = {read=FDelimiter, write=SetDelimiter};
	__property bool CheckNewFields = {read=FCheckNewFields, write=FCheckNewFields, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwIniAttributes(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwIniAttributes(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwMemoDialog;
class PASCALIMPLEMENTATION TwwMemoDialog : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	Graphics::TFont* FFont;
	Dbctrls::TFieldDataLink* FDataLink;
	Wwmemo::TwwMemoAttributes FMemoAttributes;
	System::UnicodeString FCaption;
	int FLeft;
	int FTop;
	int FWidth;
	int FHeight;
	TwwMemoUserButtonEvent FUserButton1Click;
	TwwMemoUserButtonEvent FUserButton2Click;
	TwwOnInitMemoDlgEvent FOnInitDialog;
	TwwOnInitMemoDlgEvent FOnCloseDialog;
	System::UnicodeString FUserButton1Caption;
	System::UnicodeString FUserButton2Caption;
	Classes::TStrings* FLines;
	void __fastcall SetLines(Classes::TStrings* val);
	
protected:
	void __fastcall SetDataField(System::UnicodeString value);
	void __fastcall SetDataSource(Db::TDataSource* value);
	Db::TDataSource* __fastcall GetDataSource(void);
	System::UnicodeString __fastcall GetDataField(void);
	void __fastcall SetwwMemoAttributes(Wwmemo::TwwMemoAttributes sel);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetCaption(System::UnicodeString Value);
	
public:
	Wwmemo::TwwMemoDlg* Form;
	System::Variant Patch;
	__fastcall virtual TwwMemoDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwMemoDialog(void);
	virtual void __fastcall DoInitDialog(void);
	virtual void __fastcall DoCloseDialog(void);
	
__published:
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	virtual bool __fastcall Execute(void);
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Wwmemo::TwwMemoAttributes MemoAttributes = {read=FMemoAttributes, write=SetwwMemoAttributes, default=3};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property int DlgLeft = {read=FLeft, write=FLeft, nodefault};
	__property int DlgTop = {read=FTop, write=FTop, nodefault};
	__property int DlgWidth = {read=FWidth, write=FWidth, nodefault};
	__property int DlgHeight = {read=FHeight, write=FHeight, nodefault};
	__property TwwOnInitMemoDlgEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property TwwOnInitMemoDlgEvent OnCloseDialog = {read=FOnCloseDialog, write=FOnCloseDialog};
	__property TwwMemoUserButtonEvent OnUserButton1Click = {read=FUserButton1Click, write=FUserButton1Click};
	__property TwwMemoUserButtonEvent OnUserButton2Click = {read=FUserButton2Click, write=FUserButton2Click};
	__property System::UnicodeString UserButton1Caption = {read=FUserButton1Caption, write=FUserButton1Caption};
	__property System::UnicodeString UserButton2Caption = {read=FUserButton2Caption, write=FUserButton2Caption};
};


class DELPHICLASS TwwDBGrid;
typedef void __fastcall (__closure *TwwMemoOpenEvent)(TwwDBGrid* Grid, TwwMemoDialog* MemoDialog);

typedef void __fastcall (__closure *TwwMemoCloseEvent)(TwwDBGrid* Grid, bool Cancel);

typedef void __fastcall (__closure *TwwSelectRecordEvent)(TwwDBGrid* Grid, bool Selecting, bool &Accept);

typedef void __fastcall (__closure *TwwSelectAllRecordEvent)(TwwDBGrid* Grid, bool Selecting, bool &Accept);

typedef void __fastcall (__closure *TwwExportFieldEvent)(TwwDBGrid* Grid, Db::TField* Field, bool &Accept);

typedef void __fastcall (__closure *TwwExportSYLKFormatEvent)(TwwDBGrid* Grid, Db::TField* Field, System::UnicodeString &SYLKFormat);

class PASCALIMPLEMENTATION TwwDBGrid : public Wwdbigrd::TwwCustomDBGrid
{
	typedef Wwdbigrd::TwwCustomDBGrid inherited;
	
private:
	int FSizingIndex;
	int FSizingPos;
	int FSizingOfs;
	Wwmemo::TwwMemoAttributes FMemoAttributes;
	TwwIniAttributes* FIniAttributes;
	Wwexport::TwwExportOptions* FExportOptions;
	bool redrawingGrid;
	bool initialized;
	bool doneInitControls;
	bool drawingCell;
	TwwMemoOpenEvent FOnMemoOpen;
	TwwMemoCloseEvent FOnMemoClose;
	int FFixedCols;
	bool FDirtyIni;
	bool inLinkActive;
	bool inTopLeftChanged;
	bool GridIsLoaded;
	TwwSelectRecordEvent FOnSelectRecord;
	TwwSelectAllRecordEvent FOnSelectAllRecords;
	TwwExportFieldEvent FOnExportField;
	TwwExportSYLKFormatEvent FOnExportSYLKFormat;
	TwwCreateDTPEvent FOnCreateDateTimePicker;
	bool FLoadAllRTF;
	Classes::TStrings* OrigSelected;
	Wwdbigrd::TwwBookmarkList* Bookmarks;
	Classes::TList* FDependentComponents;
	bool MakeCustomControlVisible;
	bool FDisableThemes;
	Graphics::TColor __fastcall GetTitleColor(void);
	void __fastcall SetTitleColor(Graphics::TColor sel);
	HIDESBASE Db::TDataSource* __fastcall GetDataSource(void);
	HIDESBASE void __fastcall SetDataSource(Db::TDataSource* val);
	void __fastcall SetwwMemoAttributes(Wwmemo::TwwMemoAttributes sel);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	void __fastcall UpdateSelectedProperty(void);
	Wwdbdatetimepicker::TwwDBCustomDateTimePicker* __fastcall GetDateTimePicker(void);
	HIDESBASE void __fastcall DrawSizingLine(const Grids::TGridDrawInfo &DrawInfo);
	
protected:
	Classes::TStrings* SelectedRecordList;
	DYNAMIC System::WideString __fastcall WideGetFieldValue(int ACol);
	virtual void __fastcall ShowCurrentControl(void);
	virtual void __fastcall AdjustLeftCol(void);
	virtual void __fastcall CalcSizingState(int X, int Y, Grids::TGridState &State, int &Index, int &SizingPos, int &SizingOfs, Grids::TGridDrawInfo &FixedInfo);
	virtual void __fastcall CreateWnd(void);
	virtual Wwdbdatetimepicker::TwwDBCustomDateTimePicker* __fastcall CreateDateTimePicker(void);
	virtual void __fastcall DoCreateDateTimePicker(Wwdbdatetimepicker::TwwDBCustomDateTimePicker* ADateTimePicker);
	DYNAMIC void __fastcall CalcRowHeight(void);
	DYNAMIC void __fastcall DoExit(void);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall ColWidthsChanged(void);
	virtual void __fastcall LinkActive(bool value);
	void __fastcall SetFieldValue(int ACol, System::UnicodeString val);
	virtual bool __fastcall CanEditShow(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall ColExit(void);
	DYNAMIC void __fastcall TopLeftChanged(void);
	DYNAMIC bool __fastcall AllowCancelOnExit(void);
	void __fastcall ToggleCheckBox(int col, int row);
	void __fastcall InitControls(void);
	HIDESBASE void __fastcall SetFixedCols(int val);
	int __fastcall GetFixedCols(void);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall IsWWControl(int ACol, int ARow);
	void __fastcall CallMemoDialog(void);
	System::DynamicArray<System::Byte> __fastcall findBookmark(void);
	virtual Graphics::TColor __fastcall CellColor(int ACol, int ARow);
	virtual void __fastcall RefreshBookmarkList(void);
	virtual void __fastcall Scroll(int Distance);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall SelectRecordRange(System::DynamicArray<System::Byte> bkmrk1, System::DynamicArray<System::Byte> bkmrk2);
	virtual void __fastcall RemoveSelected(System::DynamicArray<System::Byte> bkmrk1, System::DynamicArray<System::Byte> bkmrk2);
	DYNAMIC bool __fastcall IsSelectedRow(int DataRow);
	virtual void __fastcall RefreshActiveControl(void);
	HIDESBASE bool __fastcall IsActiveControl(void);
	
public:
	System::Variant Patch;
	DYNAMIC bool __fastcall IsSelected(void);
	bool __fastcall IsSelectedRecord(void);
	virtual void __fastcall SelectRecord(void);
	virtual void __fastcall UnselectRecord(void);
	void __fastcall SelectAll(void);
	virtual void __fastcall UnselectAll(void);
	virtual void __fastcall LoadFromIniFile(void);
	virtual void __fastcall SaveToIniFile(void);
	void __fastcall ClearControls(void);
	virtual void __fastcall FlushChanges(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	int __fastcall GetRowCount(void);
	int __fastcall GetColCount(void);
	int __fastcall GetActiveRow(void);
	int __fastcall GetActiveCol(void);
	void __fastcall SetActiveRow(int val);
	void __fastcall ScrollCurrentToTop(int currentRow = 0x0);
	Db::TField* __fastcall GetActiveField(void);
	void __fastcall SetActiveField(System::UnicodeString AFieldName);
	bool __fastcall IsRichEditCell(int col, int row, Controls::TWinControl* &customEdit);
	virtual void __fastcall GetControlInfo(System::UnicodeString AFieldName, System::UnicodeString &AControlType, System::UnicodeString &AParameters);
	DYNAMIC System::UnicodeString __fastcall GetFieldValue(int ACol);
	virtual void __fastcall DoExportField(TwwDBGrid* Grid, Db::TField* AField, bool &Accept);
	virtual void __fastcall DoExportSYLKFormat(TwwDBGrid* Grid, Db::TField* AField, System::UnicodeString &SYLKFormat);
	HIDESBASE void __fastcall SetScrollBars(Stdctrls::TScrollStyle scrollVal);
	void __fastcall RedrawGrid(void);
	virtual void __fastcall SetColumnAttributes(void);
	virtual void __fastcall DrawCell(int ACol, int ARow, const Types::TRect &ARect, Grids::TGridDrawState AState);
	virtual void __fastcall HideControls(void);
	HIDESBASE Grids::TGridCoord __fastcall MouseCoord(int X, int Y);
	HIDESBASE void __fastcall SetControlType(System::UnicodeString AFieldName, TwwFieldControlType AComponentType, System::UnicodeString AParameters);
	void __fastcall RefreshDisplay(void);
	void __fastcall SortSelectedList(void);
	void __fastcall RestoreDesignSelected(void);
	__fastcall virtual TwwDBGrid(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBGrid(void);
	DYNAMIC void __fastcall ColEnter(void);
	__property Wwdbdatetimepicker::TwwDBCustomDateTimePicker* DateTimePicker = {read=GetDateTimePicker};
	__property InplaceEditor;
	__property ColWidths;
	__property GridLineWidth = {default=1};
	__property Canvas;
	__property Wwdbigrd::TwwBookmarkList* SelectedList = {read=Bookmarks};
	__property TabStops;
	void __fastcall AddDependent(Classes::TComponent* value);
	void __fastcall RemoveDependent(Classes::TComponent* value);
	virtual void __fastcall ApplySelected(void);
	void __fastcall SetOrder(System::UnicodeString AFieldName, bool AClientCursor);
	
__published:
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
	__property DittoAttributes;
	__property DisableThemesInTitle = {default=0};
	__property LineStyle = {default=2};
	__property ControlInfoInDataset = {default=1};
	__property ControlType;
	__property PictureMaskFromDataSet = {default=1};
	__property PictureMasks;
	__property RegexMasks;
	__property Selected;
	__property Wwmemo::TwwMemoAttributes MemoAttributes = {read=FMemoAttributes, write=SetwwMemoAttributes, default=3};
	__property TwwIniAttributes* IniAttributes = {read=FIniAttributes, write=FIniAttributes};
	__property Graphics::TColor TitleColor = {read=GetTitleColor, write=SetTitleColor, nodefault};
	__property TwwMemoOpenEvent OnMemoOpen = {read=FOnMemoOpen, write=FOnMemoOpen};
	__property TwwMemoCloseEvent OnMemoClose = {read=FOnMemoClose, write=FOnMemoClose};
	__property TwwSelectAllRecordEvent OnMultiSelectAllRecords = {read=FOnSelectAllRecords, write=FOnSelectAllRecords};
	__property TwwSelectRecordEvent OnMultiSelectRecord = {read=FOnSelectRecord, write=FOnSelectRecord};
	__property OnLeftColChanged;
	__property OnRowChanged;
	__property OnCellChanged;
	__property int FixedCols = {read=GetFixedCols, write=SetFixedCols, nodefault};
	__property ShowHorzScrollBar;
	__property ShowVertScrollBar = {default=1};
	__property EditControlOptions = {default=2};
	__property IndicatorButton;
	__property Anchors = {default=3};
	__property BiDiMode;
	__property ParentBiDiMode = {default=1};
	__property Align = {default=0};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DefaultDrawing = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property EditCalculated = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName;
	__property KeyOptions = {default=6};
	__property MultiSelectOptions = {default=0};
	__property Options = {default=7421};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RowHeightPercent = {default=100};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TitleAlignment;
	__property TitleFont;
	__property TitleLines;
	__property TitleButtons;
	__property UseTFields = {default=1};
	__property Visible = {default=1};
	__property bool LoadAllRTF = {read=FLoadAllRTF, write=FLoadAllRTF, default=0};
	__property LineColors;
	__property TitleMenuAttributes;
	__property OnCalcCellColors;
	__property OnCalcTitleAttributes;
	__property OnColWidthChanged;
	__property OnDrawGroupHeaderCell;
	__property OnTitleButtonClick;
	__property OnColEnter;
	__property OnColExit;
	__property OnDrawDataCell;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnStartDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnCreateHintWindow;
	__property OnBeforeMenuSort;
	__property OnAfterMenuSort;
	__property OnBeforeMenuGroup;
	__property OnBeforeMenuClearGroup;
	__property OnBeforeMenuColumnRemove;
	__property OnBeforeMenuColumnAdd;
	__property OnAddSelectColumn;
	__property OnCanSort;
	__property OnCanFilter;
	__property OnCanGroup;
	__property OnQuerySortField;
	__property OnCanShowTitleDropDown;
	__property OnPopupTitleDropDown;
	__property OnInitSelectColumnsDialog;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnGesture;
	__property IndicatorColor = {stored=false};
	__property IndicatorIconColor = {default=0};
	__property OnCheckValue;
	__property OnColumnMoved;
	__property OnTopRowChanged;
	__property OnCalcTitleImage;
	__property OnDrawFooterCell;
	__property OnDrawTitleCell;
	__property OnFieldChanged;
	__property OnUpdateFooter;
	__property OnBeforePaint;
	__property ImageList;
	__property TitleImageList;
	__property FooterColor = {default=-16777201};
	__property FooterCellColor = {default=-16777201};
	__property FooterHeight = {default=0};
	__property DragVertOffset = {default=15};
	__property PadColumnStyle = {default=2};
	__property OnURLOpen;
	__property HideAllLines = {default=0};
	__property GroupFieldName;
	__property TwwCreateDTPEvent OnCreateDateTimePicker = {read=FOnCreateDateTimePicker, write=FOnCreateDateTimePicker};
	__property Wwexport::TwwExportOptions* ExportOptions = {read=FExportOptions, write=FExportOptions};
	__property TwwExportFieldEvent OnExportField = {read=FOnExportField, write=FOnExportField};
	__property TwwExportSYLKFormatEvent OnExportSYLKFormat = {read=FOnExportSYLKFormat, write=FOnExportSYLKFormat};
	__property PaintOptions;
	__property OnBeforeDrawCell;
	__property OnAfterDrawCell;
	__property OnDitto;
	__property Touch;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBGrid(HWND ParentWindow) : Wwdbigrd::TwwCustomDBGrid(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwdbgrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbgrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbgridHPP
