#pragma once
#define NW 3
#define DF 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//初始化棋盘
void initboard(char board[NW][DF], int nw, int df);
//打印棋盘
void daying(char board[NW][DF], int nw, int df);
//下棋函数
void playme(char board[NW][DF], int nw, int df);
void playpc(char board[NW][DF], int nw, int df);
int shuying(char board[NW][DF], int nw, int df);
