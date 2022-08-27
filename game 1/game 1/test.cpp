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
	daying(board,NW,DF);
}
int main()
{	
	int input = 0;
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