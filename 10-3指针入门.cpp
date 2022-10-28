#include <stdio.h>
int main()
{
	int a=178;
	int b=175;
	int c=179;
	
	int *d,*f;
	d=&a;
	f=&c;
	
	printf("d喜欢的人的身高：%d\n",*d);
	printf("f喜欢的人的身高：%d\n",*f);
	
	d=&b;
	
	*f=180;
	
	printf("a的身高：%d\n",a);
	printf("b的身高：%d\n",b);
	printf("c的身高：%d\n",c);
	printf("d喜欢的人的身高：%d\n",*d);
	printf("f喜欢的人的身高：%d\n",*f);
	
	return 0; 
 } 
