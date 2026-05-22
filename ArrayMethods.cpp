#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40,50};
    //             10 20 70 30 40 50
    //             0  1  2  3  4  5
    int size = 5;
    
    int position = 2;
    int value = 70;
    
    for(int i=size; i>position; i--){
        arr[i] = arr[i-1];
    };
    //i=5; i>2; arr[i] = 50; i--
    //i=4; i>2; arr[4] = 40; i--
    //i=3; i>2; arr[3] = 30; i--
    //i=2; i>2; False
    
    arr[position] = value;
    size++;
    
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    };
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//    //             0   1   2   3   4   5
//    //            10  20  40  50  60
//     int size = 6;
    
//     int positoin = 2;
//     for(int i=positoin; i<size-1; i++){
//         arr[i] = arr[i+1];
//     };
//     //i=2; i<5; arr[2] = arr[3]; i++
//     //i=3; i<5; arr[3] = arr[4]; i++
//     //i=4; i<5; arr[4] = arr[5]; i++
//     //i=5; 5<5; False
//     size--;
//     for(int i=0; i<size; i++){
//         cout << arr[i] << endl;
//     }
//     return 0;
// }