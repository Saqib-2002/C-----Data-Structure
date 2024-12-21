#include<iostream>
using namespace std;

int AP(int num) {
    return 3 * num + 7;
}

int setBits(int num) {
    int count = 0;
    while(num!=0) {
        int bit = num & 1;
        if (bit == 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int fibonacci(int num) {
    int f = 0, s = 1, fib = 0, i = 2;
    while(i < num) {
        fib = f + s;
        f = s;
        s = fib;
        i++;
    }
    return fib;
}

int main() {
    // cout << AP(3);
    // int a = setBits(5);
    // int b = setBits(6);
    // cout << a + b;
    cout << fibonacci(5);
    return 0;
}