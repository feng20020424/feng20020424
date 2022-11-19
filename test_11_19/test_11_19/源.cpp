#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>
//using namespace std;
//
//int main() {
//    string s1;
//    cin >> s1;
//
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    for (int i = 0; i < s1.size(); i++)
//    {
//        if (s1[i] <= 'z' && s1[i] >= 'a' || s1[i] <= 'Z' && s1[i] >= 'A')
//        {
//            a++;
//        }
//        else if (s1[i] >= '0' && s1[i] <= '9')
//        {
//            b++;
//        }
//        else if (s1[i] == ' ')
//        {
//            c++;
//        }
//        else
//        {
//            d++;
//        }
//        
//    }
//    cout << a << b << c << d;
//}


//#include <iostream>
//using namespace std;
//long long factorial(int n)
//{
//    if (n == 1)
//    {
//        return n;
//    }
//
//    return n * factorial(n - 1);
//}
//
//int main() {
//
//    int n = 0;
//    cin >> n;
//
//
//    cout << factorial(n);
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    char s1[100];
//    char s2[100];
//    cin >> s1 >> s2;
//
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int s = 0;
//    while (s1[i] != '\0')
//    {
//        j = 0;
//        if (s1[i] == s2[j])
//        {
//            int k = i;
//            n = 0;
//            while (s2[j] != '\0')
//            {
//
//                if (s1[k] == s2[j])
//                {
//                    k++;
//                    j++;
//                    n++;
//                }
//                else
//                {
//                    break;
//                }
//            }
//            if (s2[n] == '\0')
//            {
//                s++;
//            }
//
//        }
//        i++;
//    }
//    cout << s;
//}

#include <iostream>
#include<string>
using namespace std;


int mystrcmp(const char* src, const char* dst)
{
    int i = 0;
    while (src[i] != '\0' && dst[i] != '\0')
    {
        if (src[i] > dst[i])
        {
            return 1;
        }
        else if (src[i] < dst[i])
        {
            return -1;
        }
        i++;

    }

    if (src[i] != '\0') {
        return 1;
    }
    else if (dst[i] != '\0') {
        return -1;
    }

    return 0;

    // int i=0;
    // while(src[i]!='\0'  && dst[i]!='\0'){
    //     if(src[i]>dst[i]){
    //         return 1;
    //     }
    //     else if(src[i]<dst[i]){
    //         return -1;
    //     }
    //     i++;
    // }
    // if(src[i]!='\0'){
    //     return 1;
    // }
    // else if(dst[i]!='\0'){
    //     return -1;
    // }
    // return 0;


}

int main() {
    char s1[99];
    char s2[99];
    cin >> s1 >> s2;

    cout << mystrcmp(s1, s2);

}