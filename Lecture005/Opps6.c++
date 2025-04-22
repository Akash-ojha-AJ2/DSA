//copy constructor
#include<iostream>
using namespace std;


class Customer{
    public:
    string name;
    int account_number;
    int balance;

    Customer(){ 
        name = "Rohit";
        account_number = 102;
        balance = 2;
    }

    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

   

    void display(){
        
        cout<<"name : "<<name<<endl<<"account number : "<<account_number<<endl<<"balance : "<<balance<<endl<<endl;;

    }
};


int main(){

    Customer A1;

    //first method
    Customer A2(A1);


    // second method assignment operator
    Customer A3;

    A3 = A2;
   
    A1.display();
    A2.display();
    A3.display();
    
   
    

}