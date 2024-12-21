#include<iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if(num %i== 0) {
            return false;
            break;
        }
    }
    return true;
}

int main() {

    cout << isPrime(111) << endl;
    return 0;
}