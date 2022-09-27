#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#define SWAP(N)((N & 0xaaaaaaaa) >> 1) + ((N & 0x55555555) << 1);
//int main()
//{
//	int num = 10;
//	int x=SWAP(num);
//	printf("%d", x);
//}
int main()
{
	int arr[10] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int *p=(int *)malloc(n * sizeof(arr[0]));
	int i = 0;
	
	if (p == NULL)
	{
		perror("malloc");
		return;
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = p[i];
	}
	realloc(arr, sizeof(arr[0]) * 20);
	free(p);
	p = NULL;
	return 0;
}