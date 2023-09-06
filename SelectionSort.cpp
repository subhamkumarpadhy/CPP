#include <iostream>
using namespace std;
void selectionSort(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int n = 6;
    int arr[n] = {1,85,4,7,9,56};
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << i[arr] << " ";
    }
    
}