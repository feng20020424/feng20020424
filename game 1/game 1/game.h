#pragma once
#define NW 3
#define DF 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʼ������
void initboard(char board[NW][DF], int nw, int df);
//��ӡ����
void daying(char board[NW][DF], int nw, int df);
//���庯��
void playme(char board[NW][DF], int nw, int df);
void playpc(char board[NW][DF], int nw, int df);
int shuying(char board[NW][DF], int nw, int df);
