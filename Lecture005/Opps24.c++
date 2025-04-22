//polymorphism
//compile time  : (a) function overloading , (b) operator overloading


//(b ) operatoroverloading
//a = (5,6)
//b = (1,2)
//c = a+b
//c = (5,6) + (1,2)
//c = (6,8)

#include<iostream>
using namespace std;

class Complex{
    int real , img;

    public:

    Complex(){ 

    };
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<" +i"<<img<<endl;
    }

    Complex operator +(Complex &c){
        Complex ans; // yaha error ayegi is error se bachne ke liye hume ek default constructor bnana hoga jo humne line no. 20 par bnaya hai
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;

    }
};

int main(){
    Complex c1(3,4);
    Complex c2(4,6);

    Complex c3 = c1+c2; // c1 ne call kiya complex function ko or usme c2 ko as as argument send krna hai
    c3.display();
}