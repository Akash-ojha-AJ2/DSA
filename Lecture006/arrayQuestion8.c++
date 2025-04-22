//Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
#include<climits>
using namespace std;

int largestElement(int arr[] , int size){
    int max = INT_MIN;
   for(int i = 0 ; i<size ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
   }
   return max;

}

int main(){
    int arr[] = {1,2,325,12,14};
    int size = sizeof(arr)/sizeof(int);

    int ans = largestElement(arr , size);
    cout<<ans;

}