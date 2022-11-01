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
	printf("请输入一个字符串：");
	scanf("%s",s); 
	int c;
	printf("请输入要查找的字符：");
	scanf("%s",&c);
	printf("共有%d个。",str_chnum(s,c));
}
