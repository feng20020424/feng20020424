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
	daying(board, NW, DF);

	 char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		playme(board, NW, DF);
		daying(board, NW, DF);
		//�ж���Ӯ
		ret = shuying(board, NW, DF);
		if (ret != 'C')
			break;
		//��������
		playpc(board, NW, DF);
		daying(board, NW, DF);
		ret = shuying(board, NW, DF);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("��ϲ������ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���ź���������\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
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