#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
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
//using namespace std;
//void dy(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it);
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 9; i++)
//	{
//		v.push_back(i);
//	}
//	dy(v);
//	vector<int>v2(v.begin(), v.end());
//	dy(v2);
//	vector<int>v3(10, 100);
//	dy(v3);
//	vector<int>v4(v3);
//	dy(v4);
//	return 0;
//}
//void dy(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << (*it )<<" ";
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10000; i++)
//	{
//		v1.push_back(i);
//	}
//	dy(v1);
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	dy(v2);
//	cout << "交换后——————————————————————————————" << endl;
//	//if (v1.empty() )
//	//{
//	//	cout << "容器为空" << endl;
//	//}
//	//else
//	//{
//		cout << "容器容量为 " << v1.capacity() << endl;
//		cout << "容器大小 " << v1.size() << endl;
//	//}
//	//v1.resize(15,6);//重新指定大小
//	//dy(v1);
//	v1.swap(v2);
//	dy(v1);
//	dy(v2);
//
//
//	return 0;
//}
//void dy(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
//	{
//		cout << (*it) << endl;
//	}
//}
//int main()
//{
//	deque<int>d1;
//	d1.push_back(1010);
//	d1.push_back(1012);//尾插
//	d1.push_front(1011);//头插
//	d1.push_front(1014);
//
//
//	d1.pop_front();//头删
//	d1.pop_back();//尾删
//
//	d1.insert(d1.begin(), 2, 10000);
//	d1.erase(d1.begin());
//	dy(d1);
//	return 0;
//}
void dy(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
	{
		cout << (*it)<<" ";
	}
	cout << endl;

}
int main()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(17);
	d.push_back(11);
	d.push_back(12);
	dy(d);
	sort(d.begin(), d.end());
	dy(d);
	return 0;
}