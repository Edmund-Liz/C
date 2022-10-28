#include <stdio.h>
void null_string( char s[])
{
	s[0]='\0';
}
int main()
{
	char str[128];
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s",str);
	puts("Ê¹×Ö·û´®±äÎª¿Õ×Ö·û´®¡£"); 
	null_string(str);
	printf("%s",str); 

}
