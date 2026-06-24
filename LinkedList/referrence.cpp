#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node *insertAtBeginning(Node *head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

Node *insertAtEnd(Node *head, int value)
{
    Node *newNode = new Node(value);

    if (!head)
        return newNode;

    Node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

int main()
{
    Node *head = NULL;

    head = insertAtBeginning(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    traverse(head);

    return 0;
}