// 0 0 1 1 2 2 2 2
// 2 element ki first and last occurrence
// answer : first 4 and last 7


#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr = { 0, 0, 1, 1 ,2, 2, 2 ,2};
    int size = arr.size();
    int key = 2;

    int firstOccurence = firstOcc(arr,size,key);
    int secondOccurence = lastOcc(arr,size,key);
    
    int TotalOccurence = secondOccurence - firstOccurence ;

    cout<<"first occurrence : "<<firstOccurence<<endl;
    cout<<"last occurrence : "<<secondOccurence<<endl;
    cout<<"TotalOccurence : "<<TotalOccurence;

    
}