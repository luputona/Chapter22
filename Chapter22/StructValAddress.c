#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

void main3()
{
	struct point pos = { 10,20 };
	struct person man = { "µ¥ÇÁÄÜ", "010-2234-4456" ,30 };

	printf("%d %d \n",pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum , man.age);

}