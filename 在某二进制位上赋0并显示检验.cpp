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

/* ��ĳ��������λ�ϸ�0 */
unsigned set(unsigned x,int pos)
{
		if ((x>>(pos-1))&1U)
		{
			int p=1;
			for(int j=0;j<(pos-1);j++)
			{
			p*=2;
			}
			x-=p;	
		}
		else
		{
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
	int pos;
	printf("������Ҫ��0��λ����"); 
	scanf("%d",&pos);
	x=set(x,pos);
	print_bits(x);
} 



