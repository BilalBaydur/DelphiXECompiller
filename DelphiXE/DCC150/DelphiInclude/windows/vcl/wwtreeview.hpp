// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwtreeview.pas' rev: 22.00

#ifndef WwtreeviewHPP
#define WwtreeviewHPP

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
#include <CommCtrl.hpp>	// Pascal unit
#include <ComStrs.hpp>	// Pascal unit
#include <Consts.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Themes.hpp>	// Pascal unit
#include <ShellAPI.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwtreeview
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwItemState { wwisSelected, wwisGrayed, wwisDisabled, wwisChecked, wwisFocused, wwisDefault, wwisHot, wwisMarked, wwisIndeterminate };
#pragma option pop

typedef System::Set<TwwItemState, TwwItemState::wwisSelected, TwwItemState::wwisIndeterminate>  TwwItemStates;

class DELPHICLASS TwwCustomTreeView;
class DELPHICLASS TwwTreeNode;
typedef void __fastcall (__closure *TwwTVDrawTextEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, const Types::TRect &ARect, TwwItemStates AItemState, bool &DefaultDrawing);

typedef void __fastcall (__closure *TwwTreeMouseMoveEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, Classes::TShiftState Shift, int X, int Y);

typedef void __fastcall (__closure *TwwTreeMouseEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);

#pragma option push -b-
enum TwwNodeState { wwnsCut, wwnsDropHilited, wwnsFocused, wwnsSelected, wwnsExpanded };
#pragma option pop

#pragma option push -b-
enum TwwNodeAttachMode { wwnaAdd, wwnaAddFirst, wwnaAddChild, wwnaAddChildFirst, wwnaInsert, wwnaInsertAfter };
#pragma option pop

#pragma option push -b-
enum TwwAddMode { wwtaAddFirst, wwtaAdd, wwtaInsert };
#pragma option pop

#pragma option push -b-
enum TwwTreeViewCheckboxType { wwtvctNone, wwtvctCheckbox, wwtvctRadioGroup };
#pragma option pop

#pragma option push -b-
enum TwwTreeViewOption { wwtvoExpandOnDblClk, wwtvoExpandButtons3D, wwtvoFlatCheckBoxes, wwtvoHideSelection, wwtvoRowSelect, wwtvoShowButtons, wwtvoShowLines, wwtvoShowRoot, wwtvoHotTrack, wwtvoAutoURL, wwtvoToolTips, wwtvoEditText, wwtvo3StateCheckbox };
#pragma option pop

typedef System::Set<TwwTreeViewOption, TwwTreeViewOption::wwtvoExpandOnDblClk, TwwTreeViewOption::wwtvo3StateCheckbox>  TwwTreeViewOptions;

struct TwwNodeInfo;
typedef TwwNodeInfo *PwwNodeInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TwwNodeInfo
{
	
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	TwwTreeViewCheckboxType CheckboxType;
	System::Byte Checked;
	bool Expanded;
	System::StaticArray<char, 3> DummyPad;
	void *Data;
	int StringDataSize1;
	int StringDataSize2;
	int Count;
	System::SmallString<255>  Text;
};
#pragma pack(pop)


class DELPHICLASS TwwTreeNodes;
class PASCALIMPLEMENTATION TwwTreeNode : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	TwwTreeNode* operator[](int Index) { return Item[Index]; }
	
private:
	bool FMultiSelected;
	TwwTreeViewCheckboxType FCheckboxType;
	bool FChecked;
	TwwTreeNodes* FOwner;
	System::UnicodeString FText;
	System::UnicodeString FStringData1;
	System::UnicodeString FStringData2;
	void *FData;
	_TREEITEM *FItemId;
	int FImageIndex;
	int FSelectedIndex;
	int FOverlayIndex;
	int FStateIndex;
	bool FDeleting;
	bool FInTree;
	bool FGrayed;
	void __fastcall SetCheckboxType(TwwTreeViewCheckboxType val);
	bool __fastcall CompareCount(int CompareMe);
	bool __fastcall DoCanExpand(bool Expand);
	void __fastcall DoExpand(bool Expand);
	void __fastcall ExpandItem(bool Expand, bool Recurse);
	int __fastcall GetAbsoluteIndex(void);
	bool __fastcall GetExpanded(void);
	int __fastcall GetLevel(void);
	TwwTreeNode* __fastcall GetParent(void);
	bool __fastcall GetChildren(void);
	bool __fastcall GetCut(void);
	bool __fastcall GetDropTarget(void);
	bool __fastcall GetFocused(void);
	int __fastcall GetIndex(void);
	TwwTreeNode* __fastcall GetItem(int Index);
	bool __fastcall GetSelected(void);
	bool __fastcall GetState(TwwNodeState NodeState);
	int __fastcall GetCount(void);
	TwwCustomTreeView* __fastcall GetTreeView(void);
	void __fastcall InternalMove(TwwTreeNode* ParentNode, TwwTreeNode* Node, HTREEITEM HItem, TwwAddMode AddMode);
	bool __fastcall IsNodeVisible(void);
	void __fastcall SetChildren(bool Value);
	void __fastcall SetCut(bool Value);
	void __fastcall SetData(void * Value);
	void __fastcall SetDropTarget(bool Value);
	void __fastcall SetItem(int Index, TwwTreeNode* Value);
	void __fastcall SetExpanded(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetOverlayIndex(int Value);
	void __fastcall SetSelectedIndex(int Value);
	void __fastcall SetSelected(bool Value);
	void __fastcall SetStateIndex(int Value);
	void __fastcall SetText(const System::UnicodeString S);
	bool __fastcall GetMultiSelected(void);
	void __fastcall SetMultiSelected(bool Value);
	void __fastcall SetChecked(bool val);
	void __fastcall SetGrayed(bool val);
	
protected:
	int ReadDataSize;
	virtual void __fastcall Invalidate(void);
	virtual int __fastcall GetSizeOfNodeInfo(void);
	virtual void __fastcall ReadData(Classes::TStream* Stream, PwwNodeInfo Info);
	virtual void __fastcall WriteData(Classes::TStream* Stream, PwwNodeInfo Info);
	
public:
	System::Variant Patch;
	int __fastcall GetStateIndex(void);
	bool __fastcall IsRadioGroup(void);
	virtual System::UnicodeString __fastcall GetSortText(void);
	__fastcall virtual TwwTreeNode(TwwTreeNodes* AOwner);
	__fastcall virtual ~TwwTreeNode(void);
	bool __fastcall AlphaSort(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	void __fastcall Collapse(bool Recurse);
	bool __fastcall CustomSort(PFNTVCOMPARE SortProc, int Data);
	void __fastcall Delete(void);
	void __fastcall DeleteChildren(void);
	Types::TRect __fastcall DisplayRect(bool TextOnly);
	bool __fastcall EditText(void);
	void __fastcall EndEdit(bool Cancel);
	void __fastcall Expand(bool Recurse);
	TwwTreeNode* __fastcall GetFirstChild(void);
	HWND __fastcall GetHandle(void);
	TwwTreeNode* __fastcall GetLastChild(void);
	TwwTreeNode* __fastcall GetNext(void);
	TwwTreeNode* __fastcall GetNextChild(TwwTreeNode* Value);
	TwwTreeNode* __fastcall GetNextSibling(void);
	TwwTreeNode* __fastcall GetNextVisible(void);
	TwwTreeNode* __fastcall GetPrev(void);
	TwwTreeNode* __fastcall GetPrevChild(TwwTreeNode* Value);
	TwwTreeNode* __fastcall GetPrevSibling(void);
	TwwTreeNode* __fastcall GetPrevVisible(void);
	bool __fastcall HasAsParent(TwwTreeNode* Value);
	int __fastcall IndexOf(TwwTreeNode* Value);
	void __fastcall MakeVisible(void);
	virtual void __fastcall MoveTo(TwwTreeNode* Destination, TwwNodeAttachMode Mode);
	__property int AbsoluteIndex = {read=GetAbsoluteIndex, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property bool Cut = {read=GetCut, write=SetCut, nodefault};
	__property void * Data = {read=FData, write=SetData};
	__property bool Deleting = {read=FDeleting, nodefault};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property bool DropTarget = {read=GetDropTarget, write=SetDropTarget, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded, nodefault};
	__property HWND Handle = {read=GetHandle, nodefault};
	__property bool HasChildren = {read=GetChildren, write=SetChildren, nodefault};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property bool IsVisible = {read=IsNodeVisible, nodefault};
	__property TwwTreeNode* Item[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property HTREEITEM ItemId = {read=FItemId};
	__property int Level = {read=GetLevel, nodefault};
	__property int OverlayIndex = {read=FOverlayIndex, write=SetOverlayIndex, nodefault};
	__property TwwTreeNodes* Owner = {read=FOwner};
	__property TwwTreeNode* Parent = {read=GetParent};
	__property int SelectedIndex = {read=FSelectedIndex, write=SetSelectedIndex, nodefault};
	__property int StateIndex = {read=FStateIndex, write=SetStateIndex, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property System::UnicodeString StringData = {read=FStringData1, write=FStringData1};
	__property System::UnicodeString StringData2 = {read=FStringData2, write=FStringData2};
	__property TwwCustomTreeView* TreeView = {read=GetTreeView};
	__property bool Checked = {read=FChecked, write=SetChecked, nodefault};
	__property bool Grayed = {read=FGrayed, write=SetGrayed, nodefault};
	__property TwwTreeViewCheckboxType CheckboxType = {read=FCheckboxType, write=SetCheckboxType, nodefault};
	__property bool MultiSelected = {read=GetMultiSelected, write=SetMultiSelected, nodefault};
};


struct TwwNodeCache;
typedef TwwNodeCache *PwwNodeCache;

struct DECLSPEC_DRECORD TwwNodeCache
{
	
public:
	TwwTreeNode* CacheNode;
	int CacheIndex;
};


#pragma option push -b-
enum TwwStoreData { sdStoreText, sdStoreData1, sdStoreData2 };
#pragma option pop

class PASCALIMPLEMENTATION TwwTreeNodes : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	TwwTreeNode* operator[](int Index) { return Item[Index]; }
	
private:
	TwwCustomTreeView* FOwner;
	int FUpdateCount;
	TwwNodeCache FNodeCache;
	bool InDestroy;
	void __fastcall AddedNode(TwwTreeNode* Value);
	HWND __fastcall GetHandle(void);
	TwwTreeNode* __fastcall GetNodeFromIndex(int Index);
	void __fastcall ReadData(Classes::TStream* Stream);
	void __fastcall Repaint(TwwTreeNode* Node);
	void __fastcall WriteData(Classes::TStream* Stream);
	void __fastcall ClearCache(void);
	void __fastcall ReadStreamVersion(Classes::TReader* Reader);
	void __fastcall WriteStreamVersion(Classes::TWriter* Writer);
	
protected:
	HTREEITEM __fastcall AddItem(HTREEITEM Parent, HTREEITEM Target, const tagTVITEMW &Item, TwwAddMode AddMode);
	TwwTreeNode* __fastcall InternalAddObject(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr, TwwAddMode AddMode);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	tagTVITEMW __fastcall CreateItem(TwwTreeNode* Node);
	int __fastcall GetCount(void);
	void __fastcall SetItem(int Index, TwwTreeNode* Value);
	void __fastcall SetUpdateState(bool Updating);
	
public:
	__fastcall TwwTreeNodes(TwwCustomTreeView* AOwner);
	__fastcall virtual ~TwwTreeNodes(void);
	TwwTreeNode* __fastcall AddChildFirst(TwwTreeNode* Node, const System::UnicodeString S);
	TwwTreeNode* __fastcall AddChild(TwwTreeNode* Node, const System::UnicodeString S);
	TwwTreeNode* __fastcall AddChildObjectFirst(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr);
	TwwTreeNode* __fastcall AddChildObject(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr);
	TwwTreeNode* __fastcall AddFirst(TwwTreeNode* Node, const System::UnicodeString S);
	TwwTreeNode* __fastcall Add(TwwTreeNode* Node, const System::UnicodeString S);
	TwwTreeNode* __fastcall AddObjectFirst(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr);
	TwwTreeNode* __fastcall AddObject(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	void __fastcall BeginUpdate(void);
	void __fastcall Clear(void);
	void __fastcall Delete(TwwTreeNode* Node);
	void __fastcall EndUpdate(void);
	TwwTreeNode* __fastcall GetFirstNode(void);
	TwwTreeNode* __fastcall GetNode(HTREEITEM ItemId);
	TwwTreeNode* __fastcall Insert(TwwTreeNode* Node, const System::UnicodeString S);
	TwwTreeNode* __fastcall InsertObject(TwwTreeNode* Node, const System::UnicodeString S, void * Ptr);
	TwwTreeNode* __fastcall FindNode(System::UnicodeString SearchText, bool VisibleOnly);
	TwwTreeNode* __fastcall FindNodeInfo(System::UnicodeString SearchText, bool VisibleOnly, TwwStoreData StoreDataUsing = (TwwStoreData)(0x0));
	__property int Count = {read=GetCount, nodefault};
	__property HWND Handle = {read=GetHandle, nodefault};
	__property TwwTreeNode* Item[int Index] = {read=GetNodeFromIndex/*, default*/};
	__property TwwCustomTreeView* Owner = {read=FOwner};
};


class DELPHICLASS TwwTVMultiSelectAttributes;
class PASCALIMPLEMENTATION TwwTVMultiSelectAttributes : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	bool FAutoUnselect;
	int FMultiSelectLevel;
	bool FMultiSelectCheckbox;
	TwwCustomTreeView* TreeView;
	void __fastcall SetEnabled(bool val);
	void __fastcall SetMultiSelectLevel(int val);
	void __fastcall SetMultiSelectCheckBox(bool val);
	
public:
	__fastcall TwwTVMultiSelectAttributes(Classes::TComponent* Owner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property bool AutoUnselect = {read=FAutoUnselect, write=FAutoUnselect, default=1};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property int MultiSelectLevel = {read=FMultiSelectLevel, write=SetMultiSelectLevel, default=0};
	__property bool MultiSelectCheckbox = {read=FMultiSelectCheckbox, write=SetMultiSelectCheckBox, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwTVMultiSelectAttributes(void) { }
	
};


#pragma option push -b-
enum TwwHitTest { wwhtAbove, wwhtBelow, wwhtNowhere, wwhtOnItem, wwhtOnButton, wwhtOnIcon, wwhtOnIndent, wwhtOnLabel, wwhtOnRight, wwhtOnStateIcon, wwhtToLeft, wwhtToRight };
#pragma option pop

typedef System::Set<TwwHitTest, TwwHitTest::wwhtAbove, TwwHitTest::wwhtToRight>  TwwHitTests;

#pragma option push -b-
enum TwwSortType { wwtstNone, wwtstData, wwtstText, wwtstBoth };
#pragma option pop

class DELPHICLASS EwwTreeViewError;
class PASCALIMPLEMENTATION EwwTreeViewError : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EwwTreeViewError(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EwwTreeViewError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EwwTreeViewError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EwwTreeViewError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EwwTreeViewError(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EwwTreeViewError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EwwTreeViewError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EwwTreeViewError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EwwTreeViewError(void) { }
	
};


typedef void __fastcall (__closure *TwwTVChangingEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, bool &AllowChange);

typedef void __fastcall (__closure *TwwTVChangedEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node);

typedef void __fastcall (__closure *TwwTVEditingEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, bool &AllowEdit);

typedef void __fastcall (__closure *TwwTVEditedEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, System::UnicodeString &S);

typedef void __fastcall (__closure *TwwTVExpandingEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, bool &AllowExpansion);

typedef void __fastcall (__closure *TwwTVCollapsingEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, bool &AllowCollapse);

typedef void __fastcall (__closure *TwwTVExpandedEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node);

typedef void __fastcall (__closure *TwwTVCompareEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node1, TwwTreeNode* Node2, int Data, int &Compare);

typedef void __fastcall (__closure *TwwTVCustomDrawEvent)(TwwCustomTreeView* TreeView, const Types::TRect &ARect, bool &DefaultDraw);

typedef void __fastcall (__closure *TwwCalcNodeAttributesEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, TwwItemStates State);

#pragma option push -b-
enum TwwItemChangeAction { icaAdd, icaDelete, icaText, icaImageIndex };
#pragma option pop

typedef void __fastcall (__closure *TwwItemChangeEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node, TwwItemChangeAction Action, const System::Variant &NewValue);

typedef void __fastcall (__closure *TwwToggleCheckboxEvent)(TwwCustomTreeView* TreeView, TwwTreeNode* Node);

typedef TMetaClass* TwwTreeNodeClass;

class PASCALIMPLEMENTATION TwwCustomTreeView : public Controls::TWinControl
{
	typedef Controls::TWinControl inherited;
	
private:
	TwwItemChangeEvent FOnItemChange;
	bool FAutoExpand;
	Forms::TFormBorderStyle FBorderStyle;
	Controls::TControlCanvas* FCanvas;
	bool FCanvasChanged;
	void *FDefEditProc;
	bool FDragged;
	Controls::TDragImageList* FDragImage;
	TwwTreeNode* FDragNode;
	HWND FEditHandle;
	void *FEditInstance;
	Imglist::TChangeLink* FImageChangeLink;
	Imglist::TCustomImageList* FImages;
	TwwTreeNode* FLastDropTarget;
	bool FManualNotify;
	Classes::TMemoryStream* FMemStream;
	TwwTreeNode* FRClickNode;
	bool FRightClickSelects;
	bool FReadOnly;
	int FSaveIndex;
	int FSaveIndent;
	Classes::TStringList* FSaveItems;
	int FSaveTopIndex;
	TwwSortType FSortType;
	bool FStateChanging;
	Imglist::TCustomImageList* FStateImages;
	Imglist::TChangeLink* FStateChangeLink;
	bool FStreamExpandedNode;
	TwwTreeNodes* FTreeNodes;
	System::WideString FWideText;
	TwwTVEditingEvent FOnEditing;
	TwwTVEditedEvent FOnEdited;
	TwwTVExpandedEvent FOnExpanded;
	TwwTVExpandingEvent FOnExpanding;
	TwwTVExpandedEvent FOnCollapsed;
	TwwTVCollapsingEvent FOnCollapsing;
	TwwTVChangingEvent FOnChanging;
	TwwTVChangedEvent FOnChange;
	TwwTVCompareEvent FOnCompare;
	TwwTVExpandedEvent FOnDeletion;
	TwwTVExpandedEvent FOnGetImageIndex;
	TwwTVExpandedEvent FOnGetSelectedIndex;
	Graphics::TColor FLineColor;
	Graphics::TColor FInactiveFocusColor;
	TwwTreeMouseEvent FOnMouseDown;
	TwwTreeMouseEvent FOnMouseUp;
	TwwTreeMouseEvent FOnDblClick;
	TwwTreeMouseMoveEvent FOnMouseMove;
	TwwToggleCheckboxEvent FOnToggleCheckbox;
	TwwTreeNodeClass FNodeClass;
	TwwTVMultiSelectAttributes* FMultiSelectAttributes;
	TwwCalcNodeAttributesEvent FOnCalcNodeAttributes;
	int FBorderWidth;
	TwwTVDrawTextEvent FOnDrawText;
	TwwTreeViewOptions FOptions;
	bool FDisableThemes;
	Graphics::TBitmap* FPaintBitmap;
	int FIndent;
	TwwTreeNode* LastSelectedNode;
	TwwTreeNode* MouseNode;
	TwwTreeNode* LastMouseMoveNode;
	TwwHitTests LastMouseHitTest;
	TwwTreeNode* ClickedNode;
	bool Down;
	TwwTreeNode* EditNode;
	TwwTreeNode* BeforeMouseDownNode;
	int FStreamVersion;
	bool FUsePaintBuffering;
	void __fastcall DottedLine(const Types::TPoint &p1, const Types::TPoint &p2);
	void __fastcall CanvasChanged(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDrag(Controls::TCMDrag &Message);
	MESSAGE void __fastcall CNNotify(Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	void __fastcall EditWndProc(Messages::TMessage &Message);
	void __fastcall DoDragOver(Controls::TDragObject* Source, int X, int Y, bool CanDrop);
	int __fastcall GetChangeDelay(void);
	TwwTreeNode* __fastcall GetDropTarget(void);
	int __fastcall GetIndent(void);
	TwwTreeNode* __fastcall GetNodeFromItem(const tagTVITEMW &Item);
	TwwTreeNode* __fastcall GetSelection(void);
	TwwTreeNode* __fastcall GetTopItem(void);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetAutoExpand(bool Value);
	void __fastcall SetBorderStyle(Forms::TBorderStyle Value);
	void __fastcall SetChangeDelay(int Value);
	void __fastcall SetDropTarget(TwwTreeNode* Value);
	void __fastcall SetImageList(unsigned Value, int Flags);
	void __fastcall SetIndent(int Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetSelection(TwwTreeNode* Value);
	void __fastcall SetSortType(TwwSortType Value);
	void __fastcall SetStateImages(Imglist::TCustomImageList* Value);
	void __fastcall SeTwwTreeNodes(TwwTreeNodes* Value);
	void __fastcall SetTopItem(TwwTreeNode* Value);
	void __fastcall OnChangeTimer(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Messages::TWMNoParams &Message);
	bool __fastcall ValidMultiSelectLevel(int ALevel);
	bool __fastcall CheckboxNeeded(TwwTreeNode* Node);
	Types::TPoint __fastcall GetCenterPoint(const Types::TRect &ARect);
	void __fastcall SetOptions(TwwTreeViewOptions Value);
	void __fastcall SetLineColor(Graphics::TColor Value);
	void __fastcall SetInactiveFocusColor(Graphics::TColor Value);
	System::ShortInt __fastcall GetItemHeight(void);
	void __fastcall SetItemHeight(System::ShortInt Value);
	int __fastcall GetScrollTime(void);
	void __fastcall SetScrollTime(int Value);
	int __fastcall GetMultiSelectListCount(void);
	TwwTreeNode* __fastcall GetMultiSelectItem(int Index);
	void __fastcall HintTimerEvent(System::TObject* Sender);
	Controls::TControlCanvas* __fastcall GetPaintCanvas(void);
	
protected:
	Classes::TList* FMultiSelectList;
	bool SkipErase;
	bool SkipChangeMessages;
	bool InLoading;
	Extctrls::TTimer* FChangeTimer;
	int DisplayedItems;
	bool FMouseInControl;
	Controls::THintWindow* HintWindow;
	Extctrls::TTimer* HintTimer;
	int HintTimerCount;
	TwwTreeNode* LastHintNode;
	DYNAMIC bool __fastcall CanEdit(TwwTreeNode* Node);
	DYNAMIC bool __fastcall CanChange(TwwTreeNode* Node);
	DYNAMIC bool __fastcall CanCollapse(TwwTreeNode* Node);
	DYNAMIC bool __fastcall CanExpand(TwwTreeNode* Node);
	DYNAMIC void __fastcall Change(TwwTreeNode* Node);
	DYNAMIC void __fastcall Collapse(TwwTreeNode* Node);
	virtual TwwTreeNode* __fastcall CreateNode(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall Delete(TwwTreeNode* Node);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall Edit(const tagTVITEMW &Item);
	DYNAMIC void __fastcall Expand(TwwTreeNode* Node);
	virtual Controls::TDragImageList* __fastcall GetDragImages(void);
	virtual void __fastcall GetImageIndex(TwwTreeNode* Node);
	virtual void __fastcall GetSelectedIndex(TwwTreeNode* Node);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall SetDragMode(Controls::TDragMode Value);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	__property bool AutoExpand = {read=FAutoExpand, write=SetAutoExpand, default=0};
	__property Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int ChangeDelay = {read=GetChangeDelay, write=SetChangeDelay, default=0};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property bool RightClickSelects = {read=FRightClickSelects, write=FRightClickSelects, default=0};
	__property TwwSortType SortType = {read=FSortType, write=SetSortType, default=0};
	__property Imglist::TCustomImageList* StateImages = {read=FStateImages, write=SetStateImages};
	__property bool StreamExpandedNode = {read=FStreamExpandedNode, write=FStreamExpandedNode, default=0};
	__property TwwTVEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TwwTVEditedEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TwwTVExpandingEvent OnExpanding = {read=FOnExpanding, write=FOnExpanding};
	__property TwwTVExpandedEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TwwTVCollapsingEvent OnCollapsing = {read=FOnCollapsing, write=FOnCollapsing};
	__property TwwTVExpandedEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TwwTVChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TwwTVChangedEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TwwTVCompareEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TwwTVExpandedEvent OnDeletion = {read=FOnDeletion, write=FOnDeletion};
	__property TwwTVExpandedEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TwwTVExpandedEvent OnGetSelectedIndex = {read=FOnGetSelectedIndex, write=FOnGetSelectedIndex};
	virtual void __fastcall MultiSelectNode(TwwTreeNode* Node, bool Select, bool redraw);
	virtual bool __fastcall IsVisible(TwwTreeNode* Node, bool PartialOK);
	Types::TRect __fastcall ItemRect(TwwTreeNode* Node, bool LabelOnly);
	void __fastcall PaintButton(TwwTreeNode* Node, const Types::TPoint &pt, int size);
	void __fastcall PaintLines(TwwTreeNode* Node);
	void __fastcall PaintImage(TwwTreeNode* Node, TwwItemStates State);
	Types::TRect __fastcall LevelRect(TwwTreeNode* ANode);
	virtual void __fastcall DoDrawText(TwwCustomTreeView* TreeView, TwwTreeNode* Node, const Types::TRect &ARect, TwwItemStates AItemState, bool &DefaultDrawing);
	virtual void __fastcall Compare(TwwTreeNode* Node1, TwwTreeNode* Node2, int lParam, int &Result);
	virtual void __fastcall CalcNodeAttributes(TwwTreeNode* Node, TwwItemStates AItemState);
	virtual System::UnicodeString __fastcall GetDisplayText(TwwTreeNode* Node);
	void __fastcall LoadCanvasDefaults(TwwTreeNode* Node, TwwItemStates AItemState);
	virtual bool __fastcall ProcessKeyPress(System::WideChar Key, Classes::TShiftState shift);
	virtual bool __fastcall IsRowSelect(void);
	virtual void __fastcall MouseLoop(int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	bool __fastcall UseImages(TwwTreeNode* Node);
	bool __fastcall UseStateImages(TwwTreeNode* Node);
	virtual void __fastcall BeginPainting(void);
	virtual void __fastcall EndPainting(void);
	virtual void __fastcall BeginItemPainting(TwwTreeNode* Node, const Types::TRect &ARect, TwwItemStates AItemState);
	virtual void __fastcall EndItemPainting(TwwTreeNode* Node, const Types::TRect &ARect, TwwItemStates AItemState);
	virtual void __fastcall PaintItem(TwwTreeNode* Node);
	void __fastcall ClearStateImageIndexes(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoToggleCheckbox(TwwTreeNode* Node);
	virtual void __fastcall FreeHintWindow(void);
	virtual Controls::THintWindow* __fastcall CreateHintWindow(TwwTreeNode* Node);
	void __fastcall UnselectAllNodes(TwwTreeNode* IgnoreNode);
	void __fastcall InvalidateNoErase(void);
	__property System::ShortInt ItemHeight = {read=GetItemHeight, write=SetItemHeight, nodefault};
	__property TwwCalcNodeAttributesEvent OnCalcNodeAttributes = {read=FOnCalcNodeAttributes, write=FOnCalcNodeAttributes};
	__property int ScrollTime = {read=GetScrollTime, write=SetScrollTime, nodefault};
	__property TwwTreeNodeClass NodeClass = {read=FNodeClass, write=FNodeClass};
	
public:
	System::Variant Patch;
	void __fastcall ResetStateImages(void);
	__property int StreamVersion = {read=FStreamVersion, nodefault};
	TwwTreeNode* __fastcall GetFirstSibling(TwwTreeNode* Node);
	void __fastcall InvalidateNode(TwwTreeNode* Node);
	bool __fastcall MultiSelectCheckboxNeeded(TwwTreeNode* Node);
	void __fastcall UnselectAll(void);
	__fastcall virtual TwwCustomTreeView(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomTreeView(void);
	bool __fastcall AlphaSort(void);
	bool __fastcall CustomSort(PFNTVCOMPARE SortProc, int Data);
	void __fastcall FullCollapse(void);
	void __fastcall FullExpand(void);
	TwwHitTests __fastcall GetHitTestInfoAt(int X, int Y);
	TwwTreeNode* __fastcall GetNodeAt(int X, int Y);
	bool __fastcall IsEditing(void);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromStream(Classes::TStream* Stream);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(Classes::TStream* Stream);
	__property Controls::TControlCanvas* Canvas = {read=GetPaintCanvas};
	__property TwwTreeNode* DropTarget = {read=GetDropTarget, write=SetDropTarget};
	__property TwwTreeNode* Selected = {read=GetSelection, write=SetSelection};
	__property TwwTreeNode* TopItem = {read=GetTopItem, write=SetTopItem};
	__property TwwTreeNode* RightClickNode = {read=FRClickNode};
	__property TwwTreeViewOptions Options = {read=FOptions, write=SetOptions, default=1257};
	__property TwwTreeNodes* Items = {read=FTreeNodes, write=SeTwwTreeNodes};
	__property TwwTVMultiSelectAttributes* MultiSelectAttributes = {read=FMultiSelectAttributes, write=FMultiSelectAttributes};
	__property TwwTVDrawTextEvent OnDrawText = {read=FOnDrawText, write=FOnDrawText};
	__property TwwItemChangeEvent OnItemChange = {read=FOnItemChange, write=FOnItemChange};
	__property TwwTreeNode* MultiSelectList[int Index] = {read=GetMultiSelectItem};
	__property int MultiSelectListCount = {read=GetMultiSelectListCount, nodefault};
	__property Graphics::TColor LineColor = {read=FLineColor, write=SetLineColor, default=-16777200};
	__property Graphics::TColor InactiveFocusColor = {read=FInactiveFocusColor, write=SetInactiveFocusColor, default=-16777201};
	__property TwwTreeMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property TwwTreeMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property TwwTreeMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property TwwTreeMouseEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property TwwToggleCheckboxEvent OnToggleCheckbox = {read=FOnToggleCheckbox, write=FOnToggleCheckbox};
	__property bool UsePaintBuffering = {read=FUsePaintBuffering, write=FUsePaintBuffering, default=0};
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomTreeView(HWND ParentWindow) : Controls::TWinControl(ParentWindow) { }
	
};


class DELPHICLASS TwwTreeView;
class PASCALIMPLEMENTATION TwwTreeView : public TwwCustomTreeView
{
	typedef TwwCustomTreeView inherited;
	
__published:
	__property DisableThemes = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoExpand = {default=0};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property ChangeDelay = {default=0};
	__property Color = {default=-16777211};
	__property LineColor = {default=-16777200};
	__property InactiveFocusColor = {default=-16777201};
	__property Ctl3D;
	__property Constraints;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Images;
	__property Indent;
	__property MultiSelectAttributes;
	__property Options = {default=1257};
	__property Items;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property UsePaintBuffering = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RightClickSelects = {default=0};
	__property ShowHint;
	__property SortType = {default=0};
	__property StateImages;
	__property StreamExpandedNode = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnCollapsing;
	__property OnCollapsed;
	__property OnCompare;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpanding;
	__property OnExpanded;
	__property OnGetImageIndex;
	__property OnGetSelectedIndex;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnToggleCheckbox;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnCalcNodeAttributes;
	__property OnDrawText;
	__property OnGesture;
public:
	/* TwwCustomTreeView.Create */ inline __fastcall virtual TwwTreeView(Classes::TComponent* AOwner) : TwwCustomTreeView(AOwner) { }
	/* TwwCustomTreeView.Destroy */ inline __fastcall virtual ~TwwTreeView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwTreeView(HWND ParentWindow) : TwwCustomTreeView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall wwTreeViewError(const System::UnicodeString Msg);

}	/* namespace Wwtreeview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwtreeview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwtreeviewHPP
