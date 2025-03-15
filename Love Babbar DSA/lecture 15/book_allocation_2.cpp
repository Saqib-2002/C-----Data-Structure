// Book allocation problem 2 - codestudio - Allocate Books (moderate)
#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int m, int n, int mid) {
    int chapter_sum = 0;
    int days = 1;
    for (int i = 0; i < size; i++) {
        if (chapter_sum + arr[i] <= mid) {
            chapter_sum += arr[i];
        } else {
            days++;
            if (days > n || arr[i] > mid) {
                return false;
            }
            chapter_sum = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int size, int m, int n) {
    int s = 0, time_sum = 0;
    for (int i = 0; i < size; i++) {
        time_sum += arr[i];
    }
    int e = time_sum, mid = s + (e - s) / 2, ans = -1;

    while (s <= e) {
        if (isPossible(arr, size, m, n, mid)) {
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
    int arr[5] = {1, 2, 2, 3, 1};
    int m = 5, n = 3; // m = no_of_chapters, n = total_days

    cout << bookAllocation(arr, 5, m, n) << endl;
    return 0;
}