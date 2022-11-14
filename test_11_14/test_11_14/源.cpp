#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[6];
//    for (int i = 0; i < 6; i++)
//    {
//        cin >> arr[i];
//    }
//
//
//
//    for (int i = 0; i < 6; i++)
//    {
//        int min = 99999;
//        int a = 0;
//        for (int j = i; j < 6; j++)
//        {
//
//            if (arr[j] < min)
//            {
//                a = j;
//                min = arr[j];
//            }
//
//        }
//        swap(arr[i], arr[a]);
//    }
//
//    for (int n = 0; n < 6; n++)
//    {
//        cout << arr[n] << ' ';
//
//    }
//}

#include <iostream>
using namespace std;

int main() {

    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];

    }
    cout << "[";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
        if (i == 5)
        {
            break;
        }
        cout << ",";
        cout << " ";
    }
    cout << "]";
    cout << endl;


    // 注意 while 处理多个 case
    for (int i = 0; i < 3; i++)
    {
        swap(arr[i], arr[6 - i - 1]);

    }
    cout << "[";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
        if (i == 5)
        {
            break;
        }
        cout << ",";
        cout << " ";
    }
    cout << "]";

}