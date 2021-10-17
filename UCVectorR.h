//---------------------------------------------------------------------------

#ifndef UCVectorRH
#define UCVectorRH
//---------------------------------------------------------------------------
#endif

#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>

typedef unsigned char byte; //[0,255]


class VectorR{
	private:
		void bubble(TStringGrid *v,Word n);
		void rangeBubble(TStringGrid *v,Word a,Word b);
	public:
		void sortBubble(TStringGrid *v,Word n);
		void sortRangeBubble(TStringGrid *v,Word a,Word b);
};