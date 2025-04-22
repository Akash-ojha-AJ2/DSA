#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello Indian\n";
    fout<<"Hello Rohit\n";
    fout<<"Hello Akash\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin,line)){ // fin ka kaam file ko read karna hai or line mei paste karna hai
        cout<<line<<endl;
    }

    fin.close();

}