#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include<string>
//using namespace std;
//
//int main() {
//    int arr[100] = { 0 };
//    int n;
//
//    string s1 = {};
//
//    int x = 0;
//    cin >> n;
//
//
//    int j = -1;
//    while (n--)
//    {
//        cin >> s1;
//        // for(int i=0;a[i]!='\0';i++)
//        // {
//        //     if(a[i]==' ')
//        //     {
//        //         x++;
//        //     }
//        //     else if(x==0)
//        //     {
//        //         s1+=a[i];
//        //     }
//        //     else if(x==1)
//        //     {
//        //         s2+=a[i];
//        //     }
//        // }
//
//        if (s1 == "push")
//        {
//            int u;
//            cin >> u;
//            j++;
//            arr[j] = u;
//
//        }
//        if (s1 == "pop")
//        {
//            if (j == -1)
//            {
//                cout << "error" << endl;
//
//            }
//            else
//            {
//                cout << arr[j] << endl;
//                j--;
//            }
//
//        }
//        if (s1 == "top")
//        {
//
//            if (j == -1)
//            {
//                cout << "error" << endl;
//
//            }
//            else
//                cout << arr[j] << endl;
//        }
//    }
//}
//#include<stdio.h>
//
//int main()
//{
//	int id = sizeof(unsigned long) ;
//	printf("%d", id);
//	return 0;
//}
class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param tokens string�ַ���vector
     * @return int����
     */
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i = 0; i < tokens.size(); i++)
        {

            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (tokens[i] == "+")
                {
                    stk.push(a + b);
                }
                if (tokens[i] == "-")
                {
                    stk.push(b - a);
                }
                if (tokens[i] == "*")
                {
                    stk.push(a * b);
                }
                if (tokens[i] == "/")
                {
                    stk.push(b / a);
                }
            }
            else
                stk.push(stoi(tokens[i]));
        }
        return stk.top();
    }
};