#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void ch()
{
	printf("*********************************\n");
	printf("********* 1 ��ʼ��Ϸ   **********\n");
	printf("********* 0 �˳���Ϸ   **********\n");
	printf("*********************************\n");
}
void game()
{
	//���׵�����
	char fanglei[X2][Y2];
	//���׵�����
	char pailei[X2][Y2];
	//��ʼ�����̣����0
	csh(fanglei, X2, Y2,'0');
	csh(pailei, X2, Y2,'*');
	//��ӡ����
	daying(fanglei, X, Y);
	daying(pailei, X, Y);
}
int main()
{
	int input = 0;
	do 
	{
		ch();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		
		case 0:	
			printf("�˳���Ϸ\n");
			break;
		
		default:
			printf("ѡ����Ч,������ѡ��\n");
			break;
		
		}
	}
	while (input);
	return 0;
}