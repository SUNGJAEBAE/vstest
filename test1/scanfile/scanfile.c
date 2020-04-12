#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char line[100];
	while (fgets(line, 100, stdin))
		fputs(line, stdout);

	return 0;
}