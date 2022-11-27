#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, k;
    int a;
    cin >> n >> k;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.rbegin(), v1.rend());
    int c = v1.size();
    cout << v1[c - k];
}




#include <iostream>
#include<string>
using namespace std;

int main() {
    string a;
    int x, y;
    getline(cin, a);


    int space = 0;
    string op = {};
    string num1 = {};
    string num2 = {};
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ') {
            space++;
            continue;
        }
        else if (space == 0) //第一空格之前都是操作符
            op += a[i];
        else if (space == 1) //第一二个空格之间，为第一个数字
            num1 += a[i];
        else if (space == 2)
            num2 += a[i]; //第二个空格之后，为第二个数字
    }
    x = stoi(num1); //字符串转数组
    y = stoi(num2);
    if (a[0] == 'a' || a[0] == 'A')
    {
        cout << x + y;
    }
    if (a[0] == 's' || a[0] == 'S')
    {
        cout << x - y;
    }
    if (a[0] == 'm' || a[0] == 'M')
    {
        cout << x * y;
    }
    if (a[0] == 'd' || a[0] == 'D')
    {
        if (y == 0)
        {
            cout << "Error";
        }
        else
            cout << x / y;
    }
}