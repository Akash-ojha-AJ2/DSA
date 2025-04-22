#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm> // sort ke liye

using namespace std;

int main(){

    vector<int>arr(5);
    cout<<"enter the value : ";
    for(int i = 0; i<arr.size(); i++){
        cin>>arr[i];
    }

    //file ko open karna
    ofstream fout;
    fout.open("zero.txt");
    fout<<"Original data \n";

    for(int i = 0 ; i<arr.size(); i++){
        fout<<arr[i]<<" ";
    };

    fout<<"\n  Sorted data ";
    
    sort(arr.begin() , arr.end());
    for(int i=0;i<arr.size(); i++){
        fout<<arr[i]<<" ";
    }

}