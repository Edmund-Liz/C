#include <stdio.h>

#define diff(x,y) ((x>y)?(x-y):(y-x))

int main()
{
	int x,y;
	puts(”开始测试“);
	puts("请输入两个整数：");
	printf("第一个整数：");
	scanf("%d",&x);
	printf("第二个整数：");
	scanf("%d",&y);
	printf("这两个整数之差是：%d",diff(x,y)); 
	return 0;
}
