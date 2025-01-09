#include<iostream>
using namespace std;

// my approach - bad
/*void reverseArr(int arr[], int size) {
    int copyarr[size], temp = size;
    for (int i = 0; i < size; i++) {
        copyarr[i] = arr[i];
    }

        for (int i = 0; i < size; i++) {
            arr[i] = copyarr[temp - i - 1];
        }
}*/

void revArr(int arr[], int size) {
    int s = 0, e = size - 1;
    int temp;

    for (int i = 0; s < e; i++) {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main() {
    int arr[5] = {12, 4, 32, 23, 14};
    revArr(arr, 5);
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
        return 0;
}