#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "self.h"
int x = 5;
const static int main()
{
	self();
	self();
	self();
	return 0;
}