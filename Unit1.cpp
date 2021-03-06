//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
  opt=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	StringGrid1->ColCount=StrToInt(Edit4->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	StringGrid2->ColCount=StrToInt(Edit5->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	StringGrid3->RowCount=StrToInt(Edit6->Text);
	StringGrid3->ColCount=StrToInt(Edit7->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	StringGrid4->RowCount=StrToInt(Edit8->Text);
	StringGrid4->ColCount=StrToInt(Edit9->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int num=0;
	int pos=0;
	int pos2=0;
	String cadena;
	switch (opt) {
		case 1:
			num=StrToInt(Edit1->Text);
			Label1->Caption=IntToStr(n.cantidadDigitos(num));
		break;
		case 2:
			num=StrToInt(Edit1->Text);
			Label1->Caption=IntToStr(n.sumaDigitos(num));
		break;
		case 3:
			num=StrToInt(Edit1->Text);
			Label1->Caption=IntToStr(n.mayorDig(num));
		break;
		case 4:
		   num=StrToInt(Edit1->Text);
		   Label1->Caption=IntToStr(n.invertirNum(num));
		break;
		case 5:
		   num=StrToInt(Edit1->Text);
		   Label1->Caption=IntToStr(n.eliminarDigitosRepetidos(num));
		break;
		case 6:
		   num=StrToInt(Edit1->Text);
		   pos=StrToInt(Edit2->Text);
		   Label1->Caption=IntToStr(n.eliminarDigitoPosicion(num,pos));
		break;
		case 7:
		   num=StrToInt(Edit1->Text);
		   pos=StrToInt(Edit2->Text);
		   pos2=StrToInt(Edit3->Text);
		   Label1->Caption=IntToStr(n.intercambiarDigitos(num,pos,pos2));
		break;
		case 8:
			num=StrToInt(Edit1->Text);
			if (n.esPrimo(num)) {
				Label1->Caption="El numero es Primo";
			}else{
				Label1->Caption="El numero No es Primo";
			}
		break;

		case 9:
		   num=StrToInt(Edit1->Text);
		   n.ponerMayorAlFinal(num);
		   Label1->Caption=IntToStr(num);
		break;

		case 10:
		   num=StrToInt(Edit1->Text);
		   Label1->Caption=FloatToStr(n.serie1(num));
		break;

		case 11:
		   num=StrToInt(Edit1->Text);
		   if (n.estaOrdenado(num)) {
		   Label1->Caption="Esta ordenado de manera Ascendente";
		   }else{
			   Label1->Caption="No esta ordenado de manera Ascendente";
		   }
		break;

		case 100:
			cadena=Edit1->Text;
			Label1->Caption=IntToStr(c.cantidadPalabras(cadena));
		break;

		case 1000:
			v.sortBubble(StringGrid1,StringGrid1->ColCount);
		break;

		case 1001:
			pos=StrToInt(Edit1->Text);
			pos2=StrToInt(Edit2->Text);
			if (pos2<=StringGrid1->ColCount && pos>=1) {
				v.sortRangeBubble(StringGrid1,pos,pos2);
			}else{
				Label1->Caption="Error rango invalido";
            }

		break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cantidadDigitos1Click(TObject *Sender)
{
	opt=1;
	Label5->Caption=" Muestra la cantidad de digitos de un numero \n entrada1: numero \n salida1: cantidad de digitos";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sumaDeDigitos1Click(TObject *Sender)
{
	opt=2;
	Label5->Caption=" Muestra la suma de los digitos de un numero \n entrada1: numero \n salida1: suma de los digitos del numero";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DigitoMayor1Click(TObject *Sender)
{
	opt=3;
	Label5->Caption=" Saca el digito mayor de un numero \n entrada1: numero \n salida1: digito mayor";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirNumero1Click(TObject *Sender)
{
	opt=4;
	Label5->Caption=" Invierte un numero entero \n entrada1: numero \n salida1: numero invertido";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::eliminarDigitosRepetidos1Click(TObject *Sender)
{
	opt=5;
	Label5->Caption=" Elimina los digitos repetidos de un numero \n entrada1: numero \n salida1: numero con digitos eliminados";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::eliminarDigitoPosicion1Click(TObject *Sender)
{
	opt=6;
	Label5->Caption=" Eliminar el digito de una posicion k \n entrada1: numero \n entrada2: posicion k \n salida1: numero con digito eliminado";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::intercambiarDigitos1Click(TObject *Sender)
{
	opt=7;
	Label5->Caption=" Intercambiar 2 digitos de un numero (condicion: los digitos no se repiten) \n entrada1: numero \n entrada2: digito1 \n entrada3: digito2 \n salida1: numero con digitos intercambiados";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::esPrimo1Click(TObject *Sender)
{
	opt=8;
	Label5->Caption=" Muestra si un numero es Primo o no \n entrada1: numero \n salida1: indica si el numero es primo o no";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ponerDigitoMayorAlFinal1Click(TObject *Sender)
{
	opt=9;
	Label5->Caption=" Pone el digito mayor del numero al final \n entrada1: numero \n salida1: Muestra el numero con el digito mayor al final";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::serie11Click(TObject *Sender)
{
	opt=10;
	Label5->Caption=" Muestra una sumatoria de una serie  \n entrada1: numero \n salida1: Muestra la sumatoria de la serie 1+4/3+8/7+16/15...";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarPalabras1Click(TObject *Sender)
{
	opt=100;
	Label5->Caption=" Muestra la cantidad de palabras de una cadena \n entrada1: cadena \n salida1: Cantidad de palabras de la cadena";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenarVector1Click(TObject *Sender)
{
	opt=1000;
	Label5->Caption=" Ordena el vector";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OrdenarVectorRango1Click(TObject *Sender)
{
	opt=1001;
	Label5->Caption=" Ordena el vector entre un rango A y B";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::estaOrdenadoAsc1Click(TObject *Sender)
{
	opt=11;
	Label5->Caption=" Pregunta si el numero esta ordenado de manera ascendente";
}
//---------------------------------------------------------------------------

