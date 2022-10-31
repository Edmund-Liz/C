#include <stdio.h>
void sort3(int* n1,int* n2,int* n3)
{
	int min;
	min=(*n1<*n2)?*n1:*n2;
	if (*n3<min)
	min=*n3;
	*n1=min;
	if (*n2<*n3)
	{
	}
	else
	{
		int temp;
		temp=*n2;
		*n2=*n3;
		*n3=temp; 
	}
}
int main()
{
	int* n1;
	int* n2;
	int* n3;
	int a,b,c;
	puts("请输入三个整数：");
	puts("第一个：");
	scanf("%d",&a); 
	puts("第二个：");
	scanf("%d",&b); 
	puts("第三个：");
	scanf("%d",&c); 
	*n1=a;
	*n2=b;
	*n3=c;
	sort3(*n1,*n2,*n3);
	printf("升序排列：%d %d %d",*n1,*n2,*n3);
	return 0; 
}
 
