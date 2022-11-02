#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>

using namespace std;

int main() //

{
    int arr[6] = { 0 };
    int s = 0;
    for (int n = 0; n < 6; n++)
    {
        cin >> arr[s];
        s++;
    }
    int c = s;
    for (  ;c>0;--c)
    {
        for (int i = 0; i < s - 1; i++) {
            if (arr[i] > arr[i + 1])
            {
                int a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
            }
        }

    }
    /*for (int i = 0; i < s; i++)
    {
        for (int x = 0; x < l - i; x++)
        {
            if (arr[x] > arr[x + 1])
            {
                int a = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = a;
            }
        }
    }*/

    for (int n = 0; n < s; n++)
    {
        cout << arr[n]<< ' ';
    }
    return 0;
}