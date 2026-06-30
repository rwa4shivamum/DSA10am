#include <iostream>
using namespace std;

class Stack{
    private:
    int size;
    int stack[100];
    int topIndex;

    public:
    Stack(int size){
        topIndex = -1;
    }

    void push(int value){
        if(topIndex == size-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        topIndex += 1;
        stack[topIndex] = value;
        cout << "Value inserted Successfully" << endl;
    }
    void pop(){
        if(topIndex == -1){
            cout << "stack underflow" << endl;
        }
        topIndex--;
        cout << "top element got popped out" << endl;
    }
    void isEmpty(){
        if(topIndex == -1){
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "Stack is Not Empty" << endl;
    }
    void top(){
        if(topIndex == -1){
            cout << "Stack is Empty" << endl;
        }
        cout << stack[topIndex] << endl;
    }
};


int main(){

    Stack s(5);
    s.push(10);
    s.push(20);
    s.pop();
    s.top();
    s.isEmpty();

    return 0;
}

