#include <stdio.h>
unsigned lrotate(const unsigned x,int n)
{
	unsigned b; 
	b=(x<<n);
	return b;
}

int main(void){
	unsigned a;
	int n;
	printf("请输入a的初始值："); 
	scanf("%d",&a);
	printf("请输入左移位数：");
	scanf("%d",&n);
	printf("a左移后的值是：%d",lrotate(a,n)); 
 } 
