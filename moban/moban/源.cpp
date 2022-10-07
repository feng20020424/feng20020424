#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//template<typename T>
//void bijao(T& a, T& b)
//{
//	T tpu = a;
//	a = b;
//	b = tpu;
//}
//
//void test()
//{
//	int a = 2, b = 3;
//	bijao(a, b);
//	//bijao<int>(a, b);
//	cout << a << b<<endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
template<typename T>
void jh(T& a, T& b)
{
	T st = a;
	a = b;
	b = st;
}
template<typename T>
void nb(T& arr, int& b)
{
	int i = 0;
	int n = 0;
	for (i = 0; i < b; i++)
	{
		for (n = 0; n < i; n++)
		{
			if (arr[i] > arr[n]&&(i!=n))
			{
				jh(arr[i], arr[n]);
			}
		}
	}
}
void test()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9};
	 int b = sizeof(arr) / sizeof(arr[0]);
	 nb(arr, b);
	 int n = 0;
	 for (n = 0; n < b; n++)
	 {
		 cout << arr[n];
	 }
}
int main()
{
	test();
	return 0;
}
