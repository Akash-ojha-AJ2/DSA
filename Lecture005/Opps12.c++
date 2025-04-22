//Inheritance
//The capability of a class to derive property characterstic from another class

// Public = main function , derive class , with in the class mei hum iske data ko use kar skte hai
// Private = iske data ko kebal hum with in class mei hi access kar skte hai
// Protected = main function mei hum iske data ko access nahi kar skte , derive class , with in the class mei hum iske data ko use kar skte hai

//  base           child
//  public         public
//  public         protected
//  public         private
//  protected      protected
//  protected      protected
//  protected      private
//  private        private

#include<iostream>
using namespace std;

class Human{
    private :
    int a;

    protected:
    int b;

    public:
    int c;


    //with in the class mei private , protected , public ke data ko access kar ksta hoon 
    // is function ko chahe aap protected mei likhe chahe private mei tab bhi ye function chalega
    void fun(){
        a=10;
        b=20;
        c=30;
    }
};

int main(){
    Human Akash;
    Akash.a; // error aa raha hai
    Akash.b; // error aa raha hai
    Akash.c; // error nahi aa raha hai
    Akash.fun();
}