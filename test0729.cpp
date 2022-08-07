#include<iostream>
using namespace std;
class MyComplex {
public:
    MyComplex() {
        cout << "defaultctor" << endl;
    }
    MyComplex(double a, double b) {
        cout << "ctor" << endl;
        x = a;
        y = b;
    }
    ~MyComplex() {
        cout << "dtor" << endl;
    }
    MyComplex(const MyComplex& other) {
        this->x = other.x;
        this->y = other.y;
        cout << "copyCtor" << endl;
    }
private:
    double x;
    double y;
};
int main() {
    MyComplex* p = new MyComplex(1.0, 2.0);
    delete p;
    p = nullptr;
    return 0;
}