#include <stdio.h>
#include <limits.h>
int pow(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a * pow(a, b - 1);
}

int main()
{

	int a = 0xFFFF;
	printf("%A\n", a);
	printf("%x\n", a);
	printf("%#X\n", a);
}
