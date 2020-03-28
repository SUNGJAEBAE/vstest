#include <stdio.h>

void say_hello(void)
{
	printf("hello function1");
}

int main()
{
	say_hello();
	
	int x = 5;
	printf("x is %i", x);
	return 0;
}