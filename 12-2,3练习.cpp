#include <stdio.h>
struct xyz{
	int x;
	long y;
	double z;
};
struct xyz xyz_of()
{
	struct xyz temp;
	
	printf("输入x值：");
	scanf("%d",&temp.x);
	printf("输入y值：");
	scanf("%ld",&temp.y);
	printf("输入z值：");
	scanf("%lf",&temp.z);
	return temp; 
}
int main()
{
	struct xyz s;
	s=xyz_of();
	printf("xyz.x=%d\n",s.x);
	printf("xyz.y=%ld\n",s.y);
	printf("xyz.z=%f\n",s.z);
	return 0;
}
