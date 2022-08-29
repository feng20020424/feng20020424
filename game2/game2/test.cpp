#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void ch()
{
	printf("*********************************\n");
	printf("********* 1 开始游戏   **********\n");
	printf("********* 0 退出游戏   **********\n");
	printf("*********************************\n");
}
void game()
{
	//放雷的棋盘
	char fanglei[X2][Y2];
	//排雷的棋盘
	char pailei[X2][Y2];
	//初始化棋盘，填充0
	csh(fanglei, X2, Y2,'0');
	csh(pailei, X2, Y2,'*');
	//打印棋盘
	daying(fanglei, X, Y);
	daying(pailei, X, Y);
}
int main()
{
	int input = 0;
	do 
	{
		ch();
		printf("请选择>");
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
			printf("选择无效,请重新选择\n");
			break;
		
		}
	}
	while (input);
	return 0;
}