#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int k){

    k = k % n;//k=2
    // cout << arr << endl;
    int temp[k]; //[1,2]

    // Store first k elements
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    //i=0; i<2; i++ ; temp[0] = arr[0]; i++
    //i=1; i<2 T; i++; temp[1] = arr[1]; i++
    //i=2; 2<2 F

    // Shift elements left
    for(int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    //modified array = [3,4,5,4,5]
    //i=2; i<5 T; arr[0] = arr[2]; i++
    //i=3; i<5 T; arr[1] = arr[3]; i++
    //i=4; i<5 T; arr[2] = arr[4]; i++
    //i=5; i<5 F;

    //n; n+m ; n^2; n^3; logn; n=5*3; n*logn
    // Put temp elements at end
    for(int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
    //modified array = [3,4,5,1,2]
    //i=0; i<2 T; arr[3] = temp[0]; i++
    //i=1; i<2 T; arr[4] = temp[1]; i++
    //i=2; i<2 F
    // n=5
    // i=0; j=1; z=5 = 7
    // i=0; j=2; z=5 = 12
    // i=0; j=3; z=5 = 12 + 5
    // i=0; j=4; z=5 = 17 + 5 = 22
    // i=0; j=5; z=5 = 22 + 5 = 27 + 27 + 27 + 27 + 27 = 135 n^3
    // i=1

    // i=1; j=1; z=5 = 6+6 = 12
    // i=2; j=5 = 12 + 6 = 18
    // i=3; j=5 = 18 + 6 = 24
    // i=4; j=5 = 24 +6 = 30

    // 5^2 = 25
    // for(let i=0; i<=n; i++){
    //     for(let i=0; i<=n; i++){
    //         for(let z=0; z<n; z++){

    //         }
    //     }
    // }

    n=5
    for(i<5)//5
    for(i<5)//5
    n+n = 10
}

void rightRotate(int arr[], int n, int k)
{
    k = k % n;

    int temp[k];

    // Store last k elements
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }

    // Shift elements right
    for(int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }

    // Put temp elements at front
    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // n=5; 5^5 n^n
    // for(let i=0;i<5; i++){
    //     if(find1){
    //         return; break
    //     }
    // }
    int n = 5;
    int k = 2;

    leftRotate(arr, n, k);//arguments
    rightRotate(arr, n, k);
    
    cout << "After Left Rotation:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}