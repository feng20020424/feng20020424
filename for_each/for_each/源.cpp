#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<time.h>
using namespace std;
//void dy(int v)
//{
//	cout << v << " ";
//}
//class nb
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//class nb2
//{
//public:
//	int operator()(int v)
//	{
//		return v+999;
//	}
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>v2;
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), nb2());
//
//	//transform拷贝算法
//
//	for_each(v2.begin(), v2.end(), nb());
//	//for_each遍历算法
//	vector<int>::iterator it = find(v2.begin(), v2.end(), 999);
//	if(it!=v2.end())
//	{
//		cout << "找到了" << (*it) << endl;
//	}
//	else
//	{
//		cout << "没有" << endl;
//	}
//	return 0;
//}
//class nb
//{
//public:
//	nb(string name,int age)
//	{
//		this->M_name = name;
//		this->M_age = age;
//	}
//	string M_name;
//	int M_age;
//
//	bool operator == (const nb&p)
//	{
//		if (this->M_age == p.M_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//int main()
//{
//	vector<nb>n;
//	nb n1("马牛逼1 ", 18);
//	nb n2("马牛逼2 ", 18);
//	nb n3("马牛逼3 ", 18);
//	nb n4("马牛逼4 ", 18);
//	nb n5("马牛逼5 ", 18);
//	n.push_back(n1);
//	n.push_back(n2);
//	n.push_back(n3);
//	n.push_back(n4);
//	n.push_back(n5);
//	
//	//vector<nb>::iterator it = find(n.begin(), n.end(), n2);
//	//if (it != n.end())
//	//{
//	//	cout << "找到了" << it->M_name<<(*it).M_age << endl;
//	//}
//	////binary_search二分查找法；只能在有序排列中找。
//	//else
//	//{
//	//	cout << "找不到" << endl;
//	//}
//	int num = count(n.begin(), n.end(), n1);
//	cout << "和马牛逼年龄一样的人为 " << num << endl;
//	//random_shuffle随机打乱
//	return 0;
//}
void dy(int v)
{
	cout << v << endl;
}

void test1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	//随机打乱算法
	for_each(v.begin(), v.end(), dy);
}
void test2()
{
	//merge合并2容器转移到一个容器内
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i*i);
	}
	vector<int> v3;

	v3.resize((v1.size()) + (v2.size()));

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//合并转移到一个容器内

	random_shuffle(v3.begin(), v3.end());

	for_each(v3.begin(), v3.end(), dy);

	reverse(v3.begin(), v3.end());//反转函数

	for_each(v3.begin(), v3.end(), dy);


}
void test3()
{
	vector<int>v;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());

	for_each(v2.begin(), v2.end(), dy);


}
int main()
{
	srand((unsigned int)(time)(NULL));
	/*test1();*/
	//test2();
	test3();
	return 0;
}