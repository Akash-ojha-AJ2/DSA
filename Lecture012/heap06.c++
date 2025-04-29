#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int heapHeight(int N){
    if(N == 1){
        return 0; // height of single node is 0 (not 1)
    }

    int height = 0;
    while(N > 1){
        height++;
        N = N / 2;
    }

    return height;
}

int main(){
    priority_queue<int> p; // max heap

    int arr[] = {14,15,12,22,17,20,18,24,23,30,19};

    for(int i = 0; i < 11; i++){
        p.push(arr[i]);
    }

    int size = heapHeight(p.size());

    cout << "Height of the heap is: " << size << endl;

    return 0;
}
