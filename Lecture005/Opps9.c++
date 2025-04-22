// Static data member function
// jab hume ek data membet ko sabhi object mei share mei krana hota hai to static data member ka use karte sabhi object mei share karneke liye 
// iska initilisation main function ke pehele or class ke bahar hota hai
#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance;
    int age;
    static int total_balance; // ye sare object ka total balance dhikhayega

    public:
    Customer(string s , int b , int c){
        this->name = s;
        this->balance = b;
        this->age = c;
        total_balance = total_balance+balance;
    }
    void disply(){
        cout<<"Name : "<<name<<endl<<"balance : "<<balance<<endl<<"Age : "<<age<<endl<<"total_balance : "<<total_balance<<endl<<endl;
    }
};

int Customer :: total_balance = 0;

int main(){
    Customer A1("akash" , 1000 , 21);
    A1.disply();
    Customer A2("jeetu" , 5000 , 50);
    A2.disply();

}