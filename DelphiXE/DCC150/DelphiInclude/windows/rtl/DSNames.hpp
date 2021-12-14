// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSNames.pas' rev: 22.00

#ifndef DsnamesHPP
#define DsnamesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsnames
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSAdminMethods;
class PASCALIMPLEMENTATION TDSAdminMethods : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSAdminMethods_CreateServerClasses L"DSAdmin.CreateServerClasses"
	
	#define TDSAdminMethods_CreateServerMethods L"DSAdmin.CreateServerMethods"
	
	#define TDSAdminMethods_FindClasses L"DSAdmin.FindClasses"
	
	#define TDSAdminMethods_FindMethods L"DSAdmin.FindMethods"
	
	#define TDSAdminMethods_FindPackages L"DSAdmin.FindPackages"
	
	#define TDSAdminMethods_GetPlatformName L"DSAdmin.GetPlatformName"
	
	#define TDSAdminMethods_GetServerClasses L"DSAdmin.GetServerClasses"
	
	#define TDSAdminMethods_GetServerMethods L"DSAdmin.GetServerMethods"
	
	#define TDSAdminMethods_GetServerMethodParameters L"DSAdmin.GetServerMethodParameters"
	
	#define TDSAdminMethods_DropServerClasses L"DSAdmin.DropServerClasses"
	
	#define TDSAdminMethods_DropServerMethods L"DSAdmin.DropServerMethods"
	
	#define TDSAdminMethods_GetDatabaseConnectionProperties L"DSAdmin.GetDatabaseConnectionProperties"
	
public:
	/* TObject.Create */ inline __fastcall TDSAdminMethods(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSAdminMethods(void) { }
	
};


class DELPHICLASS TDSCacheColumns;
class PASCALIMPLEMENTATION TDSCacheColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSCacheColumns_CacheName L"CacheName"
	
	#define TDSCacheColumns_MaxReaders L"MaxReaders"
	
	#define TDSCacheColumns_MaxReaderBytes L"MaxReaderBytes"
	
	#define TDSCacheColumns_MaxLifeTime L"MaxLifeTime"
	
	#define TDSCacheColumns_CacheData L"CacheData"
	
	#define TDSCacheColumns_HitCount L"HitCount"
	
	#define TDSCacheColumns_MissCount L"MissCount"
	
	#define TDSCacheColumns_ExpirationCount L"ExpirationCount"
	
public:
	/* TObject.Create */ inline __fastcall TDSCacheColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSCacheColumns(void) { }
	
};


class DELPHICLASS TDSClassColumns;
class PASCALIMPLEMENTATION TDSClassColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSClassColumns_PackageName L"PackageName"
	
	#define TDSClassColumns_ServerClassName L"ClassName"
	
	#define TDSClassColumns_RoleName L"RoleName"
	
	#define TDSClassColumns_LifeCycle L"LifeCycle"
	
public:
	/* TObject.Create */ inline __fastcall TDSClassColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSClassColumns(void) { }
	
};


class DELPHICLASS TDSConnectionColumns;
class PASCALIMPLEMENTATION TDSConnectionColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSConnectionColumns_ConnectionName L"ConnectionName"
	
	#define TDSConnectionColumns_ConnectionProperties L"ConnectionProperties"
	
	#define TDSConnectionColumns_DriverName L"DriverName"
	
	#define TDSConnectionColumns_DriverProperties L"DriverProperties"
	
public:
	/* TObject.Create */ inline __fastcall TDSConnectionColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSConnectionColumns(void) { }
	
};


class DELPHICLASS TDSLifeCycle;
class PASCALIMPLEMENTATION TDSLifeCycle : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSLifeCycle_Server L"Server"
	
	#define TDSLifeCycle_Session L"Session"
	
	#define TDSLifeCycle_Invocation L"Invocation"
	
public:
	/* TObject.Create */ inline __fastcall TDSLifeCycle(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSLifeCycle(void) { }
	
};


class DELPHICLASS TDSMetadataMethods;
class PASCALIMPLEMENTATION TDSMetadataMethods : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSMetadataMethods_GetDatabase L"DSMetadata.GetDatabase"
	
	#define TDSMetadataMethods_GetProcedures L"DSMetadata.GetProcedures"
	
	#define TDSMetadataMethods_GetProcedureParameters L"DSMetadata.GetProcedureParameters"
	
public:
	/* TObject.Create */ inline __fastcall TDSMetadataMethods(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSMetadataMethods(void) { }
	
};


class DELPHICLASS TDSMethodColumns;
class PASCALIMPLEMENTATION TDSMethodColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSMethodColumns_MethodAlias L"MethodAlias"
	
	#define TDSMethodColumns_ServerClassName L"ServerClassName"
	
	#define TDSMethodColumns_ServerMethodName L"MethodName"
	
	#define TDSMethodColumns_RoleName L"RoleName"
	
public:
	/* TObject.Create */ inline __fastcall TDSMethodColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSMethodColumns(void) { }
	
};


class DELPHICLASS TDSMethodParametersColumns;
class PASCALIMPLEMENTATION TDSMethodParametersColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSMethodParametersColumns_MethodAlias L"MethodAlias"
	
	#define TDSMethodParametersColumns_ServerClassName L"ServerClassName"
	
	#define TDSMethodParametersColumns_ServerMethodName L"MethodName"
	
	#define TDSMethodParametersColumns_ParameterName L"Name"
	
	#define TDSMethodParametersColumns_ParameterTypeName L"ParameterTypeName"
	
	#define TDSMethodParametersColumns_ParameterTypeUnit L"ParameterTypeUnit"
	
	#define TDSMethodParametersColumns_ParameterDirection L"ParameterDirection"
	
	#define TDSMethodParametersColumns_DbxDataType L"DBXType"
	
	#define TDSMethodParametersColumns_DbxParameterDirection L"DBXParameterDirection"
	
public:
	/* TObject.Create */ inline __fastcall TDSMethodParametersColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSMethodParametersColumns(void) { }
	
};


class DELPHICLASS TDSPackageColumns;
class PASCALIMPLEMENTATION TDSPackageColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDSPackageColumns_PackageName L"PackageName"
	
public:
	/* TObject.Create */ inline __fastcall TDSPackageColumns(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSPackageColumns(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsnames */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsnames;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsnamesHPP
