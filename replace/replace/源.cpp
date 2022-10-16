#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
void dy(int d)
{
	cout << d << endl;
}
void test()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(40);
	v.push_back(10);

	for_each(v.begin(), v.end(),dy);

	cout << "_____________________________" << endl;
	replace(v.begin(), v.end(), 40, 500);//replace替换//swap交换两个容器
	for_each(v.begin(), v.end(), dy);
	int num = accumulate(v.begin(), v.end(), 0);//加法accumlate
}
void test2()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(min(v1.size(), v2.size()));
	vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//交集算法
	for_each(v3.begin(), it, dy);

}
void test3()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(v1.size()+ v2.size());
	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//并集算法
	for_each(v3.begin(), it, dy);
}
void test4()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(max(v1.size(),v2.size()));
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//差集算法
	for_each(v3.begin(), v3.end(), dy);
}
int main()
{	

	//test();
	/*test2();*/
	//test3();
	test4();
	system("pause");
	return 0;
}