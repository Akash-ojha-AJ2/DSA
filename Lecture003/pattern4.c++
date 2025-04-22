//Number Tringular 

//             1
//           2   2
//         3   3   3
//       4   4   4   4

#include<iostream>
using namespace std;

int main(){

    int count = 5;

    for(int i = 1; i<=5; i++){

        for(int j = 0; j<=count; j++){
            cout<<" ";
        }
        for(int k = 0; k<i; k++){
            cout<<i<<" ";
        }
        count--;
        cout<<endl;
    }
}