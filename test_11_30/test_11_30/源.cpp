#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v1[n];
    string s1;
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        if (s1 == "push")
        {
            int x;
            cin >> x;
            
            v1[j] = x;
            j++;


        }
        else if (s1 == "pop")
        {
            if (k == j)
            {
                cout << "error" << endl;
            }
            else
            {
                
                cout << v1[k] << endl;
                k++;
            }

        }
        else if (s1 == "front")
        {
            if (k == j)
            {
                cout << "error" << endl;
            }
            else
                cout << v1[k] << endl;
        }
    }

}