#include<iostream>
using namespace std;

class Hero {
    public:
    int health;
};

int main() {
    Hero h1;
    // cout << "Size: " << sizeof(h1);
    cout << h1.health;
    return 0;
}