
#include <iostream>
#include <stdlib.h>
#include "Fraction.h"

using namespace std;

Fraction makeFraction(int x, int y)
{
	Fraction t;
	
	if (!t.Init(x, y))
	{
		cout << "The parameters are entered incorrectly" << endl;
		
	};

	return t;
}

int main()
{
	setlocale(LC_ALL, "");

	Fraction a1;
	a1.Read();

	makeFraction(a1.GetFirst(), a1.GetSecond());

	a1.Display();

	return 0;
}