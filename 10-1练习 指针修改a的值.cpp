#include <stdio.h>
void adjust(int *n)
{
	if	(*n<0)
	*n=0;
	else if (*n>100)
	*n=100;
}
int main(void)
{
	int a;
	printf("������һ��������");
	scanf("%d",&a);
	adjust(&a);
	printf("�޸ĺ��ֵ�ǣ�%d",a);
	return 0; 
} 
