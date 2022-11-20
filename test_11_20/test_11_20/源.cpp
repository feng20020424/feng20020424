#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int sl(int a)
//{
//    if (a > 2)
//    {
//        return sl(a - 1) + sl(a - 2);
//    }
//    return 1;
//}
//
//int main() {
//    int a;
//    cin >> a;
//    int b = 1;
//
//    cout << sl(a);
//    return 0;
//}

#include <iostream>
using namespace std;

class cft
{
    int length;
    int width;
    int height;

public:

    void setLength(int length) {
        this->length = length;
    }
    void setWidth(int width) {
        this->width = width;
    }
    void setHeight(int height) {
        this->height = height;
    }

    int getLength() {
        return this->length;
    }
    int getWidth() {
        return this->width;
    }
    int getHeight() {
        return this->height;
    }



    int getArea()
    {
        return  2 * (this->length * this->width + this->length * this->height + this->width * this->height);
    }

    int getVolume()
    {
        return (this->length * this->width * this->height);
    }
};


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cft c1;
    c1.setLength(a);


    cout << c1.getLength() << endl;

}