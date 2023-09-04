#include<iostream>
using namespace std;
/*// Check if the given ARRAY is sorted or not
bool isSorted(int arr[] , int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1 , size - 1);
        return remainingPart;
    }
}*/
/*//sum of elements of an given ARRAY
int getSum(int* arr,int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int sum = arr[0] + getSum(arr + 1 , size - 1);
        return sum;
    }
}*/

// Linear Search using Recursion
void print(int arr[],int n)
{
    cout << "The size of the array is " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool getKey(int* arr , int size , int key)
{
    print(arr,size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else 
    {
        bool remainingPart = getKey(arr + 1 , size - 1 , key);
        return remainingPart;
    }

}
int main()
{
    int arr[6] = {1,2,4,5,7,6};
    int n = 6;
    int key = 9;

    /*bool ans = isSorted(arr,n);
    if (ans)
    {
        cout << "The ARRAY is sorted ";
    }
    else
    {
        cout << "Not sorted ";
    }*/

    /*int ans = getSum(arr,n);
    cout << "The sum is " << ans << endl ;
    */

    bool ans = getKey(arr,n,key);
    if (ans)
    {
        cout << "TRUE";
    }
    else
    cout << "FALSE";
}
