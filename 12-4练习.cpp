#include <stdio.h>
struct student{
	char name[128];
	int height;
	double weight;
	long schols; 
}; 
void swap(struct student* a,struct student *b)
{
	struct student temp=*a;
	*a=*b;
	*b=temp;
}
struct student scan()
{
	struct student temp;
	printf("姓名：");
	scanf("%s",&temp.name);
	printf("身高：");
	scanf("%d",&temp.height);
	printf("体重：");
	scanf("%lf",&temp.weight);
	printf("奖学金：");
	scanf("%ld",&temp.schols);
	return temp; 
}
void sort(struct student a[],int n,int p)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			switch (p)
			{
			case 1:	if (a[j].height<a[j-1].height) 
					swap(&a[j],&a[j-1]);
					break;
			case 2:	if (a[j].weight<a[j-1].weight)
					swap(&a[j],&a[j-1]);
					break;		
			}
		} 
	 } 
}
int main()
{
	struct student str[128];
	int i;
	for(i=0;1;i++)
	{
		str[i]=scan();
		int z;
		printf("是否继续输入？[是-0/否-任意非0数]");
		scanf("%d",&z);
		if (z)
		break; 
	}
	int p;
	printf("请选择以什么排序:[身高-1/体重-2]\n");
	scanf("%d",&p);
	sort(str,i,p);
	for(int j=0;j<=i;j++)
	{
		printf("%-8s %5d %5.1f %7ld\n",
		str[j].name,str[j].height,str[j].weight,str[j].schols);
	}
	return 0;
}











