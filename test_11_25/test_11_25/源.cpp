#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//class rectangle
//{
//protected:
//    int x;
//    int y;
//public:
//    rectangle(int x, int y)
//    {
//        this->x = x;
//        this->y = y;
//    }
//    void getval()
//    {
//        cout << x * y << endl;
//    }
//};
//class cuboid :public rectangle
//{
//    int z;
//public:
//    cuboid(int x, int y, int z) :rectangle(x, y)
//    {
//        this->z = z;
//    }
//    void getval()
//    {
//        cout << x * y * z;
//    }
//};
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//    rectangle re(a, b);
//    re.getval();
//    cuboid cb(a, b, c);
//    cb.getval();
//}
//#include <iostream>
//using namespace std;
//
//class BaseCalculator {
//public:
//    int m_A;
//    int m_B;
//    virtual int getResult();
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator {
//private:
//    int getResult() {
//        return m_A + m_B;
//    }
//
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator {
//    int getResult() {
//        return m_A - m_B;
//    }
//
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}


//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    vector<int> v1;
//    int a;
//    for (int n = 0; n < 5; n++)
//    {
//        cin >> a;
//        v1.push_back(a);
//    }
//    for (vector<int>::iterator i1 = v1.begin(); i1 != v1.end(); i1++)
//    {
//        cout << *i1 << " ";
//    }
//    cout << endl;
//    for (vector<int>::reverse_iterator i2 = v1.rbegin(); i2 != v1.rend(); i2++)
//    {
//        cout << *i2 << " ";
//    }
//}


//#include <iostream>
//#include <deque>
//using namespace std;
//
//class Guest {
//public:
//    string name;
//    bool vip;
//
//    Guest(string name, bool vip) {
//        this->name = name;
//        this->vip = vip;
//    }
//};
//void pushFrontOrBack(Guest g, deque<Guest> dq) {
//    if (g.vip) {
//        dq.push_front(g);
//    }
//    else {
//        dq.push_back(g);
//    }
//}
//
//int main() {
//
//    Guest guest1("张三", false);
//    Guest guest2("李四", false);
//    Guest vipGuest("王五", true);
//    deque<Guest> dq;
//
//    // write your code here......
//    pushFrontOrBack(guest1, dq);
//    pushFrontOrBack(guest2, dq);
//    pushFrontOrBack(vipGuest, dq);
//
//    dq.push_back(guest1);
//    dq.push_back(guest2);
//    dq.push_front(vipGuest);
//
//    for (Guest g : dq) {
//        cout << g.name << " ";
//    }
//
//    return 0;
//}



#include <iostream>
#include<set>
#include<string>

using namespace std;

int main() {
    string s1;
    cin >> s1;
    set<char> set1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        set1.insert(s1[i]);
    }
    for (set<char>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it;
    }


}