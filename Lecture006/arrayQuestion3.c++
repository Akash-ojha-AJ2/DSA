//3. Write a C++ program to find three largest element in an array of integers.
#include<iostream>
#include<climits>
using namespace std;

void three_largest(int arr[], int arr_size) 
{
int first = INT_MIN ,
 second = INT_MIN , 
 third = INT_MIN;

 for(int j = 0; j<3; j++){
    for(int i = 0; i<arr_size; i++){
        if(arr[i]>first){
            first = arr[i];
        }
        if(arr[i]==first){
          continue;
        }
        if(arr[i]>second){
            second = arr[i];
        }
        if(arr[i]==second){
            continue;
        }
        if(arr[i]>third){
            third = arr[i];
        }

        
     }

 }
 cout<<first<<" "<<second<<" "<<third;

}

int main(){
    int arr[] = {1,2,325,10000,12,14};
    int size = sizeof(arr)/sizeof(int);

    three_largest(arr , size);
}