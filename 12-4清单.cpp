#include <stdio.h>
struct student {
	char name[64];
	int height;
	int weight;
	int schols;
};

void b(struct student *std)
{
	if (std->height<180)	std->height=180;
	if (std->weight>80)	std->weight=80;
}

int main()
{
	struct student a={"A",179,81};
	printf("姓名=%s\n",a.name);
	printf("身高=%d\n",a.height);
	printf("体重=%d\n",a.weight);
	printf("奖学金=%d\n",a.schols);
	b(&a);
	puts("b喜欢A"); 
	printf("姓名=%s\n",a.name);
	printf("身高=%d\n",a.height);
	printf("体重=%d\n",a.weight);
	printf("奖学金=%d\n",a.schols);
}
