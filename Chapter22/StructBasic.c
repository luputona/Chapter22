#include<stdio.h>
#include<math.h>
struct point
{
	int xpos;
	int ypos;
};

void main1()
{
	struct point pos1, pos2;
	double distance;
	fputs("Point1 pos : ", stdout);
	scanf_s("%d %d", &pos1.xpos,  &pos1.ypos, sizeof(pos1), sizeof(pos1));
	
	fputs("Point2 pos : ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos, sizeof(pos2), sizeof(pos2));

	//�� ������ �Ÿ� ��� ����
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("�� ���� �Ÿ��� %g �Դϴ�. \n",distance);
}