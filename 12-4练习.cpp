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
	printf("������");
	scanf("%s",&temp.name);
	printf("��ߣ�");
	scanf("%d",&temp.height);
	printf("���أ�");
	scanf("%lf",&temp.weight);
	printf("��ѧ��");
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
		printf("�Ƿ�������룿[��-0/��-�����0��]");
		scanf("%d",&z);
		if (z)
		break; 
	}
	int p;
	printf("��ѡ����ʲô����:[���-1/����-2]\n");
	scanf("%d",&p);
	sort(str,i,p);
	for(int j=0;j<=i;j++)
	{
		printf("%-8s %5d %5.1f %7ld\n",
		str[j].name,str[j].height,str[j].weight,str[j].schols);
	}
	return 0;
}











