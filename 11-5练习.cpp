#include <stdio.h>
int str_chnum(const char *s,int c)
{
	int len=0;
	while (*s)
	{
		if (*s++==c)
		len++;
	}
	return len;
} 
int main()
{
	char s[128];
	printf("������һ���ַ�����");
	scanf("%s",s); 
	int c;
	printf("������Ҫ���ҵ��ַ���");
	scanf("%s",&c);
	printf("����%d����",str_chnum(s,c));
}
