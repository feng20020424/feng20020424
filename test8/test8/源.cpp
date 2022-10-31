#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string.h>
#include<stdio.h>
#include<istream>
using namespace std;
int main() {
    char arr[1024] = { 0 };
    cin.getline(arr, sizeof(arr));
    int n = strlen(arr);
    int zm = 0;
    int sz = 0;
    int kg = 0;
    int qt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'z')
        {
            zm++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            sz++;
        }
        else if (arr[i] == ' ')
        {
            kg++;
        }
        else
        {
            qt++;
        }
    }
    cout << "letter:" << zm << " digit:" << sz << " space:" << kg << " other" << qt;
}