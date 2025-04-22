// add node at the end recusion

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a Node with data
    Node(int val) {
        data = val;
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

// Function to print the linked list
void PrintLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* Head = NULL;
    int arr[] = {1, 9, 8, 7, 5};

    Head = CreateLinkedList(arr, 0, 5);

    // Print the linked list
    PrintLinkedList(Head);

    return 0;
}
