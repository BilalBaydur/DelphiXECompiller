// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCommonTable.pas' rev: 22.00

#ifndef DscommontableHPP
#define DscommontableHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dscommontable
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSClassEntity;
class PASCALIMPLEMENTATION TDSClassEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSClassEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSClassEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString PackageName);
	System::UnicodeString __fastcall GetServerClassName(void);
	void __fastcall SetServerClassName(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetRoleName(void);
	void __fastcall SetRoleName(const System::UnicodeString RoleName);
	System::UnicodeString __fastcall GetLifeCycle(void);
	void __fastcall SetLifeCycle(const System::UnicodeString LifeCycle);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateClassTable();
	
public:
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString ServerClassName = {read=GetServerClassName, write=SetServerClassName};
	__property System::UnicodeString RoleName = {read=GetRoleName, write=SetRoleName};
	__property System::UnicodeString LifeCycle = {read=GetLifeCycle, write=SetLifeCycle};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSClassEntity(void) { }
	
};


class DELPHICLASS TDSConnectionEntity;
class PASCALIMPLEMENTATION TDSConnectionEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSConnectionEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSConnectionEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetConnectionName(void);
	void __fastcall SetConnectionName(const System::UnicodeString ConnectionName);
	System::UnicodeString __fastcall GetConnectionProperties(void);
	void __fastcall SetConnectionProperties(const System::UnicodeString ConnectionProperties);
	System::UnicodeString __fastcall GetDriverName(void);
	void __fastcall SetDriverName(const System::UnicodeString DriverName);
	System::UnicodeString __fastcall GetDriverProperties(void);
	void __fastcall SetDriverProperties(const System::UnicodeString DriverProperties);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateClassTable();
	
public:
	__property System::UnicodeString ConnectionName = {read=GetConnectionName, write=SetConnectionName};
	__property System::UnicodeString ConnectionProperties = {read=GetConnectionProperties, write=SetConnectionProperties};
	__property System::UnicodeString DriverName = {read=GetDriverName, write=SetDriverName};
	__property System::UnicodeString DriverProperties = {read=GetDriverProperties, write=SetDriverProperties};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSConnectionEntity(void) { }
	
};


class DELPHICLASS TDSMethodEntity;
class PASCALIMPLEMENTATION TDSMethodEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSMethodEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSMethodEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetMethodAlias(void);
	void __fastcall SetMethodAlias(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetServerClassName(void);
	void __fastcall SetServerClassName(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetServerMethodName(void);
	void __fastcall SetServerMethodName(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetRoleName(void);
	void __fastcall SetRoleName(const System::UnicodeString ClassName);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateMethodTable();
	
public:
	__property System::UnicodeString MethodAlias = {read=GetMethodAlias, write=SetMethodAlias};
	__property System::UnicodeString ServerClassName = {read=GetServerClassName, write=SetServerClassName};
	__property System::UnicodeString ServerMethodName = {read=GetServerMethodName, write=SetServerMethodName};
	__property System::UnicodeString RoleName = {read=GetRoleName, write=SetRoleName};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSMethodEntity(void) { }
	
};


class DELPHICLASS TDSPackageEntity;
class PASCALIMPLEMENTATION TDSPackageEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSPackageEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSPackageEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetPackageName(void);
	void __fastcall SetPackageName(const System::UnicodeString PackageName);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreatePackageTable();
	
public:
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSPackageEntity(void) { }
	
};


class DELPHICLASS TDSProcedureEntity;
class PASCALIMPLEMENTATION TDSProcedureEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSProcedureEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSProcedureEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString CatalogName);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString SchemaName);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProcedureName(const System::UnicodeString ProcedureName);
	System::UnicodeString __fastcall GetProcedureType(void);
	void __fastcall SetProcedureType(const System::UnicodeString ClassName);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateProcedureTable();
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName, write=SetProcedureName};
	__property System::UnicodeString ProcedureType = {read=GetProcedureType, write=SetProcedureType};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSProcedureEntity(void) { }
	
};


class DELPHICLASS TDSProcedureParametersEntity;
class PASCALIMPLEMENTATION TDSProcedureParametersEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSProcedureParametersEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSProcedureParametersEntity(const bool OwnTable)/* overload */;
	bool __fastcall IsNullable(void);
	bool __fastcall GetUnsigned(void);
	
protected:
	System::UnicodeString __fastcall GetCatalogName(void);
	void __fastcall SetCatalogName(const System::UnicodeString CatalogName);
	System::UnicodeString __fastcall GetSchemaName(void);
	void __fastcall SetSchemaName(const System::UnicodeString SchemaName);
	System::UnicodeString __fastcall GetProcedureName(void);
	void __fastcall SetProceduredName(const System::UnicodeString ProcedureName);
	System::UnicodeString __fastcall GetParameterName(void);
	void __fastcall SetParameterName(const System::UnicodeString ParameterName);
	System::UnicodeString __fastcall GetParameterMode(void);
	void __fastcall SetParameterMode(const System::UnicodeString ParameterMode);
	System::UnicodeString __fastcall GetTypeName(void);
	void __fastcall SetTypeName(const System::UnicodeString TypeName);
	int __fastcall GetPrecision(void);
	void __fastcall SetPrecision(const int Precision);
	int __fastcall GetScale(void);
	void __fastcall SetScale(const int Scale);
	int __fastcall GetOrdinal(void);
	void __fastcall SetOrdinal(const int Ordinal);
	void __fastcall SetNullable(const bool Nullable);
	int __fastcall GetDBXDataType(void);
	void __fastcall SetDBXDataType(const int DataType);
	bool __fastcall IsFixedLength(void);
	void __fastcall SetFixedLength(const bool FixedLength);
	bool __fastcall IsUnicode(void);
	void __fastcall SetUnicode(const bool IsUnicode);
	bool __fastcall IsLong(void);
	void __fastcall SetLong(const bool IsLong);
	void __fastcall SetUnsigned(const bool IsUnsigned);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateProcedureParmetersTable();
	
public:
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString ProcedureName = {read=GetProcedureName};
	__property System::UnicodeString ProceduredName = {write=SetProceduredName};
	__property System::UnicodeString ParameterName = {read=GetParameterName, write=SetParameterName};
	__property System::UnicodeString ParameterMode = {read=GetParameterMode, write=SetParameterMode};
	__property System::UnicodeString TypeName = {read=GetTypeName, write=SetTypeName};
	__property int Precision = {read=GetPrecision, write=SetPrecision, nodefault};
	__property int Scale = {read=GetScale, write=SetScale, nodefault};
	__property int Ordinal = {read=GetOrdinal, write=SetOrdinal, nodefault};
	__property bool Nullable = {write=SetNullable, nodefault};
	__property int DBXDataType = {read=GetDBXDataType, write=SetDBXDataType, nodefault};
	__property bool FixedLength = {read=IsFixedLength, write=SetFixedLength, nodefault};
	__property bool Unicode = {read=IsUnicode, write=SetUnicode, nodefault};
	__property bool Long = {read=IsLong, write=SetLong, nodefault};
	__property bool Unsigned = {write=SetUnsigned, nodefault};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSProcedureParametersEntity(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dscommontable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dscommontable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscommontableHPP
