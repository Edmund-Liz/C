#include <stdio.h>
unsigned lrotate(const unsigned x,int n)
{
	unsigned b; 
	b=(x<<n);
	return b;
}

int main(void){
	unsigned a;
	int n;
	printf("������a�ĳ�ʼֵ��"); 
	scanf("%d",&a);
	printf("����������λ����");
	scanf("%d",&n);
	printf("a���ƺ��ֵ�ǣ�%d",lrotate(a,n)); 
 } 
