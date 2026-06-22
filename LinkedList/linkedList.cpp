#include <iostream>
using namespace std; 

int main(){
    string a = "abc";
    string *p = &a;
    cout << "value of a: " << a <<" address of a " << p << endl;


    string b = "bac";
    string *addofb = &b;
    cout << "value of b: " << b << " address of b " << addofb << endl;
    return 0;
}