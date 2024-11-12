#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout << "Enter integer" << endl;
    cin >> n;

    // pattern 1
    /*while(i < n) {
        int space = n - i - 1;
        while(space) {
            cout << " ";
            space--;
        }
        int j = 0;
        while (j <= i) {
            cout << i+1;
            j++;
        }
        cout << endl;
        i++;
    }*/

    // pattern 2
    /*while (i < n) {
        int j = 0, col = n - i - 1;
        while (j <= col) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }*/

    // pattern 3
    /*while (i < n) {
        int j = 0;
        while (j < i) {
            cout << " ";
            j++;
        }
        int k = j;
        while (k < n) {
            cout << k+1;
            k++;
        }
        cout << endl;
        i++;
    }*/

    // pattern 4
    int count = 1;
    while (i < n) {
        int space = n - i - 1;
        while (space) {
            cout << "*";
            space--;
        }
        int j = 0;
        while (j <= i) {
            cout << count;
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}