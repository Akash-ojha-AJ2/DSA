#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){ //{Time Complexity = O(n^2)}
    for(int i = 0; i<n; i++){ //1*n
        for(int j = 0; j<n; j++ ){ //n*n
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
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
    int n = 5;
    int arr[] = {4,1,5,2,3};

    bubbleSort(arr , n);
    printArrayI(arr , n);

    return 0;
}