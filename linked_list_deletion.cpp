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

void deletionFromBegin(Node** head, int target)
{
    Node* ptr = new Node();
    ptr = *head;

    // while((ptr->next!=NULL) && (ptr->data!=target))
    // {
    //     ptr = ptr->next;
    // }
    if(ptr==NULL)
    {
        cout<<"Element "<<target<<" not found.";
        return;
    }
    ptr = (*head)->next;
    *head = ptr;
    // delete(ptr);
    return;
}

int main()
{
    Node* head =NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Assign data in nodes
    head->data = 1;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 5;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = NULL;

    deletionFromBegin(&head, 1);
    printList(head);
}