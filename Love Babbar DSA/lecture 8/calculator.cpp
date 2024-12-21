#include<iostream>
using namespace std;
int main() {
    int num1, num2, op;
    float res;
    
    while(true) {
        cout << "Simple Calculator" << endl;
        cout << "1. +\n2. -\n3. *\n4. /\n5. exit" << endl;
        cin >> op;

        if(op == 5)
            exit(0);

        cout << "enter two integers" << endl;
        cin >> num1 >> num2;
        switch(op) {
            case 1:
                res = num1 + num2;
                cout << num1 << " + " << num2 << " = " << res << endl;
                break;
            case 2:
                res = num1 - num2;
                cout << num1 << " - " << num2 << " = " << res << endl;
                break;
            case 3:
                res = num1 * num2;
                cout << num1 << " * " << num2 << " = " << res << endl;
                break;
            case 4:
                res = num1 / num2;
                cout << num1 << " / " << num2 << " = " << res << endl;
                break;
            default:
                cout << "An Error Occured.";
        }
    }
    return 0;
}