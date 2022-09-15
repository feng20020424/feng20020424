#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void maopao(int arr[], int sz)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		
//		for (j = 0; j < sz - 1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//
//				int add = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = add;
//			}
//		
//		}
//	
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,9,8,7,6,0 };
//	int sz = sizeof (arr) / sizeof (arr[0]);
//	maopao(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//			printf("%d", arr[i]);
//	}
//	return 0;
//}
//void mp(int arr[], int cd)
//{
//	int i = 0;
//	int b = cd - 1;
//	int a = 0;
//	for (i = 0; i < b;i++)
//	{
//		
//		for (a = 0; a < b; a++)
//		{
//			if (arr[a]>arr[a + 1])
//			{
//				int c = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = c;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,0,9,8,7,6,4,5,3 };
//	int cd = sizeof arr / sizeof arr[0];
//	mp(arr, cd);
//	for (i = 0; i < cd; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//比较大小的函数
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


void jh(char*buf1,char*buf2,int dx)
{
	int i = 0;
	for (i = 0; i < dx; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//参数(起始地址，长度，单个大小，比较函数)
void my_sort(void* base, int cd, int dx, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < cd - 1; i++)
	{
		int j = 0;
		for (j = 0; j < cd - 1-i; j++)
		{
			if (cmp((char*)base + j * dx, (char*)base + (j + 1) * dx) > 0)
			{
				//交换地址的函数
				//参数(第一个地址跟第二个地址，单个大小)
				jh((char*)base + j * dx, (char*)base + (j + 1) * dx, dx);
			}

		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 1,2,0,9,8,7,6,4,5,3 };
	int cd = sizeof arr / sizeof arr[0];
	my_sort(arr,cd,sizeof arr[0],cmp);

	for (i = 0; i < cd; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}