//Cuntructor and destructor

#include<iostream>
using namespace std;
class Customer{
    public:
    string name;
    int *balance;



    // Constructor order wise kam karta hai  output : rohit ,akash ,Jeetu
    Customer(string name){
        this->name = name;
        cout<<"constructor is "<<name<<endl;
    }

    Customer(){
        name = "4";
        cout<<"constructor is "<<name<<endl;
    }


     // Constructor reverse order wise kam karta hai Jeetu ,akash, rohit
    ~Customer(){
        cout<<"destructor is "<<name<<endl;
    }
   

};

int main(){
    Customer A1("rohit"),A2("akash"),A3("Jeetu");
    Customer *A4 = new Customer; // A4 constructor call hua hai par destructor call nahi hua iski memory ko release karne ke liye hume  destructor ko call krna hoga
    delete A4; // yaha humne destructor ko call kiya hai
}