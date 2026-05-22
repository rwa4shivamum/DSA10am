#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> arr = {1,2,3,4};//variable sized array 1D array
    //cout << arr << endl;
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << endl;
    // };
    
    // int arr1[3] = {1,2,3};//foxed sized array
    // for(int i=0; i<3; i++){
    //     cout << arr1[i] << endl;
    // };
    
    vector <vector<int>> arr2d = {
        {1,2,3,4},
        {-5,6,7,8},
        {9,-10,11,12,-13}
    }; //2d ARRAY
    cout << arr2d[0][0] << endl;
    int row = arr2d.size();
    int countPositive = 0;
    int countNegative = 0;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<arr2d[i].size(); j++){
            if(arr2d[i][j] >= 0){
                countPositive = countPositive + 1;
            }else{
                countNegative = countNegative + 1;
            }
        };
    };
    cout << countNegative << " here negative and here positive " << countPositive << endl;
    
    int countEven = 0;
    int countOdd  = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<arr2d[i].size(); j++){
            if(arr2d[i][j] % 2 == 0){
                countEven = countEven + 1;
            }else{
                countOdd = countOdd + 1;
            };
        }
    }
    cout << countOdd << " here is odd count and here is even count " << countEven << endl;
    return 0;
}