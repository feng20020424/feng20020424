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
//	cout << "圆的周长为" << y.zhochang() << endl;
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
//		cout << "成绩为 " <<  cj << "名字是 " <<  name << endl;
//	}
//};
//int main()
//{
//	yuan y;
//	y.cj = 15;
//	y.name = "牛逼";
//	y.day();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class biao {
//
//private://私有的
//	string M_name;
//	int M_age;
//	string my_lover;
//public://公开的
//
//	void stename(string name)//写
//	{
//		M_name = name;
//	}
//	string getname()//读
//	{
//		return M_name;
//	}
//	void steage(int age)//
//	{
//		M_age = age;
//	}
//	string getlove()
//	{
//		my_lover = "伟大的";
//		return my_lover;
//	}
//};
//int main()
//{
//	biao r;
//	r.stename("牛逼");
//	r.steage(10);
//	
//	cout << "名字是" << r.getname() << endl;
//	cout << "是" << r.getlove()<< endl;
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

private://私有
	int x;
	int y;
	int z;
};
int bijiao(lifang& a, lifang& b)
{
	if ((a.getcd() == b.getcd()) && (a.getgd() == b.getgd()) && (a.getkd() == b.getkd()))
	{
		cout << "相等" << endl;
		return 1;
	}
	else
		cout << "不相等" << endl;
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
	cout << "面积为" << r.mianji() << "体积为" << r.tiji() << endl;
	system("pause");
	return 0;
}