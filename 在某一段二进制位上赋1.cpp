#include <stdio.h>
int count_bits(unsigned x)
{
	int bits;
	while(x)
	{
		if (x&1U)
		bits++;
		x>>=1;
	}
	return bits;
}
int int_bits(void)
{
	return count_bits(~0U);
}
/* 至此用来得到unsigned位数 */

/* 在某二进制数位上赋1 */
unsigned set(unsigned x,int pos,int n)
{
		int i;
		for(i=pos;i<=((pos+n)-1);i++)
		{ 
		if ((x>>(i-1))&1U)
		{
		}
		else
		{
			int p=1;
			for(int j=0;j<(i-1);j++)
			{
			p*=2;
			}
			x+=p;	
		}
		}
	return x;
}

/*二进制显示x*/
void print_bits(unsigned x)
{
	int i;
	for(i=int_bits()-1;i>=0;i--)
	{
		printf("%d",((x>>i)&1U)); 
	} 
}
int main(void)
{
	unsigned x;
	printf("请输入一个非负整数：");
	scanf("%u",&x);
	print_bits(x);
	printf("\n");
	int pos,n;
	printf("请输入要赋1的起始位："); 
	scanf("%d",&pos);
	printf("请输入要赋1的区域大小：");
	scanf("%d",&n); 
	x=set(x,pos,n);
	print_bits(x);
} 



