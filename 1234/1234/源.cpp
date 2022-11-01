#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[4] = { 1,2,3,4};
//	int n = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int x = 0; x < 4; x++)
//		{
//			for (int y = 0; y < 4; y++)
//			{
//				if (arr[i] != arr[x] &&arr[i]!=arr[y]&& arr[x] != arr[y])
//				{
//					n++;
//					printf("%d%d%d\n", arr[i], arr[x], arr[y]);
//				}
//			}
//		}
//	}
//	printf("一共有%d次", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		
//		if (((i%10) * (i%10) * (i%10)) + ((i/10%10)*(i/10%10)*(i/10 %10)) + ((i/100) * (i/100) * (i/100))==i)
//		{
//			printf("%d\n",i);
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a  = 0;
//	int b = 0;
//	int c = 0;
//	for (c = 3; c < n; c++)
//	{
//		b = c;
//		for (a = 2; a < b; a++)
//		{
//			
//			if (b % a ==0||(n-b)%a==0)
//			{
//				
//				;
//
//			}
//			else 
//			{
//				printf("%d", b);
//			}
//
//		}
//	}
//	return 0;
//}
int main() {
int a, b, c, d;
scanf("%d", &a);
for (b = 3; b <= a / 2; b += 2)
{
	for (c = 2; c < b; c++)
		if (b % c == 0)break;
	if (c >= b)
		d = a - b;
	else
		break;
	for (c = 2; c < d; c++)
		if (d % c == 0)break;
	if (c >= d)
		printf("%d=%d+%d\n", a, b, d);
}
return 0;
}
