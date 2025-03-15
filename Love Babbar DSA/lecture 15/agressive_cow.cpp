// CodeStudio - moderate - Aggressive Cows
// find the largest minimun distance possible between these two cows.

#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int k, int mid) {
    int cowsCount = 1, lastPos = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] - lastPos >= mid) {
            cowsCount++;
            if (cowsCount == k) {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCow(int arr[], int size, int k) {
    int s = 0, e = 5;
    int mid = s + (e - s) / 2, ans = -1;
    while (s <= e) {
        if (isPossible(arr, size, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] ={ 1, 2, 3, 4, 6 };
    int k = 2;
    cout << aggressiveCow(arr, 5, k);
    return 0;
}