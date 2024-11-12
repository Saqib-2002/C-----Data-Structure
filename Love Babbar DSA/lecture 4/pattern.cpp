#include<iostream>
using namespace std;
int main() {
    int n, i = 0, j, count = 1;
    cout << "Enter n ";
    cin >> n;
    // char ch = 'A';
    // char ch = 'A';
    while (i < n) {
        j = 0;
        // int val = i;
        char ch = 65;
        // while (j < n) {
            while(j <= i) {
            // char ch = 'A' + (i+1) - 1;
            // cout << j+1 << " ";
            // cout << n - j + 1 << " ";
            // cout << count << " ";
            // count++;
            // cout <<"* ";
            // cout << i + 1 << " ";
            // cout << val + 1 << " ";
            // val++;
            // cout << i + j + 1 << " ";
            // cout << i - j + 1 << " ";
            // cout << ch << " ";
            // cout << ch << " ";
            // ch++;
            // char res = ch + i + j;
            // cout << res << " ";
            // cout << ch << " ";
            // char res = ch + i + j;
            // cout << res << " ";
            char res = ch + n - i + j - 1;
            cout << res << " ";
            j++;
            // ch++;
        }
        i++;
        // ch++;
        cout << endl;
    }  
    return 0;
}