#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
//firstNode= [10,NULL], head = [NULL,NULL]
/*
newNode = [40,NULL]
firstNode = [10,secondNode] ; secondNode = [20,tirdNode]; thirdNode = [30,NULL], fouthNode = [40,NULL]
*/
class LinkedList {
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    };

    void insertAtBegin(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            cout << "here in If condition" << endl;
            return;
        }
         Node* temp = head;
         while(temp->next != NULL){
            temp = temp->next;
         }
         temp->next = newNode;
    }

    void deleteAtBegin() {
        if(head == NULL){
            cout << "list is Empty" << endl;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd(){
        if(head == NULL){
            cout << "list is Empty" << endl;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            cout << temp->value << " here under while loop "<< endl;
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << temp->value << " here the last node" << endl;
    }
    void updateNode(int oldValue, int newValue){
        Node* temp = head;
        while(temp != NULL){
            if(temp->value == oldValue){
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

int main(){
    // Node* firstNode = new Node(10);
    //firstNode->next
    LinkedList s;
    s.insertAtEnd(10);
    // s.insertAtBegin(5);
    s.insertAtEnd(20);
    s.insertAtEnd(30);
    s.insertAtEnd(40);
    // s.insertAtBegin(4);
    // s.updateNode(20, 70);
     s.deleteAtEnd();
    s.traverse();
    return 0;
}