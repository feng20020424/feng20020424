#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][5] = { {2,4},{2,5},{4,6} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
	}
	return 0;
}