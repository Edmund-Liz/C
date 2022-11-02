#include <stdio.h>
void ceshi(char *s)
{
	char t[]="abc";
	int i=0;
	while(*s++=t[i++])
	;
}
int main(void)
{
	char p[4]="123";
	char *s=p;
	printf("%s",s);
	ceshi(s);
	printf("%s",s); 
} 
