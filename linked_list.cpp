#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

// Program to create simple linked list
int main()
{
    Node* head =NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    // Assign data in nodes
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;

    // last node point to NULL
    third->next = NULL;

    printList(head);
}