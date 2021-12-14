// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCommonProxy.pas' rev: 22.00

#ifndef DscommonproxyHPP
#define DscommonproxyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dscommonproxy
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSMethodParametersEntity;
class PASCALIMPLEMENTATION TDSMethodParametersEntity : public Dbxcommontable::TDBXTableEntity
{
	typedef Dbxcommontable::TDBXTableEntity inherited;
	
public:
	__fastcall TDSMethodParametersEntity(const Dbxcommontable::TDBXTable* Table, const bool OwnTable)/* overload */;
	__fastcall TDSMethodParametersEntity(const bool OwnTable)/* overload */;
	
protected:
	System::UnicodeString __fastcall GetMethodAlias(void);
	void __fastcall SetMethodAlias(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetServerClassName(void);
	void __fastcall SetServerClassName(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetServerMethodName(void);
	void __fastcall SetServerMethodName(const System::UnicodeString ClassName);
	System::UnicodeString __fastcall GetParameterName(void);
	void __fastcall SetParameterName(const System::UnicodeString ParameterName);
	System::UnicodeString __fastcall GetParameterTypeName(void);
	void __fastcall SetParameterTypeName(const System::UnicodeString DataTypeName);
	System::UnicodeString __fastcall GetParameterTypeUnit(void);
	void __fastcall SetParameterTypeUnit(const System::UnicodeString DataTypeUnit);
	int __fastcall GetParameterDirection(void);
	void __fastcall SetParameterDirection(const int ParameterDirection);
	int __fastcall GetParameterDBXDataType(void);
	void __fastcall SetParameterDBXDataType(const int DbxDataType);
	int __fastcall GetDBXParameterDirection(void);
	void __fastcall SetDBXParameterDirection(const int DbxParameterDirection);
	
private:
	static Dbxcommontable::TDBXTable* __fastcall CreateMethodTable();
	
public:
	__property System::UnicodeString MethodAlias = {read=GetMethodAlias, write=SetMethodAlias};
	__property System::UnicodeString ServerClassName = {read=GetServerClassName, write=SetServerClassName};
	__property System::UnicodeString ServerMethodName = {read=GetServerMethodName, write=SetServerMethodName};
	__property System::UnicodeString ParameterName = {read=GetParameterName, write=SetParameterName};
	__property System::UnicodeString ParameterTypeName = {read=GetParameterTypeName, write=SetParameterTypeName};
	__property System::UnicodeString ParameterTypeUnit = {read=GetParameterTypeUnit, write=SetParameterTypeUnit};
	__property int ParameterDirection = {read=GetParameterDirection, write=SetParameterDirection, nodefault};
	__property int ParameterDBXDataType = {read=GetParameterDBXDataType, write=SetParameterDBXDataType, nodefault};
	__property int DBXParameterDirection = {read=GetDBXParameterDirection, write=SetDBXParameterDirection, nodefault};
public:
	/* TDBXTableEntity.Destroy */ inline __fastcall virtual ~TDSMethodParametersEntity(void) { }
	
};


class DELPHICLASS TDSProxyClass;
class DELPHICLASS TDSProxyMethod;
class PASCALIMPLEMENTATION TDSProxyClass : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDSProxyClass(void);
	void __fastcall AddMethod(const TDSProxyMethod* ProxyMethod);
	
private:
	System::UnicodeString FProxyClassName;
	TDSProxyMethod* FFirstMethod;
	TDSProxyMethod* FLastMethod;
	TDSProxyClass* FNext;
	
public:
	__property System::UnicodeString ProxyClassName = {read=FProxyClassName, write=FProxyClassName};
	__property TDSProxyMethod* FirstMethod = {read=FFirstMethod, write=FFirstMethod};
	__property TDSProxyMethod* LastMethod = {read=FLastMethod, write=FLastMethod};
	__property TDSProxyClass* Next = {read=FNext, write=FNext};
public:
	/* TObject.Create */ inline __fastcall TDSProxyClass(void) : System::TObject() { }
	
};


class DELPHICLASS TDSProxyMetadata;
class PASCALIMPLEMENTATION TDSProxyMetadata : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDSProxyMetadata(void);
	void __fastcall LoadMetadata(TDSMethodParametersEntity* MethodParameters);
	
private:
	void __fastcall AddClass(const TDSProxyClass* ProxyClass);
	TDSProxyClass* FFirstClass;
	TDSProxyClass* FLastClass;
	void __fastcall Clear(void);
	
public:
	__property TDSProxyClass* Classes = {read=FFirstClass};
public:
	/* TObject.Create */ inline __fastcall TDSProxyMetadata(void) : System::TObject() { }
	
};


__interface IDSProxyMetaDataLoader;
typedef System::DelphiInterface<IDSProxyMetaDataLoader> _di_IDSProxyMetaDataLoader;
__interface  INTERFACE_UUID("{768E0AB8-3FEB-4BBF-8AAB-9ACE5A8D2CBF}") IDSProxyMetaDataLoader  : public System::IInterface 
{
	
public:
	virtual void __fastcall Load(TDSProxyMetadata* AMetaData) = 0 ;
};

__interface IDSProxyWriter;
typedef System::DelphiInterface<IDSProxyWriter> _di_IDSProxyWriter;
__interface  INTERFACE_UUID("{0840A428-9BD6-4F76-BEF4-969013CDABCC}") IDSProxyWriter  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall Name(void) = 0 ;
	virtual void __fastcall Write(const System::UnicodeString Line) = 0 ;
	virtual void __fastcall WriteLine(void) = 0 ;
};

class DELPHICLASS TDSProxyStreamWriter;
class PASCALIMPLEMENTATION TDSProxyStreamWriter : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FName;
	Classes::TStreamWriter* FStreamWriter;
	void __fastcall Write(const System::UnicodeString Line);
	void __fastcall WriteLine(void);
	System::UnicodeString __fastcall Name(void);
	
public:
	__fastcall TDSProxyStreamWriter(System::UnicodeString Name, Classes::TStream* Stream, Sysutils::TEncoding* Encoding);
	__fastcall virtual ~TDSProxyStreamWriter(void);
private:
	void *__IDSProxyWriter;	/* IDSProxyWriter */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSProxyWriter()
	{
		_di_IDSProxyWriter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSProxyWriter*(void) { return (IDSProxyWriter*)&__IDSProxyWriter; }
	#endif
	
};


class DELPHICLASS TDSProxyMetaDataLoader;
class PASCALIMPLEMENTATION TDSProxyMetaDataLoader : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Dbxcommon::TDBXConnection* FConnection;
	System::UnicodeString FConnectionString;
	System::DelphiInterface<Sysutils::TFunc__1<Dbxcommon::TDBXConnection*> >  FOpenConnection;
	System::DelphiInterface<Sysutils::TProc__1<Dbxcommon::TDBXConnection*> >  FCloseConnection;
	void __fastcall Load(TDSProxyMetadata* MetaData);
	void __fastcall LoadFromConnection(Dbxcommon::TDBXConnection* AConnection, TDSProxyMetadata* AMetaData);
	
public:
	__fastcall TDSProxyMetaDataLoader(Dbxcommon::TDBXConnection* AConnection)/* overload */;
	__fastcall TDSProxyMetaDataLoader(const System::UnicodeString AConnectionString)/* overload */;
	__fastcall TDSProxyMetaDataLoader(System::DelphiInterface<Sysutils::TFunc__1<Dbxcommon::TDBXConnection*> >  AOpenConnection, System::DelphiInterface<Sysutils::TProc__1<Dbxcommon::TDBXConnection*> >  ACloseConnection)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSProxyMetaDataLoader(void) { }
	
private:
	void *__IDSProxyMetaDataLoader;	/* IDSProxyMetaDataLoader */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSProxyMetaDataLoader()
	{
		_di_IDSProxyMetaDataLoader intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSProxyMetaDataLoader*(void) { return (IDSProxyMetaDataLoader*)&__IDSProxyMetaDataLoader; }
	#endif
	
};


class DELPHICLASS TDSProxyParameter;
class PASCALIMPLEMENTATION TDSProxyMethod : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDSProxyMethod(void);
	void __fastcall AddParameter(const TDSProxyParameter* ProxyParameter);
	bool __fastcall HasReturnValue(void);
	void __fastcall InitParameters(void);
	bool __fastcall HasParametersWithUserType(void);
	
private:
	TDSProxyParameter* FFirstParameter;
	TDSProxyParameter* FLastParameter;
	System::UnicodeString FProxyMethodName;
	System::UnicodeString FMethodAlias;
	TDSProxyMethod* FNext;
	int FInputCount;
	int FOutputCount;
	TDSProxyParameter* FReturnParameter;
	int FParameterCount;
	bool FHasUserTypeParameter;
	
public:
	__property System::UnicodeString ProxyMethodName = {read=FProxyMethodName, write=FProxyMethodName};
	__property TDSProxyMethod* Next = {read=FNext, write=FNext};
	__property int InputCount = {read=FInputCount, nodefault};
	__property int OutputCount = {read=FOutputCount, nodefault};
	__property System::UnicodeString MethodAlias = {read=FMethodAlias, write=FMethodAlias};
	__property TDSProxyParameter* Parameters = {read=FFirstParameter};
	__property int ParameterCount = {read=FParameterCount, nodefault};
	__property TDSProxyParameter* ReturnParameter = {read=FReturnParameter};
public:
	/* TObject.Create */ inline __fastcall TDSProxyMethod(void) : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TDSProxyParameter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual void __fastcall SetTypeUnit(const System::UnicodeString TypeUnit);
	virtual System::UnicodeString __fastcall GetTypeUnit(void);
	virtual bool __fastcall IsKnownJSONTypeName(void);
	
private:
	TDSProxyParameter* FNext;
	int FParameterDirection;
	int FDataType;
	System::UnicodeString FParameterName;
	System::UnicodeString FTypeName;
	System::UnicodeString FTypeUnit;
	
public:
	__property System::UnicodeString TypeName = {read=FTypeName, write=FTypeName};
	__property TDSProxyParameter* Next = {read=FNext, write=FNext};
	__property int ParameterDirection = {read=FParameterDirection, write=FParameterDirection, nodefault};
	__property int DataType = {read=FDataType, write=FDataType, nodefault};
	__property System::UnicodeString ParameterName = {read=FParameterName, write=FParameterName};
	__property System::UnicodeString TypeUnit = {read=GetTypeUnit, write=SetTypeUnit};
	__property bool KnownJSONTypeName = {read=IsKnownJSONTypeName, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDSProxyParameter(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSProxyParameter(void) { }
	
};


class DELPHICLASS TDSProxyException;
class PASCALIMPLEMENTATION TDSProxyException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall TDSProxyException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall TDSProxyException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDSProxyException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDSProxyException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDSProxyException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDSProxyException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDSProxyException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDSProxyException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDSProxyException(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sImplementation L"implementation"
#define sInterface L"interface"
#define sASMethodsPrefix L"AS_*"
#define sDSAdminClassName L"DSAdmin"
#define sDSMetadataClassName L"DSMetadata"

}	/* namespace Dscommonproxy */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dscommonproxy;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscommonproxyHPP
