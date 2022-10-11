#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
class nb
{
public:
	nb(string name,int pjf)
	{
		this->m_name = name;
		this->m_pjf = pjf;
	}
	string m_name;
	int m_pjf;
};
void bg(vector<nb>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];

		int fs = 0;
		nb p(name, fs);
		v.push_back(p);
	}
}
void df(vector<nb>& v)
{
	for (vector<nb>::iterator it = v.begin(); it < v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int sj = rand() % 41 + 60;
			d.push_back(sj);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		//cout << (*it).m_name<<endl;
		//for (deque<int>::iterator dit = d.begin(); dit < d.end(); dit++)
		//{
		//	cout << (*dit)<<" ";
		//}
		//cout << endl;
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit < d.end(); dit++)
		{
			sum += (*dit);
		}
		int avg = sum / d.size();
		it->m_pjf = avg;
	}
}
void dy(vector<nb>&v)
{
	for (vector<nb>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << (*it).m_name<<endl;
		cout << (*it).m_pjf << endl;
	}
}
int main()
{
	vector<nb>v1;
	bg(v1);
	//for (vector<nb>::iterator it = v1.begin(); it < v1.end(); it++)
	//{
	//	cout <<"姓名 "<< (*it).m_name << " 分数 " << (*it).m_pjf << endl;
	//}
	df(v1);
	dy(v1);
	return 0;
}