//delete  at start

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

    //delete at start
    if(head!=NULL){

    //if only one node exist
    if(head->next ==NULL){
        delete head;
        head = NULL;

    // if more than 1 node exist
    }else{
        Node *temp = head;
        head = head->next;
        delete temp;

        if(head){
        head->prev = NULL;
    }
}
    }

    
    Node *temp2 = head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }

}