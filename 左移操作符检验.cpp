#include <stdio.h>
int main(void){
	int a,n;
	printf("请输入a的初始值："); 
	scanf("%d",&a);
	printf("请输入左移位数：");
	scanf("%d",&n);
	a<<=n;
	printf("a左移后的值是：%d",a); 
 } 
