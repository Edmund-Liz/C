#include <stdio.h>
void put_string(const char *s)
{
	printf("%s",s);
} 
int main()
{
	char s[128];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	scanf("%s",s); 
	put_string(s); 
	
}
