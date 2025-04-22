//single inheritance
// pehele parent class ka contructor call hoga uske baad child class ka contructor call hoga

#include <bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    void work(){
        cout<<" i am working \n";
    }

    Human(){
        cout<<"i am Human"<<endl;
    }
};

class Student : public Human{
    int roll_number , fees;

    public:

   
    Student(string n , int a , int roll , int fees){
        this->name = n;
        this->age = a;
        this->roll_number = roll;
        this->fees = fees;
    }

    void display(){
        cout<<"name : "<<name<<endl<<"age : "<<age<<endl<<"roll_number :"<<roll_number<<endl<<"fees : "<< fees<<endl;
    }
};

int main(){
    Student A("akash" , 21 , 1001 , 1000);
    A.display();
    A.work();
}