// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployToCloudMenu.pas' rev: 22.00

#ifndef DeploytocloudmenuHPP
#define DeploytocloudmenuHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploytocloudmenu
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TdmDeployToCloudMenu;
class PASCALIMPLEMENTATION TdmDeployToCloudMenu : public Classes::TDataModule
{
	typedef Classes::TDataModule inherited;
	
__published:
	Actnlist::TActionList* alCloudDeploy;
	Controls::TImageList* ilCloudDeploy;
	Actnlist::TAction* DTCDeployActn;
	void __fastcall DTCDeployActnExecute(System::TObject* Sender);
	void __fastcall DTCDeployActnUpdate(System::TObject* Sender);
	
private:
	Menus::TMenuItem* FDBOMenuItem;
	Menus::TMenuItem* FDBOOptionsMenuItem;
	Menus::TMenuItem* FDBOSeparator;
	#define TdmDeployToCloudMenu_INSTALL_MENUITEM L"ProjectBuildAllItem"
	
	#define TdmDeployToCloudMenu_NAME_DTCMENUITEM L"DeployToCloudDeployMenuItem"
	
	#define TdmDeployToCloudMenu_NAME_DTCSEPERATORMENUITEM L"DeployToCloudSeparatorMenuItem"
	
	
public:
	__fastcall virtual TdmDeployToCloudMenu(Classes::TComponent* AOwner);
	__fastcall virtual ~TdmDeployToCloudMenu(void);
public:
	/* TDataModule.CreateNew */ inline __fastcall virtual TdmDeployToCloudMenu(Classes::TComponent* AOwner, int Dummy) : Classes::TDataModule(AOwner, Dummy) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Deploytocloudmenu */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploytocloudmenu;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploytocloudmenuHPP
