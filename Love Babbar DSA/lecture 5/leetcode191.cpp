// 191. Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
#include<iostream>
using namespace std;

int main() {
    int n = 2147483645, count = 0;
    while (n!=0) {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    cout << count;
    return 0;
}