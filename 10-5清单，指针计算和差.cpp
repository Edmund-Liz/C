#include <stdio.h>
void hecha(int a,int b,int *he,int *cha)
{
	*he=a+b;
	*cha=(a>b)?a-b:b-a; 
} 
int main()
{
	int a,b;
	puts("����������������");
	printf("��һ��������");
	scanf("%d",&a);
	printf("�ڶ���������");
	scanf("%d",&b);
	int he,cha;
	hecha(a,b,&he,&cha); 
	printf("����֮�ͣ�%d������֮�%d",he,cha);
	return 0;
}
