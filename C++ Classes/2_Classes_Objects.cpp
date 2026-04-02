/*
C++ Classes/Objects

Everything in C++ is associated with classes and objects, along with its attributes and methods. For Example:
in real life, a car is an object. The car has attributtes, such as weight and color, and methods, such as drive and brake.

Attribures and methods are basically variables and functions that belongs to the calss. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;

/*
Create a Class
    to create a class, use the class keyword
*/
class MyClass {             // Class Declaration and Name
    public:                 // Access Specifier
        int myNum;          // Attribute (int)
        string myString;    // Attribure (string)
};

// ln19: The class keyword is used to create a class called MyClass
// ln20: The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class
// ln21,22: Inside the classm there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
// ln23: class definition ends with a semicolon;

/*
Creating an Object
    An object is created from a class. We created a class named MyClass above, so now we can use this blueprint to create objects.
*/

int main() {
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some Text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    return 0;
}

// ln38: create an object by specifying the class name, followed by the object name
// ln40,41: to access the attributes of the class, use the dot on the object