#include <stdio.h>
int length(const char s[])
{
	int length=0;
	while (s[length])
	{
		length++;
	}
	return length;
}
int main()
{
	char str[128];
	printf("�������ַ�����");
	scanf("%s",str);
	printf("�ַ����ĳ����ǣ�%d",length(str));
}
