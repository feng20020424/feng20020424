#pragma once
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20//����
#define SEX_MAX 10//�Ա�
#define TELE_MAX 12//�绰
#define ADDR_MAX 30//��ַ
#define MAX 1000
typedef struct txl
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}txl;
typedef struct tx
{
	txl ml[MAX];
	int sz = 0;
}tx;
void add(tx * p);//��

void print(tx* p);//��ӡ

void del(tx* p);//ɾ

void sear(tx* p);//��

void mod(tx* p);//��

void pai(tx* p);//��