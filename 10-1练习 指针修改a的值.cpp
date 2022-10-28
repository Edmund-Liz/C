#include <stdio.h>
void adjust(int *n)
{
	if	(*n<0)
	*n=0;
	else if (*n>100)
	*n=100;
}
int main(void)
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	adjust(&a);
	printf("修改后的值是：%d",a);
	return 0; 
} 
