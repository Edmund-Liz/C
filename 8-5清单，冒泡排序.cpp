#include <stdio.h>
void maopao(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("����������:");
	scanf("%d",&n); 
	int gao[n];
	for(int i=0;i<n;i++)
	{
		printf("��%d�ˣ�",i+1);
		scanf("%d",&gao[i]);
	}
	maopao(gao,n);
	printf("�������У�\n");
	for(int i=0;i<n;i++)
	{
		printf("%d�ţ�",i+1);
		printf("%d\n",gao[i]);
	}

}
