#include <iostream>
using std::cout;
using std::cin;

int validateInteger();
int validateInteger2();

int main () {
    while (true) {
        cout << "Enter a Number: ";
        cout << validateInteger2();
    }

    return 0;
}

int validateInteger() {
    int number;

    while (1) { // Loop to continue running while input is still invalid
        cin >> number; // Attemp to read integer from user input
        if (cin.fail()) { // Check if the operation failed
            cout << "Please enter valid number!"; // Notify user if input is invalid
    
            cin.clear(); // Clear the error flag so cin can be used again
            cin.ignore(10000, '\n'); // Remove invalid characters from the input buffer

            // Loop continues, prompting user again
        } else {
            break; // Exit Loop when integer is valid
        }
    }
    return number; // return the validated integer
}

int validateInteger2() {
    int number;

    while (!(cin >> number)) { // cin.fail() returns true, so negation '!' returns false, starting the loop
        cout << "Please enter valid number!"; // Tells user that input is invalid
        cin.clear(); // Clear error flag so cin can be used again
        cin.ignore(10000, '\n'); // Remove invalid characters from the input buffer

        // Loops again while the condition is true
    }

    return number; // returns the value once the condition is false
}