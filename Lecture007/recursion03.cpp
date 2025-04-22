#include<iostream>
using namespace std;

int fibonacci(int n){

    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

       return  fibonacci(n-1) + fibonacci(n-2);
    
}

int main(){
    
    int a;
    cout<<"enter no.";
    cin>>a;
    cout << "Fibonacci series from 1 to 10:\n";
    for (int i = 0; i <= a; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;

}


// fibonacci(5)
// ├── fibonacci(4)
// │   ├── fibonacci(3)
// │   │   ├── fibonacci(2) → 1
// │   │   └── fibonacci(1) → 1
// │   └── Result: fibonacci(3) = 2
// │   ├── fibonacci(2) → 1
// │   └── Result: fibonacci(4) = 3
// └── fibonacci(3) → 2
//     └── Result: fibonacci(5) = 5


