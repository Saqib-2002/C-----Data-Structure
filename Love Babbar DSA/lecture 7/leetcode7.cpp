// 7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
#include<iostream>
using namespace std;
int main() {
    int n = 12343, rem, res = 0;
    while (n != 0) {
        rem = n % 10;
        if (res > INT_MAX/10 || res < INT_MIN/10)
            cout << "Beyond the Integer Limit.";
        res = res * 10 + rem;
        n /= 10;
    }
    cout << res;
    return 0;
}
