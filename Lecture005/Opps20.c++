//Hierarchical Inheritance


#include <bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name;
    int age;

    public:
    Human(){

    };
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

class Teacher : public Human {
    int salary;

    public:
    Teacher(int salary , string name,int age){
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"name : "<<name<<endl<<"salary : "<<salary<<endl<<"age : "<<age<<endl;
    }

};

int main() {
    Student A("Akash", 21, 1001, 1000);
    A.display(); 
    Teacher B(100,"jeetu",21); //jab maine teacher ke constructor ko call kiya to vo sabse pehele parent yani Human class ke default constructor ko call karega par Human class ke default constructor nahi tha isiliye humne default constructor ko bnaya line no. 13
    B.display();

    return 0;
}


