#include <iostream>
#include <vector>
using namespace std;
vector <int> mergeTwoSorted(const vector<int> arr1, const vector<int> arr2){
    vector <int> mergeSorted;
    int i=0;
    int j=0;
    while(i<arr1.size() && j <arr2.size()){
        if(arr1[i] < arr2[j]){
            mergeSorted.push_back(arr1[i]);
            i += 1;
        }else{
            mergeSorted.push_back(arr2[j]);
            j += 1;
        }
    }

    while (i<arr1.size())
    {
        mergeSorted.push_back(arr1[i]);
        i += 1;
    }
    while (j < arr2.size())
    {
        mergeSorted.push_back(arr2[j]);
        j += 1;
    }
    
    return mergeSorted;
}


vector <int> mergeSort(vector <int> arr1,int start, int end){
    if(start == end){
        return {arr1[start]};
    };
    int mid = (start + end)/2;
    vector <int> left = mergeSort(arr1,start, mid);
    vector <int> right = mergeSort(arr1,mid+1, end);

    return mergeTwoSorted(left, right);
}

int main(){
    vector <int> unsorted = {10,22,55,22,11,88,44,22}; // {11,22,44,88}
    int start = 0;
    int end = unsorted.size()-1;
    vector <int> result =  mergeSort(unsorted, start, end);
    for(int i=0; i<result.size(); i++){
        cout << " " << result[i];
    };
    return 0;
}