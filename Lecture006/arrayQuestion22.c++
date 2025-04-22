// 3 Sum optimize
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());  // Step 1: Sort the array
    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate values for i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 0) {
                ans.push_back({nums[i], nums[j], nums[k]});

                // Skip duplicates for j and k
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;

                j++;
                k--;
            }
            else if (sum < 0) {
                j++;
            }
            else {
                k--;
            }
        }
    }

    // Output the result
    for (auto triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

}