#pragma once
#pragma warning(disable: 4996)
#include <iostream>

class Calc
{
	int value;
	
public:
	static int count;
	Calc(int value_in);
	Calc& add(int value_in);

	Calc& sub(int value_in);
	Calc& mult(int value_in);
	void print() const;
};
