// Find the total number of occurence of x in a sorted array such that arr = [1, 2, 3, 3, 3, 3, 5] and x = 5 than no. of occurence will be 4.
#include<iostream>
using namespace std;

// Linear Search - T.C -> O(n).
/*int findOccurence(int arr[], int n, int x) {
    int i = 0, count = 0;
    while (i < n) {
        if (arr[i] == x)
            count++;
        i++;
    }
    return count;
}*/

// Binary Search - T.C -> O(logn)
int firstEl(int arr[], int n, int x) {
    int s = 0, e = n - 1, fEl = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            fEl = mid;
            e = mid - 1;
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return fEl;
}
int lastEl(int arr[], int n, int x) {
    int s = 0, e = n - 1, lEl = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            lEl = mid;
            s = mid + 1;
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return lEl;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 4, 5, 5};
    int f = firstEl(arr, 7, 2);
    int l = lastEl(arr, 7, 2);
    int res = -1;
    if ( f == -1 && l == -1) {
        cout << res;
    } else {
        res = (l - f) + 1;
        cout << "Total number of occurence is " << res;
    }
    return 0;
}