// 1009. Complement of Base 10 Integer
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n = 0, mask = 0;
    int temp = n;

    if (n == 0)
        return 1;

    while ( temp != 0) {
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }
    // cout << mask;
    int res = (~n) & mask;
    cout << res;
    return 0;
}