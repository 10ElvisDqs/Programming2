//---------------------------------------------------------------------------

#ifndef UMatrizH
#define UMatrizH
//---------------------------------------------------------------------------

const maxf=10;
const maxc=10;
class CMatriz
{ private:
	 int m,n;
	 float Matriz[maxf][maxc];
	 int GetM();
	 void SetM(int valor);
	 int GetN();
	 void SetN(int valor);
	 float GetElem(int f, int c);
	 void SetElem(int f, int c, float Elem);
  public:
	 CMatriz();
	 __property int Filas={ read=GetM, write=SetM};
	 __property int Columnas={read=GetN, write=SetN};
	 __property float Celdas[int f][int c]={read=GetElem, write=SetElem};
	 void MultiplicaciónEscalar(float k, CMatriz *A);
	 void Transpuesta(CMatriz *A);
	 void Suma(CMatriz *A, CMatriz *B) ;
	 void Multiplicacion(CMatriz *A, CMatriz *B);
};

#endif
