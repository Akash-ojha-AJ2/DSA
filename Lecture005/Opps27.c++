// Types of Exceptions in C++
// C++ allows different types of exceptions, including:

// 1. Standard Exceptions
// C++ provides built-in standard exception classes in the <exception> header.

// Some commonly used standard exceptions are:

// Exception Class	            Description
// std::exception	            Base class for all exceptions
// std::bad_alloc	            Thrown when dynamic memory allocation fails
// std::out_of_range	        Used with arrays, vectors, etc., when out-of-range access is attempted
// std::runtime_error	        Represents runtime errors

#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        throw runtime_error("Runtime Error Occurred!");
    } 
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
