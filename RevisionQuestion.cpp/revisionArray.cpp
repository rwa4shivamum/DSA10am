#include <iostream>
#include <vector>
using namespace std;

// bool isSorted(vector <int> &arr1){
//     bool isTrue = true;
//     for(int i=0; i<arr1.size()-1; i++){
//         if(arr1[i] > arr1[i+1]){
//             isTrue = false;
//             return isTrue;
//         }
//     }
//     return isTrue;
// } 


void removeDuplicates(vector <int> arr1){
    int i=0; 
    int j=1;
    while(j<arr1.size()){
        if(arr1[i] != arr1[j]){
            int temp = arr1[j]; 
            arr1[j] = arr1[i + 1];
            arr1[i + 1] = temp;
            i++;
            j++;
        }else{
            j++;
        }
    }
    for ( int i=0; i<arr1.size(); i++){
        cout << arr1[i] << endl;
    }
}
/*
 i=0 arr1[i]=1 , arr1[i+1] = 2 1>2 F
 i=1 arr1[1]=2, arr1[1+1]=3 2 > 3 F
 i=2 arr1[2]=3, arr1[2+1]=4 3 > 4 F
 i=3 arr1[3]=4 arr1[3+1]=5 4 > 5 F
 */

int main(){
    vector <int> arr1= {1,2,2,3,3,4,4,4,5};
    removeDuplicates(arr1);
    return 0;
}

/*
{0,1,3,2,5,0,5,2}
{1,3,2,5,5,2,0,0}
    i   j
 {1,1,2,2,2,3,4,5}
        i       j
 {1,2,3,4,5,1,2,4}
 if(arr[i] !== arr[j]){
   temp = arr[j]
   arr[j] = arr[i+1]
   arr[i+1] = temp
   i++
   j++
 }  i   j
   {1,1,2,2,2,3,4,5}
      i       j
   {1,2,1,2,2,3,4,5}
          i       j
   {1,2,3,4,5,1,2,2}

   int i=0;
   int j=1;
   while( j< n){
    if(arr[i]!== arr[j]){
      temp = arr[j]
      arr[j] = arr[i+1];
      arr[i+1] = temp;
      i++
      j++
    }else {
      j++
    }
   }

   {1,2,3,4}
   {9,8,7,6}
 */