// kth smallest element in arr
// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output: 7
// Explanation: 3rd smallest element in the given array is 7.\

// first method : we can sort the array  [3, 4, 7, 10, 15, 20]
// and find kth largest element
// time complexity : nlogn


// second method : hum min heap create karenge ko top element ko delete karenge or fir se min heap ready karenge isse or ye hum utni bar karenge jis no. ka hume smallest element nikalana hai
// time complexity : n + klogn
// where k : kth smallest element in arr


// third method : we can use heap : jab hume smallest element nikalna hoga tab hum max heap ka use karenge or us max heap mei arrya ke starting ke utne element dalenge jitne hume smallest element nikalna hai fir hum array ke next element ho ek ek karke max heap ke sabse bade element se comparision krayenge agar vo bda hota hai to hum use bahar nikal denge or array ke element ko andar daal denge

// arr[] = [7, 10, 4, 3, 20, 15], k = 3
// max heap = 4,7,10 
// ab hum array ke next elemnet se comparion krayenge 
// 10>3 yes
// 10 ko hum heap mei se nikal denge 
// new max heap 3,4,7
// ese hi comparion krate jayenge 
// or final jo humari heap hogi usi ka sabse sabse bda element humara answer hoga
// time complexity : nlogk
// where k : kth smallest element in arr




// using third method 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int start , int last , int k){
    priority_queue<int>p;

    for(int i = 0; i<k; i++){
        p.push(arr[i]);
    }
    for(int i = k; i<last; i++){
        if(arr[i]<p.top()){
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}

int main(){

    int arr[] = {7, 10, 4, 3, 20, 15};

    cout<<"3rd  Smallest Element in the array : "<<kthSmallest(arr,0,6,3);
 
}