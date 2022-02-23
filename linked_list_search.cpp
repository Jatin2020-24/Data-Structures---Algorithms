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

Node* searchInUnsorted(Node* head, int item)
{
    Node* ptr = head;
    Node* loc = NULL;
    while(ptr!=NULL)
    {
        if(item == ptr->data)
        {
            loc = ptr;
            return loc;
        }
        ptr = ptr->next;
    }
    return NULL;
}

Node* searchInSorted(Node* head, int item)
{
    Node* ptr = head;
    Node* loc = NULL;
    while(ptr!=NULL)
    {
        // If current element is greater than item return NULL
        if(ptr->data > item)
        {
            return NULL;
        }
        if(item == ptr->data)
        {
            loc = ptr;
            return loc;
        }
        ptr = ptr->next;
    }
    cout<<"hhh";
    return NULL;
}

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
    second->data = 4;
    second->next = third;
    third->data = 5;
    third->next = NULL;

    cout<<searchInSorted(head, 5);
}