//sum of binary tree 
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

void Total(Node *root , int &sum){
    if(root==NULL)
    return;

    sum+=root->data;
    Total(root->left , sum);
    Total(root->right,sum);
}

int main(){
    cout<<"enter the root node : ";
    Node *root;
    int sum = 0;
    root = BinaryTree();
    Total(root,sum);
    cout<<"sum of tree : "<<sum;
}