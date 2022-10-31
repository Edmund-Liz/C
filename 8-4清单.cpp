#include <stdio.h>

#define puts_alert(str) (putchar('\a'),puts(str))
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	if (a)
		puts_alert("这个数不是0。");
	else
		puts_alert("这个数是0。");
	return 0; 
} 
