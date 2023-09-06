#include <iostream>
using namespace std;
void bubbleSort(int* arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

int main()
{
    int arr[8] = {1,85,4,7,966,2,4,67};
    int n = 8;
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << i[arr] << " ";
    }
    
}