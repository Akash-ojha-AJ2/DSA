//Intersection Of Two Sorted Arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>A = {1,2,3,4,5,6};
    vector<int>B = {2,3,4,6,8,9};
    vector<int>ans;

    int i = 0, j = 0;

    while(i<A.size()&&j<B.size()){
        if(A[i]==B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            break;
        }
    }
    

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}