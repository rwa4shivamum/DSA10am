//[14,9,15,12,6,8,13] = [6,8,9,12,13,14,15]
//[14,9,15,12,6,8,13]
// 9,14,15,12,6,8,13
// 9,14,15,12,6,8,13
// 9,14,12,15
// 9,12,14,15,6,8,13
// 9,12,14,6,15,8,13
// 9,12,6,14
// 9,6,12,14
// 6,9,12,14,15,8,13
// 6,8,9,12,14,15,13
// 6,8,9,12,13,14,15
#include <iostream>
#include <vector>
using namespace std;  

vector <int> insertionSort(vector <int> arr1){
  for(int i=1; i<arr1.size(); i++){
    int j=i;
    while(j>0 && arr1[j] < arr1[j-1] ){
        int temp = arr1[j];
        arr1[j] = arr1[j-1];
        arr1[j-1] = temp;
        j--;
    }
  }
  return arr1;
};

int main(){
    vector<int> arr1 = {14, 9, 15, 12, 6, 8, 13};
    vector<int> result = insertionSort(arr1);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    };
    return 0;
}

/*
i=1;j=1  1>0 T && arr1[j]=9 < arr1[0] = 14{ } {9,14, 15, 12, 6, 8, 13}; j-- j =0
i=2; j=2 2>0 T && arr1[2]=15 < arr1[1] = 14 F;
i=3;j=3 3>0 T && arr1[3]=12 < 15 T; {9,14, 12, 15, 6, 8, 13}; j--;
i=3;j=2; 2>0 T && arr1[2]=12 < 14 T; {9,12, 14, 15, 6, 8, 13}; j--
i=3;j=1; 1>0 T && arr1[1]=12 < 9 F; i++
i=4;j=4; 4>0 T && arr1[4]=6 < 15 T; {9,12, 14, 6,15, 8, 13};j--
i=4;j=3; 3>0 T && arr1[3]=6 < 14 T; {9,12, 6, 14 ,15, 8, 13}; j--
i=4;j=2; 2>0 T && arr1[2]=6 < 12 T; {9,6, 12, 14 ,15, 8, 13}; j--
i=4;j=1; 1>0 T && arr1[1]=6 < 9 T;  {6, 9, 12, 14 ,15, 8, 13}; j--
i++ 
i=5;j=5; 
*/