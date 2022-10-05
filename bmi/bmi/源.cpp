//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float shengao = 0;
//	float tizhong = 0;
//	printf("请输入你的身高（米）\n");
//	scanf("%f", &shengao);
//	printf("请输入你的体重（千克）\n");
//	scanf("%f", &tizhong);
//	float bim = (tizhong / (shengao * shengao));
//	printf("您的bim指数为 %f", bim);
//	if (bim < 18.5)
//		printf("您的体型偏瘦");
//	else if(bim<24&&bim>18.5)
//		printf("您的体型正常");
//	else
//		printf("您的体型偏胖");
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
//		cout << "嘎嘎牛逼" << endl;
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
		cout << "吃饭" << endl;
	}

	virtual void sj()
	{
		cout << "睡觉" << endl;
	}

	virtual void dyx()
	{
		cout << "打游戏" << endl;
	}
};
class er2 :public ba
{
public:
	virtual void cf()
	{
		cout << "吃饭2" << endl;
	}

	virtual void sj()
	{
		cout << "睡觉2" << endl;
	}

	virtual void dyx()
	{
		cout << "打游戏2" << endl;
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