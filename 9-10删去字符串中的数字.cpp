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
	printf("请输入一个字符串：");
	scanf("%s",str);
	printf("删去数字后：");
	del(str);
	printf("%s",str);
	return 0;
}
