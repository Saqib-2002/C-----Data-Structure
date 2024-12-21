#include<iostream>
using namespace std;

bool isEven (int num) {
    if(num %2== 0)
        return true;
    return false;
}

int main() {
    int n = 3;
    int res = isEven(n);
    cout << res;
    return 0;
}