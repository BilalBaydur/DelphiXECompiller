// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployStorage.pas' rev: 22.00

#ifndef DeploystorageHPP
#define DeploystorageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DeployTypes.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploystorage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TStorageOptions;
class PASCALIMPLEMENTATION TStorageOptions : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Deploytypes::TFileDeployItem* operator[](int AIndex) { return Files[AIndex]; }
	
private:
	Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* FFiles;
	System::UnicodeString FInfrastructure;
	Classes::TStrings* FMachines;
	System::UnicodeString FPassword;
	System::UnicodeString FUsername;
	void __fastcall LoadFrom(const Xmlintf::_di_IXMLNode ANode);
	void __fastcall SetMachines(const Classes::TStrings* Value);
	Deploytypes::TFileDeployItem* __fastcall GetFile(int AIndex);
	int __fastcall GetFileCount(void);
	
public:
	__fastcall TStorageOptions(const Xmlintf::_di_IXMLNode ANode);
	__fastcall virtual ~TStorageOptions(void);
	void __fastcall AddFile(Deploytypes::TFileDeployItem* AFile);
	void __fastcall RemoveFile(const System::UnicodeString AFilename);
	void __fastcall ReplaceFile(const System::UnicodeString AOldFilename, const System::UnicodeString AFilename, const System::UnicodeString ADestination);
	virtual System::UnicodeString __fastcall ToString(void);
	__property int FileCount = {read=GetFileCount, nodefault};
	__property Deploytypes::TFileDeployItem* Files[int AIndex] = {read=GetFile/*, default*/};
	__property System::UnicodeString Infrastructure = {read=FInfrastructure, write=FInfrastructure};
	__property Classes::TStrings* Machines = {read=FMachines, write=SetMachines};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
	__property System::UnicodeString Username = {read=FUsername, write=FUsername};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TStorageOptions* __fastcall StorageOptions(void);
extern PACKAGE bool __fastcall LoadProjectStorageValues(void);
extern PACKAGE void __fastcall SaveProjectStorageValues(void);

}	/* namespace Deploystorage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploystorage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploystorageHPP
