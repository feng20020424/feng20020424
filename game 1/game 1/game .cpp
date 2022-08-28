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

void playme(char board[NW][DF], int nw, int df)
{
	int x = 0;
	int y = 0;
	printf("玩家走>\n");
	while (1)
	{
		printf("请输入下棋的坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= NW && y >= 1 && y <= DF)
		{
			//下棋，判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，输入无效\n");
			}
		}
		else
		{
			printf("坐标无效,请重新输入\n");
		}


	}
}

void playpc(char board[NW][DF], int nw, int df)
{
	while(1)
	{
		printf("电脑走>\n");
		int x = rand() % NW;
		int y = rand() % DF;
		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int pingju(char board[NW][DF], int nw, int df)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < NW; i++)
	{
		for (j = 0; j < DF; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}	


int shuying(char board[NW][DF], int nw, int df)
{
	//判断3行
	int i = 0;
	for (i = 0; i < NW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//判断3列
	for (i = 0; i < DF; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//判断平局
	//如果棋盘满了返回1，不满返回0
	int ret = pingju(board, nw, df);
		if (ret == 1)
		{
			return 'Q';
		}
		return 'C';
}