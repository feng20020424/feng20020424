#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
//using namespace std;
//int main()
//{
//	vector<int>arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//	//vector<int>::iterator itbeg = arr.begin();
//	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
//	{
//		cout << *it<< endl;
//	}
//	return 0;
//}
//using namespace std;
//#include<string>
//class nb
//{
//public:
//	nb(string bb, int mm)
//	{
//		this->m_bb = bb;
//		this->m_mm = mm;
//	}
//	string m_bb;
//	int m_mm;
//};
//
//int main()
//{
//	vector<nb>arr;
//	nb p1("马牛逼1", 120);
//	nb p2("马牛逼2", 130);
//	nb p3("马牛逼3", 140);
//	nb p4("马牛逼4", 150);
//
//	arr.push_back(p1);
//	arr.push_back(p2);
//	arr.push_back(p3);
//	arr.push_back(p4);
//
//	for (vector<nb>::iterator it = arr.begin(); it != arr.end(); it++)
//			{
//				cout << "姓名 "<<(*it).m_bb <<" 年龄 " <<(*it).m_mm<< endl;
//			}
//	
//	return 0;
//}
//using namespace std;
//int main()
//{
//	vector<vector<int>>da;
//	vector<int>xi1;
//	vector<int>xi2;
//	vector<int>xi3;
//	vector<int>xi4;
//	for (int i = 0; i < 4; i++)
//	{
//		xi1.push_back(1 + i);
//		xi2.push_back(2 + i);
//		xi3.push_back(3 + i);
//		xi4.push_back(4 + i);
//	}
//	da.push_back(xi1);
//	da.push_back(xi2);
//	da.push_back(xi3);
//	da.push_back(xi4);
//	for (vector<vector<int>>::iterator it = da.begin(); it != da.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
using namespace std;
void dy(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it);
	}
	cout << endl;
}

int main()
{
	vector<int>v;
	for (int i = 0; i < 9; i++)
	{
		v.push_back(i);
	}
	dy(v);
	vector<int>v2(v.begin(), v.end());
	dy(v2);
	vector<int>v3(10, 100);
	dy(v3);
	vector<int>v4(v3);
	dy(v4);
	return 0;
}