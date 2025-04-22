#include<iostream>
#include<vector>
using namespace std;

int main(){

    // first approch
    
    // int height[] = {1,8,6,2,5,4,8,3,7};
    // int size = sizeof(height)/sizeof(int);
    // int maxWater = 0;

    // for(int i = 0; i<size; i++){
    //     for(int j = 0; j<size; j++){
    //         int w = j-i;
    //         int ht = min(height[i], height[j]);
    //         int currWater = w*ht;

    //         maxWater = max(maxWater , currWater);
    //     }
    // }
    // cout<<maxWater;

    //method2 

    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int ht = min(height[left], height[right]);
        int width = right - left;
        int currWater = ht * width;

        maxWater = max(maxWater, currWater);

        // Move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout<<maxWater;
}