//insertion at starting

#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    // Constructor to initialize a Node with data
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    Node  *Head;
    Head = NULL;

    int arr[] = {1,2,5,12,3,4};

    //Linked list doesn't exist
    for(int i=0 ; i<6; i++){
    if(Head == NULL){
        Head = new Node(arr[i]); // new node(arr[i]) ye address return karega or ye address head mei store ho jayega
    }
    //Linked List exist
    else{
        Node *temp;
        temp = new Node(arr[i]);
        temp ->next = Head; // head ke andar jo address hai use temp ke next mei daal do 
        Head = temp; // temp ke address ko head ko assign kra do
    }
    }

    //print linked list

    Node  *temp = Head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    };

}