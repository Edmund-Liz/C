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
	printf("������һ���ַ�����");
	scanf("%s",s); 
	int c;
	printf("������Ҫ���ҵ��ַ���");
	scanf("%s",&c);
	char* t=str_chr(s,c);
	if(t)
	printf("δ��������");
	else 
	printf("%s",t);
}
