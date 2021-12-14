// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WizardIniOptions.pas' rev: 22.00

#ifndef WizardinioptionsHPP
#define WizardinioptionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <WizardAPI.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wizardinioptions
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TOptionChangeEvent)(Inifiles::TIniFile* AIniFile, const System::UnicodeString SectionName, const System::UnicodeString OptionName, const System::Variant &Value);

class DELPHICLASS TWizardIniOptions;
class PASCALIMPLEMENTATION TWizardIniOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	System::Variant operator[](const System::UnicodeString Name) { return Options[Name]; }
	
private:
	Inifiles::TIniFile* FIniFile;
	System::UnicodeString FSectionName;
	Classes::TStringList* FOptions;
	TOptionChangeEvent FOnOptionChange;
	System::TObject* __fastcall GetOptionData(const System::UnicodeString Name);
	void __fastcall SetOptionData(const System::UnicodeString Name, const System::TObject* Value);
	__classmethod void __fastcall OptionChanged(Inifiles::TIniFile* AIniFile, const System::UnicodeString SectionName, const System::UnicodeString OptionName, const System::Variant &Value);
	
protected:
	void __fastcall SetOption(const System::UnicodeString Name, const System::Variant &Value);
	__property System::UnicodeString SectionName = {read=FSectionName};
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	void __fastcall DoOptionChange(const System::UnicodeString OptionName, const System::Variant &Value);
	
public:
	__fastcall TWizardIniOptions(const System::UnicodeString SectionName, Inifiles::TIniFile* AIniFile, TOptionChangeEvent OnChangeEvent);
	__fastcall virtual ~TWizardIniOptions(void);
	static void __fastcall InitOptions(const System::UnicodeString AIniFileName, /* out */ TWizardIniOptions* &AUIOptions);
	void __fastcall EnsureOption(const System::UnicodeString OptionStr);
	System::Variant __fastcall GetOptionValue(const System::UnicodeString Name);
	System::Variant __fastcall GetOption(const System::UnicodeString Name, const System::Variant &Default);
	void __fastcall InitializeOptions(System::UnicodeString const *Values, const int Values_Size)/* overload */;
	void __fastcall InitializeOptions(const Classes::TStrings* Values)/* overload */;
	bool __fastcall IsTrue(const System::UnicodeString Name);
	__property System::Variant Options[const System::UnicodeString Name] = {read=GetOptionValue, write=SetOption/*, default*/};
	__property System::TObject* OptionData[const System::UnicodeString Name] = {read=GetOptionData, write=SetOptionData};
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	void __fastcall Clear(void);
	__property TOptionChangeEvent OnOptionChange = {read=FOnOptionChange, write=FOnOptionChange};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wizardinioptions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wizardinioptions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WizardinioptionsHPP
