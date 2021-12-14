// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwCollectionEditor.pas' rev: 22.00

#ifndef WwcollectioneditorHPP
#define WwcollectioneditorHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <wwCollection.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <ToolWin.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwcollectioneditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwCollectionEditorForm;
class PASCALIMPLEMENTATION TwwCollectionEditorForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Comctrls::TListView* ItemsList;
	Comctrls::TToolBar* ToolBar1;
	Comctrls::TToolButton* AddButton;
	Comctrls::TToolButton* DeleteButton;
	Comctrls::TToolButton* MoveUpButton;
	Comctrls::TToolButton* MoveDownButton;
	Controls::TImageList* EnabledImageList;
	Controls::TImageList* DisabledImageList;
	Comctrls::TToolButton* ToolButton1;
	Comctrls::TToolButton* UserButtonDivider;
	Comctrls::TToolButton* UserButton1;
	Comctrls::TToolButton* UserButton2;
	void __fastcall MoveButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall ItemsListBoxKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall ItemsListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	void __fastcall ItemsListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall ItemsListChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	
protected:
	bool IgnoreChange;
	Wwcollection::_di_IwwCollectionItem __fastcall GetSelectedComponent(int Index);
	System::UnicodeString __fastcall GetItemText(Wwcollection::_di_IwwCollectionItem Item);
	void __fastcall ItemUpdateName(Wwcollection::_di_IwwCollectionItem Item);
	void __fastcall ItemUpdateSelection(Wwcollection::_di_IwwCollectionItem Item);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation AOperation);
	
public:
	Wwcollection::_di_IwwCollection Collection;
	Designintf::_di_IDesigner FDesigner;
	void __fastcall Reload(void);
	virtual void __fastcall SetSelection(Classes::TPersistent* Instance, bool Selected);
	virtual void __fastcall Update(void);
	__fastcall virtual ~TwwCollectionEditorForm(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwCollectionEditorForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwCollectionEditorForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCollectionEditorForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TwwCollectionCustomizeEvent)(TwwCollectionEditorForm* EditorForm);

//-- var, const, procedure ---------------------------------------------------
#define swwInvalidParameter L"Parameter %s of %s cannot be %s"
extern PACKAGE TwwCollectionEditorForm* wwCollectionEditorForm;
extern PACKAGE void __fastcall wwExecuteCollectionEditor(System::UnicodeString ACaption, Designintf::_di_IDesigner ADesigner, Wwcollection::_di_IwwCollection ACollection, TwwCollectionCustomizeEvent CustomizeEvent);

}	/* namespace Wwcollectioneditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwcollectioneditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwcollectioneditorHPP
