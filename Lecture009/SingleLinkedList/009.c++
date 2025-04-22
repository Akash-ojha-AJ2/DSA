// delete node at particular position

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


Node *CreateLinkedList(int arr[], int index, int size) {
    // Base case
    if (index == size)
        return NULL;

    Node* temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}


void PrintLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout<<endl;
    
}


Node* deleteNode(Node *Head, int x){
    if(x==1){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
        return Head;
    }

    Node *curr = Head;
    Node *prev = NULL;

    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;

    return Head;
}

int main(){

    Node *Head;
    Head = NULL;

    int arr[] = {3,6,9,12,1,2,4};

    Head = CreateLinkedList(arr , 0 , 7);

    // Print the linked list before deletion
    PrintLinkedList(Head);

    deleteNode(Head,3);

    // Print the linked list after deletion
    PrintLinkedList(Head);

}