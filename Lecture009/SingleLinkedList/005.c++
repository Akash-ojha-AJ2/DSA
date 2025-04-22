// add node at the start recusion

#include<iostream>
using namespace std;

class Node {
    public : 
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }

};

Node *CraeteLinkedList(int arr[], int index,int size, Node *prev){

        //BaseCase
        if(index==size){
            return prev;
        }

        Node  *temp;
        temp = new Node(arr[index]);
        temp->next=prev;
        return CraeteLinkedList(arr,index+1,size,temp);
};

int main(){

    Node *Head;
    Head = NULL;

    int arr[] = {1,8,4,9,7,6};

    Head = CraeteLinkedList(arr, 0, 6 , Head);

    Node *temp;
    temp = Head;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}