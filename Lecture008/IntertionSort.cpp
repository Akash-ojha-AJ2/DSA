// O(N^2)

#include<iostream>
using namespace std;

void IntertionSort(int arr[], int size){

    for(int i = 1; i<size; i++){
       for(int j = i; j>0 ; j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j] , arr[j-1]);
        }else {
            break;
        }
       
       }
    }
}

void printArrayI(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {1,4,2,9,7,3,5,6,8};
    int size = 9;

    IntertionSort(arr,size);
    printArrayI(arr , size);

}