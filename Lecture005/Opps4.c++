//Static vs Dynamic Memory Allocation
//heap : isme hum dynamic memorry allocation krate hai "new" keyword ke sath iska size bahut bda hota hai
//stack : isme hum stack memorry alloaction krate hai iska size kam hota hai


#include<iostream>
using namespace std;


class Student{
    public: 
    string name;
    int age;
    int roll_number;
    string grade;
};

class Student3{
    public: 
    string name;
    int age;
    int roll_number;
    string grade;
};

class Student2{
    string name;
    int age;
    int roll_number;
    string grade;
    public:
    void setname(string s , string g , int a , int roll)
    {
        if(s.length()==0){
            cout<<"invalid name : "<<endl;
            return;
        }else{
            name = s;
        }
        
        if(a<0||a>100){
            cout<<"invalid age :"<<endl;
            return;
        }else{
            age = a;
        }
        
        grade = g;
        roll_number = roll;
    }


    void getname(int password) 
    {
        if(password==123){
            cout<<"\n"<<
            "Student name : "<<name<<endl<<
            "Student age : "<<age<<endl<<
            "Student grade : "<<grade<<endl<<
            "Student roll-no. : "<<roll_number<<endl;
        }else{
            cout<<"wrong password";
        }
       
    }
};

int main(){
    //static tarika
    Student S1;
    S1.name = "Akash";
    S1.age = 21;
    S1.grade = "A";
    S1.roll_number = 221007;

    cout<<"Student name : "<<S1.name<<endl<<"Student age : "<<S1.age<<endl<<"Student grade : "<<S1.grade<<endl<<"Student roll-no. : "<<S1.roll_number<<endl;

    //dynamic tarika
    Student2 *S2 = new Student2;
    (*S2).setname("Rohit" , "B" , 25 , 1008);
    (*S2).getname(123);

    //dynamic tarika
    Student3 *S3 = new Student3;
    (*S3).name = "Akash";
    (*S3).age = 21;
    (*S3).grade = "A";
    (*S3).roll_number = 221007;

    cout<<S3->name<<" "<<S3->age<<" "<<S3->grade<<" "<<S3->roll_number;
    
}