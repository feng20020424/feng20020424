#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<set>
#include<string>
using namespace std;
//using namespace std;
//void dy(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it !=s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout <<"������СΪ" << s.size() << endl;
//}
//int main()
//{
//	set<int>s;
//	s.insert(37);
//	s.insert(27);
//	s.insert(57);
//	s.insert(83);
//	s.insert(17);
//	dy(s);
//
//	set<int>s2;
//	s2.insert(32);
//	s2.insert(12);
//	s2.insert(22);
//	s2.insert(42);
//	s2.insert(52);
//
//	s2.swap(s);
//	cout << endl;
//	dy(s);
//	cout << endl;
//	dy(s2);
//	if (s.empty())
//	{
//		cout << "sΪ��" << endl;
//	}
//	else
//	{
//		cout << "�ǿ�" << endl;
//	}
//	s.erase(s.begin());
//	dy(s);
//	set<int>::iterator it= s.find(32);
//	if (it != s.end())
//	{
//		cout << "ָ���λ��Ϊ" << *it << endl;
//	}
//	else
//	{
//		cout << "û��" << endl;
//	}
//	int num = s.count(32);
//	cout << num << endl;
//	return 0;
//}
class nb
{

public:
	nb(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
class nb2
{
public:
	bool operator()(const nb &s1, const nb& s2)const
	{
		return s1.m_age < s2.m_age;
	}
};
void dy(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}
class MyCompare
{
public:
	bool operator()(int s1, int s2) const
	{
		return s1 > s2;
	}
};
int main()
{
	pair<string, int>p("��ţ��", 19);
	cout << p.first << p.second << endl;

	set<int>s;
	s.insert(37);
	s.insert(27);
	s.insert(57);
	s.insert(83);
	s.insert(17);
	dy(s);

	set<int,MyCompare>s2;
	s2.insert(32);
	s2.insert(12);
	s2.insert(22);
	s2.insert(42);
	s2.insert(52);
	
	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
	set<nb,nb2>s3;
	nb p1("��ţ��1", 918);
	nb p2("��ţ��2", 818);
	nb p3("��ţ��3", 318);
	nb p4("��ţ��4", 218);
	nb p5("��ţ��5", 518);
	s3.insert(p1);
	s3.insert(p2);
	s3.insert(p3);
	s3.insert(p4);
	s3.insert(p5);
	for (set<nb,nb2>::iterator it = s3.begin(); it != s3.end(); it++)
	{
		cout << it->m_age << " " << it->m_name << endl;;
	}
	return 0;
}