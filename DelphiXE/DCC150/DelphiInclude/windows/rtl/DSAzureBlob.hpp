// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureBlob.pas' rev: 22.00

#ifndef DsazureblobHPP
#define DsazureblobHPP

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
#include <Menus.hpp>	// Pascal unit
#include <XMLDoc.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DSAzure.hpp>	// Pascal unit
#include <DSAzDlgCreateContainer.hpp>	// Pascal unit
#include <DSAzDlgBlockBlob.hpp>	// Pascal unit
#include <DSAzDlgPageBlob.hpp>	// Pascal unit
#include <DSAzDlgPage.hpp>	// Pascal unit
#include <DSAzDlgBlock.hpp>	// Pascal unit
#include <DSAzDlgMetadata.hpp>	// Pascal unit
#include <DSAzDlgBlockProps.hpp>	// Pascal unit
#include <DSAzDlgPageProps.hpp>	// Pascal unit
#include <DSAzDlgACL.hpp>	// Pascal unit
#include <DSAzDlgSnapshotBlob.hpp>	// Pascal unit
#include <DSAzDlgCopyBlob.hpp>	// Pascal unit
#include <DSAzDlgPutBlockList.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <DBXClientResStrs.hpp>	// Pascal unit
#include <AzureUI.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazureblob
{
//-- type declarations -------------------------------------------------------
typedef System::Set<System::ShortInt, 1, 100>  TIntSet;

class DELPHICLASS TBTreeNode;
class PASCALIMPLEMENTATION TBTreeNode : public Comctrls::TTreeNode
{
	typedef Comctrls::TTreeNode inherited;
	
public:
	__fastcall virtual ~TBTreeNode(void);
public:
	/* TTreeNode.Create */ inline __fastcall virtual TBTreeNode(Comctrls::TTreeNodes* AOwner) : Comctrls::TTreeNode(AOwner) { }
	
};


class DELPHICLASS TBEnumeration;
class PASCALIMPLEMENTATION TBEnumeration : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FRefCount;
	
public:
	__fastcall TBEnumeration(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBEnumeration(void) { }
	
};


template<typename T> class DELPHICLASS TBEnumerationItem__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TBEnumerationItem__1 : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	T FEnumeration;
	
public:
	__fastcall TBEnumerationItem__1(const T Parent);
	__fastcall virtual ~TBEnumerationItem__1(void);
	__property T Enumeration = {read=FEnumeration};
};


class DELPHICLASS TBContainers;
class DELPHICLASS TBContainer;
class PASCALIMPLEMENTATION TBContainers : public TBEnumeration
{
	typedef TBEnumeration inherited;
	
private:
	System::UnicodeString FPrefix;
	System::UnicodeString FMarker;
	int FMaxResult;
	Generics_collections::TObjectList__1<TBContainer*>* FContainer;
	System::UnicodeString FNextMarker;
	
public:
	__fastcall TBContainers(void);
	__fastcall virtual ~TBContainers(void);
	__classmethod TBContainers* __fastcall FromXML(Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString Prefix = {read=FPrefix, write=FPrefix};
	__property System::UnicodeString Marker = {read=FMarker, write=FMarker};
	__property int MaxResult = {read=FMaxResult, write=FMaxResult, nodefault};
	__property Generics_collections::TObjectList__1<TBContainer*>* Items = {read=FContainer};
	__property System::UnicodeString NextMarker = {read=FNextMarker, write=FNextMarker};
};


class PASCALIMPLEMENTATION TBContainer : public TBEnumerationItem__1<TBContainers*>
{
	typedef TBEnumerationItem__1<TBContainers*> inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FURL;
	Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* FProperties;
	Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* FMetadata;
	
public:
	__fastcall TBContainer(const TBContainers* Parent);
	__fastcall virtual ~TBContainer(void);
	bool __fastcall IsRoot(void);
	__classmethod TBContainer* __fastcall FromXML(const TBContainers* Parent, Xmlintf::_di_IXMLNode Node);
	void __fastcall PopulateMeta(Classes::TStrings* Meta);
	void __fastcall PopulateProperties(Classes::TStrings* Props);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString URL = {read=FURL, write=FURL};
	__property Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* Properties = {read=FProperties};
	__property Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* Metadata = {read=FMetadata};
};


class DELPHICLASS TBBlobs;
class DELPHICLASS TBBlob;
class PASCALIMPLEMENTATION TBBlobs : public TBEnumeration
{
	typedef TBEnumeration inherited;
	
private:
	System::UnicodeString FContainerName;
	System::UnicodeString FPrefix;
	System::UnicodeString FMarker;
	int FMaxResults;
	System::UnicodeString FDelimiter;
	Generics_collections::TObjectList__1<TBBlob*>* FBlobs;
	System::UnicodeString FNextMarker;
	
public:
	__fastcall TBBlobs(void);
	__fastcall virtual ~TBBlobs(void);
	__classmethod TBBlobs* __fastcall FromXML(const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString ContainerName = {read=FContainerName, write=FContainerName};
	__property System::UnicodeString Prefix = {read=FPrefix, write=FPrefix};
	__property System::UnicodeString Marker = {read=FMarker, write=FMarker};
	__property int MaxResults = {read=FMaxResults, write=FMaxResults, nodefault};
	__property System::UnicodeString Delimiter = {read=FDelimiter, write=FDelimiter};
	__property System::UnicodeString NextMarker = {read=FNextMarker, write=FNextMarker};
	__property Generics_collections::TObjectList__1<TBBlob*>* Items = {read=FBlobs};
};


class DELPHICLASS TLeaseItem;
class PASCALIMPLEMENTATION TLeaseItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FBlobURL;
	System::UnicodeString FLeaseID;
	System::TDateTime FExpireTime;
	
public:
	__fastcall virtual TLeaseItem(void);
	__property System::UnicodeString BlobURL = {read=FBlobURL, write=FBlobURL};
	__property System::UnicodeString LeaseID = {read=FLeaseID, write=FLeaseID};
	__property System::TDateTime ExpireTime = {read=FExpireTime, write=FExpireTime};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLeaseItem(void) { }
	
};


class DELPHICLASS TLeaseManager;
class PASCALIMPLEMENTATION TLeaseManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Generics_collections::TList__1<TLeaseItem*>* FItems;
	TLeaseItem* __fastcall GetLeaseItem(/* out */ bool &Success, System::UnicodeString BlobURL, System::UnicodeString LeaseID = L"");
	
public:
	__fastcall virtual TLeaseManager(void);
	__fastcall virtual ~TLeaseManager(void);
	__classmethod TLeaseManager* __fastcall Instance();
	System::UnicodeString __fastcall GetLeaseID(System::UnicodeString BlobURL);
	System::TDateTime __fastcall GetLeaseExpireTime(System::UnicodeString BlobURL, System::UnicodeString LeaseID = L"");
	void __fastcall SetLeaseInfo(System::UnicodeString BlobURL, System::UnicodeString LeaseID, System::TDateTime ExpireTime);
	void __fastcall ClearLeaseInfo(System::UnicodeString BlobURL, System::UnicodeString LeaseID = L"");
};


class PASCALIMPLEMENTATION TBBlob : public TBEnumerationItem__1<TBBlobs*>
{
	typedef TBEnumerationItem__1<TBBlobs*> inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FSnapshot;
	System::UnicodeString FURL;
	Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* FProperties;
	Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* FMetadata;
	System::TDateTime __fastcall GetLeaseExpires(void);
	System::UnicodeString __fastcall GetLeaseID(void);
	
public:
	__fastcall TBBlob(const TBBlobs* Parent);
	__fastcall virtual ~TBBlob(void);
	bool __fastcall IsPageBlob(void);
	bool __fastcall IsBlockBlob(void);
	bool __fastcall IsSnapshot(void);
	bool __fastcall IsLocked(void);
	bool __fastcall IsLeaseExpired(void);
	void __fastcall SetLeaseInfo(System::UnicodeString LeaseID, System::TDateTime LeaseExpires);
	__classmethod TBBlob* __fastcall FromXML(const TBBlobs* Parent, const Xmlintf::_di_IXMLNode Node);
	void __fastcall PopulateMeta(Classes::TStrings* Meta);
	void __fastcall PopulateProperties(Classes::TStrings* Props);
	void __fastcall PopulateProperty(const System::UnicodeString Name, const System::UnicodeString Value);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Snapshot = {read=FSnapshot, write=FSnapshot};
	__property System::UnicodeString URL = {read=FURL, write=FURL};
	__property Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* Properties = {read=FProperties};
	__property Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* Metadata = {read=FMetadata};
	__property System::UnicodeString LeaseID = {read=GetLeaseID};
	__property System::TDateTime LeaseExpires = {read=GetLeaseExpires};
};


class DELPHICLASS TBSignedIdentifiers;
class DELPHICLASS TBSignedIdentifier;
class PASCALIMPLEMENTATION TBSignedIdentifiers : public TBEnumeration
{
	typedef TBEnumeration inherited;
	
private:
	System::UnicodeString FPublicAccess;
	Generics_collections::TObjectList__1<TBSignedIdentifier*>* FIdentifiers;
	
public:
	__fastcall TBSignedIdentifiers(const System::UnicodeString Access);
	__fastcall virtual ~TBSignedIdentifiers(void);
	__classmethod TBSignedIdentifiers* __fastcall FromXML(const System::UnicodeString Access, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString PublicAccess = {read=FPublicAccess, write=FPublicAccess};
	__property Generics_collections::TObjectList__1<TBSignedIdentifier*>* Identifiers = {read=FIdentifiers};
};


class PASCALIMPLEMENTATION TBSignedIdentifier : public TBEnumerationItem__1<TBSignedIdentifiers*>
{
	typedef TBEnumerationItem__1<TBSignedIdentifiers*> inherited;
	
private:
	System::UnicodeString FId;
	Dsazure::TAccessPolicy FACL;
	
protected:
	System::UnicodeString __fastcall GetPermission(void);
	void __fastcall SetPermission(const System::UnicodeString rwdl);
	
public:
	__fastcall TBSignedIdentifier(const TBSignedIdentifiers* Parent);
	__fastcall virtual ~TBSignedIdentifier(void);
	__classmethod TBSignedIdentifier* __fastcall FromXML(const TBSignedIdentifiers* Parent, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString Id = {read=FId, write=FId};
	__property System::UnicodeString Start = {read=FACL.Start, write=FACL.Start};
	__property System::UnicodeString Expiry = {read=FACL.Expiry, write=FACL.Expiry};
	__property System::UnicodeString Permission = {read=GetPermission, write=SetPermission};
	__property Dsazure::TAccessPolicy AccessPolicy = {read=FACL};
};


class DELPHICLASS TBPageList;
class DELPHICLASS TBPageRange;
class PASCALIMPLEMENTATION TBPageList : public TBEnumeration
{
	typedef TBEnumeration inherited;
	
private:
	System::UnicodeString FContentLength;
	Generics_collections::TObjectList__1<TBPageRange*>* FPages;
	
public:
	__fastcall TBPageList(const System::UnicodeString Size);
	__fastcall virtual ~TBPageList(void);
	__classmethod TBPageList* __fastcall FromXML(const System::UnicodeString Size, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString ContentLength = {read=FContentLength, write=FContentLength};
	__property Generics_collections::TObjectList__1<TBPageRange*>* Pages = {read=FPages};
};


class PASCALIMPLEMENTATION TBPageRange : public TBEnumerationItem__1<TBPageList*>
{
	typedef TBEnumerationItem__1<TBPageList*> inherited;
	
private:
	System::UnicodeString FStart;
	System::UnicodeString FEnd;
	
public:
	__fastcall TBPageRange(const TBPageList* Parent);
	__fastcall virtual ~TBPageRange(void);
	__classmethod TBPageRange* __fastcall FromXML(const TBPageList* Parent, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString EndByte = {read=FEnd, write=FEnd};
	__property System::UnicodeString StartByte = {read=FStart, write=FStart};
};


class DELPHICLASS TBBlockList;
class DELPHICLASS TBBlock;
class PASCALIMPLEMENTATION TBBlockList : public TBEnumeration
{
	typedef TBEnumeration inherited;
	
private:
	System::UnicodeString FContentLength;
	Generics_collections::TObjectList__1<TBBlock*>* FCommitedBlocks;
	Generics_collections::TObjectList__1<TBBlock*>* FUncommitedBlocks;
	
public:
	__fastcall TBBlockList(const System::UnicodeString Size);
	__fastcall virtual ~TBBlockList(void);
	__classmethod TBBlockList* __fastcall FromXML(const System::UnicodeString Size, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString ContentLength = {read=FContentLength, write=FContentLength};
	__property Generics_collections::TObjectList__1<TBBlock*>* CommitedBlocks = {read=FCommitedBlocks};
	__property Generics_collections::TObjectList__1<TBBlock*>* UncommitedBlocks = {read=FUncommitedBlocks};
};


class PASCALIMPLEMENTATION TBBlock : public TBEnumerationItem__1<TBBlockList*>
{
	typedef TBEnumerationItem__1<TBBlockList*> inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FSize;
	
public:
	__fastcall TBBlock(const TBBlockList* Parent);
	__fastcall virtual ~TBBlock(void);
	__classmethod TBBlock* __fastcall FromXML(const TBBlockList* Parent, const Xmlintf::_di_IXMLNode Node);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Size = {read=FSize, write=FSize};
};


class DELPHICLASS TAzureBlobManagement;
class PASCALIMPLEMENTATION TAzureBlobManagement : public Azureui::TAzureManagement
{
	typedef Azureui::TAzureManagement inherited;
	
private:
	TBContainer* FRootContainer;
	Comctrls::TTreeNode* FRootNode;
	Comctrls::TTreeNode* FMenuNode;
	Dsazdlgcreatecontainer::TAzCreateContainerDlg* FCreateContainer;
	Dsazdlgblockblob::TAzBlockBlob* FBlockBlob;
	Dsazdlgpageblob::TAzPageBlob* FPageBlob;
	Dsazdlgpage::TAzPage* FPage;
	Dsazdlgblock::TAzBlock* FBlock;
	Dsazdlgmetadata::TAzMetadata* FMetadata;
	Dsazdlgblockprops::TAzBlockProps* FBlockProps;
	Dsazdlgpageprops::TAzPageProps* FPageProps;
	Dsazdlgacl::TAzACL* FACL;
	Dsazdlgsnapshotblob::TAzSnapshotBlob* FSnapshot;
	Dsazdlgcopyblob::TAzCopyBlob* FCopy;
	Dsazdlgputblocklist::TAzPutBlockList* FBlockList;
	void __fastcall SetActive(bool Status);
	bool __fastcall GetActive(void);
	void __fastcall SetRootContainer(TBContainer* root);
	void __fastcall PrepareMenu(Menus::TPopupMenu* Menu, const TIntSet &Invizible, const TIntSet &Disabled)/* overload */;
	void __fastcall PrepareMenu(Menus::TMenuItem* MenuItem, const TIntSet &Invizible, const TIntSet &Disabled)/* overload */;
	void __fastcall PrepareMenuVizible(Menus::TPopupMenu* Menu, const TIntSet &Vizible, const TIntSet &Disabled)/* overload */;
	void __fastcall PrepareMenuVizible(Menus::TMenuItem* Menu, const TIntSet &Vizible, const TIntSet &Disabled)/* overload */;
	void __fastcall CleanExtraSeparators(Menus::TPopupMenu* Menu);
	Classes::TStringList* __fastcall AsMetadataHeaders(const Classes::TStrings* Metadata);
	System::DynamicArray<System::Byte> __fastcall ContentOf(const System::UnicodeString FileName);
	
protected:
	void __fastcall Clear(void);
	void __fastcall RefreshLoadingNode(Comctrls::TTreeNode* Node);
	Xmlintf::_di_IXMLNode __fastcall ParseXML(const System::UnicodeString Xml);
	Dsazure::TAzureBlobService* __fastcall BlobService(void);
	void __fastcall PopulateRootNode(bool SelectRoot = false);
	void __fastcall PopulateContainers(void);
	void __fastcall PopulateContainerWithBlobs(Comctrls::TTreeNode* ContainerNode, const System::UnicodeString ContainerName, const bool Mark = false);
	void __fastcall PopulateBlob(Comctrls::TTreeNode* BlobNode);
	void __fastcall PopulateContainerWithACL(Comctrls::TTreeNode* ACLNode, TBContainer* Container);
	void __fastcall PopulatePageList(Comctrls::TTreeNode* PageNode);
	void __fastcall PopulateBlockList(Comctrls::TTreeNode* BlockNode);
	void __fastcall PopulateMetadata(Comctrls::TTreeNode* MetaNode);
	void __fastcall PopulateProperties(Comctrls::TTreeNode* PropNode);
	Comctrls::TTreeNode* __fastcall PopulateWithLoadingNode(Comctrls::TTreeNode* Node);
	void __fastcall PopulateLatestProperties(TBContainer* Container, TBBlob* BlobObj);
	void __fastcall PopulateLatestMetadata(TBContainer* Container, TBBlob* BlobObj);
	void __fastcall DeleteRootContainer(void);
	void __fastcall MarkAsBusy(Comctrls::TTreeNode* Node);
	void __fastcall MarkAsAvailable(Comctrls::TTreeNode* Node);
	bool __fastcall IsBusy(Comctrls::TTreeNode* Node);
	bool __fastcall IsAnyParentBusy(Comctrls::TTreeNode* Node);
	System::TObject* __fastcall AsObject(void * ptr);
	bool __fastcall NeedsLoading(Comctrls::TTreeNode* Node);
	bool __fastcall IsRootNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsContainerNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsBlobNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsACLNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsPageRegionsNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsBlockListNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsMetadataNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsPropertiesNode(Comctrls::TTreeNode* Node);
	bool __fastcall IsSnapshot(Comctrls::TTreeNode* Node);
	TBContainer* __fastcall ContainerOfACL(Comctrls::TTreeNode* ACLNode);
	TBContainer* __fastcall ContainerOf(Comctrls::TTreeNode* Node);
	TBBlob* __fastcall BlobOf(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall SelectedBlob(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall SelectedContainer(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall FirstRootBlob(void);
	Comctrls::TTreeNode* __fastcall PageNodeOf(Comctrls::TTreeNode* BlobNode);
	Comctrls::TTreeNode* __fastcall BlockNodeOf(Comctrls::TTreeNode* BlobNode);
	Comctrls::TTreeNode* __fastcall MetadataOf(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall PropertiesOf(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall ACLOf(Comctrls::TTreeNode* ContainerNode);
	Comctrls::TTreeNode* __fastcall FindContainer(const System::UnicodeString Name);
	void __fastcall BlobNodeFactory(Comctrls::TCustomTreeView* Sender, Comctrls::TTreeNodeClass &NodeClass);
	void __fastcall NodeExpandedAction(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall ImageIndexEvent(System::TObject* Sender, Comctrls::TTreeNode* Node);
	Imglist::TCustomImageList* __fastcall CreateImageList(void);
	Menus::TPopupMenu* __fastcall CreatePopuMenu(void);
	void __fastcall UpdatePopupMenu(System::TObject* Sender);
	void __fastcall MenuForRoot(Menus::TPopupMenu* Menu);
	void __fastcall MenuForContainer(Menus::TPopupMenu* Menu);
	void __fastcall MenuForBlockBlob(Menus::TPopupMenu* Menu);
	void __fastcall MenuForPageBlob(Menus::TPopupMenu* Menu);
	void __fastcall MenuInitial(Menus::TPopupMenu* Menu);
	void __fastcall MenuBusy(Menus::TPopupMenu* Menu);
	void __fastcall CreateRootContainerAction(System::TObject* Sender);
	void __fastcall CreateContainerAction(System::TObject* Sender);
	void __fastcall DeleteRootContainerAction(System::TObject* Sender);
	void __fastcall CreateBlockBlobAction(System::TObject* Sender);
	void __fastcall CreatePageBlobAction(System::TObject* Sender);
	void __fastcall RefreshAction(System::TObject* Sender);
	void __fastcall ActivateAction(System::TObject* Sender);
	void __fastcall ManagePageAction(System::TObject* Sender);
	void __fastcall ManageBlockAction(System::TObject* Sender);
	void __fastcall DeleteBlobAction(System::TObject* Sender);
	void __fastcall DeleteContainerAction(System::TObject* Sender);
	void __fastcall IsBusyAction(System::TObject* Sender);
	void __fastcall EditBlobMetadataAction(System::TObject* Sender);
	void __fastcall EditContainerMetadataAction(System::TObject* Sender);
	void __fastcall EditBlockPropertiesAction(System::TObject* Sender);
	void __fastcall EditPagePropertiesAction(System::TObject* Sender);
	void __fastcall EditACLAction(System::TObject* Sender);
	void __fastcall CreateSnapshotAction(System::TObject* Sender);
	void __fastcall CopyBlobAction(System::TObject* Sender);
	void __fastcall DownloadAction(System::TObject* Sender);
	void __fastcall CommitBlockListAction(System::TObject* Sender);
	void __fastcall AcquireLeaseAction(System::TObject* Sender);
	void __fastcall CopyLeaseAction(System::TObject* Sender);
	void __fastcall RenewLeaseAction(System::TObject* Sender);
	void __fastcall ReleaseLeaseAction(System::TObject* Sender);
	void __fastcall BreakLeaseAction(System::TObject* Sender);
	void __fastcall UpdateBlockBlobAction(System::TObject* Sender);
	
public:
	__fastcall virtual TAzureBlobManagement(Classes::TComponent* AOwner);
	__fastcall virtual ~TAzureBlobManagement(void);
	
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
	__property HotTrack = {default=0};
	__property RightClickSelect = {default=0};
	__property RowSelect = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property ConnectionInfo;
	__property bool Active = {read=GetActive, write=SetActive, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzureBlobManagement(HWND ParentWindow) : Azureui::TAzureManagement(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazureblob */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazureblob;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazureblobHPP