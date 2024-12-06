#include<iostream>
using namespace std;
int main() {
    int i = 0, n = 5;
    while (i < n) {
        int j = 0, step = n - i - 1;
        while (j <= step) {
            cout << j + 1;
            j++;
        }

        int star = i - 1 + 1;
        while (star) {
            cout << "*";
            star--;
        }

        int star2 = 0;
        while (star2 < i) {
            cout << "*";
            star2++;
        }

        int j2 = n - i - 1;
        while (j2 >= 0) {
            cout << j2 + 1;
            --j2;
        }

        cout << endl;
        i++;
    }
    return 0;
}