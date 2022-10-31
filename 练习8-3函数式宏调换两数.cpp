#include <stdio.h>
#define swap(type,a,b) (b),(a)
int main()
{
	int x,y;
	puts("请输入两个整数：");
	printf("第一个整数：");
	scanf("%d",&x);
	printf("第二个整数：");
	scanf("%d",&y);
	printf("调换后两数分别为：\n第一个：%d。\n第二个：%d。",swap(int,x,y)); 
}
