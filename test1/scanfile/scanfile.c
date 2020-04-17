#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int c;
	FILE* file = NULL;
	FILE* file2 = NULL;

	if (argc != 2)
	{
		printf("wrong usage"); exit(EXIT_FAILURE);
	}
		
	file = fopen(argv[1], "r");
	file2 = fopen("test2.txt", "w");
	if (file == NULL)
	{
		printf("wrong usage2");  exit(1);
	}
	while ((c = fgetc(file)) != EOF)
	{
		fputc(c, stdout);
		fputc(c, file2);
	}
	fclose(file);

	return 0;
}

