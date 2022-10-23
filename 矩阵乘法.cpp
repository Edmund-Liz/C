#include <stdio.h>
void	cheng(const int a[4][3],const int b[3][4],int c[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int p=0;p<3;p++)
			{
				c[i][j]=c[i][j]+a[i][p]*b[p][j];									/* 编写进行矩阵乘法运算的函数 */
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
			scanf("%d",&a[i][j]);								/* 输入第一个矩阵 */
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);								/* 输入第二个矩阵 */
		}
	}
	cheng(a,b,c);                              /* 进行乘法运算 */
	
	printf("第一个矩阵：\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);								/* 显示第一个矩阵 */
		}
		printf("\n");
	} 
	
	printf("第二个矩阵：\n"); 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%4d",b[i][j]);								/* 显示第二个矩阵 */
		}
		printf("\n");
	} 
	
	printf("乘积矩阵：\n"); 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%4d",c[i][j]);								/* 显示乘积矩阵 */
		}
		printf("\n");
	} 
}

