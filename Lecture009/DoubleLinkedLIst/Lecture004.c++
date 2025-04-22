//insertion start using recursion
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node *createDub(int arr[] , int index, int size, Node *back ){
    if(index == size){
        return back;
    }
    Node *temp = new Node(arr[index]);
    if(back!=NULL){
        temp->next = back;
    }
    return createDub(arr,index+1,size,temp);
}

int main(){
    Node *head = NULL;
    int arr[] = {1,2,3,4,5,6,7,8,9}; 
    int n = 9;

    head =  createDub(arr,0,n,NULL);

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


}