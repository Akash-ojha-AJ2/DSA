// doubly linked list insertion at end
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
    Node *tail = NULL;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    for(int i = 0; i<9; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}