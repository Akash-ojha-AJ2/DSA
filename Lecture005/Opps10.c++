//Encapsulation
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

    void updateage(int age){
        if(age>0&&age<100){
            this->age = age;
        }else{
            cout<<"Inavlid iamge";
        }
    }

    void withdraw_balance(int amount){
       this->balance = balance-amount;
       total_balance = total_balance - amount;
    }

    void deposit_balance(int amount){
        this->balance = balance+amount;
        total_balance = total_balance + amount;
     }

    void disply(){
        cout<<"Name : "<<name<<endl<<"balance : "<<balance<<endl<<"Age : "<<age<<endl<<"total_balance : "<<total_balance<<endl<<endl;
    }
};

int Customer :: total_balance = 0;

int main(){
    Customer A1("akash" , 1000 , 21);
    Customer A2("jeetu" , 5000 , 50);
    A2.updateage(22);

    A2.disply();
    A2.deposit_balance(10000);
    A2.disply();

}