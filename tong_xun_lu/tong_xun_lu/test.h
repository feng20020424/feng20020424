#pragma once
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define NAME_MAX 20//名字
#define SEX_MAX 10//性别
#define TELE_MAX 12//电话
#define ADDR_MAX 30//地址
#define MAX 1000
#define SZ 3
#define INT_SZ 2
typedef struct txl
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}txl;
//typedef struct tx
//{
//	txl ml[MAX];
//	int sz = 0;
//}tx;
typedef struct tx
{
	txl* ml;
	int sz;
	int cap;
};
void add(tx * p);//增

void print(tx* p);//打印

void del(tx* p);//删

void sear(tx* p);//查

void mod(tx* p);//改

void pai(tx* p);//排

void init(tx* p);

void dc(tx* p);

void bc(tx* p);

void duwenjian(tx* p);


void zengzhi(tx* p);
