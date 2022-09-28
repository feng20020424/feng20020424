#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int shan(int *arr, int *sz)
//{
//	if (arr == NULL)
//	{
//		perror("shan");
//		
//	}
//	int i = 9999999;
//	int n = 0;
//	int x = 0;
//	for (n = 0; n < *sz; n++)
//	{
//		if (arr[n] < i)
//		{
//			i = arr[n];
//			x = n;
//		}
//	}
//	arr[x] = arr[*sz-1];
//	*sz-=1;
//	return i;
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,7,5,0,4,8,9,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i=shan(arr,&sz);
//	printf("%d", i);
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%d", arr[a]);
//	}
//	return 0;
//}
//void nixu(int* arr, int sz)
//{
//	int z = 0;
//	int y = sz - 1;
//	for (z ; z < y; z++, y--)
//	{
//		int x = arr[z];
//		arr[z] = arr[y];
//		arr[y] = x;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	nixu(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
void shan(int* arr, int x,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == x)
		{
			int n = i;
			while (n<sz) 
			{
			
				arr[n] = arr[n + 1];
				n++;

			}
		}
	}
}
int main()
{	
	int x = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &x);
	shan(arr, x, sz);
	for (int i = 0; i < sz-1; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}