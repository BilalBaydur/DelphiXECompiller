// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCreators.pas' rev: 22.00

#ifndef DscreatorsHPP
#define DscreatorsHPP

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
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <DMForm.hpp>	// Pascal unit
#include <Consts.hpp>	// Pascal unit
#include <IStreams.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dscreators
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TServerModuleOption { moGenerateModule, moIncludeComments, moIncludeMethods, moMethodInfoOn };
#pragma option pop

typedef System::Set<TServerModuleOption, TServerModuleOption::moGenerateModule, TServerModuleOption::moMethodInfoOn>  TServerModuleOptions;

struct DECLSPEC_DRECORD TServerModuleDescription
{
	
public:
	TServerModuleOptions ModuleOptions;
	System::UnicodeString Ancestor;
	bool AncestorIsModule;
	int HTTPPort;
	int TCPIPPort;
};


__interface IServerMethodsClassInfo;
typedef System::DelphiInterface<IServerMethodsClassInfo> _di_IServerMethodsClassInfo;
__interface IServerMethodsClassInfo  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall ClassName(void) = 0 ;
	virtual System::UnicodeString __fastcall UnitName(void) = 0 ;
};

class DELPHICLASS TServerMethodsClassInfo;
class PASCALIMPLEMENTATION TServerMethodsClassInfo : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FClassName;
	System::UnicodeString FUnitName;
	HIDESBASE System::UnicodeString __fastcall ClassName(void);
	HIDESBASE System::UnicodeString __fastcall UnitName(void);
	
public:
	__fastcall TServerMethodsClassInfo(const System::UnicodeString AUnitName, const System::UnicodeString AClassName)/* overload */;
	__fastcall TServerMethodsClassInfo(Toolsapi::_di_IOTAModuleInfo AModuleInfo)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TServerMethodsClassInfo(void) { }
	
private:
	void *__IServerMethodsClassInfo;	/* IServerMethodsClassInfo */
	
public:
	operator IServerMethodsClassInfo*(void) { return (IServerMethodsClassInfo*)&__IServerMethodsClassInfo; }
	
};


class DELPHICLASS TCreator;
class PASCALIMPLEMENTATION TCreator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	bool __fastcall GetExisting(void);
	System::UnicodeString __fastcall GetFileSystem(void);
	Toolsapi::_di_IOTAModule __fastcall GetOwner(void);
	bool __fastcall GetUnnamed(void);
public:
	/* TObject.Create */ inline __fastcall TCreator(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCreator(void) { }
	
};


class DELPHICLASS TModuleCreator;
class PASCALIMPLEMENTATION TModuleCreator : public TCreator
{
	typedef TCreator inherited;
	
private:
	bool FHaveNames;
	System::UnicodeString FFormName;
	System::UnicodeString FImplFileName;
	void __fastcall GetNewModuleAndClassName(/* out */ System::UnicodeString &AFormName, /* out */ System::UnicodeString &AImplFileName);
	
protected:
	System::UnicodeString __fastcall GetCreatorType(void);
	HIDESBASE Toolsapi::_di_IOTAModule __fastcall GetOwner(void);
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
	virtual System::UnicodeString __fastcall GetModuleAndClassNamePrefix(void);
public:
	/* TObject.Create */ inline __fastcall TModuleCreator(void) : TCreator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TModuleCreator(void) { }
	
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


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::UnicodeString __fastcall DefaultProjectDirectory(void);

}	/* namespace Dscreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dscreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscreatorsHPP
