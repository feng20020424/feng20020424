#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <=100000; i++)
//	{	
//		int n = 1;
//		int sum = i;
//		while(sum / 10)
//		{
//			n++;
//			sum = sum / 10;
//		}
//		sum = i;
//		int he = 0;
//		while (sum)
//		{
//			he += pow(sum % 10, n);
//			sum = sum / 10;
//		}
//		if (he == i)
//		{
//			printf(" %d ", i);
//		}
//	}
//}
//void nixu(char arr[],int cd)
//{
//	int i = cd - 2;
//	int j = 0;
//	for (j = 0; j < i; )
//	{
//		char a = arr[j];
//		arr[j] = arr[i];
//		arr[i] = a;
//		j++;
//		i--;
//	}
//}
//int main()
//{
//	char arr[] = "nb666wdbb";
//	int cd = sizeof arr / sizeof arr[0];
//
//	nixu(arr,cd);
//
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//上半部分
//	for (i = 0; i < n; i++)
//	{
//		//打印空格
//		int k = n-i;
//		while (k-1)
//		{
//			printf(" ");
//			k--;
//		}
//		//打印*
//		int j = 0;
//		for(j=0;j<2*i+1;j++)
//		{
//			printf("8");
//			
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < n-1 ; i++)
//	{	
//		
//		//打印空格
//		int k = 1;
//		for (k = 1; k <= i+1; k++)
//		{
//			printf(" ");
//		}
//		//打印*
//		int j = 0;
//		for (j = 0; j<2*(n-1-i)-1; j++)
//		{
//			printf("8");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 20;//rmb
//	int pz = a / 1;//20瓶
//	int n = a/1;//20瓶
//	for (pz; pz>=2; pz-=2)
//	{
//		n++;
//		pz++;
//	}
//	printf("%d", n);
//	return 0;
//}

void jo(int arr[],int cd)
{
	int a = 0;
	int n = cd - 1;
	while (a < n)
	{
		while ((a < n)&&arr[a]%2==1)
		{
			a++;
		}
		while ((a < n) && arr[n] % 2 == 0)
		{
			n--;
		}
		if (a < n);
		{
			int sum = arr[a];
			arr[a] = arr[n];
			arr[n] = sum;
		}
	}	

}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int cd = sizeof arr / sizeof arr[0];
	jo(arr,cd);
	for (i = 0; i < cd; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}