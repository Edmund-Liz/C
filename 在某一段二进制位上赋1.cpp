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
/* ���������õ�unsignedλ�� */

/* ��ĳ��������λ�ϸ�1 */
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

/*��������ʾx*/
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
	printf("������һ���Ǹ�������");
	scanf("%u",&x);
	print_bits(x);
	printf("\n");
	int pos,n;
	printf("������Ҫ��1����ʼλ��"); 
	scanf("%d",&pos);
	printf("������Ҫ��1�������С��");
	scanf("%d",&n); 
	x=set(x,pos,n);
	print_bits(x);
} 



