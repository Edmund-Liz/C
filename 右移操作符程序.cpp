#include <stdio.h>
unsigned rrotate(const unsigned x,int n)
{
	unsigned b; 
	b=(x>>n);
	return b;
}

int main(void){
	unsigned a;
	int n;
	printf("������a�ĳ�ʼֵ��"); 
	scanf("%d",&a);
	printf("����������λ����");
	scanf("%d",&n);
	printf("a���ƺ��ֵ�ǣ�%d",rrotate(a,n)); 
 } 
