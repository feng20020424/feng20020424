#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void nixu(char* zuo, char* you)
{
	while(zuo<you)
	{
		
		char num = 0;
		num = *zuo;
		*zuo = *you;
		*you = num;
		zuo++;
		you--;
	}
}
int main()
{	
	char arr[100] = { 0 };
	gets_s(arr);
	//strlen是库函数，sizof是运算符
	int len =strlen(arr);//求函数长度
	nixu(arr, arr+len - 1);
	//
	char* pa = arr;
	while (*pa)
	{
		char* zuo = pa;
		while (*zuo != ' ' && *zuo != '\0')
		{
			zuo++;
		}
		nixu(pa, zuo - 1);
		if (*zuo == ' ')
		{
			pa = zuo + 1;
		}
		else
			pa = zuo;
	}
	printf("%s", arr);
	return 0;
}