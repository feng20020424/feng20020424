#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    float c = 0;
//    float d = a;
//    float e = 0;
//    for (int i = 0; i < b; i++)
//    {
//        if (i == 0)
//        {
//            c = d;
//        }
//        else {
//            c += 2 * d;
//        }
//        d /= 2;
//
//    }
//
//    printf("%0.1f %0.1f", c, d);
//
//
//}
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a != 2 && a % i == 0)
        {
            printf("不是质数");
            return 0;
        }
    }
    printf("是质数");
}