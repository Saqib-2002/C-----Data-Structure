#include<iostream>
using namespace std;

int secLarge(int arr[], int size) {
    int large = -1, secLarge = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
        if (arr[i] > secLarge && arr[i] != large) {
            secLarge = arr[i];
        }
        else {
            return -1;
        }
    }
    return secLarge;
}

int main() {
    int arr[5] = {12, 13, 12, 12, 12};
    cout << "Second Largest Number = " << secLarge(arr, 5) << endl;
    return 0;
}