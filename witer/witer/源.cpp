#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#define N 100
int main() 
{

    char arr[N] = {0};
    scanf("%s",arr);
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]% 2 == 0)
        {
            arr[i] = '0';
        }
        else
        {
            arr[i] = '1';
        }
    }

    long long num = 0;

    for (int i = 0; i < strlen(arr); i++)
    {
        num = num * 10 + (arr[i] - '0');
    }
    printf("%lld\n", num);


    
    
    return 0;
}
//int main(void)
//{
//    int i;
//    char temp[N];
//    int count = 0;
//    long int number = 0L;
//
//    scanf("%10s", temp);
//    for (i = 0; i < strlen(temp); i++)
//    {
//        if (0 == (temp[i] - '0') % 2)
//        {
//            temp[i] = '0';
//        }
//        else
//        {
//            temp[i] = '1';
//        }
//    }
//    for (i = 0; i < strlen(temp); i++)
//    {
//        number = number * 10 + (temp[i] - '0');
//    }
//    printf("%ld\n", number);
//
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int num = 0;
//	while (a)
//	{
//		num = num * 10 + (a % 10) % 2;
//		a = a / 10;
//	}
//	printf("%d", num);
//	return 0;
//}