#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 0; i<n; i++)
//	{	
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;//15
//	int b = 0;//2
//	int c = 0;//5
//	int i = 0;//次数
//	for (a = 0;a<=6;a++)
//	{
//		for (b = 0; b <= 50; b++)
//		{
//			for (c = 0; c <= 20; c++)
//			{
//				if (15 * a + 2 * b + 5 * c == 100)
//				{
//					i++;
//					printf("洗发水%d 牙刷%d 肥皂%d\n", a,b,c);
//				}
//			}
//		}
//	}
//	printf("%d", i);
//	return 0;
//}
//void input()
//{
//	int i = 0;
//	printf("请输入1-100内的数\n");
//	scanf("%d", &i);
//	
//	if (i <= 100 && i >= 1)
//	{
//		printf("正确\n");
//	}
//	else
//	{
//		printf("错误，请重新输入\n");
//		input();
//	}
//}
//int main()
//{
//
//	input();
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	int i = 0;
	int sz = sizeof arr / sizeof arr[0];

	for (i = 0; i < sz; i++)
	{
		
		printf("%d\n", *p);
		p++;
	}
	return 0;
}