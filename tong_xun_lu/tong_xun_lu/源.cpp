#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"test.h"
void cd()
{
	
	printf("**************************************\n");
	printf("********1.增加      2.删除   *********\n");
	printf("********3.更改      4.查找   *********\n");
	printf("********5.排序      6.显示   *********\n");
	printf("********       0.退出        *********\n");
	printf("**************************************\n");
}

int main()
{
	int i = 0;
	
	tx con = { 0 };
	
	do
	{
		cd();
		printf("请选择\n");
		scanf("%d", &i);
		switch(i)
		{
		case 1://增
			add(&con);
			break;
		case 2://删
			del(&con);
			break;
		case 3://改
			mod(&con);
			break;
		case 4://查
			sear(&con);
			break;
		case 5://
			pai(&con);
			break;
		case 6://显示
			print(&con);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (i);
	return 0;
}