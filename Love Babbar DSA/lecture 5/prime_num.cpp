#include<iostream>
using namespace std;

int main() {

    int n = 23;
    bool isPrime = 1;

    for (int i = 2; i < n; i++) {
        if ( n%i == 0) {
            isPrime = 0;
            break;
        }
    }
    isPrime == 0 ? cout << "Not Prime" : cout << "Prime";
    return 0;
}