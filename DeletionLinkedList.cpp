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

//Case 1:Deleting 1st element
Node *deletionAtFirst(Node *head)
{
    Node *p = head;
    head = head->next;
    free(p);
    return head;
}

//Case 2:Deleting element at given index
Node *deleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3:Deleting last node

Node *deleteAtLast(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

//Case 4:Delete the element with a given value
Node *deleteAtValue(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
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

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    cout << "Linked List Before Deletion" << endl;
    linkedListTraversal(head);

    cout << "\nLinked List After Deletion" << endl;
    // head = deletionAtFirst(head); //For deleting 1st element in the linked list
    // head = deleteAtIndex(head, 2);
    // head = deleteAtLast(head);
    head = deleteAtValue(head, 8);
    linkedListTraversal(head);
    return 0;
}