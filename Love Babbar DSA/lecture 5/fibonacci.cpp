#include<iostream>
using namespace std;

int main() {
    int f = 0, s = 1, fib = 0, n =10;
    cout << f << " " << s << " ";
    for (int i = 1; i <= n; i++) {
        fib = f + s;
        f = s;
        s = fib;
        cout << fib << " ";
    }
        return 0;
}