//delete node at last
#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node  *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[] , int index , int size){

    if(index==size){
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr , index+1 , size);
    return temp;
};

int main(){
    Node *Head;
    Head = NULL;

    int arr[] = {1,2,3,4,5,6,7,8,9};

    Head = CreateLinkedList(arr , 0 , 9);

    //only one node is present
    if(Head!=NULL){
        //only one node is present
        if(Head->next == NULL){
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }
        //More than 1 Node is present
        else{
            Node *curr = Head;
            Node *prev = NULL;

            while(curr->next!=NULL){
                prev= curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }

    }

   
    

    Node *temp2;
    temp2 = Head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2= temp2->next;
    }


}