#include <stdio.h>
struct xyz{
	int x;
	long y;
	double z;
};
struct xyz xyz_of()
{
	struct xyz temp;
	
	printf("����xֵ��");
	scanf("%d",&temp.x);
	printf("����yֵ��");
	scanf("%ld",&temp.y);
	printf("����zֵ��");
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
