// delete node at start

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[], int index , int size){
    if(index == size)
    return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    Node *Head;
    Head = NULL;

    int arr[] = {1,2,3,4,5,6,7,8,9};

    Head = CreateLinkedList(arr,0,9);

    if(Head!=NULL){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    Node *temp;
    temp = Head;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}