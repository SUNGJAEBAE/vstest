#include "self.h"
#include <stdio.h>
extern int x;
void self()
{

	printf("%d", x);
	return;
}