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
	TEdit *ENumero;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TEdit *EResultado;
	TLabel *Label2;
	TButton *Button3;
	TButton *Button4;
	TEdit *EPos;
	TLabel *Label3;
	TButton *Button5;
	TButton *Button6;
	TEdit *EDig;
	TLabel *Label4;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TEdit *EPos1;
	TEdit *EPos2;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button11;
	TMainMenu *MainMenu1;
	TMenuItem *Practico1;
	TMenuItem *Factorial1;
	TMenuItem *ContarDigitosPares1;
	TMenuItem *EliminarDigImpares1;
	TMenuItem *SumarDigPrimos1;
	TMenuItem *DigMayor1;
	TMenuItem *VerificarsielDigseescunetra1;
	TMenuItem *EsPerfecto1;
	TMenuItem *EliminarDentrodelRango1;
	TMenuItem *EliminarDigIguales1;
	TMenuItem *Reemplazar1;
	TEdit *EDig1;
	TLabel *Label7;
	TMenuItem *DigitoquemasseRepite1;
	TMenuItem *Intercambiar1;
	TMenuItem *Conversiones1;
	TMenuItem *DecimalaOctal1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Factorial1Click(TObject *Sender);
	void __fastcall ContarDigitosPares1Click(TObject *Sender);
	void __fastcall EliminarDigImpares1Click(TObject *Sender);
	void __fastcall SumarDigPrimos1Click(TObject *Sender);
	void __fastcall DigMayor1Click(TObject *Sender);
	void __fastcall EsPerfecto1Click(TObject *Sender);
	void __fastcall EliminarDentrodelRango1Click(TObject *Sender);
	void __fastcall EliminarDigIguales1Click(TObject *Sender);
	void __fastcall Reemplazar1Click(TObject *Sender);
	void __fastcall DigitoquemasseRepite1Click(TObject *Sender);
	void __fastcall Intercambiar1Click(TObject *Sender);
	void __fastcall DecimalaOctal1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1; //---------------------------------------------
//---------------------------------------------------------------------------
#endif
