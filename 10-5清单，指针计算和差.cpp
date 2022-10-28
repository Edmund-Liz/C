#include <stdio.h>
void hecha(int a,int b,int *he,int *cha)
{
	*he=a+b;
	*cha=(a>b)?a-b:b-a; 
} 
int main()
{
	int a,b;
	puts("请输入两个整数：");
	printf("第一个整数：");
	scanf("%d",&a);
	printf("第二个整数：");
	scanf("%d",&b);
	int he,cha;
	hecha(a,b,&he,&cha); 
	printf("两数之和：%d，两数之差：%d",he,cha);
	return 0;
}
