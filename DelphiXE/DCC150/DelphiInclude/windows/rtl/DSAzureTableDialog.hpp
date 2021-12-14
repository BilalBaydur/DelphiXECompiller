// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureTableDialog.pas' rev: 22.00

#ifndef DsazuretabledialogHPP
#define DsazuretabledialogHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DSAzure.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <ValEdit.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <ExtDlgs.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazuretabledialog
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TPropertyDataType { azdtBinary, azdtBoolean, azdtDateTime, azdtDouble, azdtGuid, azdtInt32, azdtInt64, azdtString, azdtUnknown };
#pragma option pop

#pragma option push -b-
enum TRowType { azrUnknown, azrLoading, azrRow, azrTruncated };
#pragma option pop

struct DECLSPEC_DRECORD TAzureRowContinuationToken
{
	
public:
	bool IsValid;
	System::UnicodeString NextRowKey;
	System::UnicodeString NextPartitionKey;
};


class DELPHICLASS TAzureTableColumn;
class PASCALIMPLEMENTATION TAzureTableColumn : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TPropertyDataType FDataType;
	
public:
	System::UnicodeString Name;
	System::UnicodeString Value;
	__fastcall virtual TAzureTableColumn(void);
	TAzureTableColumn* __fastcall Copy(void);
	void __fastcall SetDataType(System::UnicodeString Value);
	__property TPropertyDataType DataType = {read=FDataType, write=FDataType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAzureTableColumn(void) { }
	
};


class DELPHICLASS TAzureRow;
class PASCALIMPLEMENTATION TAzureRow : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TRowType FRowType;
	
public:
	__fastcall virtual TAzureRow(TRowType RowType);
	__property TRowType RowType = {read=FRowType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAzureRow(void) { }
	
};


class DELPHICLASS TAzureTableRow;
class PASCALIMPLEMENTATION TAzureTableRow : public TAzureRow
{
	typedef TAzureRow inherited;
	
protected:
	TAzureTableColumn* FRowKey;
	TAzureTableColumn* FPartitionKey;
	Generics_collections::TDictionary__2<System::UnicodeString,TAzureTableColumn*>* FColumns;
	
public:
	__fastcall TAzureTableRow(void);
	__fastcall virtual ~TAzureTableRow(void);
	virtual System::UnicodeString __fastcall GetID(void);
	void __fastcall SetColumn(System::UnicodeString Key, TAzureTableColumn* Value);
	TAzureTableColumn* __fastcall ClearColumn(System::UnicodeString Key, bool InstanceOwner = true);
	void __fastcall ClearColumns(bool InstanceOwner = true);
	TAzureTableColumn* __fastcall GetColumn(System::UnicodeString Key, bool IgnoreCase = false);
	__property TAzureTableColumn* RowKey = {read=FRowKey};
	__property TAzureTableColumn* PartitionKey = {read=FPartitionKey};
	__property Generics_collections::TDictionary__2<System::UnicodeString,TAzureTableColumn*>* Columns = {read=FColumns, write=FColumns};
};


class DELPHICLASS TAzureTemporaryTableRow;
class PASCALIMPLEMENTATION TAzureTemporaryTableRow : public TAzureTableRow
{
	typedef TAzureTableRow inherited;
	
protected:
	TAzureTableRow* FWrapped;
	bool FNewRow;
	
public:
	__fastcall TAzureTemporaryTableRow(System::UnicodeString RowKey, System::UnicodeString PartitionKey)/* overload */;
	__fastcall TAzureTemporaryTableRow(TAzureTableRow* Wrapped)/* overload */;
	__fastcall virtual ~TAzureTemporaryTableRow(void);
	virtual System::UnicodeString __fastcall GetID(void);
	TAzureTableRow* __fastcall Commit(void);
	__property TAzureTableRow* Wrapped = {read=FWrapped};
	__property bool IsNewRow = {read=FNewRow, nodefault};
};


class DELPHICLASS TTAzureTableDialog;
class PASCALIMPLEMENTATION TTAzureTableDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* CloseButton;
	Stdctrls::TButton* commitButton;
	Extctrls::TPanel* outerpanel;
	Extctrls::TPanel* leftCol;
	Extctrls::TSplitter* panSplit;
	Extctrls::TPanel* rightCol;
	Valedit::TValueListEditor* ColumnTable;
	Stdctrls::TLabel* EntityLabel;
	Stdctrls::TListBox* RowList;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* RowsLabel;
	Controls::TImageList* ImageList1;
	Extctrls::TButtonedEdit* filterField;
	Dialogs::TOpenDialog* ImportRowsDialog;
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall commitButtonClick(System::TObject* Sender);
	void __fastcall RowListClick(System::TObject* Sender);
	void __fastcall filterFieldRightButtonClick(System::TObject* Sender);
	void __fastcall filterFieldKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	
protected:
	Dsazure::TAzureConnectionString* FConnectionInfo;
	System::UnicodeString FTableName;
	TAzureTemporaryTableRow* FCurrentEntity;
	TAzureTableColumn* FCurrentColumn;
	bool FAddingRow;
	Menus::TMenuItem* FDeleteColumnItem;
	System::UnicodeString FAdvancedFilterPrefix;
	System::DynamicArray<System::Byte> __fastcall ByteContent(Classes::TStream* DataStream);
	void __fastcall InitializeRows(void);
	void __fastcall ClearRows(void);
	void __fastcall ClearColumnTable(void);
	void __fastcall AddRow(TAzureTableColumn* ColumnEntry);
	void __fastcall FilterRows(void);
	void __fastcall RowsPopulated(Generics_collections::TList__1<TAzureTableRow*>* Rows, const TAzureRowContinuationToken &ContinuationToken);
	void __fastcall RowCreatedOrUpdated(TAzureTableRow* Row, bool IsNew);
	void __fastcall BatchRowsCreated(bool Success);
	void __fastcall RowDeleted(TAzureTableRow* Row, bool Success);
	Menus::TPopupMenu* __fastcall CreateRowListPopupMenu(void);
	void __fastcall UpdateRowListPopupMenu(System::TObject* Sender);
	void __fastcall HandleRowKeyUp(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	Menus::TPopupMenu* __fastcall CreateColumnsPopupMenu(void);
	void __fastcall UpdateColumnsPopupMenu(System::TObject* Sender);
	void __fastcall CreateDTMenuItem(Menus::TPopupMenu* Menu, Menus::TMenuItem* Parent, System::UnicodeString DataTypeName);
	void __fastcall HandleColumnDblClick(System::TObject* Sender);
	TAzureTableRow* __fastcall GetSelectedRow(void);
	TAzureTableRow* __fastcall GetLastRow(void);
	void __fastcall EnableRowSelection(bool Enabled = true);
	void __fastcall ImportRows(Dbxjson::TJSONArray* RowArray);
	void __fastcall SetCurrentEntity(TAzureTemporaryTableRow* Row = (TAzureTemporaryTableRow*)(0x0));
	void __fastcall AddRowAction(System::TObject* Sender);
	void __fastcall DeleteRowAction(System::TObject* Sender);
	void __fastcall ImportRowsAction(System::TObject* Sender);
	void __fastcall RefreshRowsAction(System::TObject* Sender);
	void __fastcall EditColumnAction(System::TObject* Sender);
	void __fastcall AddColumnAction(System::TObject* Sender);
	void __fastcall DeleteColumnAction(System::TObject* Sender);
	void __fastcall SetDataTypeAction(System::TObject* Sender);
	void __fastcall SetColumnValue(System::UnicodeString OriginalName, TAzureTableColumn* Column);
	
public:
	__fastcall TTAzureTableDialog(Classes::TComponent* AOwner, Dsazure::TAzureConnectionString* ConnectionInfo);
	void __fastcall SetTable(System::UnicodeString TableName);
	__property System::UnicodeString AdvancedFilterPrefix = {read=FAdvancedFilterPrefix, write=FAdvancedFilterPrefix};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TTAzureTableDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TTAzureTableDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTAzureTableDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ADD_ROW L"AddRow"
#define DELETE_ROW L"DeleteRow"
#define IMPORT_ROWS L"ImportRows"
#define REFRESH_ROWS L"RefreshRows"
#define EDIT_COLUMN L"EditColumn"
#define ADD_COLUMN L"AddColumn"
#define DELETE_COLUMN L"DeleteColumn"
#define DATA_TYPE_ITEM L"DataType"
#define XML_ROWKEY L"RowKey"
#define XML_PARTITION L"PartitionKey"
#define XML_TIMESTAMP L"Timestamp"
#define DT_XML_PREFIX L"Edm."
#define DT_BINARY L"Binary"
#define DT_BOOLEAN L"Boolean"
#define DT_DATETIME L"DateTime"
#define DT_DOUBLE L"Double"
#define DT_GUID L"Guid"
#define DT_INT32 L"Int32"
#define DT_INT64 L"Int64"
#define DT_STRING L"String"
extern PACKAGE TPropertyDataType __fastcall GetDataType(System::UnicodeString DataType)/* overload */;
extern PACKAGE System::UnicodeString __fastcall GetDataType(TPropertyDataType DataType)/* overload */;
extern PACKAGE bool __fastcall ValidateValueForDataType(System::UnicodeString Value, TPropertyDataType DataType);
extern PACKAGE TAzureTableRow* __fastcall GetRowFromConentNode(Xmlintf::_di_IXMLNode ContentNode);

}	/* namespace Dsazuretabledialog */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazuretabledialog;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazuretabledialogHPP
