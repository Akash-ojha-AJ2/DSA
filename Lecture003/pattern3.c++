// Square Hollow pattern

// **********
// *        *
// *        *
// *        *
// *        *
// **********

#include<iostream>
using namespace std;


int main(){
    for(int i = 0; i < 10 ; i++){

        if(i==0 || i==9){
           for(int j = 0; j<10 ; j++){
            cout<<"* ";
           }
        }else {
            for(int k = 0; k<10; k++){
                if(k==0||k==9){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}