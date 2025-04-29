#include<iostream>
using namespace std;

//example  =  [14,15,12,22,17,20,18,24,23,30,19]
//index =     [01,02,03,04,05,06,07,08,09,10,11]

//                               14(0)                    
//                 15(1)                        12(2)

//        22(3)              17(4)       20(5)         18()

//   24(7)     23(8)   36(9)       19(10)

// start karenge (n/2)-1 means index 4

// left child = 2*i+1,
// right child = 2*i+2

// time complexity  = o(n)

void Heapify(int arr[], int index , int n){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n&&arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n&&arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
            Heapify(arr,largest,n);
        
    }
    
}

void BuildMaxHeap(int arr[],int n){
    for(int index = n/2 - 1; index>=0; index--){
        Heapify(arr,index,n);
    }

}

void printHeap(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {14,15,12,22,17,20,18,24,23,30,19};
    BuildMaxHeap(arr,10);

    printHeap(arr,10);
}
