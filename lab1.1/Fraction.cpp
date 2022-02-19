#include "Fraction.h"
#include <iostream>
#include<cmath>
using namespace std;

void Fraction::SetFirst(int value)
{
    first = value;
}

void Fraction::SetSecond(int value)
{
    second = value;
}

int Fraction::ipart() const
{
    return floor(first/second);
}

bool Fraction::Init(int x, int y)
{
    

    if (x >= 0 && y > 0)
    {
        
        return true;
    }
    else 
        return false;
}



void Fraction::Read()
{
    int x, y;
    //do
    //{

    
    cout << "Enter the numerator and denominator of the fraction - natural numbers" << endl;
    cout << "numerator ="; cin >> x;
    cout << "denominator ="; cin >> y;

    first = x;
    second = y;

    //} while (!Init(x,y));
  


}

void Fraction::Display() 
{
    if (Init(first, second))
    cout << "whole part =" << ipart();
}
