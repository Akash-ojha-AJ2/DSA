// size of class padding concept

#include<iostream>
using namespace std;

class a{
    int a;
    char b;
    double c;
};

int main(){
    a obj1;
    cout<<sizeof(obj1);
}