// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxTest.pas' rev: 22.00

#ifndef DbxtestHPP
#define DbxtestHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <TestFramework.hpp>	// Pascal unit
#include <TestFrameworkExtension.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXMetaDataProvider.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxtest
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXTestCase;
class PASCALIMPLEMENTATION TDBXTestCase : public Testframeworkextension::TTestCaseExtension
{
	typedef Testframeworkextension::TTestCaseExtension inherited;
	
private:
	Dbxcommon::TDBXConnection* FConnection;
	System::UnicodeString FDBXName;
	Dbxmetadataprovider::TDBXMetaDataProvider* FMetaDataProvider;
	Classes::TList* FTearDownList;
	void __fastcall FreeTearDownList(void);
	
protected:
	bool __fastcall IsExtendedMetaDataBeingUsed(System::WideString ConnectionName);
	virtual Dbxcommon::TDBXConnection* __fastcall GetDbxConnection(void);
	void __fastcall ExecuteStatement(const System::WideString CommandText);
	void __fastcall ExecuteStatementIgnoreError(const System::WideString CommandText);
	Dbxmetadataprovider::TDBXMetaDataProvider* __fastcall GetMetaDataProvider(void);
	bool __fastcall IsTypeSupported(int DataType, int SubType);
	bool __fastcall GetIsCreateTableInMultiStatementTransactionSupported(void);
	System::TObject* __fastcall StartMetaDataTransaction(void);
	void __fastcall CommitFreeAndNilMetaDataTransaction(System::TObject* &Transaction);
	void __fastcall RollbackMetaDataTransaction(System::TObject* &Transaction);
	virtual void __fastcall TearDown(void);
	
public:
	__fastcall virtual TDBXTestCase(System::UnicodeString MethodName);
	__fastcall virtual ~TDBXTestCase(void);
	void __fastcall FreeOnTearDown(System::TObject* Item);
	virtual System::UnicodeString __fastcall GetName(void);
	void __fastcall SetName(System::UnicodeString AName);
	void __fastcall DropTable(System::WideString TableName);
	System::WideString __fastcall GetHostId(void);
	__property Dbxcommon::TDBXConnection* DbxConnection = {read=GetDbxConnection};
	virtual void __fastcall CloseDbxConnection(void);
	__property Dbxmetadataprovider::TDBXMetaDataProvider* MetaDataProvider = {read=GetMetaDataProvider};
	__property bool IsCreateTableInMultiStatementTransactionSupported = {read=GetIsCreateTableInMultiStatementTransactionSupported, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
#define sConnectionName L"connection"
#define sAdoDbxClientProvider L"Borland.Data.AdoDbxClient"

}	/* namespace Dbxtest */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtest;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtestHPP
