//---------------------------------------------------------------------------

#pragma hdrstop
#include "vcl.h"
#include "UMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CMatriz::CMatriz()
{  m=0;
   n=0;
}

int CMatriz::GetM()
{  return m;}

void CMatriz::SetM(int valor)
{  if(valor<=maxf)
   {  m=valor;}
   else
   {  ShowMessage("Cantidad de filas erronea");}
}

int CMatriz::GetN()
{  return n;}

void CMatriz::SetN(int valor)
{  if(valor<=maxc)
   {  n=valor;}
   else
   {  ShowMessage("Cantidad de columnas erronea");}
}

float CMatriz::GetElem(int f, int c)
{  if(f<m && c<n)
   {  return Matriz[f][c];}
   else
   {  ShowMessage("Posici�n de fila o columna erronea");}
}

void CMatriz::SetElem(int f, int c, float Elem)
{  if(f<m && c<n)
   {  Matriz[f][c]=Elem;}
   else
   {  ShowMessage("Posici�n de fila o columna erronea");}
}

void CMatriz::Transpuesta(CMatriz *A)
{}

void CMatriz::Suma(CMatriz *A, CMatriz *B)
{}

void CMatriz::Multiplicacion(CMatriz *A, CMatriz *B)
{}
