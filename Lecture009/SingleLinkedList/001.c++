//create linked list 
#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    // Constructor to initialize a Node with data
    Node(int value){
        data = value;
        next = NULL; // NUll ki value c++ mei Zero hoti hai 
    }
};

int main(){

    Node *Head;
    Head = new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
}