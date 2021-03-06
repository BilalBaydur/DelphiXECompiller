// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXJSONReflect.pas' rev: 22.00

#ifndef DbxjsonreflectHPP
#define DbxjsonreflectHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <Rtti.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxjsonreflect
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EConversionError;
class PASCALIMPLEMENTATION EConversionError : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EConversionError(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EConversionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EConversionError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EConversionError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EConversionError(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EConversionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EConversionError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EConversionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EConversionError(void) { }
	
};


template<typename TSerial> class DELPHICLASS TConverter__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename TSerial> class PASCALIMPLEMENTATION TConverter__1 : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual TSerial __fastcall GetSerializedData(void) = 0 ;
	
public:
	__fastcall virtual TConverter__1(void);
	virtual void __fastcall Clear(void) = 0 ;
	virtual void __fastcall OnRefType(System::UnicodeString TypeName, int id) = 0 ;
	virtual void __fastcall OnTypeStart(System::UnicodeString TypeName, int id) = 0 ;
	virtual void __fastcall OnTypeEnd(System::UnicodeString TypeName, int id) = 0 ;
	virtual void __fastcall OnFieldStart(System::UnicodeString FieldName) = 0 ;
	virtual void __fastcall OnFieldEnd(System::UnicodeString FieldName) = 0 ;
	virtual void __fastcall OnListStart(void) = 0 ;
	virtual void __fastcall OnListEnd(void) = 0 ;
	virtual void __fastcall OnString(System::UnicodeString Data) = 0 ;
	virtual void __fastcall OnNumber(System::UnicodeString Data) = 0 ;
	virtual void __fastcall OnBoolean(bool Data) = 0 ;
	virtual void __fastcall OnNull(void) = 0 ;
	virtual bool __fastcall IsConsistent(void) = 0 ;
	virtual void __fastcall SetCurrentValue(TSerial Data) = 0 ;
	__property TSerial SerializedData = {read=GetSerializedData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TConverter__1(void) { }
	
};


typedef System::DynamicArray<System::TObject*> TListOfObjects;

typedef System::DynamicArray<System::UnicodeString> TListOfStrings;

__interface TObjectsConverter;
typedef System::DelphiInterface<TObjectsConverter> _di_TObjectsConverter;
__interface TObjectsConverter  : public System::IInterface 
{
	
public:
	virtual TListOfObjects __fastcall Invoke(System::TObject* Data, System::UnicodeString Field) = 0 ;
};

__interface TStringsConverter;
typedef System::DelphiInterface<TStringsConverter> _di_TStringsConverter;
__interface TStringsConverter  : public System::IInterface 
{
	
public:
	virtual TListOfStrings __fastcall Invoke(System::TObject* Data, System::UnicodeString Field) = 0 ;
};

__interface TTypeObjectsConverter;
typedef System::DelphiInterface<TTypeObjectsConverter> _di_TTypeObjectsConverter;
__interface TTypeObjectsConverter  : public System::IInterface 
{
	
public:
	virtual TListOfObjects __fastcall Invoke(System::TObject* Data) = 0 ;
};

__interface TTypeStringsConverter;
typedef System::DelphiInterface<TTypeStringsConverter> _di_TTypeStringsConverter;
__interface TTypeStringsConverter  : public System::IInterface 
{
	
public:
	virtual TListOfStrings __fastcall Invoke(System::TObject* Data) = 0 ;
};

__interface TObjectConverter;
typedef System::DelphiInterface<TObjectConverter> _di_TObjectConverter;
__interface TObjectConverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(System::TObject* Data, System::UnicodeString Field) = 0 ;
};

__interface TStringConverter;
typedef System::DelphiInterface<TStringConverter> _di_TStringConverter;
__interface TStringConverter  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall Invoke(System::TObject* Data, System::UnicodeString Field) = 0 ;
};

__interface TTypeObjectConverter;
typedef System::DelphiInterface<TTypeObjectConverter> _di_TTypeObjectConverter;
__interface TTypeObjectConverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(System::TObject* Data) = 0 ;
};

__interface TTypeStringConverter;
typedef System::DelphiInterface<TTypeStringConverter> _di_TTypeStringConverter;
__interface TTypeStringConverter  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall Invoke(System::TObject* Data) = 0 ;
};

#pragma option push -b-
enum TConverterType { ctObjects, ctStrings, ctTypeObjects, ctTypeStrings, ctObject, ctString, ctTypeObject, ctTypeString };
#pragma option pop

__interface TObjectsReverter;
typedef System::DelphiInterface<TObjectsReverter> _di_TObjectsReverter;
__interface TObjectsReverter  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(System::TObject* Data, System::UnicodeString Field, TListOfObjects Args) = 0 ;
};

__interface TStringsReverter;
typedef System::DelphiInterface<TStringsReverter> _di_TStringsReverter;
__interface TStringsReverter  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(System::TObject* Data, System::UnicodeString Field, TListOfStrings Args) = 0 ;
};

__interface TTypeObjectsReverter;
typedef System::DelphiInterface<TTypeObjectsReverter> _di_TTypeObjectsReverter;
__interface TTypeObjectsReverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(TListOfObjects Data) = 0 ;
};

__interface TTypeStringsReverter;
typedef System::DelphiInterface<TTypeStringsReverter> _di_TTypeStringsReverter;
__interface TTypeStringsReverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(TListOfStrings Data) = 0 ;
};

__interface TObjectReverter;
typedef System::DelphiInterface<TObjectReverter> _di_TObjectReverter;
__interface TObjectReverter  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(System::TObject* Data, System::UnicodeString Field, System::TObject* Arg) = 0 ;
};

__interface TStringReverter;
typedef System::DelphiInterface<TStringReverter> _di_TStringReverter;
__interface TStringReverter  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(System::TObject* Data, System::UnicodeString Field, System::UnicodeString Arg) = 0 ;
};

__interface TTypeObjectReverter;
typedef System::DelphiInterface<TTypeObjectReverter> _di_TTypeObjectReverter;
__interface TTypeObjectReverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(System::TObject* Data) = 0 ;
};

__interface TTypeStringReverter;
typedef System::DelphiInterface<TTypeStringReverter> _di_TTypeStringReverter;
__interface TTypeStringReverter  : public System::IInterface 
{
	
public:
	virtual System::TObject* __fastcall Invoke(System::UnicodeString Data) = 0 ;
};

#pragma option push -b-
enum TReverterType { rtObjects, rtStrings, rtTypeObjects, rtTypeStrings, rtObject, rtString, rtTypeObject, rtTypeString };
#pragma option pop

class DELPHICLASS TConverterEvent;
class PASCALIMPLEMENTATION TConverterEvent : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TClass FFieldClassType;
	System::UnicodeString FFieldName;
	TConverterType FConverterType;
	_di_TObjectsConverter FObjectsConverter;
	_di_TStringsConverter FStringsConverter;
	_di_TTypeObjectsConverter FTypeObjectsConverter;
	_di_TTypeStringsConverter FTypeStringsConverter;
	_di_TObjectConverter FObjectConverter;
	_di_TStringConverter FStringConverter;
	_di_TTypeObjectConverter FTypeObjectConverter;
	_di_TTypeStringConverter FTypeStringConverter;
	
protected:
	void __fastcall SetObjectsConverter(_di_TObjectsConverter Converter);
	void __fastcall SetStringsConverter(_di_TStringsConverter Converter);
	void __fastcall SetTypeObjectsConverter(_di_TTypeObjectsConverter Converter);
	void __fastcall SetTypeStringsConverter(_di_TTypeStringsConverter Converter);
	void __fastcall SetObjectConverter(_di_TObjectConverter Converter);
	void __fastcall SetStringConverter(_di_TStringConverter Converter);
	void __fastcall SetTypeObjectConverter(_di_TTypeObjectConverter Converter);
	void __fastcall SetTypeStringConverter(_di_TTypeStringConverter Converter);
	
public:
	__fastcall TConverterEvent(void)/* overload */;
	__fastcall TConverterEvent(System::TClass AFieldClassType, System::UnicodeString AFieldName)/* overload */;
	bool __fastcall IsTypeConverter(void);
	__property TConverterType ConverterType = {read=FConverterType, nodefault};
	__property _di_TObjectsConverter ObjectsConverter = {read=FObjectsConverter, write=SetObjectsConverter};
	__property _di_TStringsConverter StringsConverter = {read=FStringsConverter, write=SetStringsConverter};
	__property _di_TTypeObjectsConverter TypeObjectsConverter = {read=FTypeObjectsConverter, write=SetTypeObjectsConverter};
	__property _di_TTypeStringsConverter TypeStringsConverter = {read=FTypeStringsConverter, write=SetTypeStringsConverter};
	__property _di_TObjectConverter ObjectConverter = {read=FObjectConverter, write=SetObjectConverter};
	__property _di_TStringConverter StringConverter = {read=FStringConverter, write=SetStringConverter};
	__property _di_TTypeObjectConverter TypeObjectConverter = {read=FTypeObjectConverter, write=SetTypeObjectConverter};
	__property _di_TTypeStringConverter TypeStringConverter = {read=FTypeStringConverter, write=SetTypeStringConverter};
	__property System::TClass FieldClassType = {read=FFieldClassType};
	__property System::UnicodeString FieldName = {read=FFieldName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TConverterEvent(void) { }
	
};


class DELPHICLASS TReverterEvent;
class PASCALIMPLEMENTATION TReverterEvent : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TClass FFieldClassType;
	System::UnicodeString FFieldName;
	TReverterType FReverterType;
	_di_TObjectsReverter FObjectsReverter;
	_di_TStringsReverter FStringsReverter;
	_di_TTypeObjectsReverter FTypeObjectsReverter;
	_di_TTypeStringsReverter FTypeStringsReverter;
	_di_TObjectReverter FObjectReverter;
	_di_TStringReverter FStringReverter;
	_di_TTypeObjectReverter FTypeObjectReverter;
	_di_TTypeStringReverter FTypeStringReverter;
	
protected:
	void __fastcall SetObjectsReverter(_di_TObjectsReverter Reverter);
	void __fastcall SetStringsReverter(_di_TStringsReverter Reverter);
	void __fastcall SetTypeObjectsReverter(_di_TTypeObjectsReverter Reverter);
	void __fastcall SetTypeStringsReverter(_di_TTypeStringsReverter Reverter);
	void __fastcall SetObjectReverter(_di_TObjectReverter Reverter);
	void __fastcall SetStringReverter(_di_TStringReverter Reverter);
	void __fastcall SetTypeObjectReverter(_di_TTypeObjectReverter Reverter);
	void __fastcall SetTypeStringReverter(_di_TTypeStringReverter Reverter);
	
public:
	__fastcall TReverterEvent(void)/* overload */;
	__fastcall TReverterEvent(System::TClass AFieldClassType, System::UnicodeString AFieldName)/* overload */;
	bool __fastcall IsTypeReverter(void);
	__property TReverterType ReverterType = {read=FReverterType, nodefault};
	__property _di_TObjectsReverter ObjectsReverter = {read=FObjectsReverter, write=SetObjectsReverter};
	__property _di_TStringsReverter StringsReverter = {read=FStringsReverter, write=SetStringsReverter};
	__property _di_TTypeObjectsReverter TypeObjectsReverter = {read=FTypeObjectsReverter, write=SetTypeObjectsReverter};
	__property _di_TTypeStringsReverter TypeStringsReverter = {read=FTypeStringsReverter, write=SetTypeStringsReverter};
	__property _di_TObjectReverter ObjectReverter = {read=FObjectReverter, write=SetObjectReverter};
	__property _di_TStringReverter StringReverter = {read=FStringReverter, write=SetStringReverter};
	__property _di_TTypeObjectReverter TypeObjectReverter = {read=FTypeObjectReverter, write=SetTypeObjectReverter};
	__property _di_TTypeStringReverter TypeStringReverter = {read=FTypeStringReverter, write=SetTypeStringReverter};
	__property System::TClass FieldClassType = {read=FFieldClassType};
	__property System::UnicodeString FieldName = {read=FFieldName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TReverterEvent(void) { }
	
};


class DELPHICLASS TJSONPopulationCustomizer;
class PASCALIMPLEMENTATION TJSONPopulationCustomizer : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall PrePopulate(System::TObject* Data, Rtti::TRttiContext rttiContext);
	virtual void __fastcall PostPopulate(System::TObject* Data);
public:
	/* TObject.Create */ inline __fastcall TJSONPopulationCustomizer(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONPopulationCustomizer(void) { }
	
};


class DELPHICLASS TJSONInterceptor;
class PASCALIMPLEMENTATION TJSONInterceptor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TConverterType FConverterType;
	TReverterType FReverterType;
	
public:
	virtual TListOfObjects __fastcall ObjectsConverter(System::TObject* Data, System::UnicodeString Field);
	virtual TListOfStrings __fastcall StringsConverter(System::TObject* Data, System::UnicodeString Field);
	virtual TListOfObjects __fastcall TypeObjectsConverter(System::TObject* Data);
	virtual TListOfStrings __fastcall TypeStringsConverter(System::TObject* Data);
	virtual System::TObject* __fastcall ObjectConverter(System::TObject* Data, System::UnicodeString Field);
	virtual System::UnicodeString __fastcall StringConverter(System::TObject* Data, System::UnicodeString Field);
	virtual System::TObject* __fastcall TypeObjectConverter(System::TObject* Data);
	virtual System::UnicodeString __fastcall TypeStringConverter(System::TObject* Data);
	virtual void __fastcall ObjectsReverter(System::TObject* Data, System::UnicodeString Field, TListOfObjects Args);
	virtual void __fastcall StringsReverter(System::TObject* Data, System::UnicodeString Field, TListOfStrings Args);
	virtual System::TObject* __fastcall TypeObjectsReverter(TListOfObjects Data);
	virtual System::TObject* __fastcall TypeStringsReverter(TListOfStrings Data);
	virtual void __fastcall ObjectReverter(System::TObject* Data, System::UnicodeString Field, System::TObject* Arg);
	virtual void __fastcall StringReverter(System::TObject* Data, System::UnicodeString Field, System::UnicodeString Arg);
	virtual System::TObject* __fastcall TypeObjectReverter(System::TObject* Data);
	virtual System::TObject* __fastcall TypeStringReverter(System::UnicodeString Data);
	bool __fastcall IsTypeConverter(void);
	bool __fastcall IsTypeReverter(void);
	__property TConverterType ConverterType = {read=FConverterType, write=FConverterType, nodefault};
	__property TReverterType ReverterType = {read=FReverterType, write=FReverterType, nodefault};
public:
	/* TObject.Create */ inline __fastcall TJSONInterceptor(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONInterceptor(void) { }
	
};


class DELPHICLASS JSONReflect;
class PASCALIMPLEMENTATION JSONReflect : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	bool FMarshalOwner;
	TConverterType FConverterType;
	TReverterType FReverterType;
	System::TClass FInterceptor;
	System::TClass FPopulationCustomizer;
	
public:
	__fastcall JSONReflect(bool IsMarshalOwned)/* overload */;
	__fastcall JSONReflect(TConverterType ConverterType, TReverterType ReverterType, System::TClass InterceptorType, System::TClass PopulationCustomizerType, bool IsMarshalOwned)/* overload */;
	TJSONInterceptor* __fastcall JSONInterceptor(void);
	TJSONPopulationCustomizer* __fastcall JSONPopulationCustomizer(void);
	__property bool MarshalOwner = {read=FMarshalOwner, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~JSONReflect(void) { }
	
};


class DELPHICLASS JSONBooleanAttribute;
class PASCALIMPLEMENTATION JSONBooleanAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	bool FValue;
	
public:
	__fastcall JSONBooleanAttribute(bool val);
	__property bool Value = {read=FValue, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~JSONBooleanAttribute(void) { }
	
};


class DELPHICLASS JSONMarshalled;
class PASCALIMPLEMENTATION JSONMarshalled : public JSONBooleanAttribute
{
	typedef JSONBooleanAttribute inherited;
	
public:
	/* JSONBooleanAttribute.Create */ inline __fastcall JSONMarshalled(bool val) : JSONBooleanAttribute(val) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~JSONMarshalled(void) { }
	
};


class DELPHICLASS JSONOwned;
class PASCALIMPLEMENTATION JSONOwned : public JSONBooleanAttribute
{
	typedef JSONBooleanAttribute inherited;
	
public:
	/* JSONBooleanAttribute.Create */ inline __fastcall JSONOwned(bool val) : JSONBooleanAttribute(val) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~JSONOwned(void) { }
	
};


class DELPHICLASS TTransientField;
class PASCALIMPLEMENTATION TTransientField : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FClassUnitName;
	System::UnicodeString FClassTypeName;
	System::UnicodeString FUnitName;
	System::UnicodeString FTypeName;
	System::UnicodeString FFieldName;
	System::TObject* FTypeInstance;
	
public:
	__property System::UnicodeString ClassUnitName = {read=FClassUnitName, write=FClassUnitName};
	__property System::UnicodeString ClassTypeName = {read=FClassTypeName, write=FClassTypeName};
	__property System::UnicodeString UnitName = {read=FUnitName, write=FUnitName};
	__property System::UnicodeString TypeName = {read=FTypeName, write=FTypeName};
	__property System::UnicodeString FieldName = {read=FFieldName, write=FFieldName};
	__property System::TObject* TypeInstance = {read=FTypeInstance, write=FTypeInstance};
public:
	/* TObject.Create */ inline __fastcall TTransientField(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTransientField(void) { }
	
};


template<typename TSerial> class DELPHICLASS TTypeMarshaller__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename TSerial> class PASCALIMPLEMENTATION TTypeMarshaller__1 : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Generics_collections::TDictionary__2<int,int>* FObjectHash;
	Generics_collections::TDictionary__2<int,int>* FPointerHash;
	System::DynamicArray<TTransientField*> FWarnings;
	// System::TArray__1<TTransientField*>  FWarnings;
	int FId;
	TConverter__1<TSerial>* FConverter;
	bool FOwnConverter;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,TConverterEvent*>* FConverters;
	bool FShareConverters;
	Rtti::TRttiContext FRTTICtx;
	bool __fastcall MarshalSimpleField(Rtti::TRttiField* rttiField, void * Data);
	void __fastcall DestroyIfTransient(Rtti::TRttiType* rttiType, System::TObject* Data);
	
protected:
	__classmethod System::UnicodeString __fastcall ComposeTypeName(System::TObject* Data);
	__classmethod void __fastcall DecomposeTypeName(System::UnicodeString TypeName, /* out */ System::UnicodeString &UnitName, /* out */ System::UnicodeString &ClassName);
	int __fastcall NextId(void);
	int __fastcall MarkObject(System::TObject* Data);
	bool __fastcall IsObjectMarked(System::TObject* Data);
	int __fastcall ObjectMark(System::TObject* Data);
	TConverterEvent* __fastcall Converter(System::TClass clazz, System::UnicodeString Field);
	bool __fastcall HasConverter(System::TClass clazz, System::UnicodeString Field);
	TJSONInterceptor* __fastcall GetTypeConverter(System::TClass clazz)/* overload */;
	TJSONInterceptor* __fastcall GetTypeConverter(Rtti::TRttiType* rttiType)/* overload */;
	TJSONInterceptor* __fastcall GetTypeConverter(Rtti::TRttiField* rttiField)/* overload */;
	bool __fastcall HasInterceptor(Rtti::TRttiField* rttiField);
	void __fastcall MarshalData(System::TObject* Data);
	void __fastcall MarshalValue(const Rtti::TValue &Value, Rtti::TRttiField* fieldRTTI = (Rtti::TRttiField*)(0x0));
	void __fastcall MarshalConverter(System::TObject* Data, System::UnicodeString Field)/* overload */;
	void __fastcall MarshalConverter(System::TObject* Data, System::UnicodeString Field, TConverterEvent* ConverterEvent)/* overload */;
	void __fastcall MarshalConverter(System::TObject* Data, System::UnicodeString Field, TJSONInterceptor* ConverterEvent)/* overload */;
	void __fastcall MarshalTypeConverter(System::TObject* Data, System::UnicodeString Field, TConverterEvent* ConverterEvent)/* overload */;
	void __fastcall MarshalTypeConverter(System::TObject* Data, System::UnicodeString Field, TJSONInterceptor* ConverterEvent)/* overload */;
	virtual void __fastcall AddWarning(System::TObject* Data, System::UnicodeString FieldClassUnit, System::UnicodeString FieldClassName, System::UnicodeString FieldTypeUnit, System::UnicodeString FieldTypeName, System::UnicodeString FieldName);
	
public:
	__fastcall virtual TTypeMarshaller__1(TConverter__1<TSerial>* Converter, bool OwnConverter)/* overload */;
	__fastcall virtual TTypeMarshaller__1(TConverter__1<TSerial>* Converter, bool OwnConverter, Generics_collections::TObjectDictionary__2<System::UnicodeString,TConverterEvent*>* Converters)/* overload */;
	__fastcall virtual ~TTypeMarshaller__1(void);
	__classmethod System::UnicodeString __fastcall ComposeKey(System::TClass clazz, System::UnicodeString Field)/* overload */;
	virtual TSerial __fastcall Marshal(System::TObject* Data);
	void __fastcall RegisterConverter(System::TClass clazz, System::UnicodeString Field, TConverterEvent* Converter)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, System::UnicodeString Field, _di_TObjectsConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, System::UnicodeString Field, _di_TObjectConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, System::UnicodeString Field, _di_TStringsConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, System::UnicodeString Field, _di_TStringConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, _di_TTypeObjectsConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, _di_TTypeObjectConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, _di_TTypeStringsConverter func)/* overload */;
	void __fastcall RegisterConverter(System::TClass clazz, _di_TTypeStringConverter func)/* overload */;
	bool __fastcall HasWarnings(void);
	virtual void __fastcall ClearWarnings(bool OwnWarningObject = true);
	__property System::DynamicArray<TTransientField*> Warnings = {read=FWarnings};
	// __property System::TArray__1<TTransientField*>  Warnings = ...;
};


class DELPHICLASS TJSONConverter;
class PASCALIMPLEMENTATION TJSONConverter : public TConverter__1<Dbxjson::TJSONValue*>
{
	typedef TConverter__1<Dbxjson::TJSONValue*> inherited;
	
private:
	Dbxjson::TJSONValue* FRoot;
	Generics_collections::TStack__1<Dbxjson::TJSONAncestor*>* FStack;
	
protected:
	virtual Dbxjson::TJSONValue* __fastcall GetSerializedData(void);
	virtual void __fastcall ProcessData(Dbxjson::TJSONAncestor* Data);
	Dbxjson::TJSONAncestor* __fastcall GetCurrent(void);
	__property Dbxjson::TJSONAncestor* Current = {read=GetCurrent};
	
public:
	__fastcall virtual TJSONConverter(void);
	__fastcall virtual ~TJSONConverter(void);
	virtual void __fastcall Clear(void);
	virtual void __fastcall OnRefType(System::UnicodeString TypeName, int id);
	virtual void __fastcall OnTypeStart(System::UnicodeString TypeName, int id);
	virtual void __fastcall OnTypeEnd(System::UnicodeString TypeName, int id);
	virtual void __fastcall OnFieldStart(System::UnicodeString FieldName);
	virtual void __fastcall OnFieldEnd(System::UnicodeString FieldName);
	virtual void __fastcall OnListStart(void);
	virtual void __fastcall OnListEnd(void);
	virtual void __fastcall OnString(System::UnicodeString Data);
	virtual void __fastcall OnNumber(System::UnicodeString Data);
	virtual void __fastcall OnBoolean(bool Data);
	virtual void __fastcall OnNull(void);
	virtual bool __fastcall IsConsistent(void);
	virtual void __fastcall SetCurrentValue(Dbxjson::TJSONValue* Data);
};


class DELPHICLASS TJSONMarshal;
class PASCALIMPLEMENTATION TJSONMarshal : public TTypeMarshaller__1<Dbxjson::TJSONValue*>
{
	typedef TTypeMarshaller__1<Dbxjson::TJSONValue*> inherited;
	
public:
	__fastcall TJSONMarshal(void)/* overload */;
	__fastcall virtual TJSONMarshal(TConverter__1<Dbxjson::TJSONValue*>* Converter, bool OwnConverter)/* overload */;
	__fastcall virtual TJSONMarshal(TConverter__1<Dbxjson::TJSONValue*>* Converter, bool OwnConverter, Generics_collections::TObjectDictionary__2<System::UnicodeString,TConverterEvent*>* Converters)/* overload */;
public:
	/* {DBXJSONReflect}TTypeMarshaller<DBXJSON_TJSONValue>.Destroy */ inline __fastcall virtual ~TJSONMarshal(void) { }
	
};


class DELPHICLASS TJSONUnMarshal;
class PASCALIMPLEMENTATION TJSONUnMarshal : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Generics_collections::TDictionary__2<System::UnicodeString,System::TObject*>* FObjectHash;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,TReverterEvent*>* FReverters;
	Rtti::TRttiContext FRTTICtx;
	bool FShareReverters;
	__classmethod Rtti::TRttiType* __fastcall ObjectType(Rtti::TRttiContext Ctx, System::UnicodeString TypeName);
	
public:
	__classmethod System::TObject* __fastcall ObjectInstance(Rtti::TRttiContext Ctx, System::UnicodeString TypeName);
	
protected:
	bool __fastcall HasReverter(System::UnicodeString key);
	TJSONInterceptor* __fastcall FieldReverter(Rtti::TRttiField* Field)/* overload */;
	TJSONInterceptor* __fastcall FieldReverter(System::TObject* Data, System::UnicodeString Field)/* overload */;
	TJSONInterceptor* __fastcall FieldTypeReverter(Rtti::TRttiType* ctxType)/* overload */;
	TJSONInterceptor* __fastcall FieldTypeReverter(System::TObject* Data, System::UnicodeString Field)/* overload */;
	TReverterEvent* __fastcall Reverter(System::UnicodeString key);
	System::TClass __fastcall ClassTypeOf(System::TObject* Data, System::UnicodeString Field);
	bool __fastcall HasObject(System::UnicodeString ObjId);
	void __fastcall StoreObject(System::UnicodeString ObjId, System::TObject* Obj);
	System::TObject* __fastcall GetObject(System::UnicodeString ObjId);
	Rtti::TRttiField* __fastcall GetFieldType(System::TObject* Data, System::UnicodeString Field);
	void __fastcall SetField(System::TObject* Data, System::UnicodeString Field, System::TObject* Value)/* overload */;
	void __fastcall SetField(System::TObject* Data, System::UnicodeString Field, System::UnicodeString Value)/* overload */;
	void __fastcall SetField(System::TObject* Data, System::UnicodeString Field, bool Value)/* overload */;
	void __fastcall SetFieldNull(System::TObject* Data, System::UnicodeString Field);
	void __fastcall SetFieldArray(System::TObject* Data, System::UnicodeString Field, Dbxjson::TJSONArray* Value);
	System::TObject* __fastcall CreateObject(Dbxjson::TJSONObject* JsonObj);
	void __fastcall PopulateFields(Dbxjson::TJSONObject* JsonFields, System::TObject* Data);
	TListOfObjects __fastcall GetArgObjects(Dbxjson::TJSONArray* JsonArray);
	TListOfStrings __fastcall GetArgStrings(Dbxjson::TJSONArray* JsonArray);
	Rtti::TValue __fastcall JSONToTValue(Dbxjson::TJSONValue* JsonValue, Rtti::TRttiType* rttiType);
	Rtti::TValue __fastcall StringToTValue(System::UnicodeString Value, Typinfo::PTypeInfo typeInfo);
	void __fastcall RevertType(Rtti::TRttiField* recField, void * Instance, TReverterEvent* revEv, Dbxjson::TJSONValue* jsonFieldVal)/* overload */;
	void __fastcall RevertType(Rtti::TRttiField* recField, void * Instance, TJSONInterceptor* revEv, Dbxjson::TJSONValue* jsonFieldVal)/* overload */;
	
public:
	__fastcall virtual TJSONUnMarshal(void)/* overload */;
	__fastcall virtual TJSONUnMarshal(Generics_collections::TObjectDictionary__2<System::UnicodeString,TReverterEvent*>* Reverters)/* overload */;
	__fastcall virtual ~TJSONUnMarshal(void);
	System::TObject* __fastcall Unmarshal(Dbxjson::TJSONValue* Data);
	void __fastcall RegisterReverter(System::TClass clazz, System::UnicodeString Field, TReverterEvent* Reverter)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, System::UnicodeString Field, _di_TObjectsReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, System::UnicodeString Field, _di_TObjectReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, System::UnicodeString Field, _di_TStringsReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, System::UnicodeString Field, _di_TStringReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, _di_TTypeObjectsReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, _di_TTypeObjectReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, _di_TTypeStringsReverter func)/* overload */;
	void __fastcall RegisterReverter(System::TClass clazz, _di_TTypeStringReverter func)/* overload */;
};


class DELPHICLASS TSerStringItem;
class PASCALIMPLEMENTATION TSerStringItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FString;
	System::TObject* FObject;
	
public:
	__fastcall TSerStringItem(System::UnicodeString AString, System::TObject* AObject);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSerStringItem(void) { }
	
};


class DELPHICLASS TSerStringList;
class PASCALIMPLEMENTATION TSerStringList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<TSerStringItem*> _TSerStringList__1;
	
	
private:
	_TSerStringList__1 FSerStringItemList;
	bool FSorted;
	Classes::TDuplicates FDuplicates;
	bool FCaseSensitive;
	
public:
	__fastcall TSerStringList(Classes::TStringList* source);
	__fastcall virtual ~TSerStringList(void);
	Classes::TStringList* __fastcall AsStringList(void);
};


class DELPHICLASS TStringListInterceptor;
class PASCALIMPLEMENTATION TStringListInterceptor : public TJSONInterceptor
{
	typedef TJSONInterceptor inherited;
	
public:
	virtual System::TObject* __fastcall TypeObjectConverter(System::TObject* Data);
	virtual System::TObject* __fastcall TypeObjectReverter(System::TObject* Data);
public:
	/* TObject.Create */ inline __fastcall TStringListInterceptor(void) : TJSONInterceptor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStringListInterceptor(void) { }
	
};


class DELPHICLASS TJSONConverters;
class PASCALIMPLEMENTATION TJSONConverters : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Generics_collections::TObjectDictionary__2<System::UnicodeString,TConverterEvent*>* CFRegConverters;
	static Generics_collections::TObjectDictionary__2<System::UnicodeString,TReverterEvent*>* CFRegReverters;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__classmethod TJSONMarshal* __fastcall GetJSONMarshaler();
	__classmethod TJSONUnMarshal* __fastcall GetJSONUnMarshaler();
	__classmethod void __fastcall AddConverter(TConverterEvent* event);
	__classmethod void __fastcall AddReverter(TReverterEvent* event);
public:
	/* TObject.Create */ inline __fastcall TJSONConverters(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONConverters(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TListOfObjects __fastcall JSONObjectPairListConverter(System::TObject* Data, System::UnicodeString Field);
extern PACKAGE TListOfObjects __fastcall JSONArrayElementsConverter(System::TObject* Data, System::UnicodeString Field);
extern PACKAGE void __fastcall JSONObjectPairListReverter(System::TObject* Data, System::UnicodeString Field, TListOfObjects Args);
extern PACKAGE void __fastcall JSONArrayElementsReverter(System::TObject* Data, System::UnicodeString Field, TListOfObjects Args);
extern PACKAGE System::TObject* __fastcall StringListConverter(System::TObject* Data);
extern PACKAGE System::TObject* __fastcall StringListReverter(System::TObject* Ser);
extern PACKAGE bool __fastcall JSONBooleanAttributeValue(Rtti::TRttiNamedObject* rttiObject, System::TClass AttributeClass, bool DefaultValue = false);

}	/* namespace Dbxjsonreflect */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxjsonreflect;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxjsonreflectHPP
