//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int& ao()
//{
//	static int nb = 8;
//	return nb;
//}
//int main()
//{
////	cin==scanf
//
//	int& gg = ao();
//	cout<< "nb=" <<gg <<endl;
//	cout << "nb=" << gg << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//double pi = 3.14;
//class yuan {
//	
//public:
//	int m_r;
//
//	double zhochang()
//	{
//		return pi * 2 * m_r;
//	}
//};
//int main()
//{
//	yuan y;
//	y.m_r = 15;
//	cout << "Բ���ܳ�Ϊ" << y.zhochang() << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string.h>
//using namespace std;
//class yuan {
//
//public:
//	int cj;
//	string name;
//	void day()
//	{
//		cout << "�ɼ�Ϊ " <<  cj << "������ " <<  name << endl;
//	}
//};
//int main()
//{
//	yuan y;
//	y.cj = 15;
//	y.name = "ţ��";
//	y.day();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class biao {
//
//private://˽�е�
//	string M_name;
//	int M_age;
//	string my_lover;
//public://������
//
//	void stename(string name)//д
//	{
//		M_name = name;
//	}
//	string getname()//��
//	{
//		return M_name;
//	}
//	void steage(int age)//
//	{
//		M_age = age;
//	}
//	string getlove()
//	{
//		my_lover = "ΰ���";
//		return my_lover;
//	}
//};
//int main()
//{
//	biao r;
//	r.stename("ţ��");
//	r.steage(10);
//	
//	cout << "������" << r.getname() << endl;
//	cout << "��" << r.getlove()<< endl;
//
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;

class lifang {

public:
	void setcd(int c)
	{
		x= c;
	}
	int getcd()
	{
		return x;
	}
	void setkd(int k)
	{
		y = k;
	}
	int getkd()
	{
		return y;
	}
	void setgd(int g)
	{
		z = g;
	}
	int getgd()
	{
		return z;
	}
	
	int tiji()
	{
		return x * y * z;
	}
	int mianji()
	{
		return 2 * x * y + 2 * x * z + 2 * y * z;
	}

private://˽��
	int x;
	int y;
	int z;
};
int bijiao(lifang& a, lifang& b)
{
	if ((a.getcd() == b.getcd()) && (a.getgd() == b.getgd()) && (a.getkd() == b.getkd()))
	{
		cout << "���" << endl;
		return 1;
	}
	else
		cout << "�����" << endl;
		return 0;
}
int main()
{
	lifang r;
	r.setcd(10);
	r.setgd(10);
	r.setkd(10);

	lifang t;
	t.setcd(10);
	t.setgd(100);
	t.setkd(10);
	bijiao(r, t);
	cout << "���Ϊ" << r.mianji() << "���Ϊ" << r.tiji() << endl;
	system("pause");
	return 0;
}