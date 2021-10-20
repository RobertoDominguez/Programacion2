//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCNaturalR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iostream>
using namespace std;

short NaturalR::cantidadDigitos(int n){
	short res;
	if (n==0) {
		res=0;
	}else{
		res=cantidadDigitos(n/10)+1;
	}
	return res;
}



int NaturalR::sumaDigitos(int n){
	int suma;
	if (n==0) {
		suma=0;
	}else{
		short digito=n%10;
		suma=sumaDigitos(n/10)+digito;
	}
    return suma;
}

short NaturalR::mayorDig(int n){
	short may;
	if (n==0){
	   may=0;
	}else{
		may=mayorDig(n/10);//mayor digito
		short dig=n%10;
		if (dig>may){
			may=dig;
		}
	}
	return may;
}

int NaturalR::invertirNum(int n){
	int inv;
	if (n==0) {
		inv=0;
	}else{
		short dig=n%10;
		short cantDig=(short)(log((double)n)/log(10.0));
		int m=pow(10,(double)cantDig);
		inv=invertirNum(n/10)+dig*m;
	}
	return inv;
}


bool existeDigitoEnNumero(short dig,int n){
	bool existe;
	if (n==0) {
		existe=false;
	}else{
		short digAct=n%10;
		if (digAct==dig) {
			existe=true;
		}else{
			existe=existeDigitoEnNumero(dig,n/10);
	 	}
	}
	return existe;
}


int NaturalR::eliminarDigitosRepetidos(int n){
	int res;
	if (n==0) {
		res=0;
	}else{
		short dig=n%10;
		if (existeDigitoEnNumero(dig,n)) {
			res=eliminarDigitosRepetidos(n/10);
		}else{
			res=eliminarDigitosRepetidos(n/10)*10+dig;
		}
	}
	return res;
}


int NaturalR::eliminarDigitoPosicion(int n,byte k){
	short actual=log((double)n)/log(10.0)+1;
	return eliminarDigitoPosicion(n,k,actual);
}

int NaturalR::eliminarDigitoPosicion(int n,byte k,byte actual){
	int res;
	if (n==0) {
		res=0;
	}else{
		short dig=n%10;
		if (k==actual) {
			res=eliminarDigitoPosicion(n/10,k,actual-1);
		}else{
			res=eliminarDigitoPosicion(n/10,k,actual-1)*10+dig;
		}
	}
	return res;
}

int NaturalR::intercambiarDigitos(int n,byte d1,byte d2){
	int res;
	if (n==0) {
		res=0;
	}else{
		byte digitoActual=n%10;
		if (d2==digitoActual) {
			res=intercambiarDigitos(n/10,d1,d2)*10+d1;
		}else if (d1==digitoActual){
			res=intercambiarDigitos(n/10,d1,d2)*10+d2;
		}else{
			res=intercambiarDigitos(n/10,d1,d2)*10+digitoActual;
        }
	}
	return res;
}


bool NaturalR::esPrimo(int n){
	return esPrimo(n,n,0);
}

bool NaturalR::esPrimo(int n,int x,byte c){
	bool esP;
	if (c>2){
		esP=false;
	}else if (x==0){
		esP=true;
	}else{
		if (n%x==0){
			c++;
		}
		esP=esPrimo(n,x-1,c);
	}
	return esP;
}




void NaturalR::eliminarDigito(int &n,byte dig){
	if (n<10){
	  if (n==dig){
		  n=0;
	  }
	}else{
	  short digAct=n%10;
	  n=n/10;
	  eliminarDigito(n,dig);//0
	  if (digAct!=dig){
		n=n*10+digAct;
	  }
	}
}


void NaturalR::ponerMayorAlFinal(int &n){
	short may=mayorDig(n);
	eliminarDigito(n,may);
	n=n*10+may;
}

float NaturalR::serie1(byte n,byte dig){
    float res;
	if (n==1){
		res=1;
	}else{
		res=serie1(n-1,dig*2)+( ((float)(dig)/(dig-1)) );
	}
	return res;
}

float NaturalR::serie1(byte n){
	return (n==0)? 0 : serie1(n,4);
}


//12345
bool NaturalR::estaOrdenado(int n){
	bool res;
	if (n==0) {
		res=true;
	}else{
		byte dig1=n % 10;
		n=n/10;
		byte dig2=n % 10;
		res=estaOrdenado(n) && (dig1>=dig2);
	}
	return res;
}
