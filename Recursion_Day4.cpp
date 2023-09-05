#include<iostream>
using namespace std;

// Reversr a String
/*void reverseString(int i, int j, string& str)
{
    if (i > j)
    {
        return;
    }
    swap(str[i],str[j]);
    i++;j--;
    reverseString(i, j, str);
}*/

// Check Palindrome
/*bool pelindrome(int i , int j , string& str)
{
    if (i > j)
    {
        return true;
    }
    
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return pelindrome( i + 1, j - 1, str);
    }
}*/

// Finding a ^ b
/*int power(int a , int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = power(a, b/2);
    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    // if b is odd
    else
    {
        return a * ans * ans;
    }
}*/

// SelectionSort using Recursion
/*void selectionSort(int* arr, int size)
{
    // Base Case
    if (size == 0 || size == 1)
    {
        return;
    }
    // Solving One Case , baki Recursion kar lega
    int min = INT_MAX;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    swap(arr[0],arr[index]);
    selectionSort(arr + 1, size - 1);    
}*/

// BubbleSort with the help of Recursion
/*void bubbleSort(int* arr, int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, size - 1);
}*/

// InsertionSort by Recursion
void insertionSort(int *arr, int n)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    
}
int main(){
    // string name = "madam";

    /*reverseString(0, name.length() - 1 , name);
    cout << "The String after Reverse is " << name;*/

    /*bool ans = pelindrome(0,name.length() - 1 , name);
    if (ans)
    {
        cout << "The String is Palindrome.";
    }
    else
    {
        cout << "The String is not Palindrome.";
    }*/

    /*int a,b;
    cin >> a >> b;
    int ans = power(a,b);
    cout << "Answer is " << ans << endl;*/

    int arr[100] = {5,47,2,4,9};
    int n = 5;
    // selectionSort(arr,n);
    
    // bubbleSort(arr,n);

    InsertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*H.W.
Q. Reverse the string using only one pointer? Hint = n - i - 1;
Q. Find if the string is palindrome or not using only one pointer? 
Q. Using Recursion do BUBBLE,INSERTION,SELECTION SORT?
*/