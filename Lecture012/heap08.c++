// kth largest element in arr
// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output: 10
// Explanation: 3rd largest element in the given array is 10.

// first method : we can sort the array  [3, 4, 7, 10, 15, 20]
// and find kth largest element
// time complexity : nlogn


// second method : hum max heap create karenge ko top element ko delete karenge or fir se max heap ready karenge isse or ye hum utni bar karenge jis no. ka hume smallest element nikalana hai
// time complexity : n + klogn
// where k : kth largest element in arr


// third method : we can use heap : jab hume largest element nikalna hoga tab hum min heap ka use karenge or us min heap mei arrya ke starting ke utne element dalenge jitne hume smallest element nikalna hai fir hum array ke next element ho ek ek karke min heap ke sabse bade element se comparision krayenge agar vo bda hota hai to hum use bahar nikal denge or array ke element ko andar daal denge

// arr[] = [7, 10, 4, 3, 20, 15], k = 3
// min heap = 10,7,4 
// ab hum array ke next elemnet se comparion krayenge 
// 10>3 yes
// 10 ko hum heap mei se nikal denge 
// new minx heap 20,15,10
// ese hi comparion krate jayenge 
// or final jo humari heap hogi usi ka sabse chota element humara answer hoga
// time complexity : nlogk
// where k : kth largest element in arr




// using third method 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int start , int last , int k){
    priority_queue<int, vector<int>, greater<int>>p;

    for(int i = 0; i<k; i++){
        p.push(arr[i]);
    }
    for(int i = k; i<last; i++){
        if(arr[i]>p.top()){
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}

int main(){

    int arr[] = {7, 10, 4, 3, 20, 15};

    cout<<"3rd  largest Element in the array : "<<kthSmallest(arr,0,6,3);
 
}