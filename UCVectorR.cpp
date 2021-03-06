//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCVectorR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void VectorR::bubble(TStringGrid *v,Word n){
	if (n>1) {
		bubble(v,n-1);
		if (StrToInt(v->Cells[n-2][0])>StrToInt(v->Cells[n-1][0])) {
			String aux=v->Cells[n-1][0];
			v->Cells[n-1][0]=v->Cells[n-2][0];
			v->Cells[n-2][0]=aux;
		}
	}
}

void VectorR::sortBubble(TStringGrid *v,Word n){
	if (n>1) {
		bubble(v,n);
		sortBubble(v,n-1);
	}
}


void VectorR::rangeBubble(TStringGrid *v,Word a,Word b){
	if (b>a) {
		rangeBubble(v,a,b-1);
		if (StrToInt(v->Cells[b-2][0])>StrToInt(v->Cells[b-1][0])) {
			String aux=v->Cells[b-1][0];
			v->Cells[b-1][0]=v->Cells[b-2][0];
			v->Cells[b-2][0]=aux;
		}
	}
}

void VectorR::sortRangeBubble(TStringGrid *v,Word a,Word b){
	if (b>a) {
		rangeBubble(v,a,b);
        sortRangeBubble(v,a,b-1);
	}
}
