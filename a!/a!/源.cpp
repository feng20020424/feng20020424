#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i<n; i++)
	{	
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}