// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyDesigner.pas' rev: 22.00

#ifndef DsproxydesignerHPP
#define DsproxydesignerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsproxydesigner
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TProxyModuleCreator;
class PASCALIMPLEMENTATION TProxyModuleCreator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FCodeAsString;
	System::UnicodeString FHeaderAsString;
	System::UnicodeString FImplFileName;
	System::UnicodeString FIntfFileName;
	Toolsapi::_di_IOTAModule FOwner;
	
public:
	__fastcall TProxyModuleCreator(Toolsapi::_di_IOTAModule AOwner, const System::UnicodeString ACodeAsString, const System::UnicodeString AHeaderAsString, const System::UnicodeString AImplFileName, const System::UnicodeString AIntfFileName);
	System::UnicodeString __fastcall GetCreatorType(void);
	bool __fastcall GetExisting(void);
	System::UnicodeString __fastcall GetFileSystem(void);
	Toolsapi::_di_IOTAModule __fastcall GetOwner(void);
	bool __fastcall GetUnnamed(void);
	System::UnicodeString __fastcall GetAncestorName(void);
	System::UnicodeString __fastcall GetImplFileName(void);
	System::UnicodeString __fastcall GetIntfFileName(void);
	System::UnicodeString __fastcall GetFormName(void);
	bool __fastcall GetMainForm(void);
	bool __fastcall GetShowForm(void);
	bool __fastcall GetShowSource(void);
	Toolsapi::_di_IOTAFile __fastcall NewFormFile(const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewImplSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewIntfSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	void __fastcall FormCreated(const Toolsapi::_di_IOTAFormEditor FormEditor);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TProxyModuleCreator(void) { }
	
private:
	void *__IOTAModuleCreator;	/* Toolsapi::IOTAModuleCreator */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAModuleCreator()
	{
		Toolsapi::_di_IOTAModuleCreator intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleCreator*(void) { return (Toolsapi::IOTAModuleCreator*)&__IOTAModuleCreator; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTACreator()
	{
		Toolsapi::_di_IOTACreator intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTACreator*(void) { return (Toolsapi::IOTACreator*)&__IOTAModuleCreator; }
	#endif
	
};


class DELPHICLASS TProxyModuleNotifier;
class PASCALIMPLEMENTATION TProxyModuleNotifier : public Toolsapi::TModuleNotifierObject
{
	typedef Toolsapi::TModuleNotifierObject inherited;
	
private:
	System::UnicodeString FModuleName;
	System::UnicodeString FUniqueID;
	Toolsapi::_di_IOTAProject FProject;
	Toolsapi::_di_IOTAModule FModule;
	int FNotifierIndex;
	
public:
	__fastcall TProxyModuleNotifier(Toolsapi::_di_IOTAProject Project, Toolsapi::_di_IOTAModule Module, const System::UnicodeString ModuleName, const System::UnicodeString UniqueID);
	__fastcall virtual ~TProxyModuleNotifier(void);
	void __fastcall SetNotifierIndex(int Index);
	
protected:
	HIDESBASE bool __fastcall CheckOverwrite(void);
	HIDESBASE void __fastcall ModuleRenamed(const System::UnicodeString NewName);
private:
	void *__IOTAModuleNotifier;	/* Toolsapi::IOTAModuleNotifier */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAModuleNotifier()
	{
		Toolsapi::_di_IOTAModuleNotifier intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleNotifier*(void) { return (Toolsapi::IOTAModuleNotifier*)&__IOTAModuleNotifier; }
	#endif
	
};


class DELPHICLASS TProjectChangeNotifier;
class PASCALIMPLEMENTATION TProjectChangeNotifier : public Toolsapi::TModuleNotifierObject
{
	typedef Toolsapi::TModuleNotifierObject inherited;
	
private:
	Toolsapi::_di_IOTAProject FProject;
	
protected:
	void __fastcall ProjectModuleRenamed(const System::UnicodeString AOldFileName, const System::UnicodeString ANewFileName);
	void __fastcall ModuleAdded(const System::UnicodeString AFileName);
	void __fastcall ModuleRemoved(const System::UnicodeString AFileName);
	
public:
	__fastcall TProjectChangeNotifier(Toolsapi::_di_IOTAProject AProject);
	__fastcall virtual ~TProjectChangeNotifier(void);
private:
	void *__IOTAProjectNotifier;	/* Toolsapi::IOTAProjectNotifier */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAProjectNotifier()
	{
		Toolsapi::_di_IOTAProjectNotifier intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectNotifier*(void) { return (Toolsapi::IOTAProjectNotifier*)&__IOTAProjectNotifier; }
	#endif
	
};


class DELPHICLASS TProxyStorageNotifier;
class PASCALIMPLEMENTATION TProxyStorageNotifier : public Toolsapi::TNotifierObject
{
	typedef Toolsapi::TNotifierObject inherited;
	
private:
	Generics_collections::TDictionary__2<Toolsapi::_di_IOTAProject,int>* FNotifiers;
	
protected:
	System::UnicodeString __fastcall GetName(void);
	void __fastcall ProjectLoaded(const Toolsapi::_di_IOTAModule ProjectOrGroup, const Xmlintf::_di_IXMLNode Node);
	void __fastcall CreatingProject(const Toolsapi::_di_IOTAModule ProjectOrGroup);
	void __fastcall ProjectSaving(const Toolsapi::_di_IOTAModule ProjectOrGroup, const Xmlintf::_di_IXMLNode Node);
	void __fastcall ProjectClosing(const Toolsapi::_di_IOTAModule ProjectOrGroup);
	__property System::UnicodeString Name = {read=GetName};
	
public:
	__fastcall TProxyStorageNotifier(void);
	__fastcall virtual ~TProxyStorageNotifier(void);
private:
	void *__IOTAProjectFileStorageNotifier;	/* Toolsapi::IOTAProjectFileStorageNotifier */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAProjectFileStorageNotifier()
	{
		Toolsapi::_di_IOTAProjectFileStorageNotifier intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectFileStorageNotifier*(void) { return (Toolsapi::IOTAProjectFileStorageNotifier*)&__IOTAProjectFileStorageNotifier; }
	#endif
	
};


struct DECLSPEC_DRECORD TDesignTimeProxyGeneratedSource
{
	
public:
	System::UnicodeString CodeAsString;
	System::UnicodeString HeaderAsString;
	System::UnicodeString ImplFileName;
	System::UnicodeString IntfFileName;
};


__interface TDesignTimeProxyGenerateSourceProc;
typedef System::DelphiInterface<TDesignTimeProxyGenerateSourceProc> _di_TDesignTimeProxyGenerateSourceProc;
__interface TDesignTimeProxyGenerateSourceProc  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(const System::UnicodeString ATargetDirectory, const System::UnicodeString ATargetUnitName, /* out */ TDesignTimeProxyGeneratedSource &ASource) = 0 ;
};

class DELPHICLASS TDesignTimeProxyNodeManager;
class PASCALIMPLEMENTATION TDesignTimeProxyNodeManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Toolsapi::_di_IOTAProject FProject;
	System::UnicodeString FProjectNodeName;
	
public:
	Xmlintf::_di_IXMLNode __fastcall GetNodeForConnection(Xmlintf::_di_IXMLNode StorageNode, const System::UnicodeString AStorageNodeID)/* overload */;
	TProxyModuleNotifier* __fastcall GetNotifierForConnection(Xmlintf::_di_IXMLNode StorageNode, const System::UnicodeString AStorageNodeID);
	void __fastcall RemoveNodeForConnection(Xmlintf::_di_IXMLNode StorageNode, const System::UnicodeString AStorageNodeID);
	Xmlintf::_di_IXMLNode __fastcall GetProjectStorageNode(void);
	__fastcall TDesignTimeProxyNodeManager(Toolsapi::_di_IOTAProject AProject, const System::UnicodeString AProjectNodeName);
	Xmlintf::_di_IXMLNode __fastcall AddProjectStorageNode(void);
	void __fastcall RemoveNodeForModule(Xmlintf::_di_IXMLNode AStorageNode, const System::UnicodeString AModuleName);
	void __fastcall AddNode(const System::UnicodeString AModuleName, const System::UnicodeString AUniqueID);
	Xmlintf::_di_IXMLNode __fastcall GetNodeForModule(Xmlintf::_di_IXMLNode AStorageNode, const System::UnicodeString AModuleName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDesignTimeProxyNodeManager(void) { }
	
};


class DELPHICLASS TDesignTimeProxyModuleManager;
class PASCALIMPLEMENTATION TDesignTimeProxyModuleManager : public TDesignTimeProxyNodeManager
{
	typedef TDesignTimeProxyNodeManager inherited;
	
private:
	System::UnicodeString FTargetDirectory;
	System::UnicodeString FTargetUnitName;
	_di_TDesignTimeProxyGenerateSourceProc FGenerateSourceProc;
	System::UnicodeString FStorageNodeID;
	Toolsapi::_di_IOTAModule __fastcall GetGeneratedModule(void);
	
public:
	void __fastcall GenerateProxy(void);
	__fastcall TDesignTimeProxyModuleManager(Toolsapi::_di_IOTAProject AProject, const System::UnicodeString ATargetDirectory, const System::UnicodeString ATargetUnitName, _di_TDesignTimeProxyGenerateSourceProc AGenerateSourceProc);
	__fastcall TDesignTimeProxyModuleManager(Toolsapi::_di_IOTAProject AProject, const System::UnicodeString AStorageNodeID, _di_TDesignTimeProxyGenerateSourceProc AGenerateSourceProc, const System::UnicodeString ATargetUnitName);
	static Toolsapi::_di_IOTAProject __fastcall GetCurrentModuleProject();
	static Toolsapi::_di_IOTAModule __fastcall GetCurrentModule();
public:
	/* TDesignTimeProxyNodeManager.Create */ inline __fastcall TDesignTimeProxyModuleManager(Toolsapi::_di_IOTAProject AProject, const System::UnicodeString AProjectNodeName) : TDesignTimeProxyNodeManager(AProject, AProjectNodeName) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDesignTimeProxyModuleManager(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ProjectNodeDataSnapDeprecated L"DataSnapProxy"
#define ProjectNodeDataSnapProxyLookup L"DataSnapProxyLookup"

}	/* namespace Dsproxydesigner */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxydesigner;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxydesignerHPP
