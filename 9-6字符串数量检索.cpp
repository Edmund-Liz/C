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
	printf("������һ���ַ�����");
	scanf("%s",str);
	int c;
	printf("��������Ҫ���ҵķ��ţ�");
	scanf("%s",&c);
	printf("���������%d����",find(str,c)); 
}
