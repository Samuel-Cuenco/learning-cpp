#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(void) {
    // Variable Declaration
    string food = "Pizza";
    string* ptr = &food; // A pointer variable named ptr, it stores the address of food
    
    cout << food << endl;  // Value of food
    cout << &food << endl; // Address of food
    cout << ptr << endl; // A pointer to the address of food variable

    return 0;
}