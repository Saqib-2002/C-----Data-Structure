#include<iostream>
using namespace std;
int main() {
    int n = 1;
    while (true) {
        switch(n) {
            case 1:
                cout << "Case 1" << endl;
                
            case 2:
                cout << "Case 2" << endl;
                continue;
            case 3:
                cout << "Case 2" << endl;
                break;
            default:
                cout << "Default" << endl;
        }
        exit(0);
    }
    return 0;
}