#include <iostream>
using namespace std;

int main() {
    float a = 100;
    float* b = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout <<*b << endl;
    cout << &b << endl;
    return 0;
}
