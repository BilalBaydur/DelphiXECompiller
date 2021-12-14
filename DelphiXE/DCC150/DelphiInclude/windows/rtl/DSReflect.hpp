// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSReflect.pas' rev: 22.00

#ifndef DsreflectHPP
#define DsreflectHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <ObjAuto.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <DBXDBReaders.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsreflect
{
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Variant> TArrayOfVariant;

typedef System::DynamicArray<System::TObject*> TArrayOfObject;

class DELPHICLASS TDSMethod;
typedef System::DynamicArray<TDSMethod*> TDSMethodArray;

class DELPHICLASS TDSClass;
typedef System::DynamicArray<TDSClass*> TDSClassArray;

typedef TMetaClass* TDSAdapterClassType;

class DELPHICLASS TDSAdapterClass;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSAdapterClass : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::TObject* FAdapteeInstance;
	
public:
	__fastcall virtual TDSAdapterClass(System::TObject* AdapteeInstance);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDSAdapterClass(void) { }
	
};


class PASCALIMPLEMENTATION TDSClass : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TPersistentClass FClassRef;
	TDSClass* FAdapteeClass;
	System::UnicodeString FClassName;
	bool FIsArrayParameter;
	bool FIsVarParameter;
	bool FIsOutParameter;
	Typinfo::TTypeData *FTypeData;
	bool FValueParameter;
	bool FIsAdapted;
	TDSMethodArray __fastcall GetMethods(void);
	int __fastcall GetDBXDataType(bool AllowUnknown, Dbxcommon::TDBXParameter* Parameter);
	int __fastcall GetDBXSubDataType(void);
	System::UnicodeString __fastcall GetDSClassName(void);
	bool __fastcall IsVoidReturn(void);
	bool __fastcall IsArrayParameter(void);
	bool __fastcall IsInOutParameter(void);
	bool __fastcall IsOutParameter(void);
	System::UnicodeString __fastcall GetClassLoadError(void);
	System::UnicodeString __fastcall GetTypeUnit(void);
	
public:
	__fastcall TDSClass(Classes::TPersistentClass AClassRef, bool AIsAdapted)/* overload */;
	__fastcall TDSClass(Classes::TPersistentClass AClassRef, TDSClass* AAdapteeClass)/* overload */;
	__fastcall TDSClass(System::UnicodeString ClassName, Typinfo::PTypeData TypeData, bool AIsArrayParameter, bool AIsVarParameter, bool AIsOutParameter)/* overload */;
	__fastcall virtual ~TDSClass(void);
	System::TObject* __fastcall CreateInstance(void);
	void __fastcall GetDbxType(Dbxcommon::TDBXParameter* Parameter);
	TDSMethod* __fastcall CreateMethod(System::UnicodeString MethodName);
	__property TDSMethodArray Methods = {read=GetMethods};
	__property System::UnicodeString DSClassName = {read=GetDSClassName};
	__property bool VoidReturn = {read=IsVoidReturn, nodefault};
	__property bool ArrayParameter = {read=IsArrayParameter, nodefault};
	__property bool OutParameter = {read=IsOutParameter, nodefault};
	__property bool InOutParameter = {read=IsInOutParameter, nodefault};
	__property System::UnicodeString ClassLoadError = {read=GetClassLoadError};
	__property bool ValueParameter = {read=FValueParameter, nodefault};
	__property TDSClass* AdapteeDSClass = {read=FAdapteeClass};
	__property System::UnicodeString TypeUnit = {read=GetTypeUnit};
	__property Classes::TPersistentClass ClassRef = {read=FClassRef};
};


class DELPHICLASS TDSPackage;
class PASCALIMPLEMENTATION TDSPackage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FPackagename;
	Classes::TStringList* FClassList;
	void __fastcall GetClassesProc(Classes::TPersistentClass AClass);
	
public:
	__fastcall TDSPackage(void);
	__fastcall virtual ~TDSPackage(void);
	Dbxplatform::TDBXStringArray __fastcall GetDSPackages(void);
	Dbxplatform::TDBXStringArray __fastcall GetDSClasses(System::UnicodeString classNamePattern);
	TDSClass* __fastcall CreateDSClass(System::UnicodeString ClassName);
	__property System::UnicodeString PackageName = {read=FPackagename, write=FPackagename};
	__property Dbxplatform::TDBXStringArray DSPackages = {read=GetDSPackages};
};


class DELPHICLASS TDSMethodValues;
class PASCALIMPLEMENTATION TDSMethodValues : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TArrayOfObject FAllocatedObjects;
	System::TObject* FAllocatedReturn;
	TArrayOfVariant FMethodValues;
	System::Variant FReturnValue;
	bool FServerSideCommand;
	Dbxjsonreflect::TJSONMarshal* FJSONMarshal;
	Dbxjsonreflect::TJSONUnMarshal* FJSONUnMarshal;
	Generics_collections::TObjectList__1<System::TObject*>* FUserObjects;
	void __fastcall SetDBXJSONValueParameter(Dbxcommon::TDBXParameter* DBXParameter, const System::Variant &Value);
	void __fastcall SetDBXParameter(Dbxcommon::TDBXParameter* DBXParameter, const System::Variant &Value);
	void __fastcall SetDBXReaderParameter(Dbxcommon::TDBXParameter* DBXParameter, const System::Variant &Value);
	void __fastcall SetDBXStreamParameter(Dbxcommon::TDBXParameter* DBXParameter, const System::Variant &Value);
	void __fastcall PopulateMarshal(Dbxcommon::TDBXParameter* Parameter);
	System::TObject* __fastcall JSONToUserObject(Dbxjson::TJSONValue* json);
	Dbxjson::TJSONValue* __fastcall UserObjectToJSON(System::TObject* data);
	void __fastcall AssignJSONValue(int Ordinal, Dbxcommon::TDBXParameter* Parameter);
	void __fastcall AssignTableValue(int Ordinal, Dbxcommon::TDBXParameter* Parameter);
	void __fastcall AssignStreamValue(int Ordinal, Dbxcommon::TDBXParameter* Parameter);
	void __fastcall SetAllocatedObject(int Ordinal, System::TObject* AllocatedObject);
	void __fastcall SetServerSideCommand(bool AServerSide);
	
public:
	__fastcall TDSMethodValues(void);
	__fastcall virtual ~TDSMethodValues(void);
	bool __fastcall ClearReferenceParameters(void);
	void __fastcall AssignParameterValues(Dbxcommon::TDBXParameterArray Parameters);
	void __fastcall GetReturnValue(Dbxcommon::TDBXParameter* ReturnValue);
	void __fastcall GetOutValue(Dbxcommon::TDBXParameter* OutValue);
	TArrayOfVariant __fastcall GetValues(void);
	__property System::Variant ReturnValue = {read=FReturnValue, write=FReturnValue};
	__property bool ServerSidecommand = {read=FServerSideCommand, write=SetServerSideCommand, nodefault};
};


class PASCALIMPLEMENTATION TDSMethod : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Objauto::TMethodInfoHeader *FMethodInfoHeader;
	TDSClassArray FParameterTypes;
	Dbxplatform::TDBXStringArray FParameterNames;
	System::UnicodeString FMethodName;
	TDSClass* FMethodClass;
	TDSClass* FDSReturnType;
	bool FIsPublicMethod;
	bool FIsStaticMethod;
	bool FIsConstructor;
	bool FIsDestructor;
	bool __fastcall IsPublicMethod(void);
	bool __fastcall IsStaticMethod(void);
	TDSClassArray __fastcall GetParameterTypes(void);
	TDSClass* __fastcall GetReturnType(void);
	System::UnicodeString __fastcall GetDSMethodName(void);
	TDSClass* __fastcall GetMethodClass(void);
	Dbxplatform::TDBXStringArray __fastcall GetParameterNames(void);
	
public:
	__classmethod System::UnicodeString __fastcall InvokeStringFunction(Dbxplatform::TObjectClass objClass, System::UnicodeString methodName);
	__fastcall TDSMethod(Objauto::PMethodInfoHeader AMethodInfo, const TDSClass* AMethodClass);
	__fastcall virtual ~TDSMethod(void);
	System::TObject* __fastcall GetClassInstance(System::TObject* AObject);
	void __fastcall Invoke(System::TObject* MethodInstance, TDSMethodValues* MethodValues);
	__property bool PublicMethod = {read=IsPublicMethod, nodefault};
	__property bool StaticMethod = {read=IsStaticMethod, nodefault};
	__property TDSClassArray ParameterTypes = {read=GetParameterTypes};
	__property Dbxplatform::TDBXStringArray ParameterNames = {read=GetParameterNames};
	__property TDSClass* ReturnType = {read=GetReturnType};
	__property System::UnicodeString DSMethodName = {read=GetDSMethodName};
	__property TDSClass* MethodClass = {read=GetMethodClass};
	__property bool IsConstructor = {read=FIsConstructor, nodefault};
	__property bool IsDestructor = {read=FIsDestructor, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
#define STDataSet L"TDataSet"
#define STParams L"TParams"
#define STDBXReaderValue L"TDBXReaderValue"
#define SOleVariant L"OleVariant"

}	/* namespace Dsreflect */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsreflect;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsreflectHPP
