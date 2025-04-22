// sum of binary


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

int Total(Node *root){
    if(!root)
    return 0;
    
    return(root->data+ Total(root->left)+
    Total(root->right));
    
}

int main(){
    cout<<"enter the root node : ";
    Node *root;
    int sum;
    root = BinaryTree();
   sum =  Total(root);
    cout<<"size of tree : "<<sum;
}