#include <stdio.h>
#define swap(type,a,b) (b),(a)
int main()
{
	int x,y;
	puts("����������������");
	printf("��һ��������");
	scanf("%d",&x);
	printf("�ڶ���������");
	scanf("%d",&y);
	printf("�����������ֱ�Ϊ��\n��һ����%d��\n�ڶ�����%d��",swap(int,x,y)); 
}
