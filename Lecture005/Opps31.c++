//space count funtion
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;

    //file ko open karo
    fin.open("zoom.txt");

    //file read karo
    char c;
    c = fin.get();

    while(!fin.eof()){ // eof = end of file
        cout<<c;
        c = fin.get();
    }
    
    fin.close();
}