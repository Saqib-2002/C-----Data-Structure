// Intersection of two array. Given that array is sorted in non-descending order and if there is no element that intersect than return -1.
#include<iostream>
using namespace std;

void intersectionArr(int arr1[], int arr2[], int size1,int size2) {
    int arr[4], i = 0, j = 0;

    // two pointer approach.
    while (i < size1 && j < size2) {
        
            if (arr1[i] == arr2[j]) {
                arr[i] = arr1[i];
                cout << arr[i] << " ";
                i++;
                j++;
            } else if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            }
        
    }
}

int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4}, arr2[4] = {2, 2, 3, 3};

    intersectionArr(arr1, arr2, 6, 4);

    return 0;
}