// Swap alternate elements of an array.
#include<iostream>
using namespace std;

void swapAlt(int arr[]) {
    int temp = 0, i = 0;
    
    while (i < 6) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i += 2;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    swapAlt(arr);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}