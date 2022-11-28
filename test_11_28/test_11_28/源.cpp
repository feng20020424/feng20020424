#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int min;
//	int a[10] = { 8,10,9,6,23,7,1,12,13,80 };
//	for (int i = 0; i < 9; i++)
//	{
//		min = i;
//
//		for (int j = i + 1; j < 10; j++)
//		{
//			if(a[j]< a[min])
//			{
//				min = j;
//			}
//		}
//			if (min != i)
//			{
//				int b = a[i];
//				a[i] = a[min];
//				a[min] = b;
//			}
//		
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



#include <iostream>
#include<string>
using namespace std;

int main() {
    int arr[100] = { 0 };
    int n;

    string s1 = {};

    int x = 0;
    cin >> n;


    int j = -1;
    while (n--)
    {
        cin >> s1;
        // for(int i=0;a[i]!='\0';i++)
        // {
        //     if(a[i]==' ')
        //     {
        //         x++;
        //     }
        //     else if(x==0)
        //     {
        //         s1+=a[i];
        //     }
        //     else if(x==1)
        //     {
        //         s2+=a[i];
        //     }
        // }

        if (s1 == "push")
        {
            int u;
            cin >> u;
            j++;
            arr[j] = u;

        }
        if (s1 == "pop")
        {
            if (j == -1)
            {
                cout << "error" << endl;

            }
            else
            {
                cout << arr[j] << endl;
                j--;
            }

        }
        if (s1 == "top")
        {

            if (j == -1)
            {
                cout << "error" << endl;

            }
            else
                cout << arr[j] << endl;
        }
    }
}