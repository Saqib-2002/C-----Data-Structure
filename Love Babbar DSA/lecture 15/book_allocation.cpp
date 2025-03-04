// codeStudio - Book Allocation

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1, pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            // cout << "studentCount: " << studentCount << endl;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
        }
    }
    return true;
}
int bookAllocation(int arr[], int n, int m) {
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum, mid = s + (e - s) / 2, ans = -1;

    while (s <= e) {
        // cout << "isPossible: " << isPossible(arr, n, m, mid) << endl;
        if(isPossible(arr, n, m, mid)) {
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
    int arr[4] = {10, 20, 30, 40}; // size_of_arr = n
    int m = 2; // m = no_of_students.
    cout << bookAllocation(arr, 4, m) << endl;
    return 0;
}