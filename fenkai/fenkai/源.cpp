#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fenli(int n)
{
	if (n > 9)
	{
		fenli(n / 10);
	}
	printf("%d ", n % 10 );
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fenli(n);
	return 0;
}
