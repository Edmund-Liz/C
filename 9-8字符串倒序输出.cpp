#include <stdio.h>
int compute(char s[])
{
	int i=0;
	for( ;s[i];i++)
	{
	}
	return i;
}
void put(char s[])
{
	int n;
	n=compute(s);
	for(int i=0;i<n;i++)
	{
		putchar(s[n-i-1]);
	}
}
int main()
{
	char str[128];
	printf("������һ���ַ�����");
	scanf("%s",str);
	printf("���������");
	put(str); 
}
