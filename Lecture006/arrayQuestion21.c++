// 3 Sum my aproch
#include<iostream>
#include<algorithm>
#include<vector>
#include <set>
using namespace std;

int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
    int size = nums.size();
    vector<vector<int>>ans;

    set<vector<int>> s;

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            for(int k = j+1; k<size; k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip = {nums[i] , nums[j], nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip) == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }

    for (auto triplet : s) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
}

