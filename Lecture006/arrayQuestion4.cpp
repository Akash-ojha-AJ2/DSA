//move zeros

#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            for(int i = 0; i<nums.size();i++){
                if(nums[i]==0){
                    for(int j = i+1 ; j<nums.size() ; j++){
                        if(nums[j]!=0){
                            swap(nums[i],nums[j]);
                            break;
                        }
                    }
                }
            }
            
        }
    };

int main(){
    vector<int>nums = {1,2,0,8,3,0,1,5};
    Solution S1;
    S1.moveZeroes(nums);

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

}