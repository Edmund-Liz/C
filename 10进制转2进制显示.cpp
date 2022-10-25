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
	unsigned x,y;
	printf("请输入一个非负整数：");
	scanf("%u",&x);
	print_bits(x);
}
