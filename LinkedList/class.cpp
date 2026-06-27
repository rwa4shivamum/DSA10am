#include <iostream>
using namespace std;

// int add(int a, int b){
//     return a+b;
// };
// class Animal{
//     private:
//     string name;

//     public:
//     Animal(string name){
//         this->name = name;
//         cout << this->name << " here I am" << endl;
//     }

//     void AnimalSound(){
//         cout << this->name << "barks" << endl;
//     }

//     ~Animal(){
//         cout << "here I am dtor" << endl;
//     }
// };
// Animal = {
//     name:Dog
// }

// arr = [1,2,3,4]
// NOde1 = [10,0x61fef0] Node2 =

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
/*
arr = [1]
 Node1 = {
   value=10;
   next=Node2
 }

 Node2 = {
 value = 20;

 }
*/
class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    };

    void insertAtBegin(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            cout << "here in If condition" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteAtBegin()
    {
        if (head == NULL)
        {
            cout << "list is Empty" << endl;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "list is Empty" << endl;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            cout << temp->value << " here under while loop " << endl;
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << temp->value << " here the last node" << endl;
    }
    void updateNode(int oldValue, int newValue)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->value == oldValue)
            {
                temp->value = newValue;
                return;
            }
            temp = temp->next;
        }
        cout << "Node not Exist" << endl;
    }
    void traverse()
    {
        Node *temp = head;
        cout << "here my temp value similair to first Node " << temp->value << temp << endl;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

/*
arr = [4,1,2,3,4]
 Node1 = [10,Null]
*/
int main()
{
    // int a = 20;
    // int b = 30;
    // Animal a("dog");
    // //Animal b("lion");
    // a.AnimalSound();
    // b.name();

    // string a = "shivam";
    // string *b = &a;
    // cout << b << endl;

    // Node *firstNode = new Node(10);
    // Node *secondNode = new Node(20);
    // firstNode->next = secondNode;
    // cout << "address " << secondNode << " Value " << secondNode->value << " nextNodeAddress " << secondNode->next << endl;
    // cout << "address " << firstNode << " Value " << firstNode->value << " nextNodeAddress " << firstNode->next << endl;

    LinkedList s;
    s.insertAtBegin(10);
    s.insertAtBegin(20);
    s.insertAtEnd(30);
    s.traverse();
    return 0;
}