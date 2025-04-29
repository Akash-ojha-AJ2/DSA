// Sum of elements between k1'th and k2'th smallest elements
// Input:
// N  = 7
// A[] = {20, 8, 22, 4, 12, 10, 14}
// K1 = 3, K2 = 6
// Output:
// 26
// Explanation:
// 3rd smallest element is 10
// 6th smallest element is 20
// Element between 10 and 20 
// 12,14. Their sum = 26.


//method 1 :-

// 1st step : pehele sort karenge array ko
// A[] = {4,8,10,12,14,20,22}
// k1 , k2  ke bich ka sum = 12+14 = 26


//method 2 :-
// 1st step : pehele sort karenge array ko
// A[] = {4,8,10,12,14,20,22}
// min heap 1  mei k1 tak ke element dalenge or sabka sum nikal lenge
// min heap 2 mei k2-1 tak ke element dalenge or sabka sum nikal lenge

// min heap2 mei se min heap1 ko minus kar denge or humara ans aa jayega

//method 2 :-

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long sumBetweenTwoKth(long long A[], long long N, long long k1, long long k2){
    priority_queue<long long>p1;
    priority_queue<long long>p2;

    for(long long i = 0; i<k1; i++){
        p1.push(A[i]);
    }

    for(long long i = 0; i<k2-1; i++){
        p2.push(A[i]);
    }

    // find k1 smallest element in array
    for(long long i = k1; i<N ; i++){
        if(A[i]<p1.top()){
            p1.pop();
            p1.push(A[i]);
        }
    }

    // find k2-1 largest element in array
    for(long long i = k2-1; i<N ; i++){
        if(A[i]<p2.top()){
            p2.pop();
            p2.push(A[i]);
        }
    }

    // sum of first max heap

    long long sum1 = 0 , sum2 = 0;
    while(!p1.empty()){
        sum1 = sum1+p1.top();
        p1.pop();
    }

    // sum of second max heap

    while(!p2.empty()){
        sum2 = sum2+p2.top();
        p2.pop();
    }

    return sum2-sum1;
}

int main(){
    long long arr[] = {20, 8, 22, 4, 12, 10, 14};
    long long size = 7;
    cout<<sumBetweenTwoKth(arr,size,3,6);

}


