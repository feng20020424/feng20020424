//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float shengao = 0;
//	float tizhong = 0;
//	printf("�����������ߣ��ף�\n");
//	scanf("%f", &shengao);
//	printf("������������أ�ǧ�ˣ�\n");
//	scanf("%f", &tizhong);
//	float bim = (tizhong / (shengao * shengao));
//	printf("����bimָ��Ϊ %f", bim);
//	if (bim < 18.5)
//		printf("��������ƫ��");
//	else if(bim<24&&bim>18.5)
//		printf("������������");
//	else
//		printf("��������ƫ��");
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class nb 
//{
//public:
//	int a;
//	int b;
//	virtual void  ggnb() = 0;
//};
//class nn :public nb
//{
//public:
//
//	void ggnb()
//	{
//		cout << "�¸�ţ��" << endl;
//	}
//};
//void test()
//{
//	nb* nb6 = NULL;
//	nb6 = new nn;
//	nb6->ggnb();
//	delete nb6;
//}
//int main()
//{
//	test();
//
//	return 0;
//
//}
#include<iostream>

using namespace std;

class ba
{
public:
	virtual void cf() = 0;

	virtual void sj() = 0;

	virtual void dyx() = 0;

	 void ht()
	{
		cf();
		sj();
		dyx();
	}
};

class er :public ba
{
public:
	 virtual void cf()
	{
		cout << "�Է�" << endl;
	}

	virtual void sj()
	{
		cout << "˯��" << endl;
	}

	virtual void dyx()
	{
		cout << "����Ϸ" << endl;
	}
};
class er2 :public ba
{
public:
	virtual void cf()
	{
		cout << "�Է�2" << endl;
	}

	virtual void sj()
	{
		cout << "˯��2" << endl;
	}

	virtual void dyx()
	{
		cout << "����Ϸ2" << endl;
	}
};
void zhi(ba * p1)
{
	p1->ht();
	delete p1;
}

void test()
{
	zhi(new er2);
}

int main()
{
	test();
	return 0;
}