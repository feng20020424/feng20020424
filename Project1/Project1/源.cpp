#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class xk
//{
//public:
//	virtual void xk1() = 0;
//};
//class nc
//{
//public:
//	virtual void nc1() = 0;
//};
//class cpu
//{
//public:
//	virtual void cpu1() = 0;
//};
//class dn
//{
//public:
//
//	dn(xk* mxk, nc* mnc, cpu* mcpu)
//	{
//		xkzz = mxk;
//		nczz = mnc;
//		cpuzz = mcpu;
//	}
//	void mkar()
//	{
//		xkzz->xk1();
//		nczz->nc1();
//		cpuzz->cpu1();
//	}
//	~dn()
//	{
//		if (xkzz != NULL)
//		{
//			delete xkzz;
//			xkzz = NULL;
//		}
//		if (nczz != NULL)
//		{
//			delete nczz;
//			nczz = NULL;
//		}
//		if (cpuzz != NULL)
//		{
//			delete cpuzz;
//			cpuzz = NULL;
//		}
//	}
//
//	xk* xkzz;
//	nc* nczz;
//	cpu* cpuzz;
//};
//
//
//class intelxk :public xk
//{
//public:
//	virtual void xk1()
//	{
//		cout << "intelÏÔ¿¨" << endl;
//	}
//};
//
//
//class intelnc :public nc
//{
//public:
//	virtual void nc1()
//	{
//		cout << "intelÄÚ´æ" << endl;
//	}
//};
//
//
//class intelcpu :public cpu
//{
//public:
//	virtual void cpu1()
//	{
//		cout << "intel cpu" << endl;
//	}
//};
//
//class lenovoxk :public xk
//{
//public:
//	virtual void xk1()
//	{
//		cout << "lenovoÏÔ¿¨" << endl;
//	}
//};
//
//class lenovonc :public nc
//{
//public:
//	virtual void nc1()
//	{
//		cout << "lenovoÄÚ´æ" << endl;
//	}
//};
//
//class lenovocpu :public cpu
//{
//public:
//	virtual void cpu1()
//	{
//		cout << "lenovo cpu" << endl;
//	}
//};
//
//void test()
//{
//	nc* intel_nc = new intelnc;
//	xk* intel_kx = new intelxk;
//	cpu* intel_cpu = new intelcpu;
//	//
//	dn* dn1 = new dn(intel_kx, intel_nc, intel_cpu);
//	dn1->mkar();
//	delete dn1;
//	cout << "_________________________" << endl;
//	nc* lenovo_nc = new lenovonc;
//	xk* lenovo_xk = new lenovoxk;
//	cpu* lenovo_cpu = new lenovocpu;
//	dn* dn2 = new dn(lenovo_xk,lenovo_nc ,lenovo_cpu);
//	dn2->mkar();
//	delete dn2;
//	cout << "_________________________" << endl;
//	dn* dn3 = new dn(new lenovoxk, new intelnc, new lenovocpu);
//	dn3->mkar();
//	delete dn3;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ofstream ofs;
//	ofs.open("test.txt",ios::out);
//	ofs << "Å£±Æ666" << endl;
//	ofs << "Å£±Æ666" << endl;
//	ofs << "Å£±Æ666" << endl;
//	ofs.close();
//	return 0;
//}
//#include<string>
//int main()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "´ò¿ªÊ§°Ü" << endl;
//		return 0;
//	}
	//char arr[1024] = { 0 };
	//while (ifs>>arr)
	//{
	//	cout << arr << endl;
	//}
	//char arr[1024] = { 0 };
	//while (ifs.getline(arr,sizeof(arr)))
	//{
	//	cout << arr << endl;
	//}
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//
//
//	ifs.close();
//	return 0;
//}
//#include<iostream>
//#include<fstream>
//using namespace std;
//class nb
//{
//public:
//	char name[64];
//	int age;
//};
//void test()
//{
//	ofstream ofs("test.txt", ios::out | ios::binary);
//	nb t = { "ÂíÅ£±Æ",18 };
//	ofs.write((const char*)&t ,sizeof(nb));
//	ofs.close();
//}
//int main()
//{
//	test();
//	return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;
class nb
{
public:
	char name[64];
	int age;
};
void test()
{
	ifstream ifs("test.txt", ios::out | ios::binary);
	if (!ifs.is_open())
	{
		cout << "´ò¿ªÊ§°Ü" << endl;
	}

	nb t;
	ifs.read((char*)&t, sizeof(nb));
	cout << t.name << t.age << endl;
	ifs.close();
}
int main()
{
	test();
	return 0;
}