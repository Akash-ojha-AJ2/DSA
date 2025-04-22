// delete node without header

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

// Function to delete a given node without a head pointer
void deleteNode(Node* node) {
    if (node == nullptr || node->next == nullptr) {
        cout << "Deletion not possible" << endl;
        return;
    }

    Node* temp = node->next;
    node->data = temp->data; // Copy data from the next node
    node->next = temp->next; // Remove the next node
    delete temp;             // Free the memory of the skipped node
}

int main(){

    Node *Head;
    Head =NULL;

    int arr[] = {1,2,3,4,5,6};

    Head = CreateLinkedList(arr , 0 , 6);

    PrintLinkedList(Head);

    deleteNode(Head);

    // Print the linked list after deletion
    PrintLinkedList(Head);
}