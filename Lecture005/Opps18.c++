//Multilevel inheritance
#include<iostream>
using namespace std;

class Person {
    protected :
    string name;

    public:

    void introduce(){
        cout<<"hello my name is :  "<<name<<endl;
    }
};

class Employee : public Person {
    protected:
    int salary;

    public:

    void monthly_salaray(){
        cout<<"My monthly salary is : "<<salary<<endl;
    }
};

class Manager : public Employee{
    public:
    string department;
    
    Manager(string name, int salary , string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout<<"name : "<<name<<endl<<"salary : "<<salary<<endl<<"department : "<<department<<endl;
    }
};

int main(){
    Manager A("akash" , 200 , "SDE");
    A.introduce();
    A.monthly_salaray();
    A.work();
}