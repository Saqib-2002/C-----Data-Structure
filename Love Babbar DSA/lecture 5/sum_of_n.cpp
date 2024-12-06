#include<iostream>
using namespace std;

int main() {
    int n = 100, sum = 0;
    for (int i = 0; i < n; i++)
        sum += i+1;
    cout << sum;
    return 0;
}