#include <stdio.h>
int main(void)
{
	float a;
	double b;
	long double c;
	printf("请输入float型:");
	scanf("%f",&a);
	printf("请输入double型：");
	scanf("%lf",&b);
	printf("请输入long double型：");
	scanf("%",&c); 
	printf("%f\n",a);
	printf("%f\n",b);
	printf("%ld\n",c);

}
