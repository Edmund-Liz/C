#include <stdio.h>
int* twoSum(int* nums,int numsSize,int target,int* returnSize)
{
	int i=0,z=0;
	for( ;i<numsSize;i++)
	{
	for(int j=1;j<numsSize;j++)
	{
		if(i==j)
		{
			j++;
			if(j==numsSize)
			break;
		}
		if((nums[i]+nums[j]==target))
		{
			returnSize[0]=i;
			returnSize[1]=j;
			return returnSize;
		}
	}
	}
	printf("not find!"); 
	return 0;
}
int main()
{
	int nums[128];
	int t=1,i=0;
	while(t)
	{
		printf("�������%d�����֣�",i+1);
		scanf("%d",&nums[i]);
		i++;
		puts("�Ƿ�������룿[��-0/��-��������]");
		scanf("%d",&t);
	}
	int target;
	printf("����������Ŀ��ֵ��");
	scanf("%d",&target);
	int returnSize[64];
	int* p;
	p=twoSum(nums,(i+1),target,returnSize);
	printf("%d %d",p[0],p[1]);
	
}