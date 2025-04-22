// frined function

#include <iostream>
using namespace std;

// Forward declaration of class
class Student {
private:
    int marks; // Private data member

public:
    Student(int m) { marks = m; } // Constructor

    // Friend function declaration
    friend void showMarks(Student s);
};

// Friend function definition
void showMarks(Student s) {
    cout << "Student marks: " << s.marks << endl; // Accessing private member
}

int main() {
    Student s1(95); // Creating object
    showMarks(s1);  // Calling friend function

    return 0;
}
