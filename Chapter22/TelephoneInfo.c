#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)  
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

void main2()
{
	struct person man1, man2;

	strcpy(man1.name ,"�ȼ���");
	strcpy(man1.phoneNum ,"010-1122-3344");
	man1.age = 23;

	printf("�̸� �Է� : ");
	scanf_s("%s", man2.name, sizeof(man2));
	printf("��ȣ �Է� : ");
	scanf_s("%s", man2.phoneNum, sizeof(man2));
	printf("���� �Է� : ");
	scanf_s("%d", &(man2.age), sizeof(man2));

	printf("�̸� : %s \n", man1.name);
	printf("��ȣ : %s \n", man1.phoneNum);
	printf("���� : %d \n", man1.age);

	printf("�̸� : %s \n", man2.name);
	printf("��ȣ : %s \n", man2.phoneNum);
	printf("���� : %d \n", man2.age);
}
