//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.SqlExpr.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Datasnap.DBClient.hpp>

#include <time.h>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Data.FMTBcd.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Moni.Base.hpp>
#include <FireDAC.Moni.RemoteClient.hpp>
#include "Unit3.h"
#include <Vcl.Buttons.hpp>
#include <Vcl.Mask.hpp>
#include "Unit4.h"
#include <FireDAC.Stan.StorageXML.hpp>
#include <SimpleDS.hpp>
#include <string>
#include <random>
#include <stdlib.h>

#include "System.Win.ComObj.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *panelGrid;
	TDBGrid *gridMain;
	TDataSource *dbDataSource;
	TButton *buttonAddRecord;
	TPanel *panelControl;
	TButton *btnDelete;
	TButton *buttonRefresh;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *Edit1;
	TMenuItem *Application1;
	TMenuItem *Exit1;
	TMenuItem *Delete1;
	TMenuItem *Refresh2;
	TLabel *Label1;
	TButton *Button2;
	TMenuItem *ShowControlPanel1;
	TFDConnection *dbConnection;
	TFDQuery *dbQuery;
	TFDMoniRemoteClientLink *FDMoniRemoteClientLink1;
	TButton *buttonSearch;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TMenuItem *Search1;
	TButton *Button1;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall buttonResizeClick(TObject *Sender);
	void __fastcall gridMainDblClick(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall File1Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Delete1Click(TObject *Sender);
	void __fastcall Refresh2Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall buttonAddRecordClick(TObject *Sender);
	void __fastcall btnDeleteClick(TObject *Sender);
	void __fastcall buttonRefreshClick(TObject *Sender);
	void __fastcall ShowControlPanel1Click(TObject *Sender);
	void __fastcall buttonSearchClick(TObject *Sender);
	void __fastcall Search1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
