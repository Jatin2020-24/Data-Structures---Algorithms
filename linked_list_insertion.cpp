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

void insertAtBegining(Node** head, int num)
{   
    Node* ptr = new Node();
    // Put in new data
    ptr->data = num;
    // Make next of new node as head
    ptr->next = *head;
    // Move head to point new node.
    *head = ptr;
    return;
}

void insertAtEnd(Node** head, int item)
{
    Node* ptr = new Node();
    Node *end = *head;
    ptr->data = item;
    ptr->next = NULL;

    if(*head==NULL){
        *head = ptr;
        return;
    }
    while(end->next != NULL){
       end = end->next;
    }
    end->next = ptr;
    return;
}

void insertAfterElem(Node** head, int after, int item)
{
    Node* loc = NULL;
    Node* new_node = new Node();
    loc = *head;

    // Search for target node in  LList
    while((loc->data!=after) && (loc->next!=NULL))
    {
        loc = loc->next;
    }

    if(loc==NULL)
    {
        cout<<"Element "<<after<<" not found"<<endl;
        return;
    }

    // Put in new data
    new_node->data = item;
    // Make next of new node == next of target node
    new_node->next = loc->next;
    // Make next of target node as new node
    loc->next = new_node;
    return;
}

void insertBeforeElem(Node** head, int before, int item)
{
    Node* ploc = NULL;
    Node* loc = *head;
    Node* newNode = new Node();

    while((loc!=NULL)&&(loc->data!=before))
    {
        ploc = loc;
        loc = loc->next; 
    }

    if(loc==NULL)
    {
        cout<<"Element "<<before<<" not found.";
    }
    
    // Put in new data
    newNode->data = item;

    // If target element is first element make new node as head element
    if(ploc==NULL){
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        newNode->next = loc;
        ploc-> next = newNode;
    }
    return;
}

int main()
{
    Node* head = NULL;
    insertAtEnd(&head, 55);
    insertAtEnd(&head, 56);
    insertAtBegining(&head, 88);
    insertAfterElem(&head, 88, 100);
    insertBeforeElem(&head, 55, 500);

    printList(head);
}