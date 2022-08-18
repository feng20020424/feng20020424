#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("------请你猜出坤坤心中的数字------\n");
	printf("|-----------1.开始猜鸡-----------|\n");
	printf("|-----------0.不想猜鸡-----------|\n");
	printf("----------------------------------\n");
}
void game()
{
	int b = rand()%100+1;//rand给出了一个0~32767之间的数字
	//模100加1得出1~100的数字
	//printf("%d\n", b);
	int d = 0;
	while (1)
	{
		printf("请您猜出坤坤心中的想法(1~100)\n");
		scanf("%d",&d);
		if (d < b)
		{
			printf("不对，猜小了,坤坤甩出了律师函\n");
		}
		else if (d > b)
		{
			printf("不对，猜大了，坤坤向你扔了篮球\n");
		}
		else
		{
			printf("恭喜您，猜对了，奖励你一份油饼食不食\n");
			break;
		}
	}
}
int main()
{	
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("您是否愿意进行猜鸡>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
			//封装一个game函数
		case 0:
			printf("坤坤遗憾的离开了你\n");
			break;
		default:
			printf("小黑子乱点，你二碧食不食\n");
			break;
		}
	} while (a);
	return 0;
}
