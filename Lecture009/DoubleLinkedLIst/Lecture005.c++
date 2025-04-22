//insertion any point
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

    int position = 3;
    int value = 40;

    Node *curr = head;

    //insert at start

    if(position==0){
        //linked exist na kare
        if(head==NULL){
            head= new Node(value);
        }else{
            Node *temp = new Node(value);
            temp->next = head;
            head->prev=temp;
            head = temp;
        }

        // exist karti ho
    }else{
        while(--position){
            curr= curr->next;
        }

        // insert at last
        if(curr->next==NULL){
            Node *temp = new Node(value);
            curr->next=temp;
            temp->prev=curr;
        }else{
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
       

    }





    Node *temp2 = head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }


}