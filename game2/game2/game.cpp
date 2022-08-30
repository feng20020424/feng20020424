#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
void csh(char board[X2][Y2], int x2, int y2,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < X2; i++)
	{
		for (j = 0; j < Y2; j++)
		{
			board[i][j] = set;
			
		}
		
	}
	
}
void daying(char board[X2][Y2], int x, int y)
{	
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏-----------\n");
	for (i = 0; i <= X; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <=X; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <=Y; j++)
		{
			
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷游戏-----------\n");
	
}
void xialei(char fanglei[X2][Y2], int x, int y)
{
	int k = Z;
	while (k)
	{
	int i = rand() % X + 1;
	int j = rand() % Y + 1;
	if(fanglei[i][j]=='0')
	
	fanglei[i][j] = '1';
	k--;
	}
}
int get_fanglei(char fanglei[X2][Y2],int x,int y)
{
	return fanglei[x - 1][y - 1] +
		fanglei[x][y - 1] +
		fanglei[x + 1][y - 1] +
		fanglei[x][y - 1] +
		fanglei[x][y] +
		fanglei[x][y + 1] +
		fanglei[x - 1][y - 1] +
		fanglei[x - 1][y] +
		fanglei[x - 1][y - 1] - 9 * '0';
}

void paicha(char fanglei[X2][Y2], char pailei[X2][Y2], int x, int y)
{	
	int kong = 0;
	int i = 0;
	int j = 0;
	while (kong<X*Y-Z)
	{
		printf("请输入坐标");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= x && j >= 1 && j <= y)
		{
			if (fanglei[i][j] == '1')
			{
				printf("很遗憾你被炸死了\n");
				daying(fanglei, X, Y);
				break;
			}
			else
			{
				int count = get_fanglei(fanglei, i, j);
				pailei[i][j] = count + '0';
				//显示排查的信息
				daying(pailei, X, Y);
				kong++;
			}
		}
		else
		{
			printf("坐标无效，请重新输入\n");
		}
	}
	if (kong == X * Y - Z)
	{
		printf("恭喜你，排雷成功了\n");
		daying(fanglei, X, Y);
	}
}
