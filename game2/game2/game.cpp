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
	printf("---------É¨À×ÓÎÏ·----------\n");
	for (i = 1; i <=X; i++)
	{
		for (j = 1; j <=Y; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------É¨À×ÓÎÏ·----------\n");
	
}
