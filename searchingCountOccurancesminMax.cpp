#include <iostream>
using namespace std;
#include <vector>
bool findNumberArray(int n,const vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == n){
            return true;
        };
    };
    return false;
};

int findMax(const vector<int>& arr){
    int max = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        };
    };
    return max;
};
//max=0; i=0; arr[i]=10 > 0; True; max = arr[i]; max=10;i++
//max=10; i=1; arr[i]=20 > 10; True; max = arr[i]; max=20; i++
//max=40; i=4; arr[i]=50 > 40; True; max=arr[i]; max=50; i++;
//max=50; i=5; arr[i]=10 > 50; False; i++
int main(){
    vector<int> array1 = {10,20,30,40,50,10,20,30};
    int findNumber = 70;

    if(findNumberArray(findNumber, array1)){
        cout << "Element found in array" << endl;
    }else{
        cout << "Element not found in array" << endl;
    };

    int findMaximum = findMax(array1);
    cout << findMaximum << endl;

    return 0;
}