#include<iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int res = (fact(n)) / (fact(r) * fact(n - r));
    return res;
}

int main() {
    cout << nCr(13, 0);
    return 0;
}