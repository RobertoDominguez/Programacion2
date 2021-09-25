//---------------------------------------------------------------------------

#ifndef UCNaturalRH
#define UCNaturalRH
//---------------------------------------------------------------------------
#endif

class NaturalR{
  private:
	int eliminarDigitoPosicion(int n,unsigned short k,unsigned short actual);
    bool esPrimo(int n,int x,unsigned short c);
  public:

	short cantidadDigitos(int n);
    int sumaDigitos(int n);
	short mayorDig(int n);
	int invertirNum(int n);
	int eliminarDigitosRepetidos(int n);
	int eliminarDigitoPosicion(int n,unsigned short k);
	int intercambiarDigitos(int n,unsigned short d1,unsigned short d2);
	bool esPrimo(int n);
};