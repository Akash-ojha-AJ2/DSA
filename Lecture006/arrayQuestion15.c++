
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,0,1,0,0,1,1,1,0,0,1,1,0};
    int size = sizeof(arr)/sizeof(int);

    //My Approch

    // for(int i = 0; i<size; i++){
    //     for(int j = i+1 ; j< size; j++){
    //         if(arr[i]==1 && arr[j]==0){
    //             swap(arr[j],arr[i]);
    //         }
    //     }
    // }

    int left = 0 , right = size-1;

    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }

        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
       
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}