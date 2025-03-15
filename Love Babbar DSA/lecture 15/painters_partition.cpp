// Painter's Partition Problem - CodeStudio (moderate).
#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int k, int mid) {
    int painters = 1, time_taken = 0;
    for (int i = 0; i < size; i++) {
        if (time_taken + arr[i] <= mid) {
            time_taken += arr[i];
        } else {
            painters++;
            if (painters > k || arr[i] > mid) {
                return false;
            }
            time_taken = arr[i];
        }
    }
    return true;
}

int paintersPartition(int arr[], int size, int k) {
    int s = 0, sum;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    int e = sum, mid = s + (e-s)/2, ans = -1;

    while (s <=e) {
        if (isPossible(arr, size, k, mid)) {
            e = mid - 1;
            ans = mid;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[8] = {6, 5, 6, 10, 9, 2, 3 ,5 }, k = 2; // k = no_of_painters
    cout << paintersPartition(arr, 8, k) << endl;
    return 0;
}