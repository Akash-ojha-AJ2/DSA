//insertion value at particlular position

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



int main(){

    Node *Head;
    Head = NULL;

    int arr[] = {1,5,7,9,4,3,8};

    Head = CreateLinkedList(arr,0,7);

    int x = 3;
    int value = 30;

    Node *temp = Head;
    x--;

    while(x--){
        temp = temp->next;
    };

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;


    //print value
    temp = Head;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}