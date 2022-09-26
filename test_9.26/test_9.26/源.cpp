#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fond(int arr[], int sz, int* px, int* py)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	*px = num1;
	*py = num2;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	int x = 0;
	int y = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	fond(arr, sz, &x, &y);
	printf("%d%d", x,y);
	return 0;
}