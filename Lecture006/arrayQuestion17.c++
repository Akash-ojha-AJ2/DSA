// Majority Element

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


//method 1 (time complexity = O(n2))

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    // int arr[] = {1, 2, 1, 1, 1, 1, 2};
    // int size = sizeof(arr)/sizeof(int);

    // for (int i = 0; i < size; i++) {
    //     int freq = 0;
    //     for (int j = 0; j < size; j++) {
    //         if (arr[i] == arr[j]) {
    //             freq++;
    //         }
    //     }

    //     if (freq > size/2) {
    //         cout << "Majority Element: " << arr[i] << endl;
    //         break;  // ✅ Break after finding the majority element
    //     }
    // }

    // return 0;

    //method 2  (time complexity = O(logn))

    vector<int>nums = {2,2,1,1,1,2,2,2};  

    sort(nums.begin(),nums.end());
    int freq = 1 , ans = nums[0];
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else {
            freq=1;
            ans = nums[i];
        }
        if(freq>nums.size()){
            return ans;
        }
    }
    cout<<ans;
}
