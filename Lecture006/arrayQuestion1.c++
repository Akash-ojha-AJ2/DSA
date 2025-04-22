//Resver array
#include<iostream>
using namespace std;

int reverArr(int arr[] , int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    reverArr(arr, size);

    for(int i= 0; i<size ; i++){
        cout<<arr[i]<<" ";

    }
}