//dimaond
#include<iostream>
using namespace std;


int main(){
    int count = 1;

    for(int i = 10; i>0 ; i--){

       for(int k = 0; k<i; k++){
        cout<<" ";
       }
       for(int j = 0; j<count; j++){
        cout<<"*";
       }
       count = count+2;
       cout<<endl;
    }

    for(int i = 0; i<=10 ; i++){

        for(int k = 0; k<i; k++){
         cout<<" ";
        }
        for(int j = 0; j<count; j++){
         cout<<"*";
        }
        count = count-2;
        cout<<endl;
     }

}