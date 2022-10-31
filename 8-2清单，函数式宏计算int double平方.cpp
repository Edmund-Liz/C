#include <stdio.h>

#define sqr(x) ((x)*(x))

int main()
{
	int n;
	double x;
	printf("请输入一个整数：");
	scanf("%d",&n);
	printf("这个整数的平方是：%d",sqr(n));
	putchar('\n');
	printf("请输入一个实数：");
	scanf("%lf",&x);
	printf("这个实数的平方是：%f",sqr(x)); 
	
}
