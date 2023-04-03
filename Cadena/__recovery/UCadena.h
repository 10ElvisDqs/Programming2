//---------------------------------------------------------------------------

#ifndef UCadenaH
#define UCadenaH
//---------------------------------------------------------------------------
#include "vcl.h"
const max=250;
class CCadena
{  private:
	  char Cadena[max];
	  int n;
	  int GetN();
	  void SetN(int valor);
	  char GetElem(int pos);
	  void SetElem(int pos, char elem);
	  UnicodeString GetTexto();
	  void SetTexto(UnicodeString txt);
	  UnicodeString GetPalabra(int pos);
	  void SetPalabra(int pos, UnicodeString pal);
	  bool EsMinuscula(int pos);
	  bool EsMayuscula(int pos);
	  char DevolverMayuscula(char let);
      char DevolverMinuscula(char let);
   public:
	  CCadena();
	  __property int Dimension={ read=GetN, write=SetN};
	  __property char Casilla[int pos]={ read=GetElem, write=SetElem};
	  __property UnicodeString Texto={ read=GetTexto, write=SetTexto};
	  __property UnicodeString Palabras[int pos]={read=GetPalabra, write=SetPalabra};
	  void AMinuscula(int pos);
	  void AMayuscula(int pos);
	  void TodoMayuscula();
	  void TodoMinuscula();
	  void TipoInverso();
	  int ContarPalabras();
	  void TipoTitulo();
	  void LetraAMayuscula(char let);
	  void EliminarCaracter(char car);
	  void EliminarCaracter1(char car);
       /*-------------------- M O D E L O   D E  E X A M E N  -----------------*/

	  /*1.Dada una subcadena eliminar todas aquellas palabras que no inicien con
		  ella.
	  Ejemplo.-
	   Cadena="Anastacia es una persona anarquica"
	   SubCadena="ana"
	  Resultado
	   Cadena=" Anastacia anarquica "                                         */
	  void Elim_Palabras_No_Comiencen_SubCadena(UnicodeString subCadena);
	  int DadaUnaPalabraContarLasVecesQueSeRepiteEnLaCadena(UnicodeString palabra);
      void EliminarLetrasQueSeEncuentrenEnLaCadena(char letra);


};


#endif
