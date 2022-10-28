#include <stdio.h>
void put(const char s[],int n)
{
	for(int j=0;j<n;j++)
	{
	for(int i=0;s[i];i++)
	{
		putchar(s[i]);	
	}
	}
}
int main()
{
	char str[128];
	printf("请输入一个字符串：");
	scanf("%s",str);
	int c;
	printf("请输入你要显示的次数：");
	scanf("%d",&c);
	put(str,c);
}
