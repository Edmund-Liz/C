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
	printf("请输入字符串：");
	scanf("%s",str);
	printf("字符串的长度是：%d",length(str));
}
