#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    // Checking how many numbers are less then the pivot element
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Get the right index for pivot
    int rightPivotIndex = s + count;
    // Placing the pivot at it's right index
    swap(arr[rightPivotIndex], arr[s]);

    // Sorting the left & right part of pivot
    int i = s, j = e;
    while (i < rightPivotIndex && j > rightPivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }
        
        if (i < rightPivotIndex && j > rightPivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
        
    }
    return rightPivotIndex;
}
void quickSort(int* arr, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // Creating partition such that p> = p = <p;
    int p = partition(arr, s, e);

    // Left part sort
    quickSort(arr, s, p - 1);
    // Right part sort
    quickSort(arr, p + 1, e);

}
int main()
{
    int arr[5] = {4,2,7,9,0};
    int n = 5;

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << i[arr] << " ";
    } cout << endl;
    
    return 0;                   
}