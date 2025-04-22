#include<iostream>
using namespace std;

class Human{


    public:
    string name;
    int height;
    int age;
    
};

class Student : protected Human{  //  public  bhi yaha protected rahega
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
    cout<<A.name;// ye print nahi hoga kyuki protected class ko hum main function mei access nahi kar skte
}