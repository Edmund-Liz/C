#include <stdio.h>
void	cheng(const int a[4][3],const int b[3][4],int c[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int p=0;p<3;p++)
			{
				c[i][j]=c[i][j]+a[i][p]*b[p][j];									/* ��д���о���˷�����ĺ��� */
			}
		}
	}
}
int main(void)
{
	int a[4][3];
	int b[3][4];
	int c[4][4]={0};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);								/* �����һ������ */
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);								/* ����ڶ������� */
		}
	}
	cheng(a,b,c);                              /* ���г˷����� */
	
	printf("��һ������\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);								/* ��ʾ��һ������ */
		}
		printf("\n");
	} 
	
	printf("�ڶ�������\n"); 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%4d",b[i][j]);								/* ��ʾ�ڶ������� */
		}
		printf("\n");
	} 
	
	printf("�˻�����\n"); 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%4d",c[i][j]);								/* ��ʾ�˻����� */
		}
		printf("\n");
	} 
}

