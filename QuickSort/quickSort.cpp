/*0  1  2  3  4  5  6  7
 {4, 6, 2, 5, 7, 9, 1, 3}; // 1 2 3 4 6 5 7 9
pivot = 4; low = 0; high = 7
i = low+1;
j = high;
while(i<j){
i=1; j=7
pivot < arr[i]; i = 1
pivot > arr[j]; j = 7
swap(arr[i],arr[j])
  0  1  2  3  4  5  6  7
 {4, 3, 2, 5, 7, 9, 1, 6};
  i=2;
  pivot < arr[i] F; i++
  i=3
  pivot < arr[i] T; i=3
  j=7 arr[7] = 6, pivot = 4;
  pivot > arr[j]; F ; j--;
  j=6 arr[6] = 1; pivot = 4;
  pivot > arr[j] T;
  swap(arr[i], arr[j])
  0  1  2  3  4  5  6  7
 {4, 3, 2, 1, 7, 9, 5, 6}; i = 3; j = 6;
 i++ i=4
 pivot < arr[i] T; i=4;
 j--; j=5;
 pivot > arr[j] F; j--
 j=4
 pivot > arr[j] F; j--
 j=3
 }
 swap(arr[j], pivot)
  0  1  2  3  4  5  6  7
 {1, 3, 2, 4, 7, 9, 5, 6};

 return j

{1, 4, 6, 2, 5, 7, 9, 3 }
*/

#include <iostream>
#include <vector>
using namespace std;
int partitionIndexFunc(vector <int> &arr1,int low,int high){
    int pivot = arr1[low];
    int i=low+1;
    int j=high;
    while (i<j)
    {
        while (i <= high-1 && pivot > arr1[i])
        {
            i++;
        }
       while (j >= low+1 && pivot < arr1[j])
       {
        j--;
       };
       if(i<j){
        int temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
       }
    }

    int temp = arr1[low];
    arr1[low] = arr1[j];
    arr1[j] = temp;

    return j;
};


void QuickSort(vector<int> &arr1, int low, int high)
{
    if(low < high){
        int partitionIndex = partitionIndexFunc(arr1, low, high);
        QuickSort(arr1,low, partitionIndex-1);
        QuickSort(arr1,partitionIndex+1,high);
    }
};

int main(){
    vector<int> unsort = {4, 6, 2, 5, 7, 9, 1, 3};
    QuickSort(unsort, 0, unsort.size()-1);
    for(int i=0; i<unsort.size(); i++){
        cout << unsort[i] << " ";
    }
    return 0;
}