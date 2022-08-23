#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int n)
{
	if (n > 9)
	{
		return add(n / 10) + n % 10;
	}
	return n;
}
int main()
{	
	int n = 0;
	scanf("%d", &n);
	int sum = add(n);
	printf("%d", sum);
	return 0;
}