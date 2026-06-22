#include <iostream>
using namespace std;

class Student{
    private:
    string name = "Aryan";
    int age = 19;
    string isGirlfrnd = "riya";

    public:
    Student(){
        cout << "this is constructor" << this->name << endl;
    }

    ~Student(){
        cout << "this is decontructor" << endl;
    }
    private:
    
};




int main(){
    Student s1;
    //s1.name
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