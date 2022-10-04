#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class nb {
public:
	int age;
};
class n :virtual public nb {};//¡‚–ŒºÃ≥–º”virtual£¨–ÈºÃ≥–
class b :virtual public nb{};
class nb666 :public n, public b {};


void test()
{
	nb666 t;
	t.age = 10;
	cout<<"nb="<<t.age<<endl;
}
int main()
{
	test();
	return 0;
}