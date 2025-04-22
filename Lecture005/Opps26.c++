// Exception :- 
// An exception is an unexpected event or error that occurs during the execution of a program. It disrupts the normal flow of the program and requires special handling to prevent it from crashing.

// In C++, exceptions are used to handle errors gracefully so that the program can continue running instead of abruptly terminating.


// Why Do We Need Exception Handling?
// Consider a situation where your program performs division, and the denominator is zero. If you don’t handle this situation, the program will crash. Similarly, when you try to allocate memory dynamically and the allocation fails, the program should handle the error properly.

// Without exception handling:

// The program may terminate unexpectedly.

// The user may not understand the cause of the error.

// Debugging becomes difficult.

// With exception handling, the program can:

// Detect errors at runtime.

// Take appropriate action to recover from the error.

// Display meaningful messages to the user.

// Continue execution instead of crashing.

// Exception Handling Mechanism in C++
// C++ provides a built-in mechanism for handling exceptions using three keywords:

// try – Defines a block of code that might throw an exception.

// throw – Used to throw an exception when an error occurs.

// catch – Handles the exception and defines what action to take.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Division by zero error!"; // Throwing an exception
        cout << "Result: " << (a / b) << endl;
    } 
    catch (const char* msg) { // Catching the exception
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
