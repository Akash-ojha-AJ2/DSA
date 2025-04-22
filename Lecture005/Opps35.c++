// sallow copy & deep copy

// A sallow copy of an object copies all of the member values from one object to another
// A deep copy on the other hand , not only copies the member values but also makes copies of any dynamically allocated memory that the member point to

// sallow copy : 
#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
        
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
        
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;

    }
};

int main(){
    Student S1("akash ojha" , 8);
   // Student S2(S1); // normal copy
   Student S2(S1);


   // yaha humne do object bnaye hai jisme dono object ke mene name or cgpa define kare hai ab humne line no. 44 mei S2 object ka cgpa define kiya  hai par S1 object mei nahi kiya usme humne pehele hi define kar diya hai par jab hum S2 object mei cgpa ko define karenge to object S1 ka cgpa bhi change ho jayega kyuki to object ka cgpa poniter ek hi hai isiliye ise hi deep copy kehete hai leki hum chahate hai ki dono ka object alag alag pointer target kare

   S1.getInfo();
   *(S2.cgpaptr) = 9.2; 
   S1.getInfo();
   return 0;

}