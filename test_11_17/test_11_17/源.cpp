#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
//using namespace std;
//
//
//int main() {
//    int n;
//    cin >> n;
//    // write your code here......
//    int** p = new int* [n];
//    for (int i = 0; i < n; i++)
//        p[i] = new int[n];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            p[i][j] = i + j;
//            cout << p[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
#include <iostream>
#include<string>
using namespace std;

void fz(string& s1)
{
    for (int i = 0; i < s1.size() / 2; i++)
    {
        swap(s1[i], s1[s1.size() - i-1]);
    }

}
int main() {
    string s1;
    getline(cin, s1);

    fz(s1);
    cout << s1;
}


//#include <iostream>
//#include<string>
//using namespace std;
//
//int main() {
//    char arr[30] = { 0 };
//    cin.getline(arr, sizeof(arr));
//    int m;
//    cin >> m;
//    char* p = arr;
//    string s = p + m - 1;
//    cout << s << endl;
//
//}