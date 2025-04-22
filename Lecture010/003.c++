// Traversal   time complexity = o(n)  space complexity = o(n)
// 1. pre-order = NLR 
// 2. In-order = LNR
// 3. post-order = LRN

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


void PreOrder(Node *root){
    if (root == NULL){
        return;
    }
    //Node
    cout<<root->data<<" ";
    //left
    PreOrder(root->left);
    //right
    PreOrder(root->right);
};

void InOrder(Node *root){
    if(root == NULL)
    return;

    //left
    InOrder(root->left);
    //Node
    cout<<root->data<<" ";
    //Right
    InOrder(root->right);
    
};


void PostOrder(Node *root){
    if(root == NULL)
    return;

    //left
    PostOrder(root->left);
    //Right
    PostOrder(root->right);
    //Node
    cout<<root->data<<" ";
 
};



int main(){
    cout<<"enter the root node : ";
    Node *root;
    root = BinaryTree();

    cout<<"PreOrder : ";
    PreOrder(root);
    cout<<endl;

    cout<<"InOrder : ";
    InOrder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    PostOrder(root);
    cout<<endl;
}