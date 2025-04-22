//timecomplexity O(n^2)

#include<iostream>
using namespace std;

void selectionSort(int Arr[], int size){

    for(int i = 0; i<size-1; i++){
        int smallestIdx = i;
        for(int j = i+1; j<=size; j++ ){
            if(Arr[smallestIdx] > Arr[j]){
               smallestIdx = j;
            }
        }
        swap(Arr[i], Arr[smallestIdx]);
    }
}

void printArrayI(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int Arr[] = {1,4,2,9,7,3,5,6,8};
    int size = 9;

    selectionSort(Arr,size);
    printArrayI(Arr , size);

}