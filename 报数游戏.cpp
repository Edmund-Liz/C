#include <stdio.h>
int main()
{
	int n,m;
	printf("请输入人数：");
	scanf("%d",&n);
	printf("请输入整数m：");
	scanf("%d",&m);
	int p[n];
	for(int i=0;i<n;i++)
	{
		p[i]=i+1;
	}
	int z=0;
	int i=0;
	while(1)
	{
		int j=0;
		while(1)
		{
			if(i==n)
			i=0;
			if(p[i])
			j++;
			if(j==m)
			{
				p[i]=0;
				i++;
				break;
			}
			i++;
		}
		z++;
		if(z==(n-1))
		break;
	}
	for(int i=0;i<n;i++)
	{
		if(p[i])
		printf("%d ",p[i]);
	}
	return 0;
}
