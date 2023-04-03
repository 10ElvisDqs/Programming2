//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *SGA;
	TStringGrid *SGB;
	TStringGrid *SGC;
	TEdit *EmA;
	TEdit *EnA;
	TButton *Button1;
	TEdit *EmB;
	TEdit *EnB;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Ek;
	TLabel *Label8;
	TEdit *Eh;
	TLabel *Label9;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void SGACM(TStringGrid *SG, CMatriz *CM);
	void CMASG(CMatriz *CM, TStringGrid *SG);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
