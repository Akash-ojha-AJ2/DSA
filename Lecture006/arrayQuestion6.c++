//Find the largest and smallest element in an array

#include<iostream>
#include<climits>
using namespace std;


int main(){
    int arr[9] = {1,2,3,4,9,8,7,6,5};
    int size = sizeof(arr)/sizeof(int);

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0 ; i<size; i++){

    for(int j = 0; j<size; j++){
        if(arr[j]<min){
            min = arr[j];
        }

        if(arr[j]>max){
            max = arr[j];
        }

    }
}
    

    cout<<"minimum value : "<<min<<endl<<"maximum value : "<<max;

}
