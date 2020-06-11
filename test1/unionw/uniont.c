#include <stdio.h>
union ipadd
{
	int a;
	char b[4];
};
int main()
{
	int ipaddr = 91827319;
	union ipadd ipdata;
	ipdata.a = ipaddr;
	printf("%d.%d.%d.%d\n", ipdata.b[0], ipdata.b[1], ipdata.b[2], ipdata.b[3]);
	return 0;
}