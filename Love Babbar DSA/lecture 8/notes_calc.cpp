#include<iostream>
using namespace std;
int main() {
    int amount = 1350, rs100, rs50, rs20, rs1;
    switch(1) {
        case 1: 
            rs100 = amount/100;
            amount = amount - (rs100 * 100);
            cout << "total notes of 100 = " << rs100 << endl;
        case 2: 
            rs50 = amount/50;
            amount = amount - (rs50 * 50);
            cout << "total notes of 50 = " << rs50 << endl;
        case 3: 
            rs20 = amount/20;
            amount = amount - (rs20 * 20);
            cout << "total notes of 20 = " << rs20 << endl;
        case 4: 
            rs1 = amount/1;
            amount = amount - (rs1 * 1);
            cout << "total notes of 1 = " << rs1 << endl;
    }

    return 0;
}