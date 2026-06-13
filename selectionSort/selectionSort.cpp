// Selection sort
/*
{8, 7, 10, 12, 6, 4};
{4,7,10,12,6,8}
{4,6,10,12,7,8}
{4,6,7,12,10,8}
{4,6,7,8,10,12}
*/
//[8,7,10,12,6]  sort = [6,7,8,10,12]
//[6,7,10,12,8]
//[6,7,8,12,10]
//[6,7,8,10,12]
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// {8, 7, 10, 12, 6, 4};    
vector<int> selectionSort(vector<int> &arr1)
{
    for (int j = 0; j < arr1.size(); j++)
    {
        int min = INT_MAX;
        int minIndex = 0;
        for (int i = j; i < arr1.size(); i++)
        {
            if (arr1[i] < min)
            {
                min = arr1[i];
                minIndex = i;
            }
        }
        int temp = arr1[j];
        arr1[j] = arr1[minIndex];
        arr1[minIndex] = temp;
    };
    return arr1;
};
/*Dry Run
 j=0; 0<6 T; min = 2147483647 ; temp = 8; arr1[0] = 4; arr1[minIndex] = 8 [4, 7, 10, 12, 6, 8];
 j=1; 1<6 T; min = 2147483647; min = 6; minIndex =4; temp = 7; arr1[j] = 6; arr1[minIndex] = 7 [4, 6, 10, 12, 7, 8];
 j=2 2<6 T; min = 2147483647; min = 7; minIndex =4; temp =  [4, 6, 7, 12, 10, 8];
 j=3 3<6 T;  min = 2147483647; min = 8; minIndex = 5; [4, 6, 7, 8, 10, 12]
 j=4 4<6 T; min = 2147483647; min = 10; minIndex = 4; 
 */
int main()
{
    
    vector<int> arr = {8, 7, 10, 12, 6, 4};
    vector<int> result = selectionSort(arr); //  {8, 7, 10, 12, 6, 4};
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
        
    };
        // int min = INT_MAX;
        // int minIndex = 0;
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if (arr[i] < min)
        //     {
        //         min = arr[i];
        //         minIndex = i;
        //     }
        // }
        // cout << min;

        /*Dry Run
         min = 2147483647 minIndex = 0; i=0; 0<6 T;arr[0]=8 < 2147483647 T; min = 8; minIndex = 0; i++ i =1;
         min = 8, minIndex = 0; i=1 1<6 T; arr[1]=7 < 8 T; min = 7; minIndex = 1; i++ i = 2;
         min = 7; minIndex = 1; i=2 2<6 T; arr[2]=10 < 7 F; i++; i=3;
         min = 7; minIndex = 1; i=3 3<6 T; arr[3]=12 < 7 F; i++; i=4;
         min = 7; minIndex = 1; i=4 4<6 T; arr[4]=6 < 7 T; min = 6; minIndex = 4; i++ i=5;
         min = 6; minIndex = 4; i=5 5<6 T; arr[5]=4 < 6 T; min = 4; minINdex = 5; i+ i=6;
         min = 4; minIndex = 5; i=6 6<6 F
         */
        return 0;
}
