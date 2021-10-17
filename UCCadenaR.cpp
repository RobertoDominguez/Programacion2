//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCCadenaR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

const String letras="qwertyuiopasdfghjklñzxcvbnmQWERTYUIOPASDFGHJKLÑZXCVBNM";

byte CadenaR::cantidadPalabras(String cadena){
	byte cant;
	if (cadena.Length()==0) {
		return 0;
	}else if (cadena.Length()==1){
        if (letras.Pos(cadena[1])>0) {
			cant=1;
		}else{
			cant=0;
		}
	}else{
		if (letras.Pos(cadena[1])>0 && letras.Pos(cadena[2])==0) {
			cadena.Delete(1,1);
			cant=1+cantidadPalabras(cadena);
		}else{
			cadena.Delete(1,1);
			cant=cantidadPalabras(cadena);
		}
	}
	return cant;
}

