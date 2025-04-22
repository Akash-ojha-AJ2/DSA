//Number increasing Reverse Pyramid

// 1  2  3   4
// 1  2  3
// 1  2
// 1


#include<iostream>
using namespace std;

int main(){

    int count = 5;

    for(int i = 0; i<5; i++){
        for(int j = 1; j<=count; j++){
            cout<<j<<" ";
        }
        cout<<endl;
        count--;

    }
}