#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout << "Enter n ";
    cin >> n;

    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << i+1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}