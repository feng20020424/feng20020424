#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//class time
//{
//    int hours;
//    int minutes;
//public:
//
//    time() {
//        hours = 0;
//        minutes = 0;
//    }
//    time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void operator< (time& t1)
//    {
//        if (this->hours < t1.hours)
//        {
//            cout << "yes";
//        }
//        else if (this->hours == t1.hours && this->minutes < t1.minutes)
//        {
//            cout << "yes";
//        }
//        else
//        {
//            cout << "no";
//        }
//    }
//};
//
//int main() {
//    int h, m;
//    cin >> h >> m;
//
//    class time t1(h, m);
//    class time t2(6, 6);
//    t1 < t2;
//}


//#include <iostream>
//using namespace std;
//
//
//class time
//{
//    int hours;
//    int minutes;
//public:
//
//    time() {
//        hours = 0;
//        minutes = 0;
//    }
//    time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void operator+ (time& t1)
//    {
//
//        this->minutes += t1.minutes;
//        if (this->minutes >= 60)
//        {
//            this->minutes -= 60;
//            this->hours += 1;
//        }
//        this->hours += t1.hours;
//
//    }
//    void show()
//    {
//        cout << this->hours << " " << this->minutes;
//    }
//};
//
//
//int main() {
//    int h, m;
//    cin >> h >> m;
//
//    class time t1(h, m);
//    class time t2(2, 20);
//    t1 + t2;
//    t1.show();
//}


//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//    int x;
//    int y;
//
//};
//class Sub :public Base
//{
//    int z;
//public:
//    Sub(int x, int y, int z)
//    {
//        this->x = x;
//        this->y = y;
//        this->z = z;
//    }
//    void calculate()
//    {
//        cout << x * y * z;
//    }
//
//};
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    Sub sub(a, b, c);
//    sub.calculate();
//
//}


#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    int y;

    void calculate()
    {
        cout << this->x * this->y;
    }
};

class Sub :public Base
{
public:
    Sub(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void calculate()
    {
        if (this->y == 0)
        {
            cout << "Error";
            return;
        }
        cout << this->x / this->y;
    }

};
int main() {
    int a, b;
    cin >> a >> b;
    Sub sub(a, b);
    sub.calculate();
}