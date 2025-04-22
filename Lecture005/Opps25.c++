// Run time polymorphism = virtual function
//. Runtime polymorphism: This type of polymorphism is achieved by Function
// Overriding.
// • Function overriding on the other hand occurs when a derived class has a
// definition for one of the member functions of the base class. That base function is
// said to be overridden.

// A virtual function is a member function which is declared within a base class and is redefined(Overriden) by a derived class. When you refer to a derived class object using a
// pointer or a reference to the base class, you can call a virtual function for that object and
// execute the derived class’s version of the function.
// • Virtual functions ensure that the correct function is called for an object, regardless of
// the type of reference (or pointer) used for function call.
// • They are mainly used to achieve Runtime polymorphism
// • Functions are declared with a virtual keyword in base class.
// • The resolving of function call is done at Run-time.
// Rules for Virtual Functions
// 1. Virtual functions cannot be static and also cannot be a friend function of another class.
// 2. Virtual functions should be accessed using pointer or reference of base class type to
// achieve run time polymorphism.
// 3. The prototype of virtual functions should be same in base as well as derived class.
// 4. They are always defined in base class and overridden in derived class. It is not
// mandatory for derived class to override (or re-define the virtual function), in that case
// base class version of function is used.
// 5. A class may have virtual destructor but it cannot have a virtual constructor.


#include <iostream>
using namespace std;
class base {
public:
virtual void print()
{
    cout << "print base class" << endl;
    }
    void show()
    {
    cout << "show base class" << endl;
    }
    };
    class derived : public base {
    public:
    void print()
    {
    cout << "print derived class" << endl;
    }
    void show()
    {
    cout << "show derived class" << endl;
    }
    };
    int main()
    {
    base* bptr;
    derived d;
    bptr = &d;
    // virtual function, binded at runtime
    bptr->print();
    // Non-virtual function, binded at compile time
    bptr->show();
    }


















