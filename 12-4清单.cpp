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
	printf("����=%s\n",a.name);
	printf("���=%d\n",a.height);
	printf("����=%d\n",a.weight);
	printf("��ѧ��=%d\n",a.schols);
	b(&a);
	puts("bϲ��A"); 
	printf("����=%s\n",a.name);
	printf("���=%d\n",a.height);
	printf("����=%d\n",a.weight);
	printf("��ѧ��=%d\n",a.schols);
}
