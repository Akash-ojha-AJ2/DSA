// define class and object
#include<iostream>
using namespace std;

class Student{
    public:  //by default ye private hota hai means agar hum public nahi likhenge to ye private rehta hai
    string name;
    int age;
    int roll_number;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Akash";
    S1.age = 21;
    S1.grade = "A";
    S1.roll_number = 221007;

    cout<<"Student name : "<<S1.name<<endl<<"Student age : "<<S1.age<<endl<<"Student grade : "<<S1.grade<<endl<<"Student roll-no. : "<<S1.roll_number<<endl;

    Student S2;
    S2.name = "Rohit";
    S2.age = 22;
    S2.grade = "B";
    S2.roll_number = 221008;

    cout<<"\n"<<"Student name : "<<S2.name<<endl<<"Student age : "<<S2.age<<endl<<"Student grade : "<<S2.grade<<endl<<"Student roll-no. : "<<S2.roll_number<<endl;
}