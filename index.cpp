

#include <iostream>
using namespace std;

int main()
{
	// bool success = false;
	// if(success){
	//     cout << "Success is True" << endl;
	// }else{
	//     cout << "Success is False" << endl;
	// }
	//Leap year logic
	//if divisible by 4 then check divisible by 100 (if not divisible by 100 then Leap Year) if yes divisible by 100 then check divisible by 400(if yes then leap year)if no then not leap yea
	int year = 2024;
	if(year % 4 == 0){
	    if(year % 100 == 0){
	        if(year % 400 == 0){
	            cout << year <<  "is leap year" << endl;
	        }else{
	            cout << year <<  "is not leap" << endl;
	        }
	    }else{
	        cout << year <<  "is leap year" << endl;
	    }
	}else{
	    cout << year <<  "is not leap" << endl;
	}
	
	int a = 20;
	int b = 30;
	
	//Ternary Operator
	(a > b) ? cout << "A is grater then B" : cout << "B is greater then A";
	
	return 0;
}   