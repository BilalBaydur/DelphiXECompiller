// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AzureUI.pas' rev: 22.00

#ifndef AzureuiHPP
#define AzureuiHPP

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
#include <Graphics.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <ValEdit.hpp>	// Pascal unit
#include <DSAzure.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Azureui
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzureManagement;
class PASCALIMPLEMENTATION TAzureManagement : public Comctrls::TCustomTreeView
{
	typedef Comctrls::TCustomTreeView inherited;
	
protected:
	Dsazure::TAzureConnectionString* FConnectionInfo;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__property Dsazure::TAzureConnectionString* ConnectionInfo = {read=FConnectionInfo, write=FConnectionInfo};
public:
	/* TCustomTreeView.Create */ inline __fastcall virtual TAzureManagement(Classes::TComponent* AOwner) : Comctrls::TCustomTreeView(AOwner) { }
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TAzureManagement(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzureManagement(HWND ParentWindow) : Comctrls::TCustomTreeView(ParentWindow) { }
	
};


class DELPHICLASS TAzureTreeNode;
class PASCALIMPLEMENTATION TAzureTreeNode : public Comctrls::TTreeNode
{
	typedef Comctrls::TTreeNode inherited;
	
public:
	__fastcall virtual ~TAzureTreeNode(void);
public:
	/* TTreeNode.Create */ inline __fastcall virtual TAzureTreeNode(Comctrls::TTreeNodes* AOwner) : Comctrls::TTreeNode(AOwner) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall ConfirmDeleteItem(bool Plural = false);
extern PACKAGE Graphics::TBitmap* __fastcall GetAzureImage(System::UnicodeString Key);
extern PACKAGE Xmlintf::_di_IXMLNode __fastcall GetFirstMatchingChildNode(Xmlintf::_di_IXMLNode Parent, System::UnicodeString ChildName);
extern PACKAGE void __fastcall SelectBottomCell(Valedit::TValueListEditor* Table, bool LeftCell);
extern PACKAGE void __fastcall SelectTopCell(Valedit::TValueListEditor* Table, bool LeftCell);
extern PACKAGE void __fastcall ShowErrorMessage(const System::UnicodeString Msg);
extern PACKAGE void __fastcall ShowInformationMessage(const System::UnicodeString Msg);

}	/* namespace Azureui */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Azureui;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AzureuiHPP
