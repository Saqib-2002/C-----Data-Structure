// 1281 - Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;

int main() {
    int n = 4421, rem, pro = 1, sum = 0, res;

    while (n > 0) {
        rem = n % 10;
        pro = pro * rem;
        sum = sum + rem;
        n = n / 10;
    }
    res = pro - sum;
    cout << res;
    return 0;
}