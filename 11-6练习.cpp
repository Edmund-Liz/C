#include <stdio.h>
char* str_chr(const char *s,int c)
{
	char* p;
	while (*s)
	{
		if(*s++==c)
		p=*s;
	}
	char* t;
	return t;
} 
int main()
{
	char s[128];
	printf("请输入一个字符串：");
	scanf("%s",s); 
	int c;
	printf("请输入要查找的字符：");
	scanf("%s",&c);
	char* t=str_chr(s,c);
	if(t)
	printf("未检索到！");
	else 
	printf("%s",t);
}
