// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureQueue.pas' rev: 22.00

#ifndef DsazurequeueHPP
#define DsazurequeueHPP

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
#include <Generics.Defaults.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazurequeue
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TNodeType { azqUnknown, azqQueues, azqQueue, azqMessage, azqLoading, azqTruncated };
#pragma option pop

class DELPHICLASS TNodeData;
class PASCALIMPLEMENTATION TNodeData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FValue;
	TNodeType FNodeType;
	
public:
	__fastcall virtual TNodeData(void);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property TNodeType NodeType = {read=FNodeType, write=FNodeType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNodeData(void) { }
	
};


class DELPHICLASS TMessageNodeData;
class PASCALIMPLEMENTATION TMessageNodeData : public TNodeData
{
	typedef TNodeData inherited;
	
protected:
	System::UnicodeString FMessageId;
	System::UnicodeString FInsertTime;
	System::UnicodeString FExpireTime;
	int FDequeueCount;
	System::UnicodeString FMessageText;
	
public:
	__fastcall virtual TMessageNodeData(void);
	__property System::UnicodeString MessageId = {read=FMessageId, write=FMessageId};
	__property System::UnicodeString InsertTime = {read=FInsertTime, write=FInsertTime};
	__property System::UnicodeString ExpireTime = {read=FExpireTime, write=FExpireTime};
	__property int DequeueCount = {read=FDequeueCount, write=FDequeueCount, nodefault};
	__property System::UnicodeString MessageText = {read=FMessageText, write=FMessageText};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMessageNodeData(void) { }
	
};


typedef void __fastcall (__closure *TMessageActiveEvent)(TMessageNodeData* MessageData);

class DELPHICLASS TAzureQueueManagement;
class PASCALIMPLEMENTATION TAzureQueueManagement : public Azureui::TAzureManagement
{
	typedef Azureui::TAzureManagement inherited;
	
protected:
	TMessageActiveEvent FMessageActivate;
	bool FActive;
	Imglist::TCustomImageList* FCustomImages;
	int FMessageLength;
	Comctrls::TTreeNode* FMenuNode;
	bool FForceCollapse;
	void __fastcall SetMessageLength(int Length);
	void __fastcall SetCustomImages(Imglist::TCustomImageList* Value);
	bool __fastcall Activate(void);
	void __fastcall SetActive(bool Active);
	Menus::TPopupMenu* __fastcall CreatePopupMenu(void);
	void __fastcall UpdatePopupMenu(System::TObject* Sender);
	Imglist::TCustomImageList* __fastcall CreateImageList(void);
	void __fastcall ActivateAction(System::TObject* Sender);
	void __fastcall AddQueueAction(System::TObject* Sender);
	void __fastcall RemoveQueueAction(System::TObject* Sender);
	void __fastcall ClearMessagesAction(System::TObject* Sender);
	void __fastcall AddMessageAction(System::TObject* Sender);
	void __fastcall RemoveMessageAction(System::TObject* Sender);
	void __fastcall RefreshQueueAction(System::TObject* Sender);
	void __fastcall RefreshListAction(System::TObject* Sender);
	bool __fastcall HasLoadingNode(Comctrls::TTreeNode* Node);
	bool __fastcall isNodeLoading(Comctrls::TTreeNode* Node);
	void __fastcall ForceCollapse(Comctrls::TTreeNode* Node, bool FullCollapse = true);
	void __fastcall InitializeTree(void);
	void __fastcall HandleNodeExpanded(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall HandleNodeCollapsing(System::TObject* Sender, Comctrls::TTreeNode* Node, bool &AllowCollapse);
	void __fastcall OnImageIndex(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall OnGetHint(System::TObject* Sender, const Comctrls::TTreeNode* Node, System::UnicodeString &Hint);
	void __fastcall HandleCreateNodeClass(Comctrls::TCustomTreeView* Sender, Comctrls::TTreeNodeClass &NodeClass);
	void __fastcall HandleDoubleClick(System::TObject* Sender);
	void __fastcall HandleKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall PopulateQueues(Comctrls::TTreeNode* Node, Classes::TStringList* QueueNames, bool ForceExpand, System::UnicodeString ErrorMessage);
	void __fastcall PopulateMessages(Comctrls::TTreeNode* Node, Generics_collections::TList__1<TMessageNodeData*>* Messages, int TotalMessages, bool ForceExpand = true);
	void __fastcall QueueCreated(System::UnicodeString QueueName, bool Success, bool ForceExpand);
	void __fastcall QueueDeleted(System::UnicodeString QueueName, bool Success, bool ForceExpand);
	void __fastcall MessageCreated(Comctrls::TTreeNode* QueueNode, bool Success, bool ForceExpand);
	void __fastcall MessageRemoved(Comctrls::TTreeNode* QueueNode, bool Success, bool ForceExpand);
	Comctrls::TTreeNode* __fastcall CreateLoadingNode(Comctrls::TTreeNode* ParentNode);
	void __fastcall PopulateForNode(Comctrls::TTreeNode* Node, bool ForceExpand = true);
	
public:
	__fastcall virtual TAzureQueueManagement(Classes::TComponent* AOwner);
	__fastcall virtual ~TAzureQueueManagement(void);
	
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
	__property ToolTips = {default=1};
	__property ConnectionInfo;
	__property int MessageLength = {read=FMessageLength, write=SetMessageLength, nodefault};
	__property Imglist::TCustomImageList* CustomImages = {read=FCustomImages, write=SetCustomImages};
	__property TMessageActiveEvent OnMessageActivate = {read=FMessageActivate, write=FMessageActivate};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzureQueueManagement(HWND ParentWindow) : Azureui::TAzureManagement(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ADD_QUEUE L"AddQueue"
#define REMOVE_QUEUE L"RemoveQueue"
#define ADD_MESSAGE L"AddMessage"
#define CLEAR_MESSAGES L"ClearMessages"
#define REMOVE_MESSAGE L"RemoveMessage"
#define REFRESH_QUEUE L"RefreshQueue"
#define REFRESH_LIST L"RefreshList"
#define ACTIVATE_ITEM L"Activate"
#define NODE_QUEUES L"Queues"
#define NODE_QUEUE L"Queue"
#define NODE_QUEUE_NAME L"Name"

}	/* namespace Dsazurequeue */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazurequeue;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazurequeueHPP
