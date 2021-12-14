// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureTable.pas' rev: 22.00

#ifndef DsazuretableHPP
#define DsazuretableHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DSAzure.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <AzureUI.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazuretable
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TNodeType { aztUnknown, aztTables, aztTable, aztLoading, aztTruncated };
#pragma option pop

class DELPHICLASS TNodeData;
class PASCALIMPLEMENTATION TNodeData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FValue;
	TNodeType FNodeType;
	
public:
	__fastcall virtual TNodeData(TNodeType NodeType);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property TNodeType NodeType = {read=FNodeType, write=FNodeType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNodeData(void) { }
	
};


class DELPHICLASS TAzureTableManagement;
class PASCALIMPLEMENTATION TAzureTableManagement : public Azureui::TAzureManagement
{
	typedef Azureui::TAzureManagement inherited;
	
protected:
	bool FActive;
	Imglist::TCustomImageList* FCustomImages;
	Comctrls::TTreeNode* FMenuNode;
	System::UnicodeString FAdvancedFilterPrefix;
	bool FForceCollapse;
	void __fastcall SetCustomImages(Imglist::TCustomImageList* Value);
	void __fastcall ForceCollapse(Comctrls::TTreeNode* Node, bool FullCollapse = true);
	void __fastcall InitializeTree(void);
	void __fastcall HandleNodeExpanded(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall HandleCreateNodeClass(Comctrls::TCustomTreeView* Sender, Comctrls::TTreeNodeClass &NodeClass);
	void __fastcall HandleNodeCollapsing(System::TObject* Sender, Comctrls::TTreeNode* Node, bool &AllowCollapse);
	bool __fastcall Activate(void);
	void __fastcall SetActive(bool Active);
	bool __fastcall HasLoadingNode(Comctrls::TTreeNode* Node);
	bool __fastcall isNodeLoading(Comctrls::TTreeNode* Node);
	Menus::TPopupMenu* __fastcall CreatePopupMenu(void);
	void __fastcall UpdatePopupMenu(System::TObject* Sender);
	Imglist::TCustomImageList* __fastcall CreateImageList(void);
	void __fastcall OnImageIndex(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall HandleDoubleClick(System::TObject* Sender);
	void __fastcall HandleKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall ActivateAction(System::TObject* Sender);
	void __fastcall AddTableAction(System::TObject* Sender);
	void __fastcall RemoveTableAction(System::TObject* Sender);
	void __fastcall ViewTableAction(System::TObject* Sender);
	void __fastcall RefreshTablesAction(System::TObject* Sender);
	void __fastcall OpenViewTableDialog(Comctrls::TTreeNode* TableNode);
	void __fastcall PopulateTables(Comctrls::TTreeNode* Node, Classes::TStringList* TableNames, System::UnicodeString StartingTable, System::UnicodeString NextTableName, bool ForceExpand, System::UnicodeString ErrorMessage);
	void __fastcall TableCreated(System::UnicodeString TableName, bool Success, bool ForceExpand);
	void __fastcall TableDeleted(System::UnicodeString TableName, bool Success, bool ForceExpand);
	Comctrls::TTreeNode* __fastcall CreateLoadingNode(Comctrls::TTreeNode* ParentNode);
	Comctrls::TTreeNode* __fastcall CreateLoadMoreNode(Comctrls::TTreeNode* ParentNode);
	void __fastcall PopulateForNode(Comctrls::TTreeNode* Node, bool ForceExpand = true);
	
public:
	__fastcall virtual TAzureTableManagement(Classes::TComponent* AOwner);
	__fastcall virtual ~TAzureTableManagement(void);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoExpand = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Constraints;
	__property DoubleBuffered;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property RowSelect = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property ConnectionInfo;
	__property System::UnicodeString AdvancedFilterPrefix = {read=FAdvancedFilterPrefix, write=FAdvancedFilterPrefix};
	__property Imglist::TCustomImageList* CustomImages = {read=FCustomImages, write=SetCustomImages};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzureTableManagement(HWND ParentWindow) : Azureui::TAzureManagement(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ADD_TABLE L"AddTable"
#define REMOVE_TABLE L"RemoveTable"
#define VIEW_TABLE_DATA L"ViewData"
#define REFRESH_SEL L"Refresh"
#define ACTIVATE_ITEM L"Activate"
#define NODE_TABLE L"entry"
#define NODE_TABLE_CONTENT L"content"
#define NODE_PROPERTIES L"m:properties"
#define NODE_TABLE_NAME L"d:TableName"

}	/* namespace Dsazuretable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazuretable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazuretableHPP
