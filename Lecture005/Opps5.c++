//Constructor
//it is a special function that is invoked automatically at the time of object 
//Name of the constructor should be same as class name
//it doesn't have any return type
//it is used to initialize the value
#include<iostream>
using namespace std;


class Customer{
    public:
    string name;
    int account_number;
    int balance;
    int *roi;

    // default constructor
    Customer(){ 
        name = "Rohit";
        account_number = 102;
        balance = 2;
        roi = new int[100]; // agar advance mei pehele se memory/serouce chahiye jisse agar hume ange jarurat pade to hum uska use kar ske to hum pehele hi initilize kar skte hai
    }

    // parameterize constructor
    // Customer(string n , int acc , int bal){ 
    //     name = n;
    //     account_number = acc;
    //     balance = bal;
    // }

    //Constructor overloading 
    // jab bahut sare constructor hote hai pr uske parameter alag alag hote hai to use contructor overloading kehete hai
    Customer(string name , int account_number ){ 
        this->name = name;
        this->account_number = account_number;
        balance = 10101010;
        
    }

    // inline constructor
    inline Customer(string a, int b , int c) : name(a) , account_number(b), balance(c){};

    void display(){
        cout<<"name : "<<name<<endl<<"account number : "<<account_number<<endl<<"balance : "<<balance<<endl<<endl;;

    }
};

// class Customer2{
//     public:
//     string name;
//     int account_number;
//     int balance;

//     Customer2(string n , int acc , int bal){ // parameterize constructor
//         this->name = n;
//         this->account_number = acc;
//         this->balance = bal;
//     }

// };

int main(){

    Customer obj1;
    Customer obj2("Akash" , 1010 , 500 );
    Customer obj3("jeetu" , 10010 );
    obj1.display();
    obj2.display();
    obj3.display();
   
    

}