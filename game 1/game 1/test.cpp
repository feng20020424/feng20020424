#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void cd()
{
	printf("*********************************\n");
	printf("*********  1.��ʼ��Ϸ    ********\n");
	printf("*********  0.�˳���Ϸ    ********\n");
	printf("*********************************\n");
}
void game()
{	//�������ݣ���ά����
	char board[NW][DF];
	//��ʼ�����̡��ո�
	initboard(board, NW, DF);
	//��ӡ����
	daying(board,NW,DF);
}
int main()
{	
	int input = 0;
	do
	{
		cd();
		printf("��ѡ��\n");
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
			printf("�������\n");
			break;
		}
	} 
	while (input);
	return 0;
}