#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include<string>
//using namespace std;
//class Person
//{
//    string* name;
//    int age;
//public:
//
//    Person(string* name, int Age)
//    {
//
//        this->name = new string(*name);
//        this->age = Age;
//    }
//
//    Person(const Person& p)
//    {
//        this->name = p.name;
//        name = new string(*p.name);
//        this->age = p.age;
//
//    }
//    void showPerson()
//    {
//        cout << *name << " " << age << endl;
//    }
//    ~Person()
//    {
//        if (name != NULL)
//        {
//            delete name;
//            name = NULL;
//        }
//    }
//
//
//
//
//
//};
//
//int main() {
//
//    string name;
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(&name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//}

//
//#include <iostream>
//#include<string>
//using namespace std;
//class Person
//{
//    string* name;
//    int age;
//public:
//
//    Person(string *name, int Age)
//    {
//
//        this->name = new string(*name);
//        this->age = Age;
//    }
//
//    Person(const Person& p)
//    {
//        this->name = p.name;
//        name = new string(*p.name);
//        this->age = p.age;
//
//    }
//    void showPerson()
//    {
//        cout << *name << " " << age << endl;
//    }
//    ~Person()
//    {
//        if (name != NULL)
//        {
//            delete name;
//            name = NULL;
//        }
//    }
//
//};
//
//int main() {
//
//    string name;
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(&name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//}

//#include <iostream>
//using namespace std;
//class Array
//{
//    int n;
//    int* arr;
//public:
//    Array(int N, int* Arr)
//    {
//        this->n = N;
//        this->arr = Arr;
//    }
//
//
//    Array(Array& p1)
//    {
//        this->n = p1.n;
//        this->arr = p1.arr;
//    }
//    void show() {
//        for (int j = 0; j < n; j++)
//        {
//            cout << arr[j] << " ";
//        }
//    }
//
//};
//
//int main() {
//
//    int n;
//    cin >> n;
//    int* pmc = new int[n];
//    for (int i = 0; i < n; i++)
//        cin >> pmc[i];
//    Array a(n, pmc);
//    Array b(a);
//    b.show();
//
//}

#include <iostream>
using namespace std;

class Person {

    friend void showAge(Person&);

public:
    Person(int age) {
        this->age = age;
    }

private:
    int age;
};

void showAge(Person& p) {
    cout << p.age << endl;
}

int main() {

    Person p(10);
    showAge(p);

    return 0;
}