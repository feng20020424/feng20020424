#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void chengfabiao(int n)
{
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-5d",i,j,i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d",& n);
	chengfabiao(n);
	return 0;
}