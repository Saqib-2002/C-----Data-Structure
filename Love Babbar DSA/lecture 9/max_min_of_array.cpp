#include<iostream>
using namespace std;

int maxNum(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minNum(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {114, 12, 8, 15, 3};
    cout << "Maximum number in array = " << maxNum(arr, 5) << endl;
    cout << "Minimum number in array = " << minNum(arr, 5) << endl;
    return 0;
}