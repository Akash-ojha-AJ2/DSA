//remove duplicate element from sortes list


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



Node* removeDuplicates(Node* head) {
        
    Node* curr = head->next, *prev = head;

while(curr){
if(curr->data==prev->data){
    prev->next = curr->next;
    delete curr;
    curr = prev->next;
}
else{
    prev = prev->next;
    curr = curr->next;
}
}
return head;


}



int main() {

    Node *Head;
    Head =NULL;

    int arr[] = {1,2,2,4,5,5};

    Head = CreateLinkedList(arr , 0 , 6);

   removeDuplicates(Head);
    PrintLinkedList(Head);
   
}
