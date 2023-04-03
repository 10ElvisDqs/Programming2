//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UNumeroNatural.h"
#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CNumeroNatural *NN;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{    NN = new CNumeroNatural;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	EResultado->Text=NN->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	NN->SetN(StrToInt(ENumero->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	 EResultado->Text=NN->ContarDigito();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
   NN->EliminarDigito(StrToInt(EPos->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	 EResultado->Text=NN->Factorial();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	 NN->EliminarDigPares();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	  NN->InsertarDigPos(StrToInt(EPos->Text),StrToInt(EDig->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	NN->Voltear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	  EResultado->Text=NN->DevolverDigPos(StrToInt(EPos->Text));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	 NN->IntercambiarDigPos(StrToInt(EPos1->Text),StrToInt(EPos2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
	  EResultado->Text=NN->DevolverNumRango(StrToInt(EPos1->Text),StrToInt(EPos2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Factorial1Click(TObject *Sender)
{
	  EResultado->Text=NN->FactorialN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarDigitosPares1Click(TObject *Sender)
{
	   EResultado->Text=NN->Contar_Dig_Pares();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDigImpares1Click(TObject *Sender)
{

	   NN->Elim_Dig_Impares();
	   EResultado->Text=NN->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigPrimos1Click(TObject *Sender)
{

	   EResultado->Text= NN->Sumar_Dig_Primos();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DigMayor1Click(TObject *Sender)
{
	  EResultado->Text = NN->Dig_Mayor();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EsPerfecto1Click(TObject *Sender)
{
	if (NN->Verificar_Perfecto()) {
		EResultado->Text = "Es Perfecto ";
	} else {
        EResultado->Text = "No es Perfecto ";
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDentrodelRango1Click(TObject *Sender)
{
   NN->Eliminar_Rango(StrToInt(EPos->Text), StrToInt(EPos1->Text));
   EResultado->Text = NN->GetN();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDigIguales1Click(TObject *Sender)
{
   NN->Eliminar_Iguales(StrToInt(EDig->Text));
   EResultado->Text= NN->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Reemplazar1Click(TObject *Sender)
{
   NN->Reemplazar(StrToInt(EDig->Text),StrToInt(EDig1->Text));
   EResultado->Text= NN->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DigitoquemasseRepite1Click(TObject *Sender)
{
	EResultado->Text= NN->Dig_Repit();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Intercambiar1Click(TObject *Sender)
{
   NN->Intercambiar(StrToInt(EDig->Text),StrToInt(EDig1->Text));
   EResultado->Text= NN->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DecimalaOctal1Click(TObject *Sender)
{

   EResultado->Text= NN->Decimal_A_Octal();
}
//---------------------------------------------------------------------------

