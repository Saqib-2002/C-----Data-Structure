// find unique/distinct element in an array.
#include<iostream>
using namespace std;

int uniqueElement(int arr[]) {
    int ans = 0;
    for(int i = 0; i < 8; i++) {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int arr[8] = {2, 3, 5, 4, 5, 3, 4};
    cout << uniqueElement(arr);
    return 0;
}