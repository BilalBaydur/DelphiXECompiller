// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrcdvw.pas' rev: 22.00

#ifndef WwrcdvwHPP
#define WwrcdvwHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwdatsrc.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <Wwmemo.hpp>	// Pascal unit
#include <wwDBNavigator.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <wwDialog.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <wwradiogroup.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrcdvw
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwRecordViewForm;
class PASCALIMPLEMENTATION TwwRecordViewForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	void __fastcall FormDeactivate(System::TObject* Sender);
	void __fastcall FormActivate(System::TObject* Sender);
	
private:
	bool Deactivated;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	
public:
	Classes::TComponent* DlgComponent;
	Extctrls::TPanel* RecordPanel;
	Extctrls::TPanel* NavigatorPanel;
	Extctrls::TPanel* ButtonPanel;
	Wwdbnavigator::TwwDBNavigator* Navigator;
	Forms::TScrollBox* ScrollBox;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwRecordViewForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwRecordViewForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwRecordViewForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRecordViewForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


#pragma option push -b-
enum TwwRecordViewStyle { rvsVertical, rvsHorizontal };
#pragma option pop

#pragma option push -b-
enum TwwRecordViewOption { rvoHideReadOnly, rvoHideCalculated, rvoHideNavigator, rvoUseCustomControls, rvoShortenEditBox, rvoModalForm, rvoStayOnTopForm, rvoConsistentEditWidth, rvoEnterToTab, rvoConfirmCancel, rvoCloseIsCancel, rvoMaximizeMemoWidth, rvoSetControlMinWidth, rvoUseDateTimePicker, rvoLabelsBeneathControl };
#pragma option pop

typedef System::Set<TwwRecordViewOption, TwwRecordViewOption::rvoHideReadOnly, TwwRecordViewOption::rvoLabelsBeneathControl>  TwwRecordViewOptions;

#pragma option push -b-
enum TwwRecordViewControlOption { rvcTransparentLabels, rvcTransparentButtons, rvcFlatButtons };
#pragma option pop

typedef System::Set<TwwRecordViewControlOption, TwwRecordViewControlOption::rvcTransparentLabels, TwwRecordViewControlOption::rvcFlatButtons>  TwwRecordViewControlOptions;

#pragma option push -b-
enum TwwRecordViewOKCancelOption { rvokShowOKCancel, rvokAutoPostRec, rvokAutoCancelRec };
#pragma option pop

typedef System::Set<TwwRecordViewOKCancelOption, TwwRecordViewOKCancelOption::rvokShowOKCancel, TwwRecordViewOKCancelOption::rvokAutoCancelRec>  TwwRecordViewOKCancelOptions;

#pragma option push -b-
enum TwwCloseAction { rvcOK, rvcCancel, rvcControlMenuClose };
#pragma option pop

typedef System::Set<TwwCloseAction, TwwCloseAction::rvcOK, TwwCloseAction::rvcControlMenuClose>  TwwCloseActions;

typedef void __fastcall (__closure *TwwCancelEvent)(Forms::TForm* Form, bool &CanClose);

typedef void __fastcall (__closure *TwwOnBeforeCreateControlEvent)(TwwRecordViewForm* Form, Db::TField* curField, bool &Accept);

typedef void __fastcall (__closure *TwwOnAfterCreateControlEvent)(TwwRecordViewForm* Form, Db::TField* curField, Controls::TControl* Control);

typedef void __fastcall (__closure *TwwOnSetControlEffectsEvent)(TwwRecordViewForm* Form, Db::TField* curField, Controls::TControl* Control, Wwframe::TwwEditFrame* Frame, Wwframe::TwwButtonEffects* ButtonEffects);

typedef void __fastcall (__closure *TwwOnInitFormEvent)(TwwRecordViewForm* Form);

typedef void __fastcall (__closure *TwwRecordCustomPaintEvent)(Forms::TScrollBox* Sender, Graphics::TCanvas* Canvas);

class DELPHICLASS TwwMargin;
class PASCALIMPLEMENTATION TwwMargin : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FBottomOffset;
	int FTopOffset;
	int FLeftOffset;
	int FRightOffset;
	void __fastcall SetLeftOffset(int val);
	void __fastcall SetRightOffset(int val);
	void __fastcall SetTopOffset(int val);
	void __fastcall SetBottomOffset(int val);
	
public:
	Classes::TComponent* Owner;
	
__published:
	__property int BottomOffset = {read=FBottomOffset, write=SetBottomOffset, default=5};
	__property int TopOffset = {read=FTopOffset, write=SetTopOffset, default=5};
	__property int LeftOffset = {read=FLeftOffset, write=SetLeftOffset, default=5};
	__property int RightOffset = {read=FRightOffset, write=SetRightOffset, default=5};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwMargin(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwMargin(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwVertEditSpacing;
class PASCALIMPLEMENTATION TwwVertEditSpacing : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FBetweenLabelEdit;
	int FBetweenRow;
	void __fastcall SetBetweenLabelEdit(int val);
	void __fastcall SetBetweenRow(int val);
	
public:
	Classes::TComponent* Owner;
	
__published:
	__property int BetweenLabelEdit = {read=FBetweenLabelEdit, write=SetBetweenLabelEdit, default=5};
	__property int BetweenRow = {read=FBetweenRow, write=SetBetweenRow, default=2};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwVertEditSpacing(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwVertEditSpacing(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwHorzEditSpacing;
class PASCALIMPLEMENTATION TwwHorzEditSpacing : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FBetweenLabelEdit;
	int FBetweenEditsInRow;
	int FBetweenRow;
	int FLabelIndent;
	void __fastcall SetBetweenEditsInRow(int val);
	void __fastcall SetBetweenLabelEdit(int val);
	void __fastcall SetBetweenRow(int val);
	void __fastcall SetLabelIndent(int val);
	
public:
	Classes::TComponent* Owner;
	
__published:
	__property int BetweenEditsInRow = {read=FBetweenEditsInRow, write=SetBetweenEditsInRow, default=5};
	__property int BetweenLabelEdit = {read=FBetweenLabelEdit, write=SetBetweenLabelEdit, default=1};
	__property int BetweenRow = {read=FBetweenRow, write=SetBetweenRow, default=2};
	__property int LabelIndent = {read=FLabelIndent, write=SetLabelIndent, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwHorzEditSpacing(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwHorzEditSpacing(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwEditSpacing;
class PASCALIMPLEMENTATION TwwEditSpacing : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TwwHorzEditSpacing* FHorizontalView;
	TwwVertEditSpacing* FVerticalView;
	
public:
	__fastcall virtual ~TwwEditSpacing(void);
	
__published:
	__property TwwHorzEditSpacing* HorizontalView = {read=FHorizontalView, write=FHorizontalView};
	__property TwwVertEditSpacing* VerticalView = {read=FVerticalView, write=FVerticalView};
public:
	/* TObject.Create */ inline __fastcall TwwEditSpacing(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwRecordViewDialog;
class PASCALIMPLEMENTATION TwwRecordViewDialog : public Wwdialog::TwwCustomDialog
{
	typedef Wwdialog::TwwCustomDialog inherited;
	
private:
	Wwintl::TwwController* FController;
	Controls::TWinControl* FOldNavParent;
	Classes::TStrings* FSelected;
	bool FUseTFields;
	Classes::TList* FControlList;
	Classes::TList* FLabelList;
	TwwEditSpacing* FEditSpacing;
	TwwMargin* FMargin;
	Wwtypes::TwwFormPosition* FFormPosition;
	Forms::TFormBorderStyle FBorderStyle;
	Db::TDataLink* FDataLink;
	TwwRecordViewOptions FOptions;
	TwwRecordViewControlOptions FControlOptions;
	TwwRecordViewOKCancelOptions FOKCancelOptions;
	Graphics::TFont* FFont;
	Graphics::TFont* FLabelFont;
	TwwOnBeforeCreateControlEvent FOnBeforeCreateControl;
	TwwOnAfterCreateControlEvent FOnAfterCreateControl;
	TwwOnSetControlEffectsEvent FOnSetControlEffects;
	TwwOnInitFormEvent FOnInitDialog;
	TwwOnInitFormEvent FOnCloseDialog;
	TwwOnInitFormEvent FOnResizeDialog;
	System::UnicodeString FCaption;
	Graphics::TColor FReadOnlyColor;
	TwwRecordViewStyle FStyle;
	Menus::TMainMenu* FMenu;
	Wwdbnavigator::TwwNavButtonNavStylesEx FNavigatorButtons;
	bool FNavigatorFlat;
	Wwdbnavigator::TwwDBNavigator* FNavigator;
	TwwCancelEvent FOnCancelWarning;
	int FLinesPerMemoControl;
	int EditStartOffset;
	int FormWidth;
	int FormHeight;
	TwwCloseAction CloseAction;
	Classes::TList* CustomControlList;
	Classes::TStrings* FControlType;
	bool FControlInfoInDataset;
	Classes::TStrings* FPictureMasks;
	bool FPictureMaskFromDataSet;
	Wwframe::TwwEditFrame* FDefaultEditFrame;
	int FixedEditWidthConst;
	Stdctrls::TLabel* CurLabel;
	void __fastcall SetController(Wwintl::TwwController* Value);
	void __fastcall SetNavParent(Controls::TWinControl* NewParent, bool SaveOld);
	void __fastcall SetDataSource(Db::TDataSource* value);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetLabelFont(Graphics::TFont* val);
	void __fastcall SetFont(Graphics::TFont* val);
	void __fastcall SetNavigator(Wwdbnavigator::TwwDBNavigator* Value);
	bool __fastcall ShowField(Db::TField* field, bool curFieldReadOnly);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall CreateMainMenu(TwwRecordViewForm* Form, Menus::TMainMenu* mm);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall AddCustomControl(Controls::TWinControl* CustomEdit);
	bool __fastcall IsModified(void);
	bool __fastcall IsCheckBox(Db::TField* curField, System::UnicodeString &checkboxOn, System::UnicodeString &checkboxOff);
	void __fastcall SetPictureMasks(Classes::TStrings* val);
	void __fastcall SetControlType(Classes::TStrings* val);
	void __fastcall InitPictureMask(Controls::TWinControl* EditControl, Db::TField* curField);
	
protected:
	virtual bool __fastcall IsSingleLineEditControl(Controls::TWinControl* EditControl);
	virtual void __fastcall DoOnBeforeCreateControl(TwwRecordViewForm* form, Db::TField* curField, bool &accept);
	virtual void __fastcall DoOnAfterCreateControl(TwwRecordViewForm* form, Db::TField* curField, Controls::TControl* Control);
	virtual void __fastcall DoSetControlEffects(TwwRecordViewForm* form, Db::TField* curfield, Controls::TControl* control, Wwframe::TwwEditFrame* Frame, Wwframe::TwwButtonEffects* ButtonEffects);
	virtual void __fastcall DoInitDialog(TwwRecordViewForm* Form);
	virtual void __fastcall DoCloseDialog(TwwRecordViewForm* Form);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall DisplayVertical(void);
	void __fastcall DisplayHorizontal(void);
	virtual void __fastcall DoCancelWarning(bool &CanClose);
	void __fastcall SetNavigatorVisibleButtons(Dbctrls::TNavButtonSet Value);
	bool __fastcall HasFrame(Controls::TWinControl* Control);
	bool __fastcall HasButtonEffects(Controls::TWinControl* Control);
	bool __fastcall IsControlModified(Controls::TWinControl* Control);
	
public:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	TwwRecordViewForm* RecordViewForm;
	System::Variant Patch;
	__fastcall virtual TwwRecordViewDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwRecordViewDialog(void);
	virtual Db::TDataSet* __fastcall GetPrimaryDataSet(void);
	virtual bool __fastcall Execute(void);
	virtual void __fastcall OKBtnClick(System::TObject* Sender);
	virtual void __fastcall CancelBtnClick(System::TObject* Sender);
	
__published:
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property Classes::TStrings* ControlType = {read=FControlType, write=SetControlType};
	__property bool ControlInfoInDataset = {read=FControlInfoInDataset, write=FControlInfoInDataset, default=1};
	__property bool PictureMaskFromDataSet = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=1};
	__property Classes::TStrings* PictureMasks = {read=FPictureMasks, write=SetPictureMasks};
	__property Wwframe::TwwEditFrame* EditFrame = {read=FDefaultEditFrame, write=FDefaultEditFrame};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property TwwEditSpacing* EditSpacing = {read=FEditSpacing, write=FEditSpacing};
	__property TwwMargin* Margin = {read=FMargin, write=FMargin};
	__property Forms::TFormBorderStyle BorderStyle = {read=FBorderStyle, write=FBorderStyle, default=2};
	__property Wwtypes::TwwFormPosition* FormPosition = {read=FFormPosition, write=FFormPosition};
	__property Wwdbnavigator::TwwNavButtonNavStylesEx NavigatorButtons = {read=FNavigatorButtons, write=FNavigatorButtons, nodefault};
	__property Dbctrls::TNavButtonSet NavigatorVisibleButtons = {write=SetNavigatorVisibleButtons, stored=false, nodefault};
	__property TwwRecordViewStyle Style = {read=FStyle, write=FStyle, default=0};
	__property TwwRecordViewOptions Options = {read=FOptions, write=FOptions, default=11832};
	__property TwwRecordViewControlOptions ControlOptions = {read=FControlOptions, write=FControlOptions, nodefault};
	__property TwwRecordViewOKCancelOptions OKCancelOptions = {read=FOKCancelOptions, write=FOKCancelOptions, default=7};
	__property Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TwwOnBeforeCreateControlEvent OnBeforeCreateControl = {read=FOnBeforeCreateControl, write=FOnBeforeCreateControl};
	__property TwwOnAfterCreateControlEvent OnAfterCreateControl = {read=FOnAfterCreateControl, write=FOnAfterCreateControl};
	__property TwwOnSetControlEffectsEvent OnSetControlEffects = {read=FOnSetControlEffects, write=FOnSetControlEffects};
	__property TwwOnInitFormEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property TwwOnInitFormEvent OnCloseDialog = {read=FOnCloseDialog, write=FOnCloseDialog};
	__property TwwOnInitFormEvent OnResizeDialog = {read=FOnResizeDialog, write=FOnResizeDialog};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property Graphics::TColor ReadOnlyColor = {read=FReadOnlyColor, write=FReadOnlyColor, default=-16777197};
	__property Menus::TMainMenu* Menu = {read=FMenu, write=FMenu};
	__property Classes::TStrings* Selected = {read=FSelected, write=FSelected};
	__property bool NavigatorFlat = {read=FNavigatorFlat, write=FNavigatorFlat, default=0};
	__property Wwdbnavigator::TwwDBNavigator* Navigator = {read=FNavigator, write=SetNavigator};
	__property TwwCancelEvent OnCancelWarning = {read=FOnCancelWarning, write=FOnCancelWarning};
	__property int LinesPerMemoControl = {read=FLinesPerMemoControl, write=FLinesPerMemoControl, default=2};
	
protected:
	virtual Stdctrls::TCustomEdit* __fastcall CreateDefaultEditControl(Classes::TComponent* AOwner);
};


class DELPHICLASS TwwDBCheckBox;
class PASCALIMPLEMENTATION TwwDBCheckBox : public Dbctrls::TDBCheckBox
{
	typedef Dbctrls::TDBCheckBox inherited;
	
protected:
	DYNAMIC void __fastcall DoEnter(void);
	DYNAMIC void __fastcall DoExit(void);
	
public:
	Stdctrls::TLabel* LabelControl;
public:
	/* TDBCheckBox.Create */ inline __fastcall virtual TwwDBCheckBox(Classes::TComponent* AOwner) : Dbctrls::TDBCheckBox(AOwner) { }
	/* TDBCheckBox.Destroy */ inline __fastcall virtual ~TwwDBCheckBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBCheckBox(HWND ParentWindow) : Dbctrls::TDBCheckBox(ParentWindow) { }
	
};


class DELPHICLASS TwwLabel;
class PASCALIMPLEMENTATION TwwLabel : public Stdctrls::TLabel
{
	typedef Stdctrls::TLabel inherited;
	
protected:
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
public:
	/* TCustomLabel.Create */ inline __fastcall virtual TwwLabel(Classes::TComponent* AOwner) : Stdctrls::TLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TwwLabel(void) { }
	
};


class DELPHICLASS TwwDBMemo;
class PASCALIMPLEMENTATION TwwDBMemo : public Dbctrls::TDBMemo
{
	typedef Dbctrls::TDBMemo inherited;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &key, Classes::TShiftState shift);
public:
	/* TDBMemo.Create */ inline __fastcall virtual TwwDBMemo(Classes::TComponent* AOwner) : Dbctrls::TDBMemo(AOwner) { }
	/* TDBMemo.Destroy */ inline __fastcall virtual ~TwwDBMemo(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBMemo(HWND ParentWindow) : Dbctrls::TDBMemo(ParentWindow) { }
	
};


class DELPHICLASS TwwDBEditMemo;
class PASCALIMPLEMENTATION TwwDBEditMemo : public Wwdbedit::TwwDBCustomEdit
{
	typedef Wwdbedit::TwwDBCustomEdit inherited;
	
public:
	__fastcall virtual TwwDBEditMemo(Classes::TComponent* AOwner);
	DYNAMIC void __fastcall KeyDown(System::Word &key, Classes::TShiftState shift);
	
__published:
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property DataField;
	__property DataSource;
	__property Frame;
public:
	/* TwwDBCustomEdit.Destroy */ inline __fastcall virtual ~TwwDBEditMemo(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBEditMemo(HWND ParentWindow) : Wwdbedit::TwwDBCustomEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwCustomControlItem;
class PASCALIMPLEMENTATION TwwCustomControlItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Controls::TWinControl* control;
	int Left;
	int Top;
	int Width;
	int Height;
	Controls::TWinControl* OldParent;
	bool OldVisible;
	bool ButtonFlat;
	bool ButtonTransparent;
public:
	/* TObject.Create */ inline __fastcall TwwCustomControlItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwCustomControlItem(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwRecordViewForm* wwRecordViewForm;
extern PACKAGE bool __fastcall wwIsCheckBox(Classes::TComponent* Component, Db::TField* curField, System::UnicodeString &checkboxOn, System::UnicodeString &checkboxOff);

}	/* namespace Wwrcdvw */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrcdvw;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrcdvwHPP
