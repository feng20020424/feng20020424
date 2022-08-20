#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int run(int n)
{
	int i = 0;
	int a = 4;
	int b = 100;
	int c = 400;
	scanf("%d", &i);
	if (i % a == 0 && i % 100 != 0)
	{
		return 1;
	}
	else if(i % b==0 && i%c==0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	if (run(i) == 1)
		printf("ÊÇ");
	else
		printf("²»ÊÇ");
	return 0;
}