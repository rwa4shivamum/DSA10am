#include <iostream>
using namespace std;
#include <vector>
#include <map>

// map = {
//     "key":"value",
//     "z":"",
//     "a":""
// }//key has unique, 
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
    vector<int> array1 = {70,10,20,30,40,50,10,20,30};
    // countOccurance = {
    //     10:2
    //     20:2
    //     30:2
    //     40:1
    //     50:1
    // }
    map<int, int> countOccurance;
    
    for(int i=0; i<array1.size(); i++){
        //cout << countOccurance[array1[i]] << " " <<  endl;
        if(countOccurance[array1[i]] == false){
            countOccurance[array1[i]] = 1;
        }else{
            countOccurance[array1[i]] += 1;
        }
    }
    //i=0 array1[0] = 10; countOccurance[10] return 0; countOccurance[array1[0]] = 1; i++ 
    //i=1 array1[1] = 20; countOccurance[20] return false; countOccurance[array1[0]] = 1; i++
    //i=2 array1[2] = 30; countOccurance[30] return false; countOccurance[array1[0]] = 1
    vector <int> removeDuplicates;
    for(auto item:countOccurance){
        // cout << item.first << endl;
        removeDuplicates.push_back(item.first);
    };
    for(int i=0; i<removeDuplicates.size(); i++){
        cout << removeDuplicates[i] << endl;
    };

    // int findNumber = 70;

    // if(findNumberArray(findNumber, array1)){
    //     cout << "Element found in array" << endl;
    // }else{
    //     cout << "Element not found in array" << endl;
    // };

    // int findMaximum = findMax(array1);
    // cout << findMaximum << endl;

    return 0;
}