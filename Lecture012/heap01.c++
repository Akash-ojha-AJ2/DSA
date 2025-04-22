// Heap is complete Binary Tree 
// Complete binary Tree means each node have atleast two childern
// All levels are completely filled except the last level
// At last level nodes should be filled from left side

// Max heap = parent node should be greater than or equal to child node , Time complexity = nlogn

// child node left = 2*i+1
// child node right = 2*i+2
// parent node = (i+1)/2

// min heap = parent node should be less than or equal to its child node



// build maxheap tree insertion

#include<iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size; // total element in heap
    int total_size; // total size of array

    public: 

    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        // if heap size is available or not
        if(size==total_size){
            cout<<"Heap Overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        //compare it with its parent

        while(index> 0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" is inserted into the heap\n";

    }

    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(45);
    H1.insert(14);
    H1.insert(40);
    H1.insert(50);
    H1.insert(24);
    H1.insert(48);

    H1.print();
}
