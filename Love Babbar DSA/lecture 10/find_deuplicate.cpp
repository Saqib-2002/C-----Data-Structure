/* Find duplicate number in an array of size N containing number b/w 1 and N-1 atleast once.
There'll be a single integer value that is present in the array twice. Find the duplicate integer value
present in the array. */

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans = ans ^ arr[i];
    for (int i = 1; i < size; i++)
        ans = ans ^ i;
    return ans;
}

int main() {
    int arr[6] = {5, 1, 2, 3, 4, 2};

    cout << findDuplicate(arr, 6);
    return 0;
}