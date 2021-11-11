//Linked list creation and traversal

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// struct Node
// {
//     int data;
//     struct Node *next;
// };

void linkedListTraversal(Node *ptr) //write (struct Node *ptr) if created using struct
{
    while (ptr != NULL)
    {
        cout << "\nElement : " << ptr->data;
        ptr = ptr->next;
    }
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    //Allocate memory for nodes in the linked list in Heap (not in stack)
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    //Link first and second node
    head->data = 7;
    head->next = second;

    //Link second and third node
    second->data = 11;
    second->next = third;

    //Link third and fourth node
    third->data = 66;
    third->next = fourth;

    //Terminate the list at fourth node
    fourth->data = 79;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}