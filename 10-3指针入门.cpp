#include <stdio.h>
int main()
{
	int a=178;
	int b=175;
	int c=179;
	
	int *d,*f;
	d=&a;
	f=&c;
	
	printf("dϲ�����˵���ߣ�%d\n",*d);
	printf("fϲ�����˵���ߣ�%d\n",*f);
	
	d=&b;
	
	*f=180;
	
	printf("a����ߣ�%d\n",a);
	printf("b����ߣ�%d\n",b);
	printf("c����ߣ�%d\n",c);
	printf("dϲ�����˵���ߣ�%d\n",*d);
	printf("fϲ�����˵���ߣ�%d\n",*f);
	
	return 0; 
 } 
