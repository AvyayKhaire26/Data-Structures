#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "\nElement : " << ptr->data;
        ptr = ptr->next;
    }
}

//Insert at beginning
Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node(); //Allocate memory dynamically for new node which is to be inserted
    ptr->data = data;       //(Do this everytime for insertion of node and set data in it)
    ptr->next = head;

    return ptr;
}

Node *insertAtIndex(Node *head, int data, int index)
{
    Node *ptr = new Node();
    Node *p = head; //Assign p to head for traversing through the Linked List till it reaches given index
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head; //or return p
}

Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

Node *insertAfterNode(Node *head, Node *previousNode, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    ptr->next = previousNode->next;
    previousNode->next = ptr;
    return head;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    cout << "Linked List Before Insertion" << endl;
    linkedListTraversal(head);
    head = insertAtIndex(head, 56, 3);
    // head = insertAtEnd(head, 56);
    // head = insertAfterNode(head, third, 45);
    cout << "\nLinked List After Insertion" << endl;
    linkedListTraversal(head);
    return 0;
}