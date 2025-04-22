//Sort a linked list of 0s, 1s and 2s



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

Node *CreateLinkedList(int arr[] , int index , int size){
    if(index == size){
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr , index + 1 , size );
    return temp;

};

void PrintLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout<<endl;
    
}



Node* segregate(Node* head) {

    Node *curr = head;
    int count0 = 0, count1 = 0, count2 = 0;
    
    while(curr){
        if(curr->data==0)
        count0++;
        else if (curr->data ==1)
        count1++;
        else count2++;
        
        curr = curr->next;
    }
    
    curr = head;
    
    while(count0--){
        curr->data=0;
        curr = curr->next;
    }
    while(count1--){
        curr->data=1;
        curr = curr->next;
    }
    while(count2--){
        curr->data=2;
        curr = curr->next;
    }
    return head;
}



int main() {

    Node *Head = NULL;

    int arr1[] = {1,2,2,1,2,0};

    Head = CreateLinkedList(arr1 , 0 , 6);


    Head = segregate(Head);
    PrintLinkedList(Head);
   
}
