#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int n = 0;
	int sum = 1;
	int ret = 0;
	for (n = 1; n <= 4; n++)
	{	
		sum *=  n;
		ret += sum;
	}
	printf("%d\n", ret);

	return 0;
}