/* 231. Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.
*/
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 1024;
    int i = 0, test = 1;
    while (i < 31) {
        if(n == test) {
            cout << "power of 2";
            break;
        }
        i++;
        test = test * 2;
    }
    cout << "no";
    return 0;
}