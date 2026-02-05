#include <iostream>
using std::cout;
using std::endl;

int main() {
    int x = 1, y = 2, z = 3; // Multiple Variables with the same type
    cout << x << endl; // 1
    cout << y << endl; // 2
    cout << z << endl; // 3
    cout << x + y + z << endl; // 6

    int a, b, c;
    a = b = c = 10;
    cout << a << endl; // 10
    cout << b << endl; // 10
    cout << c << endl; // 10
    cout << a + b + c << endl; // 30

    return 0;
}