
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
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDub(arr,index+1,size , temp );
    return temp;
}




int main(){
    Node *head = NULL;
    int arr[] = {1,2,3,4,5,6,7,8,9}; 
    int n = 9;

    head =  createDub(arr,0,n,NULL);

    //delete at given position
    int pos = 6;

    //delete at start
    if(pos==1){

        
        if(head->next==NULL)
        {
            delete head;
            head = NULL;

        }

        //if more than 1 node exist
         else{
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
         }

    }
    else{
        Node *curr  = head;
        while(--pos){
            curr = curr->next;
        }

        //delete at end
        if(curr->next ==NULL){
            curr->prev->next = NULL;
            delete curr;

        }else{
           
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }   

    Node *temp2 = head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }


}