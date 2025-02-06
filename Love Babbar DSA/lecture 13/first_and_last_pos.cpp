//  Find First and Last Position of Element in Sorted Array

#include<iostream>
using namespace std;

int firstEl(int arr[], int x, int n) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastEl(int arr[], int x, int n) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 1, 1, 1, 1};

    cout << firstEl(arr, 1, 5) << " ";
    cout << lastEl(arr, 1, 5);
    return 0;
}