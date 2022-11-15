#include <stdio.h>
#include <stdlib.h>
void swap(char a[],char b[])
{
	char temp[8];
	for(int i=0;i<8;i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
	}
}
void zhuan(char a[],int* x,int* y,int* z)
{
	char nian[4]
	char yue[2];
	char ri[2];
	for(int i=0;i<4;i++)
	{
		nian[i]=a[i];
	}
	*x=atoi(nian);
	yue[0]=a[4];
	yue[1]=a[5];
	*y=atoi(yue);
	ri[0]=a[6];
	ri[1]=a[7];
	*z=atoi(ri);
}
int main()
{
	char a[8];
	char b[8];
	printf("请输入第一个日期：");
	scanf("%s",&a);
	printf("请输入第二个日期：");
	scanf("%s",&b);
	for(int i=0;i<8;i++)
	{
		if(a[i]>b[i])
		{
			swap(a,b);
			break;
		}
	}
	int nian1,nian2,yue1,yue2,ri1,ri2;
	int* x1,x2,y1,y2,z1,z2;
	x=&nian1;
	y=&yue1;
	z=&ri1;
	zhuan(a,x,y,z);
	x=&nian2;
	y=&yue2;
	z=&ri2;
	zhuan(b,x,y,z)
	int z=0;
	while(1)
	{
		ri1++;
		i++;
		if(ri==30)
		{
				if (
				&&(yue1==1)
				&&(yue1==3) 
				&&(yue1==5)
				&&(yue1==7)
				&&(yue1==8)
				&&(yue1==10)
				&&(yue1==12)
				)
				{
					ri1=1;
					i+=2;
					yue1++;
				}
				else
				{
					ri1=1;
					1++;
					yue1++;
				}
			
		}
	}
	
	
	
}

