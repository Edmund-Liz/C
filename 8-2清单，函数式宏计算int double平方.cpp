#include <stdio.h>

#define sqr(x) ((x)*(x))

int main()
{
	int n;
	double x;
	printf("������һ��������");
	scanf("%d",&n);
	printf("���������ƽ���ǣ�%d",sqr(n));
	putchar('\n');
	printf("������һ��ʵ����");
	scanf("%lf",&x);
	printf("���ʵ����ƽ���ǣ�%f",sqr(x)); 
	
}
