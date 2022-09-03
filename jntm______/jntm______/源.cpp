#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fz(char* p1, char* p2)
{
	while (*p1++=*p2++)
	{

	}
}
int main()
{	
	char arr1[] = "dwadwad";
	char arr2[] = "niubi";
	fz(arr1, arr2);
	printf("%s", arr1);
	return 0;
}