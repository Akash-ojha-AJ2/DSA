#include<iostream>
using namespace std;

class Human{


    protected:
    string name;
    int height;
    int age;
    
};

class Student : private Human{  //  public  bhi yaha private rahega
    //public
    public:
    int roll_number, fees;


    void fun(string n ,int a , int h){
        name = n;
        age = a;
        height = h;
    }
    void diaply(){
        cout<<"name : "<<name<<endl<<"age :"<<age<<endl<<"height :"<<height;
    }
};


int main(){
    Student A;
    A.fun("akash" ,21 , 6);
    A.diaply();
   
}