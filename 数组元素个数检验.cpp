#include <stdio.h>
int main(void)
{
	int a[10];
	double b[20];
	printf("����a��Ԫ�ظ����ǣ�%u\n",(unsigned)(sizeof(a)/sizeof(a[0])));
	printf("����b��Ԫ�ظ����ǣ�%u\n",(unsigned)(sizeof(b)/sizeof(b[0])));
	return 0;
}
