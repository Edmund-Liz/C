#include <stdio.h>
int compute(char s[])
{
	int i=0;
	for( ;s[i];i++)
	{
	}
	return i;
}
void rev(char s[])
{
	int n;
	n=compute(s); 
	char b[128];
	for(int i=0;s[i];i++)
	{
		b[i]=s[n-i-1];
	}
	for(int i=0;s[i];i++)
	{
		s[i]=b[i];
	}
	
}
int main()
{
	char str[128];
	printf("������һ���ַ�����");
	scanf("%s",str);
	rev(str);
	printf("���������%s",str);
}
