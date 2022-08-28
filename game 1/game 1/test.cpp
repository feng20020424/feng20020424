#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void cd()
{
	printf("*********************************\n");
	printf("*********  1.开始游戏    ********\n");
	printf("*********  0.退出游戏    ********\n");
	printf("*********************************\n");
}
void game()
{	//储存数据，二维数组
	char board[NW][DF];
	//初始化棋盘、空格
	initboard(board, NW, DF);
	//打印棋盘
	daying(board, NW, DF);

	 char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		playme(board, NW, DF);
		daying(board, NW, DF);
		//判断输赢
		ret = shuying(board, NW, DF);
		if (ret != 'C')
			break;
		//电脑下棋
		playpc(board, NW, DF);
		daying(board, NW, DF);
		ret = shuying(board, NW, DF);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("恭喜您，获胜了\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，您输了\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		cd();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} 
	while (input);
	return 0;
}