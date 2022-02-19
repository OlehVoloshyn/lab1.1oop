//////////////////////////////////////////////////////////////////////////////////////////////////
//Fraction.h
//////
#pragma once
class Fraction
{
private:
	 int first, second;
public:
	int GetFirst() const{ return first; }
	int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(int value);

	int ipart() const;
    bool Init(int, int);
	void Read();
	void Display();

};

