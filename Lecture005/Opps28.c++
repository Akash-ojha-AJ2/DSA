// 2. User-Defined Exceptions
// We can create custom exception classes by inheriting from std::exception.

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Custom Exception Occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } 
    catch (const MyException& e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}


//Summary
// Exception handling allows programs to deal with runtime errors smoothly.

// C++ provides try, throw, and catch for handling exceptions.

// Standard exceptions (std::exception, std::runtime_error) can be used for common error scenarios.

// User-defined exceptions allow customization.

// Multiple catch blocks can handle different exception types.

// Exceptions can be thrown in functions, constructors, and destructors.

// By using exception handling properly, programs can become more robust, error-free, and easier to debug.