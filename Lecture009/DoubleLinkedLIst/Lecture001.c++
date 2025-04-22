// doubly linked list insertion at start
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

int main(){

   Node *head = NULL;
   int arr[] = {1,2,3,4,5,6};
   int n = 6;

   for(int i = 0; i<6; i++){
   if(head==NULL){
    head = new Node(arr[i]);
   }else{
    Node *temp;
    temp = new Node(arr[i]);
    temp->next = head;
    head->prev = temp;
    head = temp;
   }
}
   

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}