#include <iostream>
using std::cout;

void clearDisplay() {
    system("cls");
}

//safer
void clearScreen() {
    // \033[2J clears the screen
    // \033[1;1H moves the cursor to the top-left corner
    std::cout << "\033[2J\033[1;1H";
}