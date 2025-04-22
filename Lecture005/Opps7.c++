//Destructor
//It is an instance member function that is invoked automatically whenever an object is going to be destroyed
// It is a last function that is going to be called before an object destroyed
// destructor koi bhi argument ya parameter nahi leta hai public ke andar likha jata hai ye automatically call hota hai
//ye dynamically allocation ko delete krta hai ye object ko delete nahi krta 


#include<iostream>
using namespace std;
class Customer{
    public:
    string name;
    int *balance;

    Customer(string name, int bal){
        this->name = name;
        balance = new int; // ye resource jo maine bnaya hai use baad mei delete bhi use free bhi krana hai isiliye hum destructor ka use krte hai
        *balance = bal;
    }
    ~Customer(){
        delete balance;
      
    }
    void display(){ // new int wali file ko release krwa dega
        cout<<name<<endl<<*balance;

    }
};

int main(){
    Customer A1("rohit" , 1000);
    A1.display();
}