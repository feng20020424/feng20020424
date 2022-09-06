#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{	
	int i = 0;
	char a[1000];
	//ÎÞ·ûºÅcharµÄ´¢´æ(-128,127)
	//ÓÐ·ûºÅµÄchar´æ´¢£¨0£¬255£©
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
		
	}
	printf("%d", strlen(a));
	return 0;
}