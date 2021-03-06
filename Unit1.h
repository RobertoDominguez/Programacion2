//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>

#include "UCNaturalR.h"
#include "UCCadenaR.h"
#include "UCVectorR.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Natural1;
	TMenuItem *Cadena1;
	TMenuItem *Vector1;
	TMenuItem *Matriz1;
	TMenuItem *DigitoMayor1;
	TButton *Button1;
	TGroupBox *GroupBox1;
	TEdit *Edit1;
	TGroupBox *GroupBox2;
	TEdit *Edit2;
	TGroupBox *GroupBox3;
	TEdit *Edit3;
	TGroupBox *GroupBox4;
	TLabel *Label1;
	TGroupBox *GroupBox5;
	TLabel *Label2;
	TGroupBox *GroupBox6;
	TGroupBox *GroupBox7;
	TStringGrid *StringGrid3;
	TStringGrid *StringGrid1;
	TGroupBox *GroupBox8;
	TStringGrid *StringGrid2;
	TGroupBox *GroupBox9;
	TStringGrid *StringGrid4;
	TEdit *Edit4;
	TButton *Button2;
	TEdit *Edit5;
	TButton *Button3;
	TEdit *Edit6;
	TLabel *Label3;
	TEdit *Edit7;
	TButton *Button4;
	TLabel *Label4;
	TEdit *Edit8;
	TEdit *Edit9;
	TButton *Button5;
	TMenuItem *InvertirNumero1;
	TGroupBox *GroupBox10;
	TLabel *Label5;
	TMenuItem *eliminarDigitosRepetidos1;
	TMenuItem *eliminarDigitoPosicion1;
	TMenuItem *cantidadDigitos1;
	TMenuItem *sumaDeDigitos1;
	TMenuItem *intercambiarDigitos1;
	TMenuItem *esPrimo1;
	TMenuItem *ponerDigitoMayorAlFinal1;
	TMenuItem *serie11;
	TMenuItem *ContarPalabras1;
	TMenuItem *OrdenarVector1;
	TMenuItem *OrdenarVectorRango1;
	TMenuItem *estaOrdenadoAsc1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall DigitoMayor1Click(TObject *Sender);
	void __fastcall InvertirNumero1Click(TObject *Sender);
	void __fastcall eliminarDigitosRepetidos1Click(TObject *Sender);
	void __fastcall eliminarDigitoPosicion1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall cantidadDigitos1Click(TObject *Sender);
	void __fastcall sumaDeDigitos1Click(TObject *Sender);
	void __fastcall intercambiarDigitos1Click(TObject *Sender);
	void __fastcall esPrimo1Click(TObject *Sender);
	void __fastcall ponerDigitoMayorAlFinal1Click(TObject *Sender);
	void __fastcall serie11Click(TObject *Sender);
	void __fastcall ContarPalabras1Click(TObject *Sender);
	void __fastcall OrdenarVector1Click(TObject *Sender);
	void __fastcall OrdenarVectorRango1Click(TObject *Sender);
	void __fastcall estaOrdenadoAsc1Click(TObject *Sender);
private:	// User declarations
	NaturalR n;
	CadenaR c;
    VectorR v;
	int opt;


public:		// User declarations
	__fastcall TForm1(TComponent* Owner);


};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
