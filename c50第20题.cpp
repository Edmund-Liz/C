#include <stdio.h>
void Print_Factorial(const int N)
{
    if (N<0)
    printf("Invalid input");
    else
    {
    	int a[128]={1};
    	int i=1;
    	int j=0,z=0;
		for(int i=1;i<=N;i++)
    	{
    		for(j=0;j<=z;j++)
    		{
    			a[j]*=i;
    			if(a[j]>10)
    			{
    				a[j]=a[j]%10;
    				int temp=a[j]/10;
    				a[j+1]+=temp;
    				z++;
				}
			}
		}
    	
    	for( ;z>0;z--)
    	printf("%d",a[z]);
    }
}
int main()
{
	int N;
	printf(" ‰»ÎN£∫");
	scanf("%d",&N);
	Print_Factorial(N);
	return 0;
 } 
