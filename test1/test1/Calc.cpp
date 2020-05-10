#include "Calc.h"
Calc::Calc(int value_in)
{
	value = value_in;
}

Calc& Calc::add(int value_in)
{
	value += value_in;
	return *this;
}

Calc& Calc::sub(int value_in)
{
	value -= value_in;
	return *this;
}

Calc& Calc::mult(int value_in)
{
	value *= value_in;
	return *this;
}

void Calc::print() const
{
	std::cout << value << std::endl;
}
