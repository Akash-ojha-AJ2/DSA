//Number Tringular 

// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){

    int count = 1;

    for(int i = 0; i<5; i++){
        for(int j = 1; j<=count; j++){
            cout<<j<<" ";
        }
        cout<<endl;
        count++;
    }
}