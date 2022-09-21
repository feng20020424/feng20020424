#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	struct nb
	{
		char a;
		int b;
		char c;
	};
	struct nb ggnb = { 0 };
	int i=sizeof(ggnb);
	printf("%d", i);
}