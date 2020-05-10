#include "Calc.h"
using namespace std;
int Calc::count = 1;

class A
{
private:
	int m_value = 1;
	friend void dosomething(A& a);
};
void dosomething(A& a)
{
	cout << a.m_value << endl;
}
int main()
{
	A a;
	dosomething(a);
}   
