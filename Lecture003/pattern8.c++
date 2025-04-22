// zero-one triangle
// 
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<iostream>
using namespace std;

int main(){
    
    int count = 1;
  


    for(int i = 0; i<5; i++){
      

        for(int j = 0; j<count; j++){
            bool a;
            
            cout<<a <<" ";

            if(a==true){
                a=false;
            }else{
                a=true;
            }
            
        }
       
        count++;
        cout<<endl;
    }
}