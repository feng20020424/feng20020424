#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void maopao(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{

				int add = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = add;
			}
		
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,9,8,7,6,0 };
	int sz = sizeof (arr) / sizeof (arr[0]);
	maopao(arr, sz);
	return 0;
}