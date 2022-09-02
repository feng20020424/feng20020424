#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void ni(int arr[],int cd)
//{
//	int i = 0;
//	int j = 0;
//	int ls = 0;
//	for (i = 0; i <=cd/2-1; i++)
//	{
//		ls = arr[i];
//		arr[i] = arr[cd - i-1];
//		arr[cd - i-1] = ls;
//	}
//
//}
////void ling(int arr[])
////{
////	int i = 0;
////	for (i = 0; i <= 9; i++)
////	{
////		arr[i] = 0;
////		printf("%d\n", arr[i]);
////	}
////}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int cd = 0;
//	cd = sizeof(arr) / sizeof(arr[0]);
//	ni(arr,cd);
//	/*ling(arr);*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//void jh(int arr[], int brr[],int cd)
//{		
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i <=cd - 1; i++)
//	{
//		tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//		printf("%d", arr[i]);
//	}
//}
//
//int main()
//{	
//	int cd;
//	int arr[5] = { 0,1,2,3,4 };
//	int brr[5] = { 5,6,7,8,9 };
//	cd = sizeof(arr) / sizeof(arr[0]);
//	jh(arr, brr,cd);
//	return 0;
//}
void zs(int i)
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (i !=0)
	{
		a = i % 10;
		i = i / 10;
		c = c * 10 + a;

	}
	printf("%d", c);
	
}
int main()
{	
	int i = 0;
	scanf("%d", &i);
	zs(i);
	return 0;
}