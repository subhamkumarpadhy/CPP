// Sum of elements of array
/*#include <iostream>
using namespace std;
int sumarr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[100], n;
    cout << "Enter the size of an array " << endl;
    cin >> n;
    cout << "Enter the elements to array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 1;
    ans = sumarr(arr, n);
    cout << "The sum of all the elements of the array is " << ans << endl;
}*/
// Reversing the array elements
/*#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};
    reverse(arr, 6);
    reverse(brr, 5);
    printarray(arr, 6);
    printarray(brr, 5);
    return 0;
}*/
// Finding the max & min term in an Array
/*#include <iostream>
using namespace std;
int getmax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        //It is a predefined function to get maximun term
        maxi = max(maxi, arr[i]);
        // if (maxi < arr[i])
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}
int getmin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        //It is a predefined function to get minimum term
        mini = min(mini, arr[i]);
        // if (mini > arr[i])
        // {
        //     mini = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int size;
    cout << "Enter thr size of an array ";
    cin >> size;
    int num[100];
    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value in the array is " << getmax(num, size) << endl;
    cout << "Manimun value in the array is " << getmin(num, size) << endl;
    return 0;
}*/
// Swaping alternating indexes of an Array
/*#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {4, 1, 65, 64, 8, 84, 48, 46};
    int odd[7] = {5, 8, 51, 8, 6};
    swapalternate(even, 8);
    printarray(even, 8);
    swapalternate(odd, 5);
    printarray(odd, 5);
}*/
// Sorting 0 1 2
/*#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort012(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high--]);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 0, 2, 1, 0};
    int n = 6;
    sort012(arr, n);
    printarray(arr, n);
    return 0;
}*/
