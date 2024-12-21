#include<iostream>
using namespace std;
int main() {
    int a = 12, b = 2, res = 1, i = 1;
    while (i <= b) {
        res = res * a;
        i++;
    }
    cout << res;
    return 0;
}