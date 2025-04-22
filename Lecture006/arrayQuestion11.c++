// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

//method 1;

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,11,5,6,8,9,4,5};
    int size = sizeof(arr)/sizeof(int);

    int ans;

    for(int i = 0 ; i<size; i++){
        for(int j = i+1; j<size ; j++){
            if(arr[i]==arr[j]){
                ans = arr[j];
            }
        }
    }

    cout<<ans;

}