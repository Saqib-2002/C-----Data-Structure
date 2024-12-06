#include<iostream>
using namespace std;
int main() {
    /*int a, b = 1;
    a = 10;
    if (++a)
        cout << b;
    else
        cout << ++b;*/

    /*int a = 1, b = 2;
    if (a-- > 0 && ++b > 2) {
        cout << "Stage 1 - Inside if";
    }
    else {
        cout << "Stage 3 - Inside else";
    }
    cout << a << " " << b;*/

    /*int n = 3;
    cout << (25 * (++n));*/

    int a = 1, b = a++, c = ++a;
    cout << b << c;
    return 0;
}