// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwtable.pas' rev: 22.00

#ifndef WwtableHPP
#define WwtableHPP

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
#include <Wwlocate.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwbdecommon.hpp>	// Pascal unit
#include <DBCommonTypes.hpp>	// Pascal unit
#include <BDE.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwtable
{
//-- type declarations -------------------------------------------------------
typedef bool *PtrBoolean;

typedef Classes::TStrings TwwTableDisplayType;

class DELPHICLASS TwwTable;
typedef void __fastcall (__closure *TwwTableFilterEvent)(TwwTable* table, bool &accept);

class PASCALIMPLEMENTATION TwwTable : public Dbtables::TTable
{
	typedef Dbtables::TTable inherited;
	
private:
	Classes::TStrings* FFilter;
	Classes::TStrings* FQuery;
	Classes::TStrings* FPictureMasks;
	Classes::TStrings* FLookupFields;
	Classes::TStrings* FLookupLinks;
	Classes::TStrings* FControlType;
	bool FUsePictureMask;
	bool FSyncSQLByRange;
	bool FNarrowSearch;
	Wwtypes::TwwInvalidValueEvent FOnInvalidValue;
	Wwtypes::TwwOnFilterOptions FOnFilterOptions;
	Db::TDataSetNotifyEvent FOnFilterEscape;
	TwwTableFilterEvent FOnFilter;
	void *FFilterBuffer;
	char *FFilterFieldBuffer;
	Bde::_hDBIObj *hFilter;
	Bde::_hDBIObj *hFilterFunction;
	Db::TParam* FFilterParam;
	bool FIsSequencable;
	System::Word FNarrowSearchUpperChar;
	System::UnicodeString QueryType;
	Classes::TNotifyEvent FOnDestroy;
	Classes::TList* dependentPtrs;
	Bde::_hDBIObj *rangeFilter;
	bool isOpen;
	Classes::TStrings* PdxMasks;
	bool InitPdxMasks;
	int CallCount;
	Classes::TStrings* __fastcall getLookupFields(void);
	void __fastcall setLookupFields(Classes::TStrings* sel);
	Classes::TStrings* __fastcall getPictureMasks(void);
	void __fastcall setPictureMasks(Classes::TStrings* sel);
	Classes::TStrings* __fastcall getLookupLinks(void);
	void __fastcall setLookupLinks(Classes::TStrings* sel);
	Classes::TStrings* __fastcall getControlType(void);
	void __fastcall setControlType(Classes::TStrings* sel);
	void __fastcall setFilterArray(Classes::TStrings* sel);
	Classes::TStrings* __fastcall getFilter(void);
	void __fastcall SetOnFilter(TwwTableFilterEvent val);
	int __fastcall GetFilterCount(void);
	void __fastcall SetQuery(Classes::TStrings* sel);
	bool __fastcall isSequencableTable(void);
	HIDESBASE void __fastcall SetTableName(const Sysutils::TFileName Value);
	Sysutils::TFileName __fastcall GetTableName(void);
	void __fastcall DoInitPdxMasks(void);
	bool __fastcall FindFieldsToIndex(System::UnicodeString AIndexFields, bool CaseSensitive, bool exactFieldMatch, System::UnicodeString &newIndexName);
	void __fastcall SetOnFilterOptions(Wwtypes::TwwOnFilterOptions val);
	
protected:
	virtual void __fastcall PrepareCursor(void);
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall CloseCursor(void);
	virtual Bde::hDBICur __fastcall CreateHandle(void);
	System::Word __fastcall PerformQuery(Bde::hDBICur &AdbiHandle);
	virtual void __fastcall DoBeforePost(void);
	virtual void __fastcall InitFieldDefs(void);
	virtual void __fastcall DoOnCalcFields(void);
	System::UnicodeString __fastcall GetIndexFieldName(void);
	void __fastcall SetIndexFieldName(System::UnicodeString val);
	virtual void __fastcall DataEvent(Db::TDataEvent Event, int Info);
	virtual int __fastcall GetNextRecords(void);
	void __fastcall ResetMouseCursor(void);
	
public:
	bool UpToDate;
	bool UpToDateRes;
	System::UnicodeString CalcLookupLinks;
	void *wwInternalPtr;
	bool inFilterEvent;
	bool InLookupLink;
	int InFindRecordCount;
	bool IgnoreMasterLink;
	Classes::TList* lookupTables;
	bool ProcessingOnFilter;
	virtual bool __fastcall IsSequenced(void);
	__property bool IsSequencable = {read=FIsSequencable, nodefault};
	__property int FilterCount = {read=GetFilterCount, nodefault};
	__fastcall virtual TwwTable(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwTable(void);
	void __fastcall RefreshLinks(void);
	bool __fastcall IsValidField(System::UnicodeString fieldName);
	void __fastcall RemoveObsoleteLinks(void);
	void __fastcall SyncSQLTable(Dbtables::TTable* lookupTable);
	void __fastcall FreeLookupTables(void);
	bool __fastcall wwFindNearest(System::UnicodeString key, int FieldNo);
	bool __fastcall wwFindKey(System::TVarRec const *KeyValues, const int KeyValues_Size);
	bool __fastcall wwFindRecord(System::UnicodeString KeyValue, System::UnicodeString LookupField, Wwlocate::TwwLocateMatchType MatchType, bool CaseSensitive);
	void __fastcall wwChangeIndex(Db::TIndexDef* a_indexItem);
	void __fastcall wwChangeIndexName(System::UnicodeString a_indexName);
	void __fastcall AddDependentTablePtr(PtrBoolean a_value);
	void __fastcall RemoveDependentTablePtr(PtrBoolean a_value);
	void __fastcall wwSetRangeStart(System::TVarRec const *startValues, const int startValues_Size);
	bool __fastcall Pack(System::UnicodeString &statusMsg);
	bool __fastcall setFilter(System::UnicodeString sel);
	System::UnicodeString __fastcall FilterString(void);
	bool __fastcall IsParadoxTable(void);
	bool __fastcall IsDBaseTable(void);
	bool __fastcall FilterActivate(void);
	System::UnicodeString __fastcall IndexToFields(System::UnicodeString aIndexName);
	System::UnicodeString __fastcall FieldsToIndex(System::UnicodeString aIndexFields);
	System::UnicodeString __fastcall FieldstoIndexWithCase(System::UnicodeString aIndexFields, bool caseSensitive);
	System::UnicodeString __fastcall GetDBPicture(System::UnicodeString curFieldName);
	void __fastcall UpdateIndexes(void);
	void __fastcall FastCancelRange(void);
	void __fastcall ClearCurrentRangeBuffers(void);
	bool __fastcall SetLookupField(Db::TField* Field);
	bool __fastcall isCaseInsensitiveIndex(void);
	void __fastcall LoadPdxMasks(void);
	__property Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
	__property System::UnicodeString IndexFieldName = {read=GetIndexFieldName, write=SetIndexFieldName};
	
__published:
	__property Classes::TStrings* LookupFields = {read=getLookupFields, write=setLookupFields, stored=true};
	__property Classes::TStrings* LookupLinks = {read=getLookupLinks, write=setLookupLinks, stored=true};
	__property Classes::TStrings* ControlType = {read=getControlType, write=setControlType, stored=true};
	__property Classes::TStrings* PictureMasks = {read=getPictureMasks, write=setPictureMasks};
	__property Classes::TStrings* wwFilter = {read=getFilter, write=setFilterArray};
	__property bool SyncSQLByRange = {read=FSyncSQLByRange, write=FSyncSQLByRange, nodefault};
	__property bool NarrowSearch = {read=FNarrowSearch, write=FNarrowSearch, nodefault};
	__property System::Word NarrowSearchUpperChar = {read=FNarrowSearchUpperChar, write=FNarrowSearchUpperChar, default=255};
	__property Classes::TStrings* Query = {read=FQuery, write=SetQuery};
	__property TableName = {read=GetTableName, write=SetTableName};
	__property bool ValidateWithMask = {read=FUsePictureMask, write=FUsePictureMask, nodefault};
	__property Wwtypes::TwwInvalidValueEvent OnInvalidValue = {read=FOnInvalidValue, write=FOnInvalidValue};
	__property TwwTableFilterEvent OnFilter = {read=FOnFilter, write=SetOnFilter};
	__property Db::TDataSetNotifyEvent OnFilterEscape = {read=FOnFilterEscape, write=FOnFilterEscape};
	__property Wwtypes::TwwOnFilterOptions OnFilterOptions = {read=FOnFilterOptions, write=SetOnFilterOptions, default=3};
	bool __fastcall SetToIndexContainingFields(Classes::TStrings* selected);
	bool __fastcall SetToIndexContainingField(System::UnicodeString selected);
	System::Variant __fastcall GetVariableWithParams(System::UnicodeString VariableName, const System::Variant &Params);
	System::Variant __fastcall GetVariableWithParams2(System::UnicodeString VariableName, System::TVarRec const *StartValues, const int StartValues_Size, System::TVarRec const *EndValues, const int EndValues_Size);
	System::Variant __fastcall GetVariable(System::UnicodeString VariableName);
	System::TObject* __fastcall GetVariableObject(System::UnicodeString VariableName, const System::Variant &Param);
	void __fastcall SetVariable(System::UnicodeString VariableName, const System::Variant &value);
	void __fastcall SetVariableObject(System::UnicodeString VariableName, System::TObject* Value);
	Db::TParam* __fastcall wwFilterField(System::UnicodeString AFieldName);
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwtable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwtable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwtableHPP
