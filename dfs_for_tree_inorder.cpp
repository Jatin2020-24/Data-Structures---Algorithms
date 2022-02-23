#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Given a binary tree, print its nodes in inorder
void printInorder(struct Node* node)
{
    if(node==NULL)
        return;
    // recur on left child
    printInorder(node->left);

    // then print data of node
    cout<<node->data<<" ";

    // now recur on right child
    printInorder(node->right);
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"\nInorder traversal of binary tree is: \n";
    printInorder(root);
}