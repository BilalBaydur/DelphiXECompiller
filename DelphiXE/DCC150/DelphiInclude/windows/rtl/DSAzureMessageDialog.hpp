// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzureMessageDialog.pas' rev: 22.00

#ifndef DsazuremessagedialogHPP
#define DsazuremessagedialogHPP

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
#include <Grids.hpp>	// Pascal unit
#include <ValEdit.hpp>	// Pascal unit
#include <DSAzureQueue.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazuremessagedialog
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzureMsgDialog;
class PASCALIMPLEMENTATION TAzureMsgDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Valedit::TValueListEditor* ValueList;
	Stdctrls::TButton* closeButton;
	void __fastcall closeButtonClick(System::TObject* Sender);
	
public:
	void __fastcall SetMessage(Dsazurequeue::TMessageNodeData* Msg);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzureMsgDialog(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzureMsgDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzureMsgDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzureMsgDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazuremessagedialog */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazuremessagedialog;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazuremessagedialogHPP
