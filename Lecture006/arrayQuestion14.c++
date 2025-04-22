// pair sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<vector<int>>ans;
    int sum = 5;

    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                // temp.push_back(1);  // smaller
                // temp.push_back(4);  // larger
                ans.push_back(temp);
            }
        }
    }

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}