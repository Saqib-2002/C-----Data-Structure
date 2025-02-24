// Find pivot index in a rotational array using binary search. O(logn)
#include<iostream>
using namespace std;

int pivotNum(int arr[], int n) {
    int s = 0, e = n - 1, mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Pivot index in an arr: " << pivotNum(arr, 7) << endl;
    return 0;
}