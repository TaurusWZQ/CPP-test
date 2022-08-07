#include<iostream>
using namespace std;
int fun(int a) {
    return a*a;
}
int main() {
    int a;
    cin >> a;
    cout << fun(a) << endl;
    return 0;
}