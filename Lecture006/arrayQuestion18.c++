//sort array with 0s, 1s & 2s

#include<iostream>
using namespace std;

int main(){

    //method 1 : 
    // int nums[] = {0,1,2,0,1,0,2,2,2,1,1,1,0,0,1,0,1};

    // int size = sizeof(nums)/sizeof(int);
    // int count0 = 0 , count1 = 0, count2 = 0;

    // for(int i = 0; i<size; i++){
    //     if(nums[i]==0){
    //         count0++;
    //     }
    //     if(nums[i]==1){
    //         count1++;
    //     }
    //     if(nums[i]==2){
    //         count2++;
    //     }
    // }
    // int idx = 0;

    // for(int i = 0 ; i<count0 ; i++){
    //     nums[idx++] = 0;
    // }

    // for(int i = 0 ; i<count1 ; i++){
    //     nums[idx++] = 1;
    // }

    // for(int i = 0 ; i<count2 ; i++){
    //     nums[idx++] = 2;
    // }

    // for(int i = 0; i<size; i++){
    //     cout<<nums[i]<<" ";
    // }



    //method 2 

    int nums[] = {0,1,2,0,1,0,2,2,2,1,1,1,0,0,1,0,1};
    int n = sizeof(nums)/sizeof(int);
    int low = 0 , mid = 0, high = n-1;

    while(mid<=high){
        if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        mid++; 
        low++;
       }else if(nums[mid]==1){
        mid++;
       }else{
        swap(nums[high],nums[mid]);
        high--;
       }
}

for(int i = 0; i<n ; i++){
 cout<<nums[i]<<" ";
}

}


