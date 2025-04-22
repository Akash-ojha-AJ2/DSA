//Multiple Inheritance

#include<iostream>
using namespace std;

class Engineer {
    public: 
    string specilization;

    Engineer(){
        cout<<"hello i am engineer \n";
    }

    void work(){
        cout<<" I have specialization in "<<specilization<<endl;

    }

};

class Youtuber {
    public: 
    int subscribers;

    Youtuber(){
        cout<<"hello i am Youtuber \n";
    }

    void contentcreator(){
        cout<<" I have subscriber base of "<<subscribers<<endl;
    }
};

class CodeTeacher : public Engineer , public Youtuber{

    public :
    string name;

    CodeTeacher(){
        cout<<"hello i am coder \n";
    }

    CodeTeacher(string name , string specilization , int subscriber){
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscriber;
    }

    void display(){
        cout<<"name : "<<name<<endl<<"specilization : "<<specilization<<endl<<"subscribe : "<<subscribers<<endl;
    }

};

int main(){
    CodeTeacher Code; 
    // yaha sabse pehele parent class ke contructor call hoga uske bad base class ka constructor call hoga yaha do parent class hai engineer or youtuber ab inme se kon pehele call hoga ye decide hoga ki apne kise pehele inherit kiya hai line no.34 mei dekhe 
   
}

