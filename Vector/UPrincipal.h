//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *SGVector;
	TLabel *Label1;
	TEdit *ETama�o;
	TLabel *Label2;
	TButton *Button1;
	TEdit *EResultado;
	TLabel *Label3;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones1;
	TMenuItem *Procedimientos1;
	TMenuItem *ContarElementos1;
	TEdit *EElem;
	TLabel *Label4;
	TMenuItem *SumarElementos1;
	TEdit *EPos;
	TLabel *Label5;
	TMenuItem *EliminarElem1;
	TMenuItem *InsertarElemento1;
	TMenuItem *Bsquedas1;
	TMenuItem *Secuencial1;
	TMenuItem *Binaria1;
	TMenuItem *LlenarVector1;
	TMenuItem *DibujarVector1;
	TMenuItem *Ordenar1;
	TMenuItem *Intercambio1;
	TMenuItem *Burbuja1;
	TMenuItem *Shell1;
	TMenuItem *Recursivo1;
	TMenuItem *ContarElemento1;
	TMenuItem *EleminarElemento1;
	TMenuItem *SumarElementos2;
	TMenuItem *InsertarElemento2;
	TMenuItem *Bsquedas2;
	TMenuItem *Secuencial2;
	TMenuItem *Binaria2;
	TMenuItem *QuickSort1;
	TMenuItem *intercalarPareseImpares1;
	TButton *Button2;
	TButton *Button3;
	TMenuItem *Practico1;
	TMenuItem *Practico2;
	TMenuItem *VoltearlosElementosdelVectos1;
	TMenuItem *ElementoMayor1;
	TMenuItem *ElementoRepit1;
	TMenuItem *Eliminarmultiplodenum1;
	TMenuItem *IntercalarPareseImpares2;
	TMenuItem *EstaOrdenado1;
	TMenuItem *Reemplazar1;
	TEdit *EElem2;
	TLabel *Label6;
	TMenuItem *EliminarElemRepit1;
	TEdit *Pos1;
	TEdit *Pos2;
	TLabel *Label7;
	TMenuItem *EliminarDentrodelRango1;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ContarElementos1Click(TObject *Sender);
	void __fastcall SumarElementos1Click(TObject *Sender);
	void __fastcall EliminarElem1Click(TObject *Sender);
	void __fastcall InsertarElemento1Click(TObject *Sender);
	void __fastcall Secuencial1Click(TObject *Sender);
	void __fastcall Binaria1Click(TObject *Sender);
	void __fastcall LlenarVector1Click(TObject *Sender);
	void __fastcall DibujarVector1Click(TObject *Sender);
	void __fastcall Intercambio1Click(TObject *Sender);
	void __fastcall Burbuja1Click(TObject *Sender);
	void __fastcall Shell1Click(TObject *Sender);
	void __fastcall ContarElemento1Click(TObject *Sender);
	void __fastcall EleminarElemento1Click(TObject *Sender);
	void __fastcall SumarElementos2Click(TObject *Sender);
	void __fastcall InsertarElemento2Click(TObject *Sender);
	void __fastcall Secuencial2Click(TObject *Sender);
	void __fastcall Binaria2Click(TObject *Sender);
	void __fastcall QuickSort1Click(TObject *Sender);
	void __fastcall intercalarPareseImpares1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Practico2Click(TObject *Sender);
	void __fastcall VoltearlosElementosdelVectos1Click(TObject *Sender);
	void __fastcall ElementoMayor1Click(TObject *Sender);
	void __fastcall ElementoRepit1Click(TObject *Sender);
	void __fastcall Eliminarmultiplodenum1Click(TObject *Sender);
	void __fastcall IntercalarPareseImpares2Click(TObject *Sender);
	void __fastcall EstaOrdenado1Click(TObject *Sender);
	void __fastcall Reemplazar1Click(TObject *Sender);
	void __fastcall EliminarElemRepit1Click(TObject *Sender);
	void __fastcall EliminarDentrodelRango1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void FormAClase(TStringGrid *SG, CVector *CV);
	void ClaseAForm(CVector *CV, TStringGrid *SG);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
