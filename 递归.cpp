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
			printf("����������3���ݴη���");
			*p=0;
		}
	}
}


int main()
{
	int n;
	printf("������һ��������");
	scanf("%d",&n);
	int a=1;
	int* p=&a; 
	int x=mi(n,1,p);
	if (*p==1)
	printf("��������3��%d���ݡ�",x-1);
	return 0;
}
