//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCadena.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <System.SysUtils.hpp>


CCadena::CCadena()
{  n=0;}

int CCadena::GetN()
{  return n;}

void CCadena::SetN(int valor)
{  if(valor<=max)
   {  n=valor;}
   else
   {  ShowMessage("Dimensi�n err�nea");}
}

char CCadena::GetElem(int pos)
{  if(pos<n)
   {  return Cadena[pos];}
   else
   {  ShowMessage("Posici�n err�nea");}
}

void CCadena::SetElem(int pos, char elem)
{  if(pos<n)
   {  Cadena[pos]=elem;}
   else
   {  ShowMessage("Posici�n err�nea");}
}

UnicodeString CCadena::GetTexto()
{   UnicodeString s="";
	for(int i=0;i<n;i++)
	{ s=s+AnsiString(Cadena[i]);}
	return s;
}

void CCadena::SetTexto(UnicodeString txt)
{   n=txt.Length();
   for(int i=0;i<n;i++)
   {  Cadena[i]=txt[i+1]; }
}

UnicodeString CCadena::GetPalabra(int pos)
{    UnicodeString Pal="";
	 int c=-1,i=0;
	 while( i<n && c<pos)
	 {  while(i<n && Cadena[i]==' ')
		{  i++;}
		if(i<n)
		{ c++;}
		while(i<n && Cadena[i]!=' ')
		{   if(c==pos)
			{  Pal=Pal+AnsiString(Cadena[i]);}
			i++;
		}
	 }
	 return Pal;
}

void CCadena::SetPalabra(int pos, UnicodeString pal)
{    int c=-1,ini,rango,i=0;
	 while(i<n && c<pos)
	 {  while(i<n && Cadena[i]==' ')
		{  i++;}
		if(i<n)
		{  c++;
		   ini=i;
		}
		while(i<n && Cadena[i]!=' ')
		{  i++;}
		rango=i-ini;
	 }
	 // Eliminando la palabra a reemplazar
	 for(int j=ini;j+rango<n;j++)
	 {  Cadena[j]=Cadena[j+rango];}
	 n=n-rango;
	 // Insertar palabra reemplazante
	 rango=pal.Length();
	 n=n+rango;
	 for(int j=n-1; j-rango>=ini;j--)
	 {  Cadena[j]=Cadena[j-rango];}
	 int k=1;
	 for(int j=ini; j<ini+rango; j++)
	 {  Cadena[j]=pal[k];
		k++;
	 }
}

bool CCadena::EsMinuscula(int pos)
{ int cod=int(Cadena[pos]);
  return (cod>=97 && cod<=122) || (cod>=-32 && cod<=-1);
}

bool CCadena::EsMayuscula(int pos)
{  int cod=int(Cadena[pos]);
   return (cod>=65 && cod<=90) || (cod>=-64 && cod<=-33);
}

void CCadena::AMinuscula(int pos)
{  int cod=int(Cadena[pos]);
   if(EsMayuscula(pos))
   { Cadena[pos]=char(cod+32);}
}


void CCadena::AMayuscula(int pos)
{  int cod=int(Cadena[pos]);
   if(EsMinuscula(pos))
   { Cadena[pos]=char(cod-32);}

}

void CCadena::TodoMayuscula()
{  for(int i=0; i<n; i++)
   {  AMayuscula(i);}
}

void CCadena::TodoMinuscula()
{  for(int i=0; i<n; i++)
   {  AMinuscula(i);}
}

void CCadena::TipoInverso()
{  for(int i=0; i<n; i++)
   {  if(EsMinuscula(i))
	  {  AMayuscula(i);}
	  else if(EsMayuscula(i))
	  {  AMinuscula(i);}
   }
}

int CCadena::ContarPalabras()
{  int i=0,c=0;
   while(i<n)
   {   while(Cadena[i]==' ' && i<n)
	   { i++;}
	   if(i<n)
	   { c++;}
	   while(Cadena[i]!=' ' && i<n)
	   { i++;}
   }
   return c;
}

void CCadena::TipoTitulo()
{  int i=0;
   while(i<n)
   {  while(Cadena[i]==' ' && i<n)
	  {  i++;}
	  if(i<n)
	  {  AMayuscula(i);}
	  while(Cadena[i]!=' ' && i<n)
	  {  i++;
		 AMinuscula(i);
	  }
   }
}

char CCadena::DevolverMayuscula(char let)
{    int cod=int(let);
	 if ((cod>=65 && cod<=90) || (cod>=-64 && cod<=-33))//si esta en mayuscula entra nomas
	 {  return let;}
	 else if ((cod>=97 && cod<=122) || (cod>=-32 && cod<=-1))
	 {  return char(cod-32);}
}

char CCadena::DevolverMinuscula(char let)
{    int cod=int(let);
	 if ((cod>=97 && cod<=122) || (cod>=-64 && cod<=-33))
	 {  return let;}
	 else if ((cod>=65 && cod<=90) || (cod>=-32 && cod<=-1))
	 {  return char(cod+32);}
}


void CCadena::LetraAMayuscula(char let)
{  for(int i=0; i<n; i++)
   {   if(DevolverMayuscula(Cadena[i])==DevolverMayuscula(let))
	   {  AMayuscula(i);}
	   else
	   {  AMinuscula(i);}
   }
}

void CCadena::EliminarCaracter(char car)
{  for(int i=0;i<n;i++)
   {   if(Cadena[i]==car)
	   {  for(int j=i;j<n-1;j++)
		  {  Cadena[j]=Cadena[j+1];}
		  n--;
		  if(Cadena[i]==car)
		  { i--;}
	   }
   }
}

void CCadena::EliminarCaracter1(char car)
{  CCadena *Cad_Aux=new CCadena;
   for(int i=0;i<n;i++)
   {  if(Cadena[i]!=car)
	  {  Cad_Aux->Dimension++;
		 Cad_Aux->Casilla[Cad_Aux->Dimension-1]=Cadena[i];
	  }
   }
   this->Texto=Cad_Aux->Texto;
}

/*-------------------- M O D E L O   D E  E X A M E N  -----------------*/
/*
	   Cadena="Anastacia es una persona anarquica"
	   SubCadena="ana"
	  Resultado
	   Cadena=" Anastacia anarquica "
*/

void CCadena::Elim_Palabras_No_Comiencen_SubCadena(UnicodeString subcadena){
	UnicodeString palabra, resultado;
	bool palabraComienzaConSubcadena;

	for (int i = 0; i < n/*cadena.length()*/; i++) {

		// Obtener la palabra actual
		palabra = "";
		while (i < n && Cadena[i] != ' ') {
			palabra += Cadena[i];
			i++;
		}
		// Verificar si la palabra actual comienza con la subcadena
		palabraComienzaConSubcadena = true;
		for (int j = 0; j < subcadena.Length(); j++) {

			if (j >= palabra.Length() || subcadena[j+1] != palabra[j+1]) {
				palabraComienzaConSubcadena = false;
				break;
			}

		}
		// Agregar la palabra actual al resultado solo si comienza con la subcadena
		if (palabraComienzaConSubcadena) {
			resultado += palabra + " ";
		}
	}
	// Eliminar el �ltimo espacio en blanco de la cadena resultante (si lo hay)
	if (resultado.Length() > 0 && resultado[resultado.Length()-1] == ' ') {
		UnicodeString nuevaCadena = "";

		for (int i = 0; i < resultado.Length() - 1; i++) {
			nuevaCadena += resultado[i];
		}
		resultado = nuevaCadena;
	}
	// Actualizar la cadena original con el resultado
	//Cadena = resultado;
	SetTexto(resultado);


}

int CCadena::DadaUnaPalabraContarLasVecesQueSeRepiteEnLaCadena(UnicodeString palabra){

   //	std::string cadena = "A Custa la CUesta Subir la cuEStA";
   // std::string palabra = "Cuesta";
	int contador = 0;

	// Convertir palabra a min�sculas
	for (int i = 1; i < palabra.Length(); i++) {
		if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
			palabra[i] = palabra[i] + ('a' - 'A');
		}
	}

	// Buscar ocurrencias de la palabra en la cadena
	for (int i = 0; i <= n - palabra.Length(); i++) {
		bool encontrado = true;
		for (int j = 1; j <= palabra.Length(); j++) {

			if (Cadena[i + j] >= 'A' && Cadena[i + j] <= 'Z') {

				if (Cadena[i + j] + ('a' - 'A') != palabra[j]) {
					encontrado = false;
					break;
				}

			} else if (Cadena[i + j] != palabra[j]) {
				encontrado = false;
				break;
			}

		}
		if (encontrado) {
			contador++;
		}

	}

	ShowMessage("La palabra '" + palabra+ "' se repite "+IntToStr(contador)+" veces en la cadena '" +GetTexto()+"'" );


	return contador;
}

void CCadena::EliminarLetrasQueSeEncuentrenEnLaCadena(char letra){
// Convertir letra a min�scula si es may�scula
	if (letra >= 'A' && letra <= 'Z') {
		letra += ('a' - 'A');
	}

	// Eliminar ocurrencias de la letra en la cadena
	int j = 0;
	for (int i = 0; i < n; i++) {
		char c = Cadena[i];
		// Convertir car�cter a min�scula si es may�scula
		if (c >= 'A' && c <= 'Z') {
			c += ('a' - 'A');
		}
		// Si el car�cter es diferente a la letra, copiarlo en la posici�n j
		if (c != letra) {
			Cadena[j] = Cadena[i];
			j++;
		}
	}
	// Agregar un caracter nulo al final de la cadena
	Cadena[j] = '\0';

	//ShowMessage("La cadena sin las ocurrencias de la letra '" + "a" + "' es: "+ GetTexto());

}
