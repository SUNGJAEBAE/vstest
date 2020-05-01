#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int ch;
	FILE* fr, *fw;
	unsigned long count = 0;
	const char* out_filename = "copy.txt";
	char words[30] = "";
	if (argc != 2)
	{
		printf("인수가 두 개여야 합니다");
		exit(EXIT_FAILURE);
	}
	if ((fr = fopen(argv[1], "r")) == NULL)
	{
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fw = fopen(out_filename, "w")) == NULL)
	{
		printf("can't write %s\n", out_filename);
		exit(EXIT_FAILURE);
	}
	while ((fscanf(stdin, "%30s", words)) != EOF)
	{
		fprintf(stdout, "%s\n", words);
		fprintf(out_filename, "%s\n", words);
		count++;
	}
	fclose(fr);
	fclose(fw);
	printf("\nfile %s has %lu characters\n", argv[1], count);
	return 0;
}