#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Recursive function to create a doubly linked list
Node *createDub(int arr[], int index, int size, Node *back) {
    if (index == size) {
        return back;
    }
    
    Node *temp = new Node(arr[index]);
    temp->next = back; // Connect new node to the previous head
    if (back != NULL) {
        back->prev = temp; // Update the prev pointer of the old head
    }
    
    return createDub(arr, index + 1, size, temp);
}

int main() {
    Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = 9;

    head = createDub(arr, 0, n, NULL);
    
    cout << "Before deletion: ";
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // 🔻 Delete last node (in `main` function itself)
    if (head != NULL) {
        if (head->next == NULL) {  // If only one node exists
            delete head;
            head = NULL;
        } else {
            Node *curr = head;
            while (curr->next) {  // Traverse to last node
                curr = curr->next;
            }
            if (curr->prev) {  // If previous node exists
                curr->prev->next = NULL;
            }
            delete curr;
        }
    }

    cout << "After deletion: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
