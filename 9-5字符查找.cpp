#include <stdio.h>
int find(const char s[],int c)
{
	for(int i=0;s[i];i++)
	{
		if(s[i]==c)
		return i;
	}
}
int main()
{
	char str[128];
	printf("������һ���ַ�����");
	scanf("%s",str);
	int c;
	printf("��������Ҫ���ҵķ��ţ�");
	scanf("%s",&c);
	printf("��������ڵ�%d����",find(str,c)+1); 
}
