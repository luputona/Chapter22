#include<stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

void main5()
{
	struct person arr[3] =
	{
		{"�̽±�", "010-2222-2222", 21},
		{"������", "010 3333-4444", 22},
		{"������", "010-2345-6466", 19}
	};

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}

}