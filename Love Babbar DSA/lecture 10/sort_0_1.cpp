// Sort 0 1 in an array.
#include<iostream>
using namespace std;

void sort01(int arr[], int size) {
    int i = 0, j = size - 1;
    while(i < j) {
        while (arr[i] == 0 && i < j)
            i++;
        while (arr[j] == 1 && i < j)
            j--;
        
        if (arr[i] == 1 && arr[j] == 0 && i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sort01(arr, 8);

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}