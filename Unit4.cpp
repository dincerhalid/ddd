//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	if(Edit1->Text == "/*Password hiden for Github*/"){
		Form1->dbConnection->Connected = true ;
		Form1->dbQuery->Active = true ;
		Form1->Visible = true;
		Form4->Close() ;
	}
	else{
		ShowMessage("Wrong Password");
    }

}
//---------------------------------------------------------------------------




void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Edit1->Text = "." ;
    Form4->Close() ;
}
//---------------------------------------------------------------------------

