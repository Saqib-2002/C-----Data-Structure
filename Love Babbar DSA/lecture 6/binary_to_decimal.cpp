#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n = 1010, res = 0, i = 0;
    while(n!=0) {
        int bit = n % 10;  // int bit = n & 1;
        if (bit == 1)
            res = (pow(2, i)) + res;
        n = n / 10;
        // n = n << 1;
        i++;
    }
    cout << res;
    return 0;
}