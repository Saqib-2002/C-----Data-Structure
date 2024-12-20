#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n = -6, res = 0, i = 0;
    int temp = ~n;
    cout << temp;
    while(temp != 0) {
        int bit = n & 1;
        res = (bit * pow(10, i)) + res;
        temp = temp >> 1;
        i++;
    }

    cout << res;
    return 0;
}