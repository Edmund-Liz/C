#include <stdio.h>
int length(char* p[])
{
    int i=0;
    while(p[i])
	{
       
	   printf("%d\n",i);
	  
       printf("%s\n",p[i]);
  		i++;
	  }
	printf("%d\n",i);
     return i;
}

int main()
{
    char* p[]={"123","12","124",'\0'};
    int i;
    int len;
    len=length(p);
    printf("%d\n",len);
    for (i=0;i<len;i++)
	{
        printf("p[%d]=\"%s\"\n",i,p[i]);
    }
    return 0;
}

