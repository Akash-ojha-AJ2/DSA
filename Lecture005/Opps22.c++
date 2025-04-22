//multipath inheritance
#include<iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<"my name is  : "<<name<<endl;
    }

};

class Engineer : public virtual Human {
    public: 
    string specilization;



    void work(){
        cout<<" I have specialization in "<<specilization<<endl;

    }

};

class Youtuber : public virtual Human {
    public: 
    int subscribers;


    void contentcreator(){
        cout<<" I have subscriber base of "<<subscribers<<endl;
    }
};

class CodeTeacher : public Engineer , public Youtuber{

    public :
    int salary;


    CodeTeacher(string name , string specilization , int subscriber , int salary){
        //this->name = name; // yaha ye name ko leke confuse ho jayega kyuki use pta nahi ki kis name ki baat kar rahe ho aap human ke name ki baat kar rahe ho ya youtuber ke name ki baat kar rahe ho ya aap engineer ke name ki baat kar rahe ho kyuki maine human class ko youtuber or engineer dono mei inherit kiya hua hai. is confusion ko dur karne ke liye virtual ka concept aata hai hum chahate hai human ko har jagah unique mana jaye isiliye hum human class ko jab inherit krte hai to virtual kas use krte hai
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscriber;
        this->salary = salary;
    }

    void display(){
        cout<<"name : "<<name<<endl<<"specilization : "<<specilization<<endl<<"subscribe : "<<subscribers<<endl;
    }

};

int main(){
    CodeTeacher Code("rohit" , "CSE" , 7000 , 150000); 
    Code.display();
   
}



