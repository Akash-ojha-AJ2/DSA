//single inheritance
// pehele parent class ka contructor call hoga uske baad child class ka contructor call hoga


#include <bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name;
    int age;

public:
    void work() {
        cout << "I am working \n";
    }

    Human(string n, int a) {
        this->name = n;
        this->age = a;
    }

    void display(){
        cout<<"name : "<<name<<endl<<"age : "<<age<<endl;
    }
};

class Student : public Human {
    int roll_number, fees;

public:
    // Correcting the constructor
    Student(string n, int a, int roll, int fees) : Human(n, a) {
        this->roll_number = roll;
        this->fees = fees;
    }

    void display() {
        cout 
             << "Roll Number: " << roll_number << endl
             << "Fees: " << fees << endl;
    }
};

int main() {
    Student A("Akash", 21, 1001, 1000);
    A.display(); // display naam ke do function  hai ek Human class mei hai or ek student class mei hai humne jo object bnaya hai vo student class ka hai isiliye sabse pehele pehele student class ka display function call hoga lekin agar diplay function student class mei nahi hoga to Human class ka display function call hoga
    A.work();

    return 0;
}
