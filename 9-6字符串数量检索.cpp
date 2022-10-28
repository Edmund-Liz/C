#include <stdio.h>
int find(const char s[],int c)
{
	int num=0;
	for(int i=0;s[i];i++)
	{
		if(s[i]==c)
		num++;
	}
	return num;
}
int main()
{
	char str[128];
	printf("请输入一个字符串：");
	scanf("%s",str);
	int c;
	printf("请输入你要查找的符号：");
	scanf("%s",&c);
	printf("这个符号有%d个。",find(str,c)); 
}
