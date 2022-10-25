#include <stdio.h>
int main(void){
	int a,n;
	printf("请输入a的初始值："); 
	scanf("%d",&a);
	printf("请输入右移位数：");
	scanf("%d",&n);
	a>>=n;
	printf("a右移n位后的值是：%d",a); 
 } 
