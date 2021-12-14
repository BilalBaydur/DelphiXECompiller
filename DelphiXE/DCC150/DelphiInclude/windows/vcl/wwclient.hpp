// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwclient.pas' rev: 22.00

#ifndef WwclientHPP
#define WwclientHPP

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
#include <DBClient.hpp>	// Pascal unit
#include <BDE.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwclient
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwClientDataSet;
typedef void __fastcall (__closure *TwwClientDataSetFilterEvent)(TwwClientDataSet* ClientDataSet, bool &Accept);

class PASCALIMPLEMENTATION TwwClientDataSet : public Dbclient::TClientDataSet
{
	typedef Dbclient::TClientDataSet inherited;
	
private:
	Classes::TStrings* FControlType;
	Classes::TStrings* FPictureMasks;
	bool FUsePictureMask;
	Wwtypes::TwwInvalidValueEvent FOnInvalidValue;
	Db::TFilterRecordEvent FOnFilter;
	char *FFilterFieldBuffer;
	Db::TParam* FFilterParam;
	Classes::TStrings* FRemoteSQL;
	Classes::TStrings* FFieldList;
	void __fastcall SetOnFilter(Db::TFilterRecordEvent val);
	Classes::TStrings* __fastcall GetControlType(void);
	void __fastcall SetControlType(Classes::TStrings* sel);
	Classes::TStrings* __fastcall GetPictureMasks(void);
	void __fastcall SetPictureMasks(Classes::TStrings* sel);
	Classes::TStrings* __fastcall GetFieldInfo(void);
	
protected:
	virtual void __fastcall DoBeforePost(void);
	
public:
	bool InFilterEvent;
	__fastcall virtual TwwClientDataSet(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwClientDataSet(void);
	Db::TParam* __fastcall wwFilterField(System::UnicodeString AFieldName);
	virtual bool __fastcall IsSequenced(void);
	
__published:
	__property Classes::TStrings* ControlType = {read=GetControlType, write=SetControlType};
	__property Classes::TStrings* PictureMasks = {read=GetPictureMasks, write=SetPictureMasks};
	__property bool ValidateWithMask = {read=FUsePictureMask, write=FUsePictureMask, nodefault};
	__property Db::TFilterRecordEvent OnFilter = {read=FOnFilter, write=SetOnFilter};
	__property Wwtypes::TwwInvalidValueEvent OnInvalidValue = {read=FOnInvalidValue, write=FOnInvalidValue};
	__property Classes::TStrings* FieldInfo = {read=GetFieldInfo, stored=false};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwclientHPP
