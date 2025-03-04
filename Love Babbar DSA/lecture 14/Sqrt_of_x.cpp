//Leetcode - 69. Sqrt(x)
#include<iostream>
using namespace std;

class SquareRoot {
    public:
        int sqrt(int n) {
            long int s = 0, e = n, mid = s + (e - s) / 2, ans = -1;
            while (s <= e) {
                long int square = mid *mid;
                if (square == n) {
                    return mid;
                } else if (square < n) {
                    s = mid + 1;
                    ans = mid;
                } else if (square > n) {
                    e = mid - 1;
                }
                mid = s + (e - s) / 2;
            }
            return ans;
        }
};

int main() {
    SquareRoot sq;
    int number;
    cout << "Enter the number to find the square root: ";
    cin >> number;
    cout << "Square root of " << number << " is: " << sq.sqrt(number);

    return 0;
}