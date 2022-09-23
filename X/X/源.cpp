#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);

	int x = 0;
	for (x = 0; x<i; x++)
	{
		int n = 0;
		for (n = 0; n < i; n++)
		{
			if (x==n)
			{
				printf("*");
			}
			else if(x+n==i-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
			
		
	
	return 0;
}