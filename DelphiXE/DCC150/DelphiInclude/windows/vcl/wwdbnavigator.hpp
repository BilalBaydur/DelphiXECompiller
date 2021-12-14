// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwDBNavigator.pas' rev: 22.00

#ifndef WwdbnavigatorHPP
#define WwdbnavigatorHPP

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
#include <wwDialog.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <DBConsts.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwSpeedButton.hpp>	// Pascal unit
#include <wwCollection.hpp>	// Pascal unit
#include <wwclearpanel.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbnavigator
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwNavDataLink;
class DELPHICLASS TwwDBNavigator;
class PASCALIMPLEMENTATION TwwNavDataLink : public Db::TDataLink
{
	typedef Db::TDataLink inherited;
	
private:
	TwwDBNavigator* FNavigator;
	
protected:
	virtual void __fastcall EditingChanged(void);
	virtual void __fastcall DataSetChanged(void);
	virtual void __fastcall ActiveChanged(void);
	
public:
	__fastcall TwwNavDataLink(TwwDBNavigator* ANav);
	__fastcall virtual ~TwwNavDataLink(void);
};


#pragma option push -b-
enum TwwNavButtonStyle { nbsFirst, nbsPrior, nbsNext, nbsLast, nbsInsert, nbsDelete, nbsEdit, nbsPost, nbsCancel, nbsRefresh, nbsPriorPage, nbsNextPage, nbsSaveBookmark, nbsRestoreBookmark, nbsFilterDialog, nbsRecordViewDialog, nbsLocateDialog, nbsSearchDialog, nbsCustom };
#pragma option pop

typedef System::Set<TwwNavButtonStyle, TwwNavButtonStyle::nbsFirst, TwwNavButtonStyle::nbsCustom>  TwwNavButtonStyles;

typedef TwwNavButtonStyle TwwNavButtonNavStyleEx;

typedef TwwNavButtonStyle TwwNavButtonNavStyle;

typedef TwwNavButtonStyle TwwNavButtonDlgStyle;

typedef System::Set<TwwNavButtonStyle, TwwNavButtonStyle::nbsFirst, TwwNavButtonStyle::nbsCustom>  TwwNavButtonNavStylesEx;

#pragma option push -b-
enum TwwUpdateCause { usDataChanged, usEditingChanged, usActiveChanged, usOther };
#pragma option pop

class DELPHICLASS TwwNavButton;
typedef void __fastcall (__closure *TwwUpdateStateEvent)(TwwDBNavigator* Navigator, TwwNavButton* Button, TwwUpdateCause Cause);

typedef void __fastcall (__closure *TwwCustomDialogEvent)(Wwdialog::TwwCustomDialog* Dialog);

class DELPHICLASS TwwNavButtons;
class PASCALIMPLEMENTATION TwwNavButton : public Wwspeedbutton::TwwSpeedButton
{
	typedef Wwspeedbutton::TwwSpeedButton inherited;
	
private:
	Wwcollection::TwwUpdateNameEvent FOnUpdateName;
	Wwcollection::TwwSelectionMethod FSelectionMethod;
	TwwNavButtons* FNavButtons;
	Extctrls::TTimer* FTimer;
	bool FLineBreak;
	Wwdialog::TwwCustomDialog* FDialog;
	TwwNavButtonStyle FStyle;
	Classes::TNotifyEvent FOnRowChanged;
	TwwUpdateStateEvent FOnUpdateState;
	TwwCustomDialogEvent FOnAfterCreateDialog;
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual int __fastcall GetImageIndex(void);
	virtual int __fastcall GetIndex(void);
	virtual TwwNavButtons* __fastcall GetNavButtons(void);
	virtual TwwDBNavigator* __fastcall GetNavigator(void);
	virtual void __fastcall SetDialog(Wwdialog::TwwCustomDialog* Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetIndex(int Value);
	virtual void __fastcall SetLineBreak(bool Value);
	virtual void __fastcall SetName(const Classes::TComponentName NewName);
	virtual void __fastcall SetParent(Controls::TWinControl* Value);
	virtual void __fastcall SetStyle(TwwNavButtonStyle Value);
	virtual System::UnicodeString __fastcall GetDefaultHint(void);
	Wwdialog::TwwCustomDialog* __fastcall GetDialog(Db::TDataSet* DataSet);
	virtual void __fastcall CancelTimer(void);
	virtual void __fastcall CreateTimer(void);
	virtual void __fastcall TimerEvent(System::TObject* Sender);
	virtual void __fastcall UpdateName(void);
	virtual void __fastcall UpdateGlyph(void);
	virtual void __fastcall UpdateState(TwwUpdateCause Cause);
	__property TwwNavButtons* NavButtons = {read=GetNavButtons};
	
public:
	__fastcall virtual TwwNavButton(Classes::TComponent* AOwner);
	DYNAMIC void __fastcall Click(void);
	virtual bool __fastcall IsVisible(void);
	__property TwwDBNavigator* Navigator = {read=GetNavigator};
	Wwcollection::_di_IwwCollection __fastcall GetCollection(void);
	System::UnicodeString __fastcall GetDisplayName(void);
	Classes::TPersistent* __fastcall GetInstance(void);
	void __fastcall SetOnUpdateName(Wwcollection::TwwUpdateNameEvent Value);
	void __fastcall SetSelectionMethod(Wwcollection::TwwSelectionMethod Value);
	virtual void __fastcall PaintTransparentBackground(void);
	
__published:
	__property Wwdialog::TwwCustomDialog* Dialog = {read=FDialog, write=SetDialog};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool LineBreak = {read=FLineBreak, write=SetLineBreak, default=0};
	__property TwwNavButtonStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property Visible = {default=1};
	__property TwwCustomDialogEvent OnAfterCreateDialog = {read=FOnAfterCreateDialog, write=FOnAfterCreateDialog};
	__property Classes::TNotifyEvent OnRowChanged = {read=FOnRowChanged, write=FOnRowChanged};
	__property TwwUpdateStateEvent OnUpdateState = {read=FOnUpdateState, write=FOnUpdateState};
public:
	/* TwwSpeedButton.Destroy */ inline __fastcall virtual ~TwwNavButton(void) { }
	
private:
	void *__IwwCollectionItem;	/* Wwcollection::IwwCollectionItem */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wwcollection::_di_IwwCollectionItem()
	{
		Wwcollection::_di_IwwCollectionItem intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IwwCollectionItem*(void) { return (IwwCollectionItem*)&__IwwCollectionItem; }
	#endif
	
};


class PASCALIMPLEMENTATION TwwNavButtons : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	TwwNavButton* operator[](int Index) { return Items[Index]; }
	
private:
	Controls::TControl* FDesigner;
	TwwDBNavigator* FNavigator;
	int FUpdateLock;
	
protected:
	virtual void __fastcall AddButton(const TwwNavButton* Button);
	virtual void __fastcall RemoveButton(const TwwNavButton* Button);
	virtual void __fastcall BeginUpdate(void);
	virtual void __fastcall EndUpdate(void);
	virtual TwwNavButton* __fastcall BottommostButton(void);
	virtual TwwNavButton* __fastcall FindButtonAtPos(TwwNavButton* IgnoreButton, int x, int y);
	virtual bool __fastcall IgnoreButton(TwwNavButton* Button);
	virtual TwwNavButton* __fastcall RightmostButton(void);
	void __fastcall MakeButtonsVisible(void);
	virtual void __fastcall MakeVisible(TwwNavButtonStyle AStyle, bool CanCreate);
	virtual void __fastcall MakeInvisible(TwwNavButtonStyle AStyle);
	virtual int __fastcall GetCount(void);
	virtual TwwNavButton* __fastcall GetItems(int Index);
	virtual TwwDBNavigator* __fastcall GetNavigator(void);
	virtual TwwNavButton* __fastcall GetVisibleButton(int Index);
	virtual int __fastcall GetVisibleCount(void);
	
public:
	__fastcall TwwNavButtons(TwwDBNavigator* ANav);
	__fastcall virtual ~TwwNavButtons(void);
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef(void);
	int __stdcall _Release(void);
	Wwcollection::_di_IwwCollectionItem __fastcall IwwCollection_Add(void);
	Wwcollection::_di_IwwCollectionItem __fastcall GetItem(int Index);
	void __fastcall SetDesigner(Controls::TControl* Value);
	virtual TwwNavButton* __fastcall Add(TwwNavButtonStyle AStyle = (TwwNavButtonStyle)(0x12), Classes::TComponent* AComponent = (Classes::TComponent*)(0x0));
	virtual void __fastcall AddInfoPowerDialogs(void);
	virtual void __fastcall Clear(void);
	virtual void __fastcall CreateDefaultButtons(void);
	virtual void __fastcall UpdateButtonsRect(void);
	virtual void __fastcall UpdateButtonsPos(void);
	virtual void __fastcall UpdateButtonsState(TwwUpdateCause Cause);
	__property int Count = {read=GetCount, nodefault};
	__property TwwDBNavigator* Navigator = {read=GetNavigator};
	__property TwwNavButton* Items[int Index] = {read=GetItems/*, default*/};
	__property int UpdateLock = {read=FUpdateLock, nodefault};
	__property TwwNavButton* VisibleButtons[int Index] = {read=GetVisibleButton};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
private:
	void *__IwwNavButtons;	/* Wwcollection::IwwNavButtons */
	void *__IwwCollection;	/* Wwcollection::IwwCollection */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wwcollection::_di_IwwNavButtons()
	{
		Wwcollection::_di_IwwNavButtons intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IwwNavButtons*(void) { return (IwwNavButtons*)&__IwwNavButtons; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wwcollection::_di_IwwCollection()
	{
		Wwcollection::_di_IwwCollection intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IwwCollection*(void) { return (IwwCollection*)&__IwwCollection; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IInterface*(void) { return (IInterface*)&__IwwNavButtons; }
	#endif
	
};


#pragma option push -b-
enum TwwNavOption { noConfirmDelete, noUseInternationalText };
#pragma option pop

typedef System::Set<TwwNavOption, TwwNavOption::noConfirmDelete, TwwNavOption::noUseInternationalText>  TwwNavOptions;

#pragma option push -b-
enum TwwNavAutoSizeStyle { asSizeNavigator, asSizeNavButtons, asNone };
#pragma option pop

#pragma option push -b-
enum TwwNavLayout { nlHorizontal, nlVertical };
#pragma option pop

class DELPHICLASS TwwNavRepeatInterval;
class PASCALIMPLEMENTATION TwwNavRepeatInterval : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FInitialDelay;
	int FRepeatInterval;
	
public:
	__fastcall TwwNavRepeatInterval(void);
	
__published:
	__property int InitialDelay = {read=FInitialDelay, write=FInitialDelay, nodefault};
	__property int Interval = {read=FRepeatInterval, write=FRepeatInterval, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwNavRepeatInterval(void) { }
	
};


class PASCALIMPLEMENTATION TwwDBNavigator : public Wwclearpanel::TwwCustomTransparentPanel
{
	typedef Wwclearpanel::TwwCustomTransparentPanel inherited;
	
private:
	TwwNavButtons* FButtons;
	Db::TDataLink* FDataLink;
	Classes::TList* FBookmarks;
	TwwNavAutoSizeStyle FAutosizeStyle;
	Db::TDataSource* FDataSource;
	bool FFlat;
	Controls::TImageList* FImageList;
	TwwNavLayout FLayout;
	int FMoveBy;
	TwwNavOptions FOptions;
	TwwNavRepeatInterval* FRepeatInterval;
	bool InPaint;
	bool FTransparentClearsBackground;
	bool FDisableThemes;
	MESSAGE void __fastcall CMControlChange(Controls::TCMControlChange &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Controls::TCMControlListChange &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall ControlListChange(const Controls::TControl* Control, const bool Inserting);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall AlignControls(Controls::TControl* Control, Types::TRect &Rect);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual void __fastcall DataChanged(void);
	virtual void __fastcall EditingChanged(void);
	virtual void __fastcall ActiveChanged(void);
	virtual bool __fastcall GetShowHint(void);
	virtual TwwNavButtonNavStylesEx __fastcall GetVisibleButtons(void);
	HIDESBASE virtual void __fastcall SetAlignment(TwwNavLayout Value);
	virtual void __fastcall SetAutosizeStyle(TwwNavAutoSizeStyle Value);
	virtual void __fastcall SetDataSource(Db::TDataSource* Value);
	virtual void __fastcall SetFlat(bool Value);
	virtual void __fastcall SetImageList(Controls::TImageList* Value);
	virtual void __fastcall SetMoveBy(int Value);
	virtual void __fastcall SetName(const Classes::TComponentName NewName);
	virtual void __fastcall SetOptions(TwwNavOptions Value);
	HIDESBASE virtual void __fastcall SetShowHint(bool Value);
	virtual void __fastcall SetVisibleButtons(TwwNavButtonNavStylesEx Value);
	virtual int __fastcall CalcBorderWidth(void);
	virtual int __fastcall CalcWidth(void);
	virtual Db::TDataSet* __fastcall GetDataSet(bool RaiseException);
	System::DynamicArray<System::Byte> __fastcall GetBookmark(Db::TDataSet* DataSet, bool GetNew);
	void __fastcall AdjustButtonsSize(Controls::TControl* Control);
	void __fastcall FreeBookmark(Db::TDataSet* DataSet);
	virtual void __fastcall UpdateAutosize(void);
	
public:
	System::Variant Patch;
	__fastcall virtual TwwDBNavigator(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBNavigator(void);
	virtual void __fastcall SetDataSourceFromComponent(Classes::TComponent* Component, bool AllowNil);
	__property TwwNavButtonNavStylesEx VisibleButtons = {read=GetVisibleButtons, write=SetVisibleButtons, nodefault};
	
__published:
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
	__property TwwNavAutoSizeStyle AutosizeStyle = {read=FAutosizeStyle, write=SetAutosizeStyle, default=0};
	__property TwwNavButtons* Buttons = {read=FButtons, stored=false};
	__property Db::TDataSource* DataSource = {read=FDataSource, write=SetDataSource};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property Controls::TImageList* ImageList = {read=FImageList, write=SetImageList};
	__property TwwNavLayout Layout = {read=FLayout, write=SetAlignment, default=0};
	__property int MoveBy = {read=FMoveBy, write=SetMoveBy, default=10};
	__property TwwNavOptions Options = {read=FOptions, write=SetOptions, default=1};
	__property bool ShowHint = {read=GetShowHint, write=SetShowHint, default=0};
	__property TwwNavRepeatInterval* RepeatInterval = {read=FRepeatInterval, write=FRepeatInterval};
	__property bool TransparentClearsBackground = {read=FTransparentClearsBackground, write=FTransparentClearsBackground, default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property Align = {default=0};
	__property BevelInner = {default=0};
	__property BevelOuter = {default=0};
	__property Color = {default=-16777201};
	__property Enabled = {default=1};
	__property Font;
	__property ParentShowHint = {default=1};
	__property Visible = {default=1};
	__property Transparent = {default=0};
	__property OnResize;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBNavigator(HWND ParentWindow) : Wwclearpanel::TwwCustomTransparentPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt WW_NAV_DEFAULT_MOVEBY = 0xa;
#define swwControlNotAllowed L"TwwDBNavigator only accepts controls derived from TwwNavBu"\
	L"tton"
#define swwNoDataSource L"Error, DataSource not assigned"
#define swwParentNotNav L"Parent of TwwNavButton must be TwwDBNavigator"
#define swwParentNotDefined L"Parent propety of TwwNavButton not defined"
#define swwButtonNotInList L"Button parameter of RetrieveIndex not in Buttons list"
#define swwIndexOutOfRange L"Index of Buttons[] out of range"
#define swwOwnerRequired L"Owner cannot be nil"
#define swwBookmarkInvalid L"Cannot read or set property Bookmark because the Bookmark "\
	L"is invalid."
#define swwConfirmButtonAdd L"Add a button to %s for %s"
#define swwVisibleIndexOutRange L"Index of VisibleButtons[] out of range"
extern PACKAGE Controls::TImageList* wwNavButtonGlyphs;

}	/* namespace Wwdbnavigator */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbnavigator;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbnavigatorHPP
