#include <stdio.h>
int compute(char s[])
{
	int i=0;
	for( ;s[i];i++)
	{
	}
	return i;
}
void put(char s[])
{
	int n;
	n=compute(s);
	for(int i=0;i<n;i++)
	{
		putchar(s[n-i-1]);
	}
}
int main()
{
	char str[128];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	scanf("%s",str);
	printf("µ¹ĞòÊä³ö£º");
	put(str); 
}
