#include <iostream>
#include <vector>
using namespace std;

int partionPivot(vector<int> &arr1, int low, int high)
{
    int pivot = arr1[high];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high && arr1[i] < pivot)
        {
            i++;
        }
        while (j >= low && arr1[j] > pivot)
        {
            j--;
        }
        if ( i < j)
        {
            int temp = arr1[j];
            arr1[j] = arr1[i];
            arr1[i] = temp;
        }
    }
    int temp = arr1[high];
    arr1[high] = arr1[j];
    arr1[j] = temp;
    return j;
}

void QuickSort(vector<int> &arr1, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partionPivot(arr1, low, high);
        QuickSort(arr1, low, partitionIndex - 1);
        QuickSort(arr1, partitionIndex + 1, high);
    }
}

int main()
{
    vector<int> unsort = {1, 4, 6, 2, 5, 7, 9, 3};

    QuickSort(unsort, 0, unsort.size() - 1);

    for (int i = 0; i < unsort.size(); i++)
    {
        cout << unsort[i] << " ";
    }

    return 0;
}