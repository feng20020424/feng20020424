#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"test.h"
void cd()
{
	
	printf("**************************************\n");
	printf("********1.����      2.ɾ��   *********\n");
	printf("********3.����      4.����   *********\n");
	printf("********5.����      6.��ʾ   *********\n");
	printf("********       0.�˳�        *********\n");
	printf("**************************************\n");
}

int main()
{
	int i = 0;
	
	tx con = { 0 };
	
	do
	{
		cd();
		printf("��ѡ��\n");
		scanf("%d", &i);
		switch(i)
		{
		case 1://��
			add(&con);
			break;
		case 2://ɾ
			del(&con);
			break;
		case 3://��
			mod(&con);
			break;
		case 4://��
			sear(&con);
			break;
		case 5://
			pai(&con);
			break;
		case 6://��ʾ
			print(&con);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (i);
	return 0;
}