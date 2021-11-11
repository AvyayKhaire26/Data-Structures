#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

void Traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "\nElement is :" << ptr->data << endl;
        ptr = ptr->next;
    }
}
void Reverse(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "\nElement is :" << ptr->data << endl;
        ptr = ptr->prev;
    }
}

int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 7;
    head->prev = NULL;
    head->next = second;

    second->data = 11;
    second->prev = head;
    second->next = third;

    third->data = 12;
    third->prev = second;
    third->next = fourth;

    fourth->data = 13;
    fourth->prev = third;
    fourth->next = NULL;

    cout << "Forward Traversal is : " << endl;
    Traversal(head);
    cout << "\nReverse Traversal is : " << endl;
    Reverse(fourth);
    return 0;
}