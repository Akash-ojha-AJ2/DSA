#include<iostream>
using namespace std;

class Human{

    protected:
    string name;


    //private
    private:
    int age;

    public:
    int height;
    
};

class Student : public Human{  // private member yaha akar private hi rahega & protected bhi yaha protected rahega
    //public
    public:
    int roll_number, fees;
};


int main(){
    Student A;
    A.name; //name protected hai
    A.height; //height public hai
    A.roll_number // public
}