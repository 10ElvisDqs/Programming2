//---------------------------------------------------------------------------

#pragma hdrstop
#include "vcl.h"
#include "UVector.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
CVector::CVector(TCanvas *L)
{  n=0;
   Lienzo=L;
}
CVector::CVector(){
	n=0;
}

int CVector::GetN()
{  return n;}

void CVector::SetN(int valor)
{     if(valor>=0 && valor<=max)
	  {  n=valor; }
	  else
	  {  ShowMessage("Solo puede trabajar con "+IntToStr(max)+" celdas");}
}

int CVector::GetElem(int pos)
{     if(pos>=0 && pos<n)
	  {   return V[pos]; }
	  else
	  {  ShowMessage("Estamos trabajando con "+IntToStr(n)+" celdas");}
}

void CVector::SetElem(int pos, int elem)
{     if(pos>=0 && pos<n)
	  {  V[pos]=elem;}
      else
	  {  ShowMessage("Estamos trabajando con "+IntToStr(n)+" celdas");}
}

int CVector::ContarElem(int elem)
{    int c=0;
	 for(int i=0;i<n;i++)
	 {   if(V[i]==elem)
		 {  c++;}
	 }
	 return c;
}
int CVector::ContElemRec(int elem, int i)
{    if(i<0)
	 {  return 0;}
	 else
	 {  if(V[i]==elem)
		{  return ContElemRec(elem, i-1)+1;}
		else
		{  return ContElemRec(elem, i-1);}
	 }
}

int CVector::ContarElemRec(int elem)
{  return ContElemRec(elem, n-1); }

int CVector::SumarElem()
{    int s=0;
	 for(int i=0;i<n;i++)
	 {  s=s+V[i];}
	 return s;
}

int CVector::SumElemRec(int i)
{   if(i<0)
	{  return 0;}
	else
	{  return V[i]+SumElemRec(i-1);}
}

int CVector::SumarElemRec()
{  return SumElemRec(n-1);}

void CVector::EliminarElem(int pos)
{    if(pos<n && n>0)
	 {   for(int i=pos;i+1<n;i++)
		 {  V[i]=V[i+1]; ShowMessage( V[i+1]); }
		 n--;
	 }
	 else
	 {  ShowMessage("Posici�n err�nea");}

}
void CVector::ElimElemRec(int pos, int i)
{   if( i+1>=n)
	{ n--; }
	else
	{  V[i]=V[i+1];
       ElimElemRec(pos,i+1);
	}
}

void CVector::EliminarElemRec(int pos)
{  if(pos<n && n>0)
   {  ElimElemRec(pos,pos);}
   else
   {  ShowMessage("Posici�n err�nea");}
}

void CVector::InsertarElem(int pos, int elem)
{    if(pos<n && n<max)
	 {   n++;
		 for(int i=n-1;i-1>=pos;i--)
		 {  V[i]=V[i-1];}
		 V[pos]=elem;
	 }
	 else
	 {  ShowMessage("Posici�n err�nea");}
}

void CVector::InsElemRec(int pos, int elem, int i)
{    if(i-1<pos)
	 {  V[pos]=elem;}
	 else
	 {  V[i]=V[i-1];
	    InsElemRec(pos,elem,i-1);
	 }
}

void CVector::InsertarElemRec(int pos, int elem)
{    n++;
	 InsElemRec(pos,elem,n-1);
}

int CVector::BusquedaSecuencial(int elem)
{   int i=n-1;
	while(i>=0 && V[i]!=elem)
	{  i--;}
	return i;
}

int CVector::BusSecRec(int elem, int i)
{   if(V[i]==elem)
	{  return i;}
	else if(i<0)
	{  return -1;}
	else
	{  return BusSecRec(elem, i-1);}
}

int CVector::BusquedaSecuencialRec(int elem)
{  return BusSecRec(elem, n-1);}

int CVector::BusquedaBinaria(int elem)
{   int ini=0,fin=n-1,pivote=(ini+fin)/2;
	while(ini<=fin && V[pivote]!=elem)
	{    if(elem<V[pivote])
		 {  fin=pivote-1;}
		 else if (elem>V[pivote])
		 {  ini=pivote+1; }
		 pivote=(ini+fin)/2;
	}
	if(V[pivote]==elem)
	{  return pivote;}
	else
	{  return -1;}
}
int CVector::BusBinRec(int elem, int ini, int fin)
{    if(ini>fin)
	 {  return -1;}
	 else
	 {  int pivote=(ini+fin)/2;
		if(V[pivote]==elem)
		{  return pivote;}
		else if(elem>V[pivote])
		{  return BusBinRec(elem, pivote+1,fin);}
		else if(elem<V[pivote])
		{  return BusBinRec(elem, ini, pivote-1);}
     }
}

int CVector::BusquedaBinariaRec(int elem)
{  return BusBinRec(elem, 0,n-1);}

void CVector::LlenarVector()
{   Randomize();
	n=max;
	for(int i=0;i<n;i++)
	{  V[i]=random(100)+1;}
}

void CVector::DibujarLinea(int x, int y, int elem)
{   Lienzo->Pen->Color=clWhite;
	Lienzo->MoveTo(x,y);
	Lienzo->LineTo(x,y+(100-elem));
	Lienzo->Pen->Color=clRed;//clGreen;
	Lienzo->LineTo(x,y+100);
}

void CVector::DibujarVector(int x, int y)
{   X=x; Y=y;
	for(int i=0;i<n;i++)
	{  DibujarLinea(2*i+x,y,V[i]);}
}

void CVector::Intercambio(int pos1, int pos2)
{    int aux=V[pos1];
	 V[pos1]=V[pos2];
	 V[pos2]=aux;
}

void CVector::OrdenarIntercambio()
{   for(int i=0;i<n-1;i++)
	{  for(int j=i+1;j<n;j++)
	   {  if(V[j]<V[i])
		  { Intercambio(i,j);
			DibujarLinea(2*i+X,Y,V[i]);
			DibujarLinea(2*j+X,Y,V[j]);
			Sleep(1);
		  }
	   }
	}
}

void CVector::OrdenarBurbuja()
{   for(int i=0;i<n-1;i++)
	{   for(int j=n-1;j-1>=i;j--)
		{  if(V[j]<V[j-1])
		   { Intercambio(j,j-1);
			 DibujarLinea(2*j+X,Y,V[j]);
			 DibujarLinea(2*(j-1)+X,Y,V[j-1]);
			 Sleep(1);
		   }
		}
	}
}

void CVector::OrdenarShell()
{   int rango=n/2;
	bool sw;
	while(rango>0)
	{   do
		{   sw=false;
			for(int i=0;i+rango<n;i++)
			{    if(V[i+rango]<V[i])
				 {  Intercambio(i+rango,i);
					sw=true;
					DibujarLinea(2*(i+rango)+X,Y,V[i+rango]);
					DibujarLinea(2*i+X,Y,V[i]);
					Sleep(1);
				 }
			}
		}
		while(sw==true);
		rango=rango/2;
	}
}

void CVector::OrdQuickSort(int ini, int fin)
{    if(ini<fin)
	 {   int pivote=V[(ini+fin)/2];
		 int may=ini, men=fin;
		 while(may<=men)
		 {    while(V[may]<pivote)
			  { may++;}
			  while(V[men]>pivote)
			  { men--;}
			  if(may<=men)
			  {    Intercambio(may,men);
				   DibujarLinea(2*may+X,Y,V[may]);
				   DibujarLinea(2*men+X,Y,V[men]);
				   Sleep(1);
				   may++;
				   men--;
			  }
		 }
		 OrdQuickSort(ini, men);
		 OrdQuickSort(may,fin);

	 }
}


void CVector::OrdenarQuickSort()
{  OrdQuickSort(0,n-1);}

// modelo de examen
/*
 v=|3|7|4|12|8|1|2|11|5|9|

 R=|4|3|12|7|8|1|2|11|5|9|
*/
 void CVector::IntercalarParesImpares(){

	int pares[100];
	int indeceP=0;
   int indeceI=0;
	int impares[100];
	//separar los elementos pares e impares en vectores diferentes
	for(int i=0;i<GetN();i++){
		if(V[i]%2 == 0){//si es par
			pares[indeceP]=V[i];
			indeceP++;
		}else{          //si es impar
			impares[indeceI]=V[i];
			indeceI++;
		}
	}
	//intercalar
		 int j=0;
		 int i=0;

	while(i<GetN()){

		if(i<indeceP){
			ShowMessage(pares[i]);
		 V[j]=pares[i];
		 j++;
		}else{

		}
		V[j]=impares[i];
		 j++;
		i++;
	}

 }/*
 void CVector::eliElemSumDigIngSumDigElem(){
	int sum=0;
	for(int i=0;i<GetN();i++){
		sum=(V[i]/10)+(V[i]%10);
		if(sum==elem){
		 for(int j=i;j<GetN();j++){
		   aux=V[j++];
		   V[j]=V[j++];
		   V[j++]=aux;

		 }
		}
	}
 }  */
 /* Dado un elemento elem eliminar aquellos elementos cuya suma de sus digitos sean igual
	a la suma de los digitos del elem

	V=|1|23|6|14|17|81|5|16|7|23|21|1|
		  *    *       *       *
	elem=41

	V=|1|6|17|81|16|7|21|2|

	*/
  void CVector::Examen1(int num){

	int suma_dig_num=(num%10)+(num/10);
	ShowMessage(suma_dig_num);
	int pos=0;
	for(int i=0;i<n;i++){
		if(V[i]==suma_dig_num){
		   EliminarElem(i);
		}else{
		   int suma_dig_vec=(V[i]%10)+(V[i]/10);
		   ShowMessage(suma_dig_vec);
		   if(suma_dig_num==suma_dig_vec){
			  EliminarElem(i);
		   }

		}

	}
 }

int CVector::Examen2(){

	int max_freq = 0, most_common = 0;
	for (int i = 0; i < n; i++) {
		int freq = 0;
		for (int j = 0; j < n; j++) {
			if (V[j] == V[i]) {
				freq++;
			}
		}
		if (freq > max_freq) {
			max_freq = freq;
			most_common = V[i];
		}
	}

	return most_common;
}

/*
	Dado un numero num ,eliminar aquellos elementos que no inicien en num

	v=|421|342|273|425|892|347|2150|592|427|
	num=42
	v=|421|425|427|

*/
void CVector::ElimElemQueNoInicienEnNum(int num){


  int j=0;
  for(int i=0;i<n;i++){
	if((V[i]/10)!=num){
		j=i;
		for (int j = i; j <n-1; j++) {
			 V[j] = V[j+1];
	   }
	   /*
		while(pos<n-1){
			V[pos]=V[pos++];
			pos++;
		}*/
		n--;
	}
  }


}



//-------------------- P r a c t i c o --------------------//

void CVector::EliminarPrimos(){/*3*/
	// Eliminar los n�meros primos del vector
	for (int i = 0; i < n; i++) {
		int num = V[i];
		bool es_primo = true;

		if (num <= 1) {
			es_primo = false;
		}

		int raiz =raiz_cuadrada(num);

		for (int j = 2; j <= raiz; j++) {
			if (num % j == 0) {
				es_primo = false;
				break;
			}
		}

		if (es_primo) {
			EliminarElem(i);
			i--;
		}
	}

}

// Funci�n para calcular la ra�z cuadrada utilizando el m�todo de Newton-Raphson
double CVector::raiz_cuadrada(int num) {
	double x = num;
	double y = 1;
	double e = 0.000001; // Error permitido

	while (x - y > e) {
		x = (x + y) / 2;
		y = num / x;
	}

	return x;
}

void CVector::VolterElem_Vec(){ /*4*/
	int i = 0;
	int j = n - 1;
	while (i < j) {
		int temp = V[i];
		V[i] = V[j];
		V[j] = temp;
		i++;
		j--;
	}
}

int CVector::Elem_Mayor(){/*5*/
	int elemM=0;
	for(int i=0;i<n;i++){
		if(i==0){
			elemM=V[i];
		}
		if(V[i]>elemM){
			elemM=V[i];
		}
	}
	return elemM;
}

int CVector::Elem_mas_rep(){/*6*/

	int max_freq = 0, most_common = 0;
	for (int i = 0; i < n; i++) {
		int freq = 0;
		for (int j = 0; j < n; j++) {
			if (V[j] == V[i]) {
				freq++;
			}
		}
		if (freq > max_freq) {
			max_freq = freq;
			most_common = V[i];
		}
	}

	return most_common;
}

void CVector::Par_Izq_Imp_Der(){
    // Colocar los elementos pares a la izquierda y los impares a la derecha
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (V[i] % 2 != 0 && V[j] % 2 == 0) {
			int temp = V[i];
			V[i] = V[j];
			V[j] = temp;
		}
		if (V[i] % 2 == 0) {
			i++;
		}
		if (V[j] % 2 != 0) {
			j--;
		}
	}
}
void CVector::Elim_ElemMultiplo(int num){
	for(int i=0;i<n;i++){
		if(V[i]%num == 0){
		   EliminarElem(i);
		   i--;
		}

	}
}
void CVector::Intercalar_Par_Impar(){
	int pares[100];
	int impares[100];
	int resultado[100];
	int x=0;
	int y=0;
	int z=0;

	// Separar los elementos pares e impares en vectores diferentes
	for (int i = 0; i < n; i++) {
		if (V[i] % 2 == 0) {
			pares[x]=V[i];
			x++;
		} else {
			impares[y]=V[i];
			y++;
		}
	}

	// Intercalar los elementos pares e impares en el vector resultado
	int i = 0;
	int j = 0;
	while (i < /*pares.*/x && j < /*impares*/y) {
		resultado[i]=pares[i++];
		resultado[j]=impares[j++];
		z++;
	}

	// Agregar los elementos restantes, si los hay
	while (i < x) {
		resultado[i]=pares[i++];
	}

	while (j < y) {
		resultado[j]=impares[j++];
	}

	// Mostrar el vector resultado
	for (int i = 0; i < z; i++) {
		ShowMessage( resultado[i]);
	}


}

bool CVector::Esta_Ordenado(){
	for (int i = 0; i < n - 1; i++) {
		if (V[i] > V[i+1]) {
			return false;
		}
	}
	return true;
}
void CVector::Reemplazo(int elem1,int elem2){
	for(int i=0;i<n;i++){
		if(V[i]==elem2){
			V[i]=elem1;
		}
	}
}

void CVector::Elim_Elem_Repit(int elem){
	for(int i=0;i<n;i++){
		if(V[i]==elem){
			EliminarElem(i);
		   i--;
		}
	}
}

void CVector::Elim_Dentro_Rango(int pos1,int pos2){

	for(int i=0;i<n;i++){
		if(i==pos1){
		int aux=n;
		int i=pos1;
		int j=pos2+1;
		int c=0;
			for(i=pos1;i<n;i++){
				V[i]=V[j];
				c++;
				if(i==pos2){
					break;
				}
				j++;
			}
			n=n-c;

		}
	}

}
