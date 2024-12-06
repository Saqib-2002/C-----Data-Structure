#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout << "Enter integer ";
    cin >> n;
    while (i < n) {
        int space = n - i - 1;
        while(space) {
            cout << "-";
            space--;
        }
        int j = 0;
        while (j <= i) {
            cout << j+1;
            j++;
        }
        int k = i - 1 + 1;
        while (k > 0) {
            cout << k;
            k--;
        }
        int space2 = n - i - 1;
        while (space2) {
            cout << "-";
            space2--;
        }
        cout << endl;
        i++;
    }
    return 0;
}