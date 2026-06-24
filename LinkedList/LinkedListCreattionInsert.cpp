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

void traverse(Node *head)
{
  Node *temp = head;
  cout << "here my temp value similair to first Node " << temp->value << temp << endl;
  while (temp != NULL)
  {
    cout << temp->value << " -> here in while loop" << temp->next;
    temp = temp->next;
  }
  cout << "NULL\n";
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    cout << first->value << first << " here first node value " << first->next << endl;
    traverse(first);
    // cout << first;
    // cout << first << " " << second << endl;
    // first->next = third;
    // third->next = second;
    // cout << first->next <<" here value of first" <<first->value << "second Node next" << second->next << endl;
    
    return 0;
}

/*
  s1 = {
   string name = "Aryan";
    int age = 19;
    string isGirlfrnd = "riya";
    }
  cons obj = {
    name="aryan",
    age=20,
    grid=9873

    isStudy(){
     return true
    }
    isgrilfrnd(string name){
     if(frnd == "mohit"){

     }else{

     }
    }
  }




 */