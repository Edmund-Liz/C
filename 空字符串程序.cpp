#include <stdio.h>
void null_string( char s[])
{
	s[0]='\0';
}
int main()
{
	char str[128];
	printf("�������ַ�����");
	scanf("%s",str);
	puts("ʹ�ַ�����Ϊ���ַ�����"); 
	null_string(str);
	printf("%s",str); 

}
