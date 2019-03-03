//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "CRGrid"
#pragma resource "*.dfm"

#include "System.Win.ComObj.hpp"
#include <fstream>
TForm1 *Form1;

using namespace std ;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ExitClick(TObject *Sender)
{
    Form1->Close() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::buttonResizeClick(TObject *Sender)
{
	gridMain->Columns->Items[0]->Width = 200 ;
	gridMain->Columns->Items[1]->Width = 200 ;
	gridMain->Columns->Items[2]->Width = 200 ;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::gridMainDblClick(TObject *Sender)
{
	gridMain->Columns->Items[0]->Width = 200 ;
	gridMain->Columns->Items[1]->Width = 200 ;
	gridMain->Columns->Items[2]->Width = 200 ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1Click(TObject *Sender)
{
    Form1->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::File1Click(TObject *Sender)
{
	dbConnection->ExecSQL("INSERT INTO `Products`(`Product_ID`, `Name`, `Size`) VALUES (0,'New Record',0)");
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Application->CreateForm(__classid(TForm2), &Form2);
	Form2->ShowModal();

	UnicodeString ID = rand()%1000000+100000 ;
	UnicodeString Name = Form2->Edit2->Text ;
	UnicodeString Size = Form2->Edit3->Text ;

	if(ID == "." || Name == "." || Size == "."){
		ShowMessage("Process Cancelled") ;
		return ;
	}

	dbConnection->ExecSQL("INSERT INTO `Products`(`Product_ID`, `Name`, `Size`) VALUES ("+ID+",'"+Name+"',"+Size+")");
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Delete1Click(TObject *Sender)
{
	dbDataSource->DataSet->Delete() ;
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Refresh2Click(TObject *Sender)
{
    dbQuery->Refresh() ;
}

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-------------------	ControlPanel Buttons		-------------------------
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowControlPanel1Click(TObject *Sender)
{
	ShowControlPanel1->Caption = panelControl->Visible ? "Show Control Panel" : "Hide Control Panel" ;
	panelControl->Visible = !panelControl->Visible ;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::buttonAddRecordClick(TObject *Sender)
{
	Application->CreateForm(__classid(TForm2), &Form2);
	Form2->ShowModal();

	UnicodeString ID ;

	{
		ID = rand()%1000000+100000 ;
	}while(dbQuery->Locate("Product_ID",ID) == 0)

	UnicodeString Name = Form2->Edit2->Text ;
	UnicodeString Size = Form2->Edit3->Text ;

	if(ID == "." || Name == "." || Size == "."){
		ShowMessage("Process Cancelled") ;
		return ;
	}

	if( dbQuery->Locate("Product_ID",ID) == 1 )
	{
		ShowMessage("Product with that ID exist");
		return ;
	}

	dbConnection->ExecSQL("INSERT INTO `Products`(`Product_ID`, `Name`, `Size`) VALUES ("+ID+",'"+Name+"',"+Size+")");
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnDeleteClick(TObject *Sender)
{
	dbDataSource->DataSet->Delete() ;
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::buttonRefreshClick(TObject *Sender)
{
	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::buttonSearchClick(TObject *Sender)
{
	Application->CreateForm(__classid(TForm3), &Form3);
	Form3->ShowModal();

	bool isFound = false ;

	if(Form3->RadioGroup1->ItemIndex == 0)
		isFound = dbQuery->Locate("Product_ID",Form3->findEdit->Text);
	else
		isFound = dbQuery->Locate("Name",Form3->findEdit->Text) ;

	if(!isFound) ShowMessage("Not Found");

	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Search1Click(TObject *Sender)
{
	Application->CreateForm(__classid(TForm3), &Form3);
	Form3->ShowModal();

	bool isFound = false ;

	if(Form3->RadioGroup1->ItemIndex == 0)
		isFound = dbQuery->Locate("Product_ID",Form3->findEdit->Text);
	else
		isFound = dbQuery->Locate("Name",Form3->findEdit->Text) ;

	if(!isFound) ShowMessage("Not Found");

	dbQuery->Refresh() ;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormShow(TObject *Sender)
{
	Application->CreateForm(__classid(TForm4), &Form4);
	Form4->ShowModal();
	if(Form4->Edit1->Text == ".")
        Form1->Close() ;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ofstream dd ;
	dd.open("backup.xls") ;

	dbDataSource->DataSet->First()  ;

	dd << "<?xml version=\"1.0\"?>" << endl ;
	dd << "<Workbook xmlns=\"urn:schemas-microsoft-com:office:spreadsheet\" " << endl ;
	dd << "  xmlns:o=\"urn:schemas-microsoft-com:office:office\" "  << endl ;
	dd << "  xmlns:x=\"urn:schemas-microsoft-com:office:excel\" "  << endl ;
	dd << "  xmlns:ss=\"urn:schemas-microsoft-com:office:spreadsheet\" "   << endl ;
	dd << "  xmlns:html=\"http://www.w3.org/TR/REC-html40\"> "  << endl ;
	dd << "  <Worksheet ss:Name=\"Sheet1\"> "  << endl ;
	dd << "   <Table ss:ExpandedColumnCount=\"100\" ss:ExpandedRowCount=\"100\" x:FullColumns=\"1\" x:FullRows=\"1\">" << endl ;
	dd << "<Row>   <Cell><Data ss:Type=\"String\">Product ID</Data></Cell>  <Cell><Data ss:Type=\"String\">Name</Data></Cell> <Cell><Data ss:Type=\"String\">Size</Data></Cell> <Cell><Data ss:Type=\"String\">Last Update</Data></Cell>   </Row>" << endl ;
	for(int i=0;i<dbDataSource->DataSet->RecordCount;i++)
	{
		dd << "<Row>" << endl  ;

		dd << "<Cell><Data ss:Type=\"String\">" ;
		dd << dbDataSource->DataSet->FieldByName("Product_ID")->AsAnsiString ;
		dd << "</Data></Cell>" << endl ;

		dd << "<Cell><Data ss:Type=\"String\">" ;
		dd << dbDataSource->DataSet->FieldByName("Name")->AsAnsiString ;
		dd << "</Data></Cell>" << endl ;

		dd << "<Cell><Data ss:Type=\"String\">" ;
		dd << dbDataSource->DataSet->FieldByName("Size")->AsAnsiString ;
		dd << "</Data></Cell>" << endl ;

		dd << "<Cell><Data ss:Type=\"String\">" ;
		dd << dbDataSource->DataSet->FieldByName("Date")->AsAnsiString ;
		dd << "</Data></Cell>" << endl ;

		dd << "</Row>" << endl;
		dbDataSource->DataSet->Next() ;
	}
	dd << "	</Table></Worksheet></Workbook>";
	dd.close() ;


}
//---------------------------------------------------------------------------

