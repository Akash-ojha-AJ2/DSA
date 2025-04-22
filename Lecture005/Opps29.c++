#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //File ko open karna
    ofstream fout; // ofstream ek class hai jiska object fout hai 

    fout.open("Opps.29.txt"); // fout, object ka data member hai "open", jo ki file ko open karta hai agr file exit nahi karti to ye is naam ki file create kar dega

    //write kar skta hoon
    fout<<"hello indian";

    fout.close(); //Resouce release karna

}