#include<iostream>
using namespace std;

int c_to_f(float c) {
    float f = 0;
    f = (c * 9 / 5) + 32;
    return f;
}

int f_to_c(float f) {
    float c = 0;
    c = (f - 32) * 5 / 9;
    return c;
}

int main() {
    float res, c, f;
    cout << "enter temp in f ";
    cin >> f;
    // res = c_to_f(c);
    res = f_to_c(f);
    cout << "temp in c is " << res;
    return 0;
}
