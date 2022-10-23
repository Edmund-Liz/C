#include <stdio.h>
int main(void)
{
	int a[10];
	double b[20];
	printf("数组a的元素个数是：%u\n",(unsigned)(sizeof(a)/sizeof(a[0])));
	printf("数组b的元素个数是：%u\n",(unsigned)(sizeof(b)/sizeof(b[0])));
	return 0;
}
