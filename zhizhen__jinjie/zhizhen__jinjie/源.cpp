#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char s = 'c';
//	const char* ps = "dwadwad";
//	char arr[] = "wadwadf";
//	printf("%s", arr);
//	return 0;
//
//}
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int* pa = arr;
	int(*parr)[10] = &arr;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", parr);
	printf("%p\n", parr+1);

	return 0;
}