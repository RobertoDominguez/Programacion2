//---------------------------------------------------------------------------

#ifndef UCNaturalRH
#define UCNaturalRH
//---------------------------------------------------------------------------
#endif

typedef unsigned char byte; //[0,255]

class NaturalR{
  private:
	int eliminarDigitoPosicion(int n,byte k,byte actual);
	bool esPrimo(int n,int x,byte c);
	float serie1(byte n,byte dig);
  public:
	short cantidadDigitos(int n);
	int sumaDigitos(int n);
	short mayorDig(int n);
	int invertirNum(int n);
	int eliminarDigitosRepetidos(int n);
	int eliminarDigitoPosicion(int n,byte k);
	int intercambiarDigitos(int n,byte d1,byte d2);
	bool esPrimo(int n);
	void eliminarDigito(int &n,byte dig);
	void ponerMayorAlFinal(int &n);
	float serie1(byte n); //1+4/3+8/7+16/15
	bool estaOrdenado(int n);
};