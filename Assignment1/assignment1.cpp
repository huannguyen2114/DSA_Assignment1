#include "common.h"

#ifndef _common_h_
// #include "common.h"
#define _common_h_
#endif

//////////////////////////////////////////////////////////////
//
//			Some common functions
//
//////////////////////////////////////////////////////////////
digitList *digitize(char str[80])
{
	digitList*	L = nullptr;
	digitList*	node;

	int i;

	for(i = 0; i< strlen(str); i++)
	{
		if(str[i] < '0' || str[i] > '9')	break;

		node = new digitList(str[i] - '0', L);
		L = node;
	}

	return L;

}

digitList *trimDigitList(digitList* L)
{
	return NULL;
}

digitList *subDigitLists(int b, digitList* L1, digitList* L2)
{
	return NULL;
}


Integer computeValue(int operatorNum)
{
	Integer		L1, L2;

	L1 = operandArr[0];

	for(int i = 0; i<operatorNum; i++)
	{
		L2 = operandArr[i+1];
		switch(operatorArr[i])
		{
		case '+':
			L1 = L1 + L2;
			break;
		}
	}

	return L1;
}
///////////////////////////////////////////////////////////////////////////
//
//		Some methods of Integer class
//
////////////////////////////////////////////////////////////////////
Integer Integer::operator +(Integer L)
{
	if(sign == L.sign)
		return Integer(sign, addDigitLists(0, digits, L.digits));
}

Integer Integer::operator -(Integer L)
{
	return Integer();
}

Integer Integer::leftDigits(int n)
{
	return Integer();
}

Integer Integer::rightDigits(int n)
{
	return Integer();
}

Integer	Integer::shift(int n)
{
	return Integer();
}

Integer Integer::operator *(Integer Y)
{
	return Integer();
}
