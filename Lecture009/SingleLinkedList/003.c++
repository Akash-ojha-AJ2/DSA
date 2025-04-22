//intersion at ending

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

    Node  *Head,*Tail;
    Tail = Head = NULL;

    int arr[] = {1,2,5,12,3,4,8};

    //Linked list doesn't exist
    for(int i=0 ; i<7; i++){
    if(Head == NULL){
        Head = new Node(arr[i]);
        Tail = Head;
    }
    //Linked List exist
    else{
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
    }

    //print linked list

    Node  *temp = Head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    };

}
