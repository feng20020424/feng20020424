//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <windows.h> 
//void welcome();
//void myRegister(char userMame[30], char passWord[30]);
//void login(char userName[30], char passWord[30]);
//int examine(char exam[5][7][50]);
//
//int main()
//{
//    int score = 0;
//    char userName[30];
//    char passWord[30];
//    char exam[5][7][50] = {
//                        {{"曹晨是不是倪豪俊爹？( )"},
//                        {"A)是的"},
//                        {"B)当然啦"},
//                        {"C)废话"},
//                        {"D)以上答案都对"},
//                        {"D"},
//                        {""}},
//
//                        };
//    welcome();
//    myRegister(userName, passWord);
//    login(userName, passWord);
//    score = examine(exam);
//    printf("您的分数为：%d\n",score);
//    return 0;
//}
//
//
//
//
//
//
//void welcome()
//{
//    system("color FD");
//    printf("\n\n\n\n\n\n");
//    printf("=========================================\n");
//    printf("===============考试系统==================\n");
//    printf("=========================================\n");
//    Sleep(1000);
//}
//
//
//void myRegister(char userName[30], char passWord[30])
//{
//    system("cls");
//    printf("=========================================\n");
//    printf("===============用户注册==================\n");
//    printf("=========================================\n");
//    printf("\n\n\n");
//    printf("欢迎使用本系统！首先请您完成用户注册:)\n");
//    printf("用户名:");
//    scanf("%s", userName);
//    printf("密码:");
//    scanf("%s", passWord);
//    Sleep(1000);
//    printf("注册成功，您可以登录本系统!");
//    Sleep(1000);
//}
//
//void login(char userName[30], char passWord[30])
//{
//    char userName1[30];
//    char passWord1[30];
//    system("cls");
//    while (1)
//    {
//        printf("欢迎使用本系统!请您完成登录操作:)\n");
//        printf("用户名:");
//        scanf("%s", userName1);
//        printf("密码:");
//        scanf("%s", passWord1);
//        getchar();
//        if (strcmp(userName, userName1) == 0 && strcmp(passWord, passWord1) == 0)
//        {
//            printf("欢迎使用本系统!\n");
//            break;
//        }
//        else
//        {
//            printf("你输入的用户名和密码不正确，请重新输入!\n");
//            Sleep(1000);
//            system("cls");
//        }
//    }
//    Sleep(1000);
//}
//
//
//int examine(char exam[5][7][50])
//{
//     
//    return 0;
//}


#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int a, b;
    string s1;
    cin >> a >> b;
    int arr[a];
    int i = 0;
    int j = 0;

    while (b--)
    {
        cin >> s1;
        if (s1 == "push")
        {
            if (i - j == a)
            {
                cout << "full" << endl;
                int w;
                cin >> w;
            }
            else
            {
                int x;
                cin >> x;
                arr[i] = x;
                i++;
            }
        }
        else if (s1 == "front")
        {
            if (i == j)
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << arr[j] << endl;
            }
        }
        else if (s1 == "pop")
        {
            if (i == j)
            {
                cout << "empty" << endl;;
            }
            else
            {
                cout << arr[j] << endl;
                j++;
            }
        }
    }

}