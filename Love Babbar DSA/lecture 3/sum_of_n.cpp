#include<iostream>
using namespace std;
int main() {
    int n, i = 1, sum = 0;
    cout << "Enter the n number ";
    cin >> n;
    int a = 1, l = n;
    // while (i <= n) {
    //     sum = sum + i;
    //     i++;
    // }

    // By using sum formula. n/2(a+l) where a is the first digit and l is the last.
    sum = n * (a + l)/2;
 
    cout << "Sum of " << n << " is " << sum << endl;
    return 0;
}