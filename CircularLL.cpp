#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *head)
{
    Node *ptr = head;
    // cout << "\nElement is : " << ptr->data;
    // ptr = ptr->next;
    // while (ptr != head)
    // {
    //     cout << "\nElement is : " << ptr->data;
    //     ptr = ptr->next;
    // }
    do
    {
        cout << "\nElement is : " << ptr->data;
        ptr = ptr->next;
    } while (ptr != head);
}

Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    //At this point p points to the last node of the Circular Linked List
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = head;

    cout << "Circular Linked List before insertion" << endl;
    linkedListTraversal(head);
    head = insertAtFirst(head, 80);
    head = insertAtFirst(head, 85);
    cout << "\nCircular Linked List after insertion" << endl;
    linkedListTraversal(head);
    return 0;
}