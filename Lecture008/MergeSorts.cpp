// recursion Merge Sort, BubbleSort intersionSort and SelectionSort se Merge Sort bahut acha

//  low = leftmost index of the array
//  high = rightmost index of the array
//  mid = Middle index of the array 

// Time complexity: O(nlogn) 

// Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

// Space complexity: O(n)  

// Reason: We are using a temporary array to store elements in sorted order.

// Auxiliary Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {

    vector<int> temp(end-start+1);
    int left = start;
    int right = mid+1;
    int index = 0;

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index++] = arr[left++];
        }
        else{
            temp[index++] = arr[right++];
        }
    }
      
    while(left<=mid){
        temp[index++] = arr[left++];
    };

    while(right<=end){
        temp[index++] = arr[right++];
    };

    //put these value in array
    index = 0;
    while(start<=end){
        arr[start++] = temp[index++];
    }

};
   
void mergeSort(int arr[] , int start , int end){
    if(start>=end){
        return;
    }

    int mid = start+(end-start)/2;
    //left side
    mergeSort(arr , start , mid);
    //right side 
    mergeSort(arr,mid+1,end);
    //merge 
    merge(arr,start ,mid , end);
};


int main() {

    int arr[] = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
};


