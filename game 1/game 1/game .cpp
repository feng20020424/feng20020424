#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char board[NW][DF], int nw, int df)
{
	int i = 0;
	int	j = 0;
	for (i = 0; i < NW ; i++)
	{
		for (j = 0; j < DF ; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void daying(char board[NW][DF], int nw, int df)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < NW ; i++)
	{
		for (j = 0; j < DF; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < DF - 1)
				printf("|");
		}
		printf("\n");
		if (i < NW - 1)
		{
			for (j = 0; j < DF; j++)
			{
				printf("---");
				if(j<DF-1)
				printf("|");
			}
			printf("\n");
		}
	}
}