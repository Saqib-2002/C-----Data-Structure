#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int el) {
    int i = 0, pos = -1;
    while(i < size) {
        if (arr[i] == el) {
            pos = i;
            return pos;
            break;
        }
        i++;
    }
    return -1;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, el;
    cout << "Enter the element to search in an array ";
    cin >> el;
    cout << el << " found at postion " << linearSearch(arr, 5, el) << endl;
    return 0;
}