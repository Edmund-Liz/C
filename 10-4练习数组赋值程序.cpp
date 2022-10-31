#include <stdio.h>
void set(int *v,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(v+i)=i;
	}
}
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	int a[n];
	int *v;
	v=a;
	set(v,n); 
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	} 
}
