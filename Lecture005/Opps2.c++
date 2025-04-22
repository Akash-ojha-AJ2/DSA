// Access Modifier 
//there are 3 type of Access Modifier 1.public 2.private 3.protective
#include<iostream>
using namespace std;


//public example
class Student{
    public: 
    string name;
    int age;
    int roll_number;
    string grade;
};

//private example
//private function ke data ko access karne ke liye hum getter or setter ka use karte hai
class Student2{
    string name;
    int age;
    int roll_number;
    string grade;
    //function getter and setter
    public:
    //pehele set likhna hai fir function ka name kuch bhi
    //parameter mei argument ke name class ke valiable se match nahi hone chahiye agar hum same name denge to hume this keyword ka use karna hoga
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


    void getname(int password) //argument mei ab specific condition bej skte hai ki agar mera password ye ho tabhi aap data ko get kar sakte ho
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
    Student S1;
    S1.name = "Akash";
    S1.age = 21;
    S1.grade = "A";
    S1.roll_number = 221007;

    cout<<"Student name : "<<S1.name<<endl<<"Student age : "<<S1.age<<endl<<"Student grade : "<<S1.grade<<endl<<"Student roll-no. : "<<S1.roll_number<<endl;

    Student2 S2;
    S2.setname("Rohit" , "B" , 25 , 1008);
    S2.getname(123);
    
}