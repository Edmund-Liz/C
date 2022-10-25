#include <stdio.h>
unsigned rrotate(const unsigned x,int n)
{
	unsigned b; 
	b=(x>>n);
	return b;
}

int main(void){
	unsigned a;
	int n;
	printf("请输入a的初始值："); 
	scanf("%d",&a);
	printf("请输入右移位数：");
	scanf("%d",&n);
	printf("a右移后的值是：%d",rrotate(a,n)); 
 } 
