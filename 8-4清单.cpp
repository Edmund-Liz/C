#include <stdio.h>

#define puts_alert(str) (putchar('\a'),puts(str))
int main()
{
	int a;
	printf("������һ��������");
	scanf("%d",&a);
	if (a)
		puts_alert("���������0��");
	else
		puts_alert("�������0��");
	return 0; 
} 
