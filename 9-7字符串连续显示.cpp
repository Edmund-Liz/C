#include <stdio.h>
void put(const char s[],int n)
{
	for(int j=0;j<n;j++)
	{
	for(int i=0;s[i];i++)
	{
		putchar(s[i]);	
	}
	}
}
int main()
{
	char str[128];
	printf("������һ���ַ�����");
	scanf("%s",str);
	int c;
	printf("��������Ҫ��ʾ�Ĵ�����");
	scanf("%d",&c);
	put(str,c);
}
