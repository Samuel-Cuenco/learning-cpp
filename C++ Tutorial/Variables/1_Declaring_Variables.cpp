#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main() {
    // Syntax
    int variable_name = 1;
    cout << variable_name << endl;

    // Change Value of Variable
    variable_name = 2;
    cout << variable_name << endl;

    // Other Data Types
    int numbers = 1;
    float floating_point = 1.11;
    double floating_point_2 = 1.11;
    char character = 'a';
    string string_of_characters = "Words";
    bool true_or_false = true;

    cout << numbers << endl; // 1
    cout << floating_point << endl; // 1.11
    cout << floating_point_2 << endl; // 1.11
    cout << character << endl; // a
    cout << string_of_characters << endl; // Words
    cout << true_or_false << endl; // 1 (true)

    // Operations on Variables
    int num1 = 2;
    int num2 = 2;

    cout << num1 + num2 << endl; // 4
    cout << num1 - num2 << endl; // 0
    cout << num1 * num2 << endl; // 4
    cout << num1 / num2 << endl; // 1

    return 0;
}