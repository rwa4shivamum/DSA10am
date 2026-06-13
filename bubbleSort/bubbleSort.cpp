// [10,11,5,3,2,1] = [1,2,3,5,10,11] n=6-0
//  10,5,11,3,2,1
//  10,5,3,11,2,1
//  10,5,3,2,11,1
//  10,5,3,2,1,11

//  Phase 2
//  10,5,3,2,1   n=6-1 = 5
//  5,10,3,2,1
//  5,3,10,2,1
//  5,3,2,10,1
//  5,3,2,1,10,11

//  phase 3
//  5,3,2,1 6-2=4
//  3,5,2,1
//  3,2,1,5,10,11

//  3,2,1, 6-3=3
//  2,3,1
//  2,1,3

//  2,1
//  1,2,3,5,10,11
#include <iostream>
#include <vector>
using namespace std;


vector <int> bubbleSort( vector<int>& unsortedArr){
    int n = unsortedArr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(unsortedArr[j] > unsortedArr[j+1]){
                int temp = unsortedArr[j];
                unsortedArr[j] = unsortedArr[j + 1];
                unsortedArr[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<unsortedArr.size(); i++){
        cout << " " << unsortedArr[i];
    }
    return unsortedArr;
}
/*
Dry Run
n=6 i=0;0<6 T;
j=0 0<6-0 T; if(unsort[0]=10 > unsort[1]=11 10>11 F); j=1
j=1 0<6-0 T; if(11 > 5)T swap    {10, 5, 11 , 3, 2, 1}; j++
j=2 2<6   T; if(11 > 3)T swap    {10, 5, 3, 11, 2, 1}; j++
j=3 2<6   T; if(11 > 2)T swap    {10, 5, 3 , 2, 11, 1}; j++
j=4 4<6   T; if(11 > 1)T swap    {10, 5, 11 , 3, 1, 11}; j++
j=5 5<6   T; if(11 > 0);
i++
 */
int main(){
    //                     0  1  2   3  4  5
    vector<int> unsort = {10, 11, 5, 3, 2, 1};

    bubbleSort(unsort);
    return 0;
}