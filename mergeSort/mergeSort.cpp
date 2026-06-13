#include <iostream>
#include <vector>

using namespace std;
vector<int> mergeTwoSortedArr(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> mergeSortedArr;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            mergeSortedArr.push_back(arr1[i]);
            i += 1;
        }
        else
        {
            mergeSortedArr.push_back(arr2[j]);
            j += 1;
        }
    };
    while (j < arr2.size())
    {
        mergeSortedArr.push_back(arr2[j]);
        j += 1;
    }

    while (i < arr1.size())
    {
        mergeSortedArr.push_back(arr1[i]);
        i += 1;
    }

    for (int i = 0; i < mergeSortedArr.size(); i++)
    {
        cout << "," << mergeSortedArr[i];
    };
    return mergeSortedArr;
};


vector<int> mergeSort(const vector<int> &arr1, int start, int end){
    if(start == end){
      return {arr1[start]};
    }
    int mid = (start + end) / 2;

    vector <int> left =  mergeSort(arr1, start, mid);
    vector <int> right = mergeSort(arr1,mid+1, end);

    return mergeTwoSortedArr(left,right);
}

int main()
{                                                 
     vector<int> unsorted = {8, 6, 4, 2, 1, 4, 5, 69, 5, 3, 312, 32};
     int start = 0;
     int end = unsorted.size()-1;
     mergeSort(unsorted, start, end);

    return 0;
}
/*
{8, 6, 4, 2, 1, 4, 5, 69, 5, 3, 312, 32}
{1,2,4,4,5,6,8} {69, 5, 3, 312, 32}
 {69, 5, 3, 312, 32}
{69,5,3}{312,32}
{69,5}{3}
{69}{5}

n=6
logn = 3
(n logn) = 6*3=18
n^2 = 6*6 = 36 
*/   