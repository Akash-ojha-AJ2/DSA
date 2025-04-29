#include<iostream>
using namespace std;

//Time complexity = O(n)
// space complexity = O(1)

void Heapify(int arr[], int index , int n){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest], arr[index]);
        Heapify(arr, largest, n);
    }
}

void BuildMaxHeap(int arr[], int n){
    for(int index = n/2 - 1; index>=0; index--){
        Heapify(arr, index, n);
    }
}

void HeapSort(int arr[], int n){
    BuildMaxHeap(arr, n);
    for(int i = n-1; i>0; i--){
        swap(arr[i], arr[0]);
        Heapify(arr, 0, i);
    }
}

void printHeap(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {14,15,12,22,17,20,18,24,23,30,19};
    int n = sizeof(arr)/sizeof(arr[0]); // IMPORTANT
    HeapSort(arr, n);
    printHeap(arr, n);
}
