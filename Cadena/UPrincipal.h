//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *ECad1;
	TLabel *Label1;
	TEdit *EResultado;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TEdit *EPos;
	TLabel *Label3;
	TMainMenu *b;
	TMenuItem *Procedimientos1;
	TMenuItem *Funciones1;
	TMenuItem *Conversiones1;
	TMenuItem *AMinscula1;
	TMenuItem *AMayscula1;
	TMenuItem *odoMayscula1;
	TMenuItem *odoMinscula1;
	TMenuItem *iipoInverso1;
	TMenuItem *ContarPalabra1;
	TMenuItem *ipoTitulo1;
	TMenuItem *LetraaMayscula1;
	TEdit *ECar;
	TLabel *Label4;
	TMenuItem *Eliminar1;
	TMenuItem *CaracterIgual1;
	TMenuItem *CaracterIgual11;
	TMenuItem *Devolverpalabraposicin1;
	TEdit *EPosPal;
	TLabel *Label5;
	TEdit *EPal;
	TLabel *Label6;
	TMenuItem *ReemplazarPalabra1;
	TEdit *Ed_SubCadena;
	TLabel *Label7;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall AMinscula1Click(TObject *Sender);
	void __fastcall AMayscula1Click(TObject *Sender);
	void __fastcall odoMayscula1Click(TObject *Sender);
	void __fastcall odoMinscula1Click(TObject *Sender);
	void __fastcall iipoInverso1Click(TObject *Sender);
	void __fastcall ContarPalabra1Click(TObject *Sender);
	void __fastcall ipoTitulo1Click(TObject *Sender);
	void __fastcall LetraaMayscula1Click(TObject *Sender);
	void __fastcall CaracterIgual1Click(TObject *Sender);
	void __fastcall CaracterIgual11Click(TObject *Sender);
	void __fastcall Devolverpalabraposicin1Click(TObject *Sender);
	void __fastcall ReemplazarPalabra1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
