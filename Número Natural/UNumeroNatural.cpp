//---------------------------------------------------------------------------

#pragma hdrstop

#include "UNumeroNatural.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <vcl.h>

CNumeroNatural::CNumeroNatural()
{  n=0;}

unsigned long CNumeroNatural::GetN()
{  return n;}

void CNumeroNatural::SetN(unsigned long valor)
{  n=valor;}

unsigned short CNumeroNatural::ContarDigito()
{  unsigned long aux=n;

   unsigned short c=0;
   while(aux>0)
   {  aux=aux/10;
	  ShowMessage("das");
	  ShowMessage(c);
	  c++;
   }
   ShowMessage(c);
   return c;
}

void CNumeroNatural::EliminarDigito(unsigned short pos)
{   unsigned long aux=0,p=1;
	unsigned short d,c=0;
	while(n>0)
	{  d=n%10;
	   n=n/10;
	   c++;
	   if(c!=pos)
	   {  aux=d*p+aux;
		  p=p*10;
	   }
	}
	n=aux;
}

unsigned long CNumeroNatural::Factorial()
{   unsigned long c=0,f=1;
	while(c<n)
	{  c++;
	   f=f*c;
	}
    return f;
}

void CNumeroNatural::EliminarDigPares()
{  unsigned long aux=0, p=1;
   unsigned short d;
   while (n>0)
   {  d=n%10;
	  n=n/10;
	  if(d%2==1)
	  {  aux=d*p+aux;
		 p=p*10;
	  }
   }
   n=aux;
}

void CNumeroNatural::InsertarDigPos(unsigned short pos, unsigned short dig)
{  unsigned long aux=0, p=1;
   unsigned short c=0, d;
   while(n>0)
   {  d=n%10;
	  n=n/10;
	  c++;
	  if(c==pos)
	  {  aux=dig*p+aux;
		 p=p*10;
	  }
	  aux=d*p+aux;
	  p=p*10;
   }
   n=aux;
}

void CNumeroNatural::Voltear()
{   unsigned long aux=0;
	unsigned short d;
	while(n>0)
	{   d=n%10;
		n=n/10;
		aux=aux*10+d;
	}
	n=aux;
}

unsigned short CNumeroNatural::DevolverDigPos(unsigned short pos)
{   unsigned long aux=n;
	unsigned short d, c=0;
	while (aux>0 && c!=pos)
	{  c++;
	   d=aux%10;
	   aux=aux/10;
	}
	if(c==pos)
	{ return d;}
}

void CNumeroNatural::EliminarRango(unsigned short pos1, unsigned short pos2)
{   unsigned long aux=0, p=1;
	unsigned short d, c=0;
	while(n>0)
	{    d=n%10;
		 n=n/10;
		 c++;
		 if(c<pos1 && c>pos2)
		 { aux=d*p+aux;
		   p=p*10;
		 }
	}
	n=aux;
}

void CNumeroNatural::IntercambiarDigPos(unsigned short pos1, unsigned short pos2)
{   unsigned short d1=DevolverDigPos(pos1), d2=DevolverDigPos(pos2),d,c=0;
	unsigned long aux=0, p=1;
	while(n>0)
	{  d=n%10;
	   n=n/10;
	   c++;
	   if(c==pos1)
	   {  aux=d2*p+aux;}
	   else if(c==pos2)
	   {  aux=d1*p+aux;}
	   else
	   {  aux=d*p+aux;}
	   p=p*10;
	}
	n=aux;
}

unsigned long CNumeroNatural::DevolverNumRango(unsigned short pos1, unsigned short pos2)
{    unsigned long aux=n, num=0, p=1;
	 unsigned short d, c=0;
	 while(aux>0)
	 {  d=aux%10;
		aux=aux/10;
		c++;
		if(c>=pos1 && c<=pos2)
		{  num=d*p+num;
		   p=p*10;
		}
	 }
     return num;
}

/*-------------------- P r a c t i c o --------------------*/

unsigned long CNumeroNatural::FactorialN()  /*1*/
{   unsigned long c=0,f=1;
	while(c<n)
	{  c++;
	   f=f*c;
	}
	return f;
}
unsigned long CNumeroNatural::Contar_Dig_Pares(){  /*2*/

	unsigned long aux=n;
	unsigned long contador_pares=0;
	unsigned short d=0;
	while(aux>0){
	d=aux%10;
	aux=aux/10;

		if(d%2 == 0){
		 contador_pares++;
		}

	}
	return contador_pares;

}
void CNumeroNatural::Elim_Dig_Impares(){
	unsigned long aux=0, p=1;
   unsigned short d;
   while (n>0)
   {  d=n%10;
	  n=n/10;
	  if(d%2==0)
	  {  aux=d*p+aux;
		 p=p*10;
	  }else{
		  //si no es par no se cargan los valores
	  }
   }
   n=aux;
}
bool CNumeroNatural::esPrimo(int num) {
	if (num < 2) return false;
	if (num == 2 || num == 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;
	for (int i = 5; i * i <= num; i += 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return false;
	return true;
}

int CNumeroNatural::Sumar_Dig_Primos(){
   unsigned long aux=n;
   unsigned short d;
   unsigned long suma_primos=0;
   while (aux>0)
   {  d=aux%10;
	  aux=aux/10;
	  if(esPrimo(d))
	  {
		ShowMessage(d);
		suma_primos=suma_primos+d;
	  }else{
		  //si no es primo no ase nada
	  }
   }

   return suma_primos;
}
unsigned long CNumeroNatural::Dig_Mayor(){         /*5*/
   unsigned long aux=n;
   unsigned short d;
   unsigned long dig_mayor=0;
   while (aux>0)
   {  d=aux%10;
	  aux=aux/10;

	  if(d>dig_mayor)
	  {
		dig_mayor=d;;
	  }else{

	  }
   }

   return dig_mayor;
}
bool CNumeroNatural::Verificar(unsigned long num){   /*6*/
   unsigned long aux=n;
   unsigned short d;
   bool encontro=false;

   while(aux>0 && encontro!=true){
	  d=aux%10;
	  aux=aux/10;

	  if(d == num)
	  {
		encontro=true;
	  }
   }
   return encontro;
}

bool CNumeroNatural::Verificar_Perfecto(){
	int sumaDivisores = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == n) {
		return true;
	} else {
		return false;
	}

}

void  CNumeroNatural::Eliminar_Rango(int pos1,int pos2){
	unsigned long aux=0,p=1;
	unsigned short d,c=0;
	while(n>0)
	{  d=n%10;
	   n=n/10;
	   c++;
	   if(c==pos1 )
	   {
			while(c<=pos2){
				 d=n%10;
				 n=n/10;
				 c++;
			}
	   }
	   aux=d*p+aux;
	   p=p*10;
	}

	n=aux;
}
void  CNumeroNatural::Eliminar_Iguales(int dig){

	unsigned long aux=0,p=1;
	unsigned short d=0;
	while(n>0)
	{  d=n%10;
	   n=n/10;
	   if(d!=dig)
	   {  aux=d*p+aux;
		  p=p*10;
	   }
	}
	n=aux;
}

void CNumeroNatural::Reemplazar(int dig1,int dig2){

	unsigned long aux=0,p=1;
	unsigned short d=0;
	while(n>0){
	 d=n%10;
		 if(d==dig2){
			 aux=dig1*p+aux;
			 p=p*10;
		 }else{
			aux=d*p+aux;
			 p=p*10;
		 }
	 n=n/10;
	}

	n=aux;

}

unsigned long CNumeroNatural::Dig_Repit(){
	unsigned long aux1=n;
	unsigned long aux2=n;
	unsigned short d1=0;
	unsigned short d2=0;

	int max_freq = 0, most_common = 0;

	while(aux1>0) {
		int freq = 0;
		d1=aux1%10;
		aux1=aux1/10;
		while(aux2>0){
		   d2=aux2%10;
		   aux2=aux2/10;
		   if(d1==d2)
		   {  freq++;
		   }
		}
		aux2=n;

		if (freq > max_freq) {
			max_freq = freq;
			most_common = d1;
		}
	}

	return most_common;

}

void CNumeroNatural::Intercambiar(int dig1,int dig2){

	unsigned long aux=0,p=1;
	unsigned short d=0;
	while(n>0){
	 d=n%10;
		 if(d==dig1){
			 aux=dig2*p+aux;
			 p=p*10;
		 }else{

			 if(d==dig2){
			 aux=dig1*p+aux;
			 p=p*10;
			 }else{
              aux=d*p+aux;
			 p=p*10;
             }
		 }

	 n=n/10;
	}

	n=aux;

}

unsigned long CNumeroNatural::Decimal_A_Octal(){
	int  residuo, octal = 0, i = 1;
	unsigned long aux=n;
	while (aux != 0) {
		residuo = aux % 8;
		octal += residuo * i;
		aux /= 8;
		i *= 10;
	}
	return octal;
}

