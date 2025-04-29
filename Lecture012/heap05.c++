#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>p; //max heap

    priority_queue<int,vector<int>, greater<int> >q; //min heap

    int arr[] = {12,15,17,11,16};

    //for max heap
    for(int i = 0 ; i<5 ; i++){
        p.push(arr[i]);
    }


     // max heap print
     while (!p.empty()) {
        cout << p.top() << " ";
        p.pop();
    }

    cout<<endl;


    // for min heap 
    for(int i = 0 ; i<5 ; i++){
        q.push(arr[i]);
    }

     // max heap print
     while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

}

