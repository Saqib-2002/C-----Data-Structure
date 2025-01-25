// Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int s = 0, e = n - 1, mid = (s + e) / 2;

    while (s <= e) {
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int evenArr[6] = {2, 4, 6, 8, 12, 18};
    int oddArr[5] = {3, 5, 9, 13, 27};

    cout << binarySearch(evenArr, 6, 18) << endl;
    cout << binarySearch(oddArr, 5, 9) << endl;
    return 0;
}