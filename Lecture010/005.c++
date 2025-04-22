//size of tree using preorder

#include<iostream>
using namespace std;

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

void Total(Node *root , int &count){
    if(root==NULL)
    return;

    count++;
    Total(root->left , count);
    Total(root->right,count);
}

int main(){
    cout<<"enter the root node : ";
    Node *root;
    int count = 0;
    root = BinaryTree();
    Total(root,count);
    cout<<"size of tree : "<<count;
}