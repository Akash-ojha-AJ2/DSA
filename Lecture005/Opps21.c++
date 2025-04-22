// Hybrid Inheritance
#include<iostream>
using namespace std;

//student
//boy
//girl
//male
//female

class Student {
    public:
    void print(){
        cout<<"I am student \n";
    }
};

class Male{
    public:
    void Maleprint(){
        cout<<"I am male\n";
    }
};

class FeMale{
    public:
    void FeMaleprint(){
        cout<<"I am Female\n";
    }
};

class Boy : public Student ,public Male{
    public:
    void Boyprint(){
        cout<<"I am Boy \n";
    }
};

class Girl : public Student , public FeMale {
    public:
    void Girlprint(){
        cout<<"I am girl \n";
    }
};

int main(){
    Girl G1;
    G1.Girlprint();
    G1.print();
    G1.FeMaleprint();

    Boy B1;
    B1.print();
}



