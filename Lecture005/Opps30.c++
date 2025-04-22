// ye jo code hai vo file ko read karne ka code hai par jab hum file ko read karenge to usme space read nahi hoga jis karan humari sari string mil jayegi or samjh nahi ayega agr hume space bhi read krana hai to hume get function ka use krna hoga  ye function  humne Opps31.c++ mei likha hoga
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;

    //file ko open karo
    fin.open("zoom.txt");

    //file read karo
    char c;
    fin>>c;

    while(!fin.eof()){ // eof = end of file
        cout<<c;
        fin>>c;
    }
    fin.close();
}