//find unique number
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,4,5,2,1,4};
    int size = sizeof(arr)/sizeof(int);

    int ans = 0;

    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }

    cout<<ans;
}