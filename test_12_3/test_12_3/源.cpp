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
//                        {{"�ܳ��ǲ����ߺ�������( )"},
//                        {"A)�ǵ�"},
//                        {"B)��Ȼ��"},
//                        {"C)�ϻ�"},
//                        {"D)���ϴ𰸶���"},
//                        {"D"},
//                        {""}},
//
//                        };
//    welcome();
//    myRegister(userName, passWord);
//    login(userName, passWord);
//    score = examine(exam);
//    printf("���ķ���Ϊ��%d\n",score);
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
//    printf("===============����ϵͳ==================\n");
//    printf("=========================================\n");
//    Sleep(1000);
//}
//
//
//void myRegister(char userName[30], char passWord[30])
//{
//    system("cls");
//    printf("=========================================\n");
//    printf("===============�û�ע��==================\n");
//    printf("=========================================\n");
//    printf("\n\n\n");
//    printf("��ӭʹ�ñ�ϵͳ��������������û�ע��:)\n");
//    printf("�û���:");
//    scanf("%s", userName);
//    printf("����:");
//    scanf("%s", passWord);
//    Sleep(1000);
//    printf("ע��ɹ��������Ե�¼��ϵͳ!");
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
//        printf("��ӭʹ�ñ�ϵͳ!������ɵ�¼����:)\n");
//        printf("�û���:");
//        scanf("%s", userName1);
//        printf("����:");
//        scanf("%s", passWord1);
//        getchar();
//        if (strcmp(userName, userName1) == 0 && strcmp(passWord, passWord1) == 0)
//        {
//            printf("��ӭʹ�ñ�ϵͳ!\n");
//            break;
//        }
//        else
//        {
//            printf("��������û��������벻��ȷ������������!\n");
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