// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
//method 2
#include<iostream>
#include<vector>
using namespace std;


class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
            vector<int> freq(n + 1, 0); // frequency array banayi
    
            for (int i = 0; i < n; i++) {
                freq[nums[i]]++;           // har number ki frequency badhao
                if (freq[nums[i]] > 1)     // agar koi number 1 se zyada baar aaya
                    return nums[i];        // wahi duplicate hai
            }
    
            return -1; // ideally yahan kabhi nahi aana chahiye
        }
    };
    

int main(){
    vector<int>nums = {1,3,4,2,2};
    Solution S1;
    int ans = S1.findDuplicate(nums);
    cout<<ans;
    
}