#include <stdio.h>
#include <ctype.h>
void del(char s[])
{
	for(int i=0;s[i];i++)
	{
		if (s[i]==toupper(s[i]))
		{
			if (s[i]==tolower(s[i]))
			s[i]=0;
		}
	}
}
int main()
{
	char str[128];
	printf("������һ���ַ�����");
	scanf("%s",str);
	printf("ɾȥ���ֺ�");
	del(str);
	printf("%s",str);
	return 0;
}
