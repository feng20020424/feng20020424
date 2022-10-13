#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<map>
#include<vector>
#define CHEHUA 0
#define MEISHU 1
#define YANFA 2

using namespace std;
class nb
{
public:
	string m_name;
	int m_age;
};
void cj(vector<nb>& v)
{
	string name = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		nb n;
		n.m_name = "员工";
		n.m_name += name[i];
		n.m_age = rand() % 40 + 20;
		v.push_back(n);
	}
}
void getm(vector<nb>& v, multimap<int, nb>& m)
{
	for (vector<nb>::iterator it = v.begin(); it != v.end(); it++)
	{
		int bm = rand() % 3;
		m.insert(pair<int,nb>(bm, *it));

	}
}
void xshi(multimap<int, nb>& m)
{
	cout << "策划部门" << endl;
	multimap<int, nb>::iterator it = m.find(CHEHUA);
	int dq = 0;
	int count = m.count(CHEHUA);
	for (; it != m.end() && dq < count; it++, dq++)
	{
		cout <<"名字是 " << it->second.m_name << " 年龄是 " << it->second.m_age << endl;
	}

	cout << "美术部门" << endl;
	it = m.find(MEISHU);
	dq = 0;
	count = m.count(MEISHU);
	for (; it != m.end() && dq < count; it++, dq++)
	{
		cout << "名字是 " << it->second.m_name << " 年龄是 " << it->second.m_age << endl;
	}

	cout << "研发部门" << endl;
	it = m.find(YANFA);
	dq = 0;
	count = m.count(YANFA);
	for (; it != m.end() && dq < count; it++, dq++)
	{
		cout << "名字是 " << it->second.m_name << " 年龄是 " << it->second.m_age << endl;
	}
}
int main()
{
	vector<nb>v1;
	cj(v1);
	for (vector<nb>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << "名字: " << (*it).m_name << " 年龄: " << (*it).m_age << endl;
	}
	cout << "__________________________________" << endl;

	multimap<int, nb>m1;
	getm(v1,m1);

	xshi(m1);
	return 0;
}