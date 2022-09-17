#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "NB666WDBB";
	char arr2[10] = "NBWDBB";
	//拷贝2到1里
	strncpy(arr1, arr2, 7);

	//在1后面接上2
	/*strncat(arr1, arr2, 6);*/


	//比较字符串，大于返回正数，等于返回0，小于返回负数
	strncmp(arr1, arr2, 6);
	printf("%s", arr1);

	return 0;
}