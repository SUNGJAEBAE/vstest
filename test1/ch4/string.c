#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	double a;
	int b;
	scanf("%lf %d", &a, &b);
	printf("%f\n", a);
	printf("%d", b);
	printf("\n");
	char c;
	while ((c = getchar()) != '\n')
		putchar(c);

	return 0;

}