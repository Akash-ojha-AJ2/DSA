//maximum subarry sum

// arr[] = {1,2,3,4,5};

// all possible Subarray : {1,2,3,4,5},  {12,23,34,45} , {123,234,345} , {1234,2345} , {12345}

// all possible Subarray formula = (n*(n+1))/2

#include<iostream>
#include<climits>
using namespace std;

int main(){
    // int n = 5;
    // int arr[] = {1,2,3,4,5};

    // //print all posible subarray

    // for(int start = 0 ; start < n; start++){
    //     for(int end = start; end < n; end++){
    //         for(int i =start; i<=end; i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }















    //maximum subarry sum solve brute force approach

    // int n = 5;
    // int arr[] = {1,2,3,4,5};

    // int maxSum = INT_MIN;

    // for(int start = 0 ; start < n; start++){
    //     int currSum = 0;
    //     for(int end = start; end < n; end++){
    //        currSum = currSum+arr[end];
    //        maxSum = max(currSum , maxSum);
    //     }
        
    // }

    // cout<<"max subarray sum = "<<maxSum;



























    //maximum subarry sum solve kadane's alogrithm


    int n = 5;
    int arr[] = {1,2,3,4,5};

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int start = 0 ; start < n; start++){
     currSum = currSum+arr[start];
     maxSum = max(currSum, maxSum);

     if(currSum<0){
        currSum = 0;
     }
        
    }

     cout<<"max subarray sum = "<<maxSum;
}