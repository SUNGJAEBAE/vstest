#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
	char fruits[40];
	char str2[] = "hello";
	char str3[100] = "\0";
	char str4[100] = "\n";
	char str[100] = "";
	printf("%zu %zu\n", sizeof str, strlen(str));
	printf("%zu %zu\n", sizeof str2, strlen(str2));
	printf("%zu %zu\n", sizeof str3, strlen(str3));
	printf("%zu %zu\n", sizeof str4, strlen(str4));
	char* str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'a';
	str5[1] = '\0';
	printf("%s", str5);
	return 0;
}