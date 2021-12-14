// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwqbe.pas' rev: 22.00

#ifndef WwqbeHPP
#define WwqbeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <wwfilter.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <Wwtable.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwbdecommon.hpp>	// Pascal unit
#include <BDE.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwqbe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwQBE;
typedef void __fastcall (__closure *TwwQBEFilterEvent)(TwwQBE* Qbe, bool &Accept);

typedef void __fastcall (__closure *TwwQBEErrorEvent)(TwwQBE* Qbe, int ErrorCode);

class PASCALIMPLEMENTATION TwwQBE : public Dbtables::TDBDataSet
{
	typedef Dbtables::TDBDataSet inherited;
	
private:
	Classes::TStrings* FLookupFields;
	Classes::TStrings* FLookupLinks;
	Classes::TStrings* FControlType;
	Classes::TStrings* FPictureMasks;
	Classes::TStrings* FQBE;
	System::UnicodeString FAnswerTable;
	bool FAuxiliaryTables;
	bool FBlankAsZero;
	Classes::TStrings* FParamValues;
	TwwQBEErrorEvent FOnError;
	Classes::TStringList* FParams;
	bool bSkipCreateHandle;
	bool bUpdateQuery;
	Bde::_hDBIObj *TempHandle;
	Wwtypes::TwwInvalidValueEvent FOnInvalidValue;
	Wwtypes::TwwOnFilterOptions FOnFilterOptions;
	Db::TDataSetNotifyEvent FOnFilterEscape;
	TwwQBEFilterEvent FOnFilter;
	void *FFilterBuffer;
	char *FFilterFieldBuffer;
	Bde::_hDBIObj *hFilterFunction;
	Db::TParam* FFilterParam;
	int CallCount;
	void __fastcall SetOnFilter(TwwQBEFilterEvent val);
	void __fastcall SetQBE(Classes::TStrings* QBE);
	Classes::TStrings* __fastcall GetLookupFields(void);
	void __fastcall SetLookupFields(Classes::TStrings* sel);
	Classes::TStrings* __fastcall GetLookupLinks(void);
	void __fastcall SetLookupLinks(Classes::TStrings* sel);
	Classes::TStrings* __fastcall getControlType(void);
	void __fastcall SetControlType(Classes::TStrings* sel);
	Classes::TStrings* __fastcall GetPictureMasks(void);
	void __fastcall SetPictureMasks(Classes::TStrings* sel);
	void __fastcall SetOnFilterOptions(Wwtypes::TwwOnFilterOptions val);
	
protected:
	virtual void __fastcall DoOnCalcFields(void);
	virtual Bde::hDBICur __fastcall CreateHandle(void);
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall DoAfterOpen(void);
	virtual System::Word __fastcall PerformQuery(Bde::hDBICur &AdbiHandle);
	virtual void __fastcall DataEvent(Db::TDataEvent Event, int Info);
	virtual int __fastcall GetNextRecords(void);
	void __fastcall ResetMouseCursor(void);
	
public:
	Classes::TList* LookupTables;
	bool inFilterEvent;
	bool ProcessingOnFilter;
	virtual bool __fastcall IsSequenced(void);
	__fastcall virtual TwwQBE(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwQBE(void);
	bool __fastcall IsValidField(System::UnicodeString fieldName);
	void __fastcall RemoveObsoleteLinks(void);
	void __fastcall FreeLookupTables(void);
	bool __fastcall SaveAnswerTable(System::UnicodeString tableName);
	Db::TParam* __fastcall wwFilterField(System::UnicodeString AFieldName);
	void __fastcall SetParam(System::UnicodeString paramName, System::UnicodeString paramValue);
	void __fastcall ClearParams(void);
	System::UnicodeString __fastcall GetParam(System::UnicodeString paramName);
	
__published:
	__property Classes::TStrings* ControlType = {read=getControlType, write=SetControlType};
	__property Classes::TStrings* LookupFields = {read=GetLookupFields, write=SetLookupFields};
	__property Classes::TStrings* LookupLinks = {read=GetLookupLinks, write=SetLookupLinks};
	__property Classes::TStrings* QBE = {read=FQBE, write=SetQBE};
	__property System::UnicodeString AnswerTable = {read=FAnswerTable, write=FAnswerTable};
	__property bool AuxiliaryTables = {read=FAuxiliaryTables, write=FAuxiliaryTables, nodefault};
	__property bool BlankAsZero = {read=FBlankAsZero, write=FBlankAsZero, nodefault};
	__property Classes::TStrings* PictureMasks = {read=GetPictureMasks, write=SetPictureMasks};
	__property UpdateObject;
	__property TwwQBEFilterEvent OnFilter = {read=FOnFilter, write=SetOnFilter};
	__property Db::TDataSetNotifyEvent OnFilterEscape = {read=FOnFilterEscape, write=FOnFilterEscape};
	__property Wwtypes::TwwOnFilterOptions OnFilterOptions = {read=FOnFilterOptions, write=SetOnFilterOptions, default=3};
	__property Wwtypes::TwwInvalidValueEvent OnInvalidValue = {read=FOnInvalidValue, write=FOnInvalidValue};
	__property TwwQBEErrorEvent OnError = {read=FOnError, write=FOnError};
	System::TObject* __fastcall GetVariableObject(System::UnicodeString VariableName, const System::Variant &Param);
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwqbe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwqbe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwqbeHPP
