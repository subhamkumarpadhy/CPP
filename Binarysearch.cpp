/*#include<iostream>
using namespace std;
int binarysearch(int arr[] , int size , int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2,4,12,45,62,99};
    int odd[5] = {1,15,22,35,40};
    int evenindex = binarysearch(even , 6 ,4);
    int oddindex = binarysearch(odd , 5 ,22);
    cout << "The index of 4 is " << evenindex << endl;
    cout << "The index of 22 is " << oddindex << endl;
}*/
// First most occurance and Last most occurance and total number of an Array
/*#include<iostream>
using namespace std;
int first(int arr[] , int size , int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key)
        {
            mid++;
            start = mid;
        }
        else
        {
            mid--;
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int last(int arr[] , int size , int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key)
        {
            mid++;
            start = mid;
        }
        else
        {
            mid--;
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[16] = {1,2,2,2,2,2,2,2,2,2,2,2,2,2,21,48};
    int ans = first(even , 16 , 2);
    int store = last(even , 16 , 2);
    int occ = (store - ans) + 1;
    cout << "First occurance of 2 is at index " << ans << endl;
    cout << "Last occurance of 2 is at index " << store << endl;
    cout << "Total number of occurance of 2 is " << occ << endl;
}*/
// Finding pivot element in an array
/*#include<iostream>
using namespace std;
int getpivot(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5] = {3,8,10,17,1};
    cout << "The Index of Pivot is " << getpivot(arr , 5) << endl;
}*/
// Square root of a number using Binary Search
//  #include <iostream>
//  using namespace std;
//  long long int sqrtInteger(int n)
//  {
//      int s = 0;
//      int e = n;
//      long long int mid = s + (e - s) / 2;
//      long long int ans = -1;
//      while (s <= e)
//      {
//          long long int square = mid * mid;
//          if (square == n)
//              return mid;
//          if (square < n)
//          {
//              ans = mid;
//              s = mid + 1;
//          }
//          else
//          {
//              e = mid - 1;
//          }
//          mid = s + (e - s) / 2;
//      }
//      return ans;
//  }
//  double morePrecision(int n, int precision, int tempSol)
//  {
//      double factor = 1;
//      double ans = tempSol;
//      for (int i = 0; i < precision; i++)
//      {
//          factor = factor / 10;
//          for (double j = ans; j * j < n; j = j + factor)
//          {
//              ans = j;
//          }
//      }
//      return ans;
//  }
//  int main()
//  {
//      int n;
//      cout << " Enter the number " << endl;
//      cin >> n;
//      int tempSol = sqrtInteger(n);
//      cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;
//      return 0;
//  }
//  Search in roated sorted array
/*#include<bits/stdc++.h>
using namespace std;
int getpivot(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarysearch(int arr[] , int s ,int e , int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int position(int arr[] , int n , int k)
{
    int pivot = getpivot(arr , n);
    if (k >= arr[pivot] && k <= arr[n-1])
    {
        return binarysearch(arr , pivot , n-1 , k);
    }
    else
    {
        return binarysearch(arr , 0 , pivot-1 , k);
    }
}
int main()
{
    int arr[] = {7,8,10,16,1,2,3,6,9};
    int n = 9;
    cout << "The element is present at the index of " << position(arr , n , 6) << endl;
}*/
// Peak element in an mountain array
/*#include<iostream>
using namespace std;
int index(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while (s < e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    mid = s + (e - s)/2;
    }
    return s;
}
int main()
{
    int arr[] = {0,1,3,5,8,9,5,4,2,1};
    int n= 10;
    cout << "The peak element is present at the index of " << index(arr,10) << endl;
}*/
// Book Allocation Problem on B.S.
/*The maximum number of pages assigned to a student is minimum*/
/*#include<vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}*/
// Painters partition
/*bool isPossible(vector<int> boards, int n, int k, int mid)
{
    int painters = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + boards[i] <= mid)
            sum += boards[i];
        else
        {
            painters++;
            if (painters > k || boards[i] > mid)
                return false;
            sum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int s = 0, e = sum, ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}*/
// Aggressive Cows
/*bool isPossible(vector<int> &stalls, int k, int mid, int n)
{
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int e = stalls[n - 1];
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls, k, mid, n))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}*/