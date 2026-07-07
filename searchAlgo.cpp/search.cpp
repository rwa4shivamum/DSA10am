#include <iostream>
#include <vector>
#include <c.limits>
using namespace std;

bool Linearsearch(vector <int> arr1, int findEle){
    for(int i=0; i<arr1.size(); i++){
        if(arr1[i] == findEle){
            return true;
        }
    }
    return false;
}

bool binarySearch(vector <int> arr1, int findEle){
    int low = 0;
    int high = arr1.size()-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr1[mid] == findEle){
            return true;
        }else if(arr1[mid] < findEle){
            low = mid+1;
        }else{
            high = mid-1;
        }
    } 
    return false;
}

int main(){

    // vector <int> arr1 = {10,20,30,40,50,60,70};
    // cout << binarySearch(arr1,700) << endl;

    // int i=10;
    // while(i>=1){
    //     cout << i << endl;
    //     i -= 1;
    // }

    // int n=5;
    // int fact = 0
    // for(int i=1; i<=n; i++){
    //     fact += (n)
    // }
    // int num = INT_MAX
    return 0;
}
/**
  {10,20,30,40,50,60,70}; find 50
   low = 0; high = 7-1
   mid = low + high / 2 = 3
   if(arr[mid] === findElement){
     return true
   }else if(arr[mid] < findELment){
    low= mid+1
   }else{
    high = mid - 1
   }

   low = 4 ; high = 6
   nid = 4+6/2 = 5
   low = 4 high = 4
   mid = 4

   n=7 3,4
 */