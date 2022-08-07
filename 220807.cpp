#include<iostream>
using namespace std;

inline void func1(int x) {
    cout << x * x << endl;
}
int main() {
    int a;
    cin >> a;
    func1(a);
    return 0;
}