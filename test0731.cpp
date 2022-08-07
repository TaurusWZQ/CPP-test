#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<ext/rb_tree>
using namespace std;

int main() {
    cout << sizeof(vector<string>) << endl;
    cout << sizeof(deque<int>) << endl;
    cout << sizeof(deque<int>::iterator) << endl;
    cout << sizeof(queue<int>) << endl;
    cout << sizeof(__gnu_cxx::rb_tree<int, int, _Identity<int>, less<int>>) << endl;
    return 0;
}