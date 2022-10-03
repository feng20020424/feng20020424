//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//class nb;
//class goodgay {
//	
//public:
//	goodgay();
//	void tisi1();
//	void tisi2();
//	
//private:
//	nb* diao;
//};
//class nb {
//
//	friend 	void  goodgay:: tisi1();
//public:
//	nb();
//	string kt;
//private:
//	string room;
//};
//nb::nb()
//{
//	this->kt = "客厅";
//	this->room = "房间";
//}
//goodgay::goodgay()
//{
//	diao = new  nb;
//}
//void goodgay::tisi1()
//{
//	cout << "牛逼正在" << diao->kt << endl;
//	cout << "牛逼正在" << diao->room << endl;
//
//}
//void goodgay::tisi2()
//{
//	cout << "牛逼正在" << diao->kt << endl;
//	//cout << "牛逼正在" << diao->room << endl;
//}
//
//void test()
//{
//	goodgay gg;
//	gg.tisi1();
//	gg.tisi2();
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class nb {
//
//public :
//	int m_a;
//	int m_b;
//};
//
//nb operator+ (nb& p1, nb& p2)
//{
//	nb tpm;
//	tpm.m_a = p1.m_a + p2.m_a;
//	tpm.m_b = p1.m_b + p2.m_b;
//	return tpm;
//}
//
//void test()
//{
//	nb r;
//	r.m_a = 10;
//	r.m_b = 4;
//	nb t;
//	t.m_a = 5;
//	t.m_b = 9;
//	nb p3 = r+t;
//	cout << "牛逼" << p3.m_a << endl;
//	cout << "牛逼" << p3.m_b << endl;
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
#include<iostream>
using namespace std;
class nb
{
public:
	int m_a;
	int m_b;
};
ostream& operator<<(ostream& cout, nb& p1)
{
	cout << p1.m_a  <<  p1.m_b << endl;
	return cout;
}
void test()
{
	nb t;
	t.m_a = 10;
	t.m_b = 20;
	cout << t << endl;
}
int main()
{
	test();
	return 0;
}