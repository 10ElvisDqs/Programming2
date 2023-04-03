//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UMatriz.h"
#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CMatriz *A, *B, *C;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{    A = new CMatriz;
	 B = new CMatriz;
	 C = new CMatriz;
}
//---------------------------------------------------------------------------

void TForm1::SGACM(TStringGrid *SG, CMatriz *CM)
{     CM->Filas=SG->RowCount;
	  CM->Columnas=SG->ColCount;
	  for(int i=0; i<CM->Filas; i++)
	  {  for(int j=0; j<CM->Columnas; j++)
	     {   SG->Cells[j][i]=CM->Celdas[i][j];}
	  }

}

void TForm1::CMASG(CMatriz *CM, TStringGrid *SG)
{     SG->ColCount=CM->Columnas;
	  SG->RowCount=CM->Filas;
	  for(int i=0; i<SG->RowCount; i++)
	  {  for(int j=0; j<SG->ColCount; j++)
	     {  CM->Celdas[i][j]=StrToFloat(SG->Cells[j][i]);}
	  }

}
