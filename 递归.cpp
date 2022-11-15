#include <stdio.h>
int mi(int n,int t,int *p)
{
	if(t<n)
	{
		t*=3;
		return 1+mi(n,t,p);
	}
	else
	{
		if(t==n)
		{
			return 1;
		}
		else 
		{
			printf("该整数不是3的幂次方！");
			*p=0;
		}
	}
}


int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	int a=1;
	int* p=&a; 
	int x=mi(n,1,p);
	if (*p==1)
	printf("该整数是3的%d次幂。",x-1);
	return 0;
}
