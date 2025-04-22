// Merge two sorted linked lists


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



Node* SortedMerge(Node* head1, Node* head2) {
        
   Node *head = new Node(0);
   Node *tail = head;

   while(head1 && head2){
    if(head1->data<=head2->data){
        tail->next = head1;
        head1 = head1->next;
        tail = tail->next;
        tail->next =NULL;
    }
    else{
        tail->next = head2;
        head2 = head2->next;
        tail = tail->next;
        tail->next = NULL;
    }
   }
   if(head1){
    tail->next = head1;
   }
   else{
    tail->next = head2;
   }
   tail = head;
   head = head->next;
   delete tail;

   return head;

}



int main() {

    Node *Head1 = NULL,*Head2 =NULL,*Head =NULL;
    Head =NULL;

    int arr1[] = {1,2,3,8,9,10};
    int arr2[] = {4,5,6,7,11,12};

    Head1 = CreateLinkedList(arr1 , 0 , 6);
    Head2 = CreateLinkedList(arr2 , 0 , 6);

    Head = SortedMerge(Head1 , Head2);
    PrintLinkedList(Head);
   
}
