#include <stdio.h>

#define diff(x,y) ((x>y)?(x-y):(y-x))

int main()
{
	int x,y;
	puts(����ʼ���ԡ�);
	puts("����������������");
	printf("��һ��������");
	scanf("%d",&x);
	printf("�ڶ���������");
	scanf("%d",&y);
	printf("����������֮���ǣ�%d",diff(x,y)); 
	return 0;
}
