// delete particular node using recursion

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
};

void PrintLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout<<endl;
    
}

Node *deleteNode(Node *curr , int x){
    if(x==1){
        Node *temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteNode(curr->next, x-1);
    return curr;

}

int main(){
    Node *Head;
    Head = NULL;

    int arr[] ={1,2,3,4,5,6};

    Head = CreateLinkedList(arr , 0 , 6);

    PrintLinkedList(Head);

    deleteNode(Head,5);

    // Print the linked list after deletion
    PrintLinkedList(Head);
}