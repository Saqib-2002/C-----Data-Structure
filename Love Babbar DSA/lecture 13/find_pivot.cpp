// Leetcode - 724. Find Pivot Index
#include<iostream>
using namespace std;

int pivotNum(int arr[], int n) {
    int t_sum = 0;
    for (int i = 0; i < n; i++) {
        t_sum += arr[i];
    }
    
    int l_sum = 0;
    for (int i = 0; i < n; i++) {
        if (l_sum == (t_sum - l_sum - arr[i])) {
            return i;
        }
        l_sum += arr[i];
    }
    return -1;
}

int main()
{
    int arr[3] = {2, 1, -1};
    cout << "Pivot index in an arr: " << pivotNum(arr, 3) << endl;
    return 0;
}