#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    // Finding the mid to divide the array into 2 parts according to the algorithm of merge sort
    int mid = s + (e - s) / 2;

    // Creating the lengths of LEFT & RIGHT sub array
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    // Dynamically creating 2 new array to copy the elements from the main array to these arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values of left array to a new array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    
    // copy values of right array to a new array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    // Condition for not getting the arraor of index out of bound error
    while (index1 < len1 && index2 < len2)
    {
        // Merge the arrays
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Checking if any element is there in the 1st array, if there then merge it into the main array
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Checking if element is there in the 2nd array, if there then merge it into the main array
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Delected the dynamically created arrays for freeing the memory space
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sort karna h
    mergeSort(arr, s, mid);

    // right part sort karna h
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*Q. Why the T.C. of MergeSort is nlogn?
--> Coz if we see the algorithm of mergeSort then we can observe that 
    it shows the patterns of a balanced binary tree. So from that we 
    can say the height of the tree is logN & if we observe the number 
    of operations at each level is N. so the time complexity of 
    MergeSort = height of the tree X no. of operations at each level;
    MergeSort = logN X N = N(logN).(It is same for all the cases)
    S.C. = O(N)
    */