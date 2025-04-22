//method 2 using by recursion
// time complexity = o(n)
//space complexity = o(n)
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left , *right;

    Node(int value){
        left = right = NULL;
        data = value;
    }
};

Node *BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp = new Node(x);
    //left side crete
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();
    //right side crete
    cout<<"Enter the Right child of "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;
}

int main(){
    cout<<"enter the root node : ";
    Node *root;
    root = BinaryTree();
}