// leetcode - 33. Search in rotated sorted array.
#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while (s < e) {
        if (arr[mid] > arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int n, int s, int e, int target) {
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n = 7;
    int arr[n] = {4, 5, 6, 7, 0, 1, 2};
    int target = 3;
    int p = findPivot(arr, n);
    if (target >= arr[p] && target <= arr[n-1])
        cout << binarySearch(arr, n, p, n - 1, target);
    else
        cout << binarySearch(arr, n, 0, p - 1, target);
    return 0;
}