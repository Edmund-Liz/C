#include <stdio.h>
char* str_copy(char *d,const char *s)
{
	char *t=d;
	
	while(*d++=*s++)
		;
	return t;
}
int main()
{
	char ptr[]="1234";
	char tmp[128];
	printf("ptr=\"%s\"\n",ptr);
	
	printf("���Ƶ��ǣ�"); 
	scanf("%s",tmp);
	
	puts("�����ˡ�");
	printf("ptr=\"%s\"\n",str_copy(ptr,tmp));
	return 0; 
}
