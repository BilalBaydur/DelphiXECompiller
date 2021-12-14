// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwcommon.pas' rev: 22.00

#ifndef WwcommonHPP
#define WwcommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Wwlocate.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <DateUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwcommon
{
//-- type declarations -------------------------------------------------------
typedef System::UnicodeString wwSmallString;

//-- var, const, procedure ---------------------------------------------------
#define WW_DB_COMBO L"Combo"
#define WW_DB_LOOKUP_COMBO L"LookupCombo"
#define WW_DB_EDIT L"CustomEdit"
#define WW_DB_RICHEDIT L"RichEdit"
extern PACKAGE Wwtypes::TwwInvalidValueEvent __fastcall wwGetOnInvalidValue(Db::TDataSet* DataSet);
extern PACKAGE Wwtypes::TwwPerformSearchEvent __fastcall wwGetOnPerformCustomSearch(Classes::TComponent* Component);
extern PACKAGE System::TMethod __fastcall wwGetCalcCellColorsEvent(Controls::TWinControl* Grid);
extern PACKAGE Classes::TComponent* __fastcall wwGetPictureControl(Classes::TComponent* Control, Db::TDataSet* DataSet = (Db::TDataSet*)(0x0));
extern PACKAGE Classes::TComponent* __fastcall wwGetControlTypeControl(Classes::TComponent* Control, Db::TDataSet* DataSet = (Db::TDataSet*)(0x0));
extern PACKAGE Classes::TStrings* __fastcall wwGetStrings(Classes::TComponent* Component, System::UnicodeString PropertyName);
extern PACKAGE Classes::TStrings* __fastcall wwGetPictureMasks(Classes::TComponent* DataSet);
extern PACKAGE Classes::TStrings* __fastcall wwGetRegexMasks(Classes::TComponent* DataSet);
extern PACKAGE Classes::TStrings* __fastcall wwGetControlType(Classes::TComponent* dataSet);
extern PACKAGE int __fastcall wwGetCommandType(Db::TDataSet* DataSet);
extern PACKAGE int __fastcall wwGetDatabaseCursorType(Db::TDataSet* DataSet);
extern PACKAGE bool __fastcall wwSetDatabaseCursorType(Db::TDataSet* DataSet, int val);
extern PACKAGE bool __fastcall wwSetDatabaseMaxRecords(Db::TDataSet* DataSet, int val);
extern PACKAGE bool __fastcall wwGetValidateWithMask(Db::TDataSet* dataSet);
extern PACKAGE bool __fastcall wwGetControlInfoInDataSet(Classes::TComponent* component);
extern PACKAGE bool __fastcall wwGetPictureMaskFromDataSet(Classes::TComponent* Component);
extern PACKAGE Classes::TStrings* __fastcall wwGetLookupFields(Db::TDataSet* dataSet);
extern PACKAGE Classes::TStrings* __fastcall wwGetLookupLinks(Db::TDataSet* dataSet);
extern PACKAGE Classes::TList* __fastcall wwGetLookupTables(Db::TDataSet* dataSet);
extern PACKAGE System::UnicodeString __fastcall wwDataSetGetLinks(Db::TDataSet* dataSet, System::UnicodeString lookupFieldName);
extern PACKAGE System::UnicodeString __fastcall wwDataSetGetDisplayField(Db::TDataSet* dataSet, System::UnicodeString lookupFieldName);
extern PACKAGE System::UnicodeString __fastcall wwGetDatabaseName(Db::TDataSet* dataSet);
extern PACKAGE Classes::TComponent* __fastcall wwGetConnection(Db::TDataSet* dataSet);
extern PACKAGE bool __fastcall wwHaveDatabase(Db::TDataSet* dataSet);
extern PACKAGE System::UnicodeString __fastcall wwGetConnectionString(Db::TDataSet* dataSet);
extern PACKAGE Classes::TComponent* __fastcall wwGetIBDatabase(Db::TDataSet* dataSet);
extern PACKAGE bool __fastcall wwSetIBDatabase(Db::TDataSet* Dataset, Classes::TComponent* db);
extern PACKAGE bool __fastcall wwGetAlwaysTransparent(Controls::TControl* ctrl);
extern PACKAGE System::UnicodeString __fastcall wwGetTableName(Db::TDataSet* dataSet);
extern PACKAGE bool __fastcall wwDataSetIsValidField(Classes::TComponent* dataset, System::UnicodeString fieldName);
extern PACKAGE void __fastcall wwDataSetUpdateFieldProperties(Db::TDataSet* dataSet, Classes::TStrings* selected);
extern PACKAGE bool __fastcall wwDataSet(Db::TDataSet* dataSet);
extern PACKAGE void __fastcall wwDebug(System::UnicodeString s);
extern PACKAGE bool __fastcall wwDataSetLookupDisplayField(Db::TField* curField, System::UnicodeString &LookupValue, Db::TField* &DisplayField);
extern PACKAGE bool __fastcall wwTableFindRecord(Db::TDataSet* LookupTable, System::UnicodeString KeyValue, System::UnicodeString LookupField, Wwlocate::TwwLocateMatchType MatchType, bool caseSensitive);
extern PACKAGE bool __fastcall wwDoLookupTable(Db::TDataSet* ALookupTable, Db::TDataSet* DataSet, Classes::TStrings* links);
extern PACKAGE bool __fastcall wwisNonBDEField(Db::TField* thisField);
extern PACKAGE bool __fastcall wwisNonPhysicalField(Db::TField* thisField);
extern PACKAGE void __fastcall wwConvertFieldToParam(Db::TField* OtherField, Db::TParam* &AFilterParam, char * AFilterFieldBuffer);
extern PACKAGE Db::TField* __fastcall wwDataSet_GetFilterLookupField(Db::TDataSet* dataSet, Db::TField* curfield, const System::TMethod &AMethod);
extern PACKAGE void __fastcall wwDataSetDoOnCalcFields(Db::TDataSet* dataSet, Classes::TStrings* FLookupFields, Classes::TStrings* FLookupLinks, Classes::TList* lookupTables);
extern PACKAGE bool __fastcall wwDataSetSyncLookupTable(Db::TDataSet* dataSet, Db::TDataSet* AlookupTable, System::UnicodeString lookupFieldName, System::UnicodeString &fromField);
extern PACKAGE void __fastcall wwDataSet_GetControl(Classes::TComponent* dataSet, System::UnicodeString AFieldName, System::UnicodeString &AControlType, System::UnicodeString &AParameters);
extern PACKAGE void __fastcall wwDataSetRemoveObsolete(Classes::TComponent* dataSet, Classes::TStrings* FLookupFields, Classes::TStrings* FLookupLinks, Classes::TStrings* FControlType);
extern PACKAGE void __fastcall wwDataSet_SetControl(Classes::TComponent* dataSet, System::UnicodeString AFieldName, System::UnicodeString AComponentType, System::UnicodeString AParameters);
extern PACKAGE bool __fastcall wwFieldIsValidValue(Db::TField* fld, System::UnicodeString key);
extern PACKAGE bool __fastcall wwFieldIsValidLocateValue(Db::TField* fld, System::UnicodeString key);
extern PACKAGE bool __fastcall wwIsValidValue(Db::TFieldType FldType, System::UnicodeString key);
extern PACKAGE void __fastcall wwIsValidValue2(Db::TFieldType FldType, System::UnicodeString key);
extern PACKAGE bool __fastcall wwTableFindNearest(Db::TDataSet* dataSet, System::UnicodeString key, int FieldNo);
extern PACKAGE void __fastcall wwTableChangeIndex(Db::TDataSet* dataSet, Db::TIndexDef* a_indexItem);
extern PACKAGE bool __fastcall wwInPaintCopyState(Controls::TControlState ControlState);
extern PACKAGE void __fastcall wwPlayKeystroke(HWND Handle, System::Word VKChar, System::Word VKShift);
extern PACKAGE void __fastcall wwClearAltChar(void);
extern PACKAGE bool __fastcall wwMemAvail(int memSize);
extern PACKAGE void __fastcall wwPictureByField(Classes::TComponent* DataSet, System::UnicodeString FieldName, bool FromTable, System::UnicodeString &Mask, bool &AutoFill, bool &UsePictureMask);
extern PACKAGE void __fastcall wwRegexByField(Classes::TComponent* DataSet, System::UnicodeString FieldName, System::UnicodeString &Mask, bool &CaseSensitive, System::UnicodeString &ErrorMsg);
extern PACKAGE void __fastcall wwDataModuleChanged(Classes::TComponent* temp);
extern PACKAGE void __fastcall wwSetPictureMask(Classes::TComponent* dataSet, System::UnicodeString AFieldName, System::UnicodeString AMask, bool AutoFill, bool UsePictureMask, bool SetMask, bool SetAutoFill, bool SetUsePictureMask);
extern PACKAGE void __fastcall wwSetRegexMasks(Classes::TComponent* dataSet, System::UnicodeString AFieldName, System::UnicodeString AMask, bool CaseSensitive, System::UnicodeString ErrorMsg);
extern PACKAGE System::UnicodeString __fastcall wwGetFieldNameFromTitle(Db::TDataSet* DataSet, System::UnicodeString fieldTitle);
extern PACKAGE int __fastcall wwGetListIndex(Classes::TStrings* list, System::UnicodeString itemName);
extern PACKAGE Forms::TCustomForm* __fastcall wwGetOwnerForm(Classes::TComponent* component);
extern PACKAGE Classes::TComponent* __fastcall wwGetOwnerFrameOrForm(Classes::TComponent* component);
extern PACKAGE bool __fastcall isWWEditControl(System::UnicodeString pname);
extern PACKAGE void __fastcall wwDrawGlyph(Graphics::TBitmap* Bitmap, Graphics::TCanvas* Canvas, const Types::TRect &R, Buttons::TButtonState State, bool Enabled, bool Transparent, bool FlatButtonTransparent, Controls::TControlState ControlState);
extern PACKAGE void __fastcall wwDrawEllipsis(Graphics::TCanvas* Canvas, const Types::TRect &R, Buttons::TButtonState State, bool Enabled, bool Transparent, bool FlatButtonTransparent, Controls::TControlState ControlState);
extern PACKAGE void __fastcall wwDrawDropDownArrow(Graphics::TCanvas* Canvas, const Types::TRect &R, Buttons::TButtonState State, bool Enabled, Controls::TControlState ControlState);
extern PACKAGE bool __fastcall wwHasIndex(Db::TDataSet* ADataSet);
extern PACKAGE bool __fastcall wwIsTableQuery(Db::TDataSet* ADataSet);
extern PACKAGE System::UnicodeString __fastcall wwPdxPictureMask(Db::TDataSet* ADataSet, System::UnicodeString AFieldName);
extern PACKAGE void __fastcall wwFixMouseDown(void);
extern PACKAGE void __fastcall wwValidatePictureFields(Db::TDataSet* ADataSet, Wwtypes::TwwInvalidValueEvent FOnInvalidValue);
extern PACKAGE bool __fastcall wwDataSetFindRecord(Db::TDataSet* DataSet, System::UnicodeString KeyValue, System::UnicodeString LookupField, Wwlocate::TwwLocateMatchType MatchType, bool caseSensitive);
extern PACKAGE bool __fastcall wwValidFilterableFieldType(Db::TFieldType ADataType);
extern PACKAGE void __fastcall wwALinkHelp(HWND Handle, System::UnicodeString ALink);
extern PACKAGE void __fastcall wwHelp(HWND Handle, System::WideChar * HelpTopic);
extern PACKAGE bool __fastcall wwIsValidChar(System::Word key);
extern PACKAGE void __fastcall wwDataSet_SetLookupLink(Db::TDataSet* dataSet, System::UnicodeString FldName, System::UnicodeString DatabaseName, System::UnicodeString TableName, System::UnicodeString DisplayFld, System::UnicodeString IndexFieldNames, System::UnicodeString Links, System::WideChar useExtension);
extern PACKAGE void __fastcall wwDataSetUpdateSelected(Db::TDataSet* dataSet, Classes::TStrings* selected);
extern PACKAGE bool __fastcall wwFindSelected(Classes::TStrings* selected, System::UnicodeString FieldName, int &index);
extern PACKAGE int __fastcall wwAdjustPixels(int PixelSize, int PixelsPerInch);
extern PACKAGE void __fastcall wwSetOnFilterEnabled(Db::TDataSet* dataset, bool val);
extern PACKAGE Wwtypes::TwwOnFilterOptions __fastcall wwGetOnFilterOptions(Db::TDataSet* dataset);
extern PACKAGE bool __fastcall wwProcessEscapeFilterEvent(Db::TDataSet* dataset);
extern PACKAGE int __fastcall wwmax(int x, int y);
extern PACKAGE int __fastcall wwmin(int x, int y);
extern PACKAGE int __fastcall wwDataSetCompareBookmarks(Db::TDataSet* DataSet, System::DynamicArray<System::Byte> Bookmark1, System::DynamicArray<System::Byte> Bookmark2);
extern PACKAGE bool __fastcall wwIsClass(System::TClass ClassType, const System::UnicodeString Name)/* overload */;
extern PACKAGE bool __fastcall wwIsClass(Classes::TComponent* component, const System::UnicodeString Name)/* overload */;
extern PACKAGE Types::TRect __fastcall wwGetWorkingRect(void);
extern PACKAGE bool __fastcall wwApplyPictureMask(Stdctrls::TCustomEdit* Control, System::UnicodeString PictureMask, bool AutoFill, System::WideChar &Key);
extern PACKAGE bool __fastcall wwValidPictureValue(Stdctrls::TCustomEdit* Control, System::UnicodeString PictureMask);
extern PACKAGE bool __fastcall wwSetControlDataSet(Classes::TComponent* ctrl, Db::TDataSet* DataSet, System::UnicodeString PropertyName);
extern PACKAGE bool __fastcall wwSetControlDataSource(Controls::TControl* ctrl, Db::TDataSource* ds);
extern PACKAGE bool __fastcall wwSetControlDataField(Controls::TControl* ctrl, System::UnicodeString df);
extern PACKAGE System::UnicodeString __fastcall wwGetControlDataField(Controls::TControl* ctrl);
extern PACKAGE Db::TDataSource* __fastcall wwGetControlDataSource(Classes::TComponent* ctrl);
extern PACKAGE Db::TDataSource* __fastcall wwGetControlMasterSource(Classes::TComponent* ctrl);
extern PACKAGE bool __fastcall wwSetBoolean(Classes::TComponent* ctrl, System::UnicodeString PropertyName, bool val);
extern PACKAGE bool __fastcall wwSetRequestLive(Db::TDataSet* ctrl, bool val);
extern PACKAGE bool __fastcall wwSetReadOnly(Classes::TComponent* ctrl, bool val);
extern PACKAGE bool __fastcall wwGetReadOnly(Classes::TComponent* ctrl);
extern PACKAGE bool __fastcall wwSetBorder(Controls::TControl* ctrl, bool val);
extern PACKAGE bool __fastcall wwGetBorder(Controls::TControl* ctrl);
extern PACKAGE bool __fastcall wwSetParamCheck(Db::TDataSet* ctrl, bool val);
extern PACKAGE bool __fastcall wwGetWantReturns(Controls::TControl* ctrl);
extern PACKAGE bool __fastcall wwGetParamCheck(Db::TDataSet* ctrl);
extern PACKAGE bool __fastcall wwSetConnection(Db::TDataSet* ctrl, Classes::TComponent* Connection);
extern PACKAGE bool __fastcall wwSetConnectionString(Db::TDataSet* ctrl, System::UnicodeString df);
extern PACKAGE bool __fastcall wwSetDatabaseName(Db::TDataSet* ctrl, System::UnicodeString df);
extern PACKAGE bool __fastcall wwSetIndexFieldNames(Db::TDataSet* ctrl, System::UnicodeString df);
extern PACKAGE bool __fastcall wwSetTableName(Db::TDataSet* ctrl, System::UnicodeString df);
extern PACKAGE bool __fastcall wwSetString(Classes::TComponent* ctrl, System::UnicodeString PropertyName, System::UnicodeString s);
extern PACKAGE bool __fastcall wwSetSessionName(Db::TDataSet* ctrl, System::UnicodeString df);
extern PACKAGE System::UnicodeString __fastcall wwGetSessionName(Db::TDataSet* dataSet);
extern PACKAGE System::UnicodeString __fastcall wwGetControlPictureMask(Stdctrls::TCustomEdit* ctrl);
extern PACKAGE void __fastcall wwSetControlPictureMask(Stdctrls::TCustomEdit* ctrl, System::UnicodeString PictureMask);
extern PACKAGE bool __fastcall wwGetControlAutoFill(Stdctrls::TCustomEdit* ctrl);
extern PACKAGE void __fastcall wwSetControlAutoFill(Stdctrls::TCustomEdit* ctrl, bool AutoFill);
extern PACKAGE System::UnicodeString __fastcall wwGetSQLWord(System::UnicodeString s, int &APos);
extern PACKAGE Db::TDataSet* __fastcall wwGetDataSet(Classes::TComponent* DataSet);
extern PACKAGE Db::TDataSource* __fastcall wwGetDataSource(Classes::TComponent* DataSet);
extern PACKAGE bool __fastcall wwGetIndexDefs(Db::TDataSet* Dataset, Db::TIndexDefs* &IndexDefs);
extern PACKAGE System::Variant __fastcall wwGetVariable(Classes::TComponent* Component, System::UnicodeString VariableName)/* overload */;
extern PACKAGE System::Variant __fastcall wwGetVariableWithParams(Classes::TComponent* Component, System::UnicodeString VariableName, const System::Variant &Params);
extern PACKAGE System::Variant __fastcall wwGetVariableWithParams2(Classes::TComponent* Component, System::UnicodeString VariableName, System::TVarRec const *StartValues, const int StartValues_Size, System::TVarRec const *EndValues, const int EndValues_Size);
extern PACKAGE System::TObject* __fastcall wwGetVariableObject(Classes::TComponent* Component, System::UnicodeString VariableName, const System::Variant &Param);
extern PACKAGE void __fastcall wwSetVariable(Classes::TComponent* Component, System::UnicodeString VariableName, const System::Variant &Value);
extern PACKAGE void __fastcall wwSetVariableObject(Classes::TComponent* Component, System::UnicodeString VariableName, System::TObject* Value);
extern PACKAGE bool __fastcall wwSetSQLProp(Db::TDataSet* ctrl, Classes::TStrings* sql, System::UnicodeString PropName);
extern PACKAGE bool __fastcall wwSetParamsProp(Db::TDataSet* ctrl, Db::TParams* Params);
extern PACKAGE Db::TParams* __fastcall wwGetParamsProp(Db::TDataSet* ctrl);
extern PACKAGE bool __fastcall wwIsSingleLineEdit(HDC AHandle, const Types::TRect &Rect, int Flags);
extern PACKAGE bool __fastcall wwIsRichEditField(Db::TField* Field, bool ExamineData);
extern PACKAGE System::UnicodeString __fastcall RichEditTextToPlainText(Controls::TWinControl* Owner, System::UnicodeString MemoString, Comctrls::TCustomRichEdit* &RichEditControl, Classes::TStringStream* &MemoryStream)/* overload */;
extern PACKAGE void __fastcall RichEditTextToPlainText(Controls::TWinControl* Owner, System::WideChar * MemoBuffer, unsigned &numRead, Comctrls::TCustomRichEdit* &RichEditControl, Classes::TStringStream* &MemoryStream)/* overload */;
extern PACKAGE void __fastcall wwDrawFocusRect(Graphics::TCanvas* ACanvas, const Types::TRect &ARect);
extern PACKAGE bool __fastcall IsVista(void);
extern PACKAGE int __fastcall wwGetComCtlVersion(void);
extern PACKAGE bool __fastcall IsVistaComCtrlVersion(void);
extern PACKAGE bool __fastcall UpdatedVCL4Version(void);
extern PACKAGE bool __fastcall wwIsCustomEditCell(Classes::TComponent* Component, Classes::TComponent* ownerForm, Db::TField* curField, Controls::TWinControl* &customEdit);
extern PACKAGE bool __fastcall IsInGrid(Controls::TWinControl* dtp);
extern PACKAGE bool __fastcall IsInGridPaint(Controls::TWinControl* dtp);
extern PACKAGE bool __fastcall IsInwwObjectViewPaint(Controls::TWinControl* control);
extern PACKAGE bool __fastcall IsInwwGridPaint(Controls::TWinControl* control);
extern PACKAGE bool __fastcall IsInwwObjectView(Controls::TWinControl* control);
extern PACKAGE void __fastcall wwDottedLine(Graphics::TCanvas* Canvas, const Types::TPoint &p1, const Types::TPoint &p2);
extern PACKAGE void __fastcall wwSetTableIndex(Db::TDataSet* DataSet, System::UnicodeString FieldName);
extern PACKAGE Db::TIndexDef* __fastcall wwGetIndexForFields(Db::TDataSet* dataset, const System::UnicodeString Fields, bool CaseInsensitive, bool ascending = true);
extern PACKAGE void __fastcall wwWriteTextLinesT(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, int DX, int DY, System::WideChar * S, Classes::TAlignment Alignment, Wwtypes::TwwWriteTextOptions WriteOptions);
extern PACKAGE int __fastcall wwRectWidth(const Types::TRect &Rect);
extern PACKAGE int __fastcall wwRectHeight(const Types::TRect &Rect);
extern PACKAGE void __fastcall wwDisableParentClipping(Controls::TWinControl* Parent);
extern PACKAGE bool __fastcall wwIsDesigning(Controls::TControl* control);
extern PACKAGE bool __fastcall wwHaveVisibleChild(Controls::TWinControl* ac);
extern PACKAGE int __fastcall wwGetEventShift(Classes::TShiftState Shift);
extern PACKAGE int __fastcall wwlimit(int val, int x, int y);
extern PACKAGE void __fastcall wwClearControls(Classes::TComponent* Component);
extern PACKAGE void __fastcall wwcopyToClipBoard(const System::UnicodeString str, const System::UnicodeString htmlStr = L"");
extern PACKAGE int __fastcall wwGetOrdProp(Classes::TPersistent* Component, System::UnicodeString PropName);
extern PACKAGE bool __fastcall wwGetEditCalculated(Controls::TControl* ctrl);
extern PACKAGE bool __fastcall wwUseThemes(Controls::TControl* Control);
extern PACKAGE Classes::TList* __fastcall wwGetControlList(Classes::TComponent* Controller);
extern PACKAGE void __fastcall wwUpdateController(Classes::TComponent* &FController, Classes::TComponent* Value, Classes::TComponent* Control);
extern PACKAGE bool __fastcall RegexMatch(System::UnicodeString pattern, bool icasePattern, System::UnicodeString input);
extern PACKAGE bool __fastcall RegexSyntaxValid(System::UnicodeString pattern);
extern PACKAGE void __fastcall wwFillEditThemeBackground(bool IsDroppedDown, bool MouseInControl, const Types::TRect &ARect, Graphics::TCanvas* FCanvas);
extern PACKAGE void __fastcall wwSetToIndexContainingField(Db::TDataSet* LookupTable, System::UnicodeString fieldName);
extern PACKAGE System::UnicodeString __fastcall wwGetIndexName(Db::TDataSet* DataSet);
extern PACKAGE System::UnicodeString __fastcall wwGetIndexFieldName(Db::TDataSet* table);
extern PACKAGE System::UnicodeString __fastcall wwGetIndexFieldNames(Db::TDataSet* DataSet);
extern PACKAGE bool __fastcall wwDataSetIsCaseSensitiveIndex(Db::TDataSet* Dataset);
extern PACKAGE bool __fastcall wwDataSetIsValidIndexField(Db::TDataSet* Dataset, System::UnicodeString FieldName, bool CaseSensitive)/* overload */;
extern PACKAGE bool __fastcall wwDataSetIsValidIndexField(Db::TDataSet* Dataset, System::UnicodeString FieldName, bool CaseSensitive, System::UnicodeString &IndexName)/* overload */;
extern PACKAGE bool __fastcall wwDataSetActiveIndexDef(Db::TDataSet* Dataset, Db::TIndexDef* &ActiveIndexDef);
extern PACKAGE int __fastcall wwGetIndexFieldCount(Db::TDataSet* dataset);
extern PACKAGE int __fastcall wwGetSearchIndex(Db::TDataSet* DataSet, System::UnicodeString SearchField);
extern PACKAGE Db::TField* __fastcall wwGetIndexFields(Db::TDataSet* DataSet, int Index);
extern PACKAGE void __fastcall wwSetIndexName(Db::TDataSet* DataSet, System::UnicodeString val);
extern PACKAGE bool __fastcall wwDataSetIsDescendingIndex(Db::TDataSet* Dataset);
extern PACKAGE void __fastcall wwDataSetSort(Db::TDataSet* DataSet, System::UnicodeString FieldName, bool descending, bool createIndexes);
extern PACKAGE bool __fastcall wwGridEssentials(void);
extern PACKAGE bool __fastcall wwIsDelphiApp(void);
extern PACKAGE void __fastcall DisplayProfessionalMessage(Classes::TComponent* Component, System::UnicodeString msg);
extern PACKAGE void __fastcall DisplayProfessionalVersionOnlyMessage(Classes::TComponent* Component, System::UnicodeString msg);
extern PACKAGE bool __fastcall TrialExpired(void);

}	/* namespace Wwcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwcommonHPP
