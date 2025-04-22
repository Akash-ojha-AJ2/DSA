//polymorphism
//compile time  : (a) function overloading , (b) operator overloading


//(a) function overloading

#include<iostream>
using namespace std;

class Area{

    public:

    int calculateArea(int r){ //circle
        return 3.14*r*r;
    }

    int calculateArea(int l , int b){ // rectangle
        return l*b;
    }

};

int main(){
    Area A;

    cout<<A.calculateArea(5)<<endl;
    cout<<A.calculateArea(5,6)<<endl;
}