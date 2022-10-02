#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class nb {
//
//	int b;
//
//public:
//	nb()//构造，有参，可以重载
//	{
//		cout << "嘎嘎牛逼无参" << endl;
//
//	}
//	nb(int a)//构造，有参，可以重载
//	{
//		b = a;
//		cout << "嘎嘎牛逼有参" << endl;
//
//	}
//	nb(const nb&p)//构造，有参，可以重载
//	{
//		b = p.b;
//		cout << "嘎嘎牛逼拷贝" << endl;
//
//	}
//	~nb()//析构,无参，不能重载
//	{
//		cout << "牛逼完了" << endl;
//	}
//
//	
//};
//
//
//int main()
//{
//	nb p1;
//	nb p2(3);
//	nb p3(p2);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#define A 4
//#define B 4
//void bi(int arr[A][B], int a, int b)
//{
//	int x = 0;
//	int y = 0;
//	int c = 0;
//	int d = 0;
//
//	for (x = 0; x < a; x++)
//	{
//		for (y = 0; y < b; y++)
//		{
//			for(c=0;c<a;c++)
//			{ 
//				for (d = 0; d < b; d++)
//				{
//					if (arr[c][d] == arr[x][y] && (c != x || d != y))
//					{
//						printf("no");
//						return;
//					}
//				}
//			}
//		
//		}
//	}
//	printf("yes");
//	return;
//}
//int main()
//{
//	int arr[A][B] = { {2,1,4,6,},{9,0,8,3},{12,34,65,87},{23,53,81,50} };
//
//	bi(arr,A,B);
//	return 0;
//}

#include<iostream>
#include<string>
//using namespace std;
//void judge(int** a, int m, int n)
//{
//    int* temp = new int[m * n];
//    int end = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            for (int k = 0; k < end; k++)//比较该元素与前面所有元素相不相等
//            {
//                if (a[i][j] == temp[k])
//                {
//                    printf("no");
//                    return;
//                }
//            }
//            temp[end] = a[i][j];//都不相等则再加一个元素
//            end = end + 1;
//        }
//    }
//    printf("yes");
//}
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    //创建一个m*n的数组
//    int** a = new int* [m];
//    for (int i = 0; i < m; i++)
//    {
//        a[i] = new int[n];
//    }
//    //输入二维数组
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    judge(a, m, n);
//    return 0;
//}
using namespace std;
class nb
{

public:
	nb(int lb)
	{
		m_lb = lb;
	}
	int getlb()
	{
		return m_lb;
	}
	nb& add(nb&p)
	{
		this->m_lb += p.m_lb;
		return * this ;
	}
	int m_lb;
};

void test1()
{
	nb p1(10);
	cout << "nb=" << p1.m_lb << endl;
}
void test2()
{
	nb p2(10);
	nb p3(10);
	p3.add(p2).add(p3).add(p3);
	cout << "nb=" << p3.m_lb << endl;
}
int main()
{
	
	test1();
	test2();
	return 0;
}